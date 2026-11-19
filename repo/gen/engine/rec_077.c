#include "recomp.h"
#include "rec_mod.h"

void f_867a50(void) {
  LOAD_REGS();
L_867a50: /* 867a50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 867a51: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 867a55: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 867a59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 867a5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867a5b: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 867a5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867a60: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 867a63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 867a64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867a65: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x867a6bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 867a6b: mov edx, eax */
  edx = eax;
/* 867a6d: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 867a71: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 867a75: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 867a79: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 867a7d: xor eax, eax */
  eax = 0;
/* 867a7f: mov ebx, ecx */
  ebx = ecx;
/* 867a81: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 867a84: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 867a87: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 867a89: mov ecx, ebx */
  ecx = ebx;
/* 867a8b: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 867a8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867a8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867a8f: mov eax, edx */
  eax = edx;
/* 867a91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 867a92: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 867a93: ret  */
  esp += 4; SPILL(); return;
}

void f_867ac0(void) {
  LOAD_REGS();
L_867ac0: /* 867ac0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 867ac1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 867ac5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 867ac9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 867aca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867acb: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 867acf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867ad0: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 867ad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 867ad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867ad5: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x867adbu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 867adb: mov edx, eax */
  edx = eax;
/* 867add: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 867ae1: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 867ae5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 867ae9: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 867aed: xor eax, eax */
  eax = 0;
/* 867aef: mov ebx, ecx */
  ebx = ecx;
/* 867af1: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 867af4: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 867af7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 867af9: mov ecx, ebx */
  ecx = ebx;
/* 867afb: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 867afd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867afe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867aff: mov eax, edx */
  eax = edx;
/* 867b01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 867b02: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 867b03: ret  */
  esp += 4; SPILL(); return;
}

void f_867b30(void) {
  LOAD_REGS();
L_867b30: /* 867b30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 867b31: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 867b35: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 867b39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 867b3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867b3b: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 867b3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867b40: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 867b43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 867b44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867b45: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x867b4bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 867b4b: mov edx, eax */
  edx = eax;
/* 867b4d: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 867b51: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 867b55: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 867b59: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 867b5d: xor eax, eax */
  eax = 0;
/* 867b5f: mov ebx, ecx */
  ebx = ecx;
/* 867b61: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 867b64: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 867b67: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 867b69: mov ecx, ebx */
  ecx = ebx;
/* 867b6b: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 867b6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867b6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867b6f: mov eax, edx */
  eax = edx;
/* 867b71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 867b72: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 867b73: ret  */
  esp += 4; SPILL(); return;
}

void f_867ba0(void) {
  LOAD_REGS();
L_867ba0: /* 867ba0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 867ba1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 867ba5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 867ba9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 867baa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867bab: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 867baf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867bb0: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 867bb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 867bb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867bb5: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x867bbbu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 867bbb: mov edx, eax */
  edx = eax;
/* 867bbd: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 867bc1: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 867bc5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 867bc9: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 867bcd: xor eax, eax */
  eax = 0;
/* 867bcf: mov ebx, ecx */
  ebx = ecx;
/* 867bd1: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 867bd4: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 867bd7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 867bd9: mov ecx, ebx */
  ecx = ebx;
/* 867bdb: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 867bdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867bde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867bdf: mov eax, edx */
  eax = edx;
/* 867be1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 867be2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 867be3: ret  */
  esp += 4; SPILL(); return;
}

void f_867c10(void) {
  LOAD_REGS();
L_867c10: /* 867c10: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 867c14: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 867c18: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 867c1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867c1b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 867c1d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 867c1f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 867c21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867c22: ret  */
  esp += 4; SPILL(); return;
}

void f_867c40(void) {
  LOAD_REGS();
L_867c40: /* 867c40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 867c44: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 867c48: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 867c4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867c4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867c4d: mov ecx, 8 */
  ecx = 0x8u;
/* 867c52: mov esi, eax */
  esi = eax;
/* 867c54: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 867c58: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 867c5a: mov ecx, 8 */
  ecx = 0x8u;
/* 867c5f: mov esi, edx */
  esi = edx;
/* 867c61: mov edi, eax */
  edi = eax;
/* 867c63: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 867c65: mov ecx, 8 */
  ecx = 0x8u;
/* 867c6a: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 867c6e: mov edi, edx */
  edi = edx;
/* 867c70: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 867c72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867c73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867c74: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 867c77: ret  */
  esp += 4; SPILL(); return;
}

void f_867c90(void) {
  LOAD_REGS();
L_867c90: /* 867c90: mov dword ptr [ecx], 0xa18180 */
  W32((uint32_t)(ecx), 0xa18180u);
/* 867c96: ret  */
  esp += 4; SPILL(); return;
}

void f_867cb0(void) {
  LOAD_REGS();
L_867cb0: /* 867cb0: test byte ptr [esp + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 867cb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867cb6: mov esi, ecx */
  esi = ecx;
/* 867cb8: mov dword ptr [esi], 0xa18180 */
  W32((uint32_t)(esi), 0xa18180u);
/* 867cbe: je 0x867ccd */
  if (zf) goto L_867ccd;
L_867cc0: /* 867cc0: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 867cc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 867cc7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 867cc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867cca: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x867ccdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_867ccd: /* 867ccd: mov eax, esi */
  eax = esi;
/* 867ccf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867cd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_867cf0(void) {
  LOAD_REGS();
L_867cf0: /* 867cf0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 867cf4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 867cf8: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 867cfa: jb 0x867d06 */
  if (cf) goto L_867d06;
L_867cfc: /* 867cfc: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 867d00: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 867d02: jae 0x867d06 */
  if (!cf) goto L_867d06;
L_867d04: /* 867d04: mov eax, ecx */
  eax = ecx;
L_867d06: /* 867d06: ret  */
  esp += 4; SPILL(); return;
}

void f_867d20(void) {
  LOAD_REGS();
L_867d20: /* 867d20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 867d24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867d25: mov esi, ecx */
  esi = ecx;
/* 867d27: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 867d2b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 867d2e: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 867d31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867d32: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 867d34: xor edi, edi */
  edi = 0;
/* 867d36: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 867d39: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 867d3c: mov ecx, dword ptr [ecx + 0xd8] */
  ecx = R32((uint32_t)(ecx + 0xd8u));
/* 867d42: mov eax, dword ptr [ecx + eax + 0x1c] */
  eax = R32((uint32_t)(ecx + eax + 0x1cu));
/* 867d46: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 867d48: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 867d4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 867d50: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 867d55: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x867d5bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 867d5b: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 867d5e: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 867d61: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 867d64: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867d65: mov eax, esi */
  eax = esi;
/* 867d67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867d68: ret 8 */
  esp += 12; SPILL(); return;
}

void f_867d90(void) {
  LOAD_REGS();
L_867d90: /* 867d90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 867d94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867d95: mov esi, ecx */
  esi = ecx;
/* 867d97: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 867d9b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 867d9e: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 867da1: xor edx, edx */
  edx = 0;
/* 867da3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 867da5: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 867da8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 867dab: mov ecx, dword ptr [ecx + 0xd8] */
  ecx = R32((uint32_t)(ecx + 0xd8u));
/* 867db1: mov eax, dword ptr [ecx + eax + 0x1c] */
  eax = R32((uint32_t)(ecx + eax + 0x1cu));
/* 867db5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 867db7: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 867dbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 867dbf: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 867dc4: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x867dcau); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 867dca: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 867dcd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 867dd1: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 867dd4: mov eax, esi */
  eax = esi;
/* 867dd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867dd7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_867e00(void) {
  LOAD_REGS();
L_867e00: /* 867e00: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 867e03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867e04: mov esi, eax */
  esi = eax;
/* 867e06: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 867e08: fld dword ptr [eax + 0x2b8] */
  { double v = F32((uint32_t)(eax + 0x2b8u)); FPUSH(v); }
/* 867e0e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 867e14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 867e16: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 867e19: jnp 0x867e81 */
  if (!pf) goto L_867e81;
L_867e1b: /* 867e1b: cmp dword ptr [ecx + 0x154], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x154u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 867e22: je 0x867e81 */
  if (zf) goto L_867e81;
L_867e24: /* 867e24: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 867e27: fld dword ptr [ecx + 0x348] */
  { double v = F32((uint32_t)(ecx + 0x348u)); FPUSH(v); }
/* 867e2d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 867e30: fmul qword ptr [0xa167b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa167b8u)));
/* 867e36: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 867e39: call dword ptr [0xcfab08] */
  esp -= 4; W32(esp, 0x867e3fu); SPILL(); f_4e2a3b(); if (g_unwind) return; /* Core!?appTan@@YANN@Z */ RELOAD();
/* 867e3f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 867e42: fstp qword ptr [esp + 4] */
  WF64((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 867e46: mov eax, esi */
  eax = esi;
/* 867e48: call 0x867550 */
  esp -= 4; W32(esp, 0x867e4du); SPILL(); f_867550(); if (g_unwind) return; RELOAD();
/* 867e4d: fmul qword ptr [esp + 4] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x4u)));
/* 867e51: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 867e53: fmul qword ptr [esp + 4] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x4u)));
/* 867e57: fld dword ptr [esi + 0x2b8] */
  { double v = F32((uint32_t)(esi + 0x2b8u)); FPUSH(v); }
/* 867e5d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 867e63: fld dword ptr [esi + 0x2b8] */
  { double v = F32((uint32_t)(esi + 0x2b8u)); FPUSH(v); }
/* 867e69: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 867e6b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 867e6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 867e6f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 867e72: jne 0x867e8b */
  if (!zf) goto L_867e8b;
L_867e74: /* 867e74: fcomp st(2) */
  fpu_com(ST0, STI(2));
  FPOP();
/* 867e76: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 867e78: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 867e7a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 867e7d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 867e7f: jne 0x867e9a */
  if (!zf) goto L_867e9a;
L_867e81: /* 867e81: mov eax, 1 */
  eax = 0x1u;
/* 867e86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867e87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 867e8a: ret  */
  esp += 4; SPILL(); return;
L_867e8b: /* 867e8b: fchs  */
  ST0 = -ST0;
/* 867e8d: fcomp st(2) */
  fpu_com(ST0, STI(2));
  FPOP();
/* 867e8f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 867e91: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 867e93: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 867e96: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 867e98: jnp 0x867e81 */
  if (!pf) goto L_867e81;
L_867e9a: /* 867e9a: xor eax, eax */
  eax = 0;
/* 867e9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867e9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 867ea0: ret  */
  esp += 4; SPILL(); return;
}

void f_867ee0(void) {
  LOAD_REGS();
L_867ee0: /* 867ee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867ee1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 867ee5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867ee6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 867eea: lea eax, [esi + edi] */
  eax = (uint32_t)(esi + edi);
/* 867eed: lea ecx, [eax*4 + 0x2c] */
  ecx = (uint32_t)(eax*4 + 0x2cu);
/* 867ef4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 867ef6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 867ef7: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 867efc: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x867f02u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 867f02: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 867f05: lea edx, [ecx + esi*4] */
  edx = (uint32_t)(ecx + esi*4);
/* 867f08: mov dword ptr [eax + 0x28], edi */
  W32((uint32_t)(eax + 0x28u), edi);
/* 867f0b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867f0c: mov dword ptr [eax + 0x24], esi */
  W32((uint32_t)(eax + 0x24u), esi);
/* 867f0f: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 867f12: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 867f15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867f16: ret  */
  esp += 4; SPILL(); return;
}

void f_867f30(void) {
  LOAD_REGS();
L_867f30: /* 867f30: mov eax, ecx */
  eax = ecx;
/* 867f32: xor ecx, ecx */
  ecx = 0;
/* 867f34: mov dword ptr [eax], 0xa181a8 */
  W32((uint32_t)(eax), 0xa181a8u);
/* 867f3a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 867f3d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 867f40: ret  */
  esp += 4; SPILL(); return;
}

void f_867f60(void) {
  LOAD_REGS();
L_867f60: /* 867f60: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 867f63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 867f64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 867f65: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 867f69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 867f6a: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 867f6e: mov edi, ecx */
  edi = ecx;
/* 867f70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 867f71: mov ecx, esi */
  ecx = esi;
/* 867f73: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x867f79u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 867f79: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 867f7c: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 867f80: xor ebx, ebx */
  ebx = 0;
/* 867f82: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 867f86: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 867f89: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 867f8d: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 867f91: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 867f94: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 867f97: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 867f99: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 867f9d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 867fa1: je 0x867fbf */
  if (zf) goto L_867fbf;
L_867fa3: /* 867fa3: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 867fa7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 867fa8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 867faa: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 867fae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 867faf: call 0x6c1e42 */
  esp -= 4; W32(esp, 0x867fb4u); SPILL(); f_6c1e42(); if (g_unwind) return; RELOAD();
/* 867fb4: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 867fb6: jne 0x867fca */
  if (!zf) goto L_867fca;
L_867fb8: /* 867fb8: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 867fbb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 867fbd: jne 0x867fa3 */
  if (!zf) goto L_867fa3;
L_867fbf: /* 867fbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867fc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867fc1: mov eax, ebx */
  eax = ebx;
/* 867fc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 867fc4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 867fc7: ret 4 */
  esp += 8; SPILL(); return;
L_867fca: /* 867fca: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 867fcd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 867fcf: mov ebx, 1 */
  ebx = 0x1u;
/* 867fd4: je 0x867fbf */
  if (zf) goto L_867fbf;
L_867fd6: /* 867fd6: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 867fda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 867fdb: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 867fdf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 867fe0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 867fe2: call 0x6c1e42 */
  esp -= 4; W32(esp, 0x867fe7u); SPILL(); f_6c1e42(); if (g_unwind) return; RELOAD();
/* 867fe7: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 867fe9: je 0x867ffd */
  if (zf) goto L_867ffd;
L_867feb: /* 867feb: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 867fee: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 867ff0: jne 0x867fd6 */
  if (!zf) goto L_867fd6;
L_867ff2: /* 867ff2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867ff3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867ff4: mov eax, ebx */
  eax = ebx;
/* 867ff6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 867ff7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 867ffa: ret 4 */
  esp += 8; SPILL(); return;
L_867ffd: /* 867ffd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 867ffe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 867fff: xor eax, eax */
  eax = 0;
/* 868001: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 868002: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 868005: ret 4 */
  esp += 8; SPILL(); return;
}

void f_868040(void) {
  LOAD_REGS();
L_868040: /* 868040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 868041: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 868042: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 868043: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 868044: mov edi, ecx */
  edi = ecx;
/* 868046: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 868049: xor ebp, ebp */
  ebp = 0;
/* 86804b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86804d: je 0x868066 */
  if (zf) goto L_868066;
L_86804f: /* 86804f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_868053: /* 868053: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 868055: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 868056: call 0x6c2824 */
  esp -= 4; W32(esp, 0x86805bu); SPILL(); f_6c2824(); if (g_unwind) return; RELOAD();
/* 86805b: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86805d: jne 0x86806f */
  if (!zf) goto L_86806f;
L_86805f: /* 86805f: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 868062: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 868064: jne 0x868053 */
  if (!zf) goto L_868053;
L_868066: /* 868066: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 868067: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 868068: mov eax, ebp */
  eax = ebp;
/* 86806a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86806b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86806c: ret 4 */
  esp += 8; SPILL(); return;
L_86806f: /* 86806f: mov esi, dword ptr [edi + 8] */
  esi = R32((uint32_t)(edi + 0x8u));
/* 868072: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 868074: mov ebp, 1 */
  ebp = 0x1u;
/* 868079: je 0x868066 */
  if (zf) goto L_868066;
L_86807b: /* 86807b: jmp 0x868080 */
  goto L_868080;
L_868080: /* 868080: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 868082: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 868083: call 0x6c2824 */
  esp -= 4; W32(esp, 0x868088u); SPILL(); f_6c2824(); if (g_unwind) return; RELOAD();
/* 868088: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86808a: je 0x86809c */
  if (zf) goto L_86809c;
L_86808c: /* 86808c: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86808f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 868091: jne 0x868080 */
  if (!zf) goto L_868080;
L_868093: /* 868093: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 868094: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 868095: mov eax, ebp */
  eax = ebp;
/* 868097: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 868098: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 868099: ret 4 */
  esp += 8; SPILL(); return;
L_86809c: /* 86809c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86809d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86809e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86809f: xor eax, eax */
  eax = 0;
/* 8680a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8680a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_86807d(void) {
  LOAD_REGS();
L_86807d: /* 86807d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_868080: /* 868080: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 868082: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 868083: call 0x6c2824 */
  esp -= 4; W32(esp, 0x868088u); SPILL(); f_6c2824(); if (g_unwind) return; RELOAD();
/* 868088: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86808a: je 0x86809c */
  if (zf) goto L_86809c;
L_86808c: /* 86808c: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 86808f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 868091: jne 0x868080 */
  if (!zf) goto L_868080;
L_868093: /* 868093: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 868094: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 868095: mov eax, ebp */
  eax = ebp;
/* 868097: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 868098: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 868099: ret 4 */
  esp += 8; SPILL(); return;
L_86809c: /* 86809c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86809d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86809e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86809f: xor eax, eax */
  eax = 0;
/* 8680a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8680a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8680d0(void) {
  LOAD_REGS();
L_8680d0: /* 8680d0: mov dword ptr [ecx], 0xa18180 */
  W32((uint32_t)(ecx), 0xa18180u);
/* 8680d6: ret  */
  esp += 4; SPILL(); return;
}

void f_8680f0(void) {
  LOAD_REGS();
L_8680f0: /* 8680f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8680f1: mov esi, ecx */
  esi = ecx;
/* 8680f3: call 0x6c45c5 */
  esp -= 4; W32(esp, 0x8680f8u); SPILL(); f_6c45c5(); if (g_unwind) return; RELOAD();
/* 8680f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8680fd: je 0x86810c */
  if (zf) goto L_86810c;
L_8680ff: /* 8680ff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 868104: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 868106: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 868108: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 868109: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x86810cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86810c: /* 86810c: mov eax, esi */
  eax = esi;
/* 86810e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86810f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_868130(void) {
  LOAD_REGS();
L_868130: /* 868130: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 868133: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 86813a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86813c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86813d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 86813e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86813f: mov esi, dword ptr [ecx + 0x2b4] */
  esi = R32((uint32_t)(ecx + 0x2b4u));
/* 868145: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 868146: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 868148: push 0x204 */
  { uint32_t v = 0x204u; esp -= 4; W32(esp, v); }
/* 86814d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 868152: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 868156: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86815cu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86815c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86815e: je 0x86816b */
  if (zf) goto L_86816b;
L_868160: /* 868160: mov ecx, eax */
  ecx = eax;
/* 868162: call 0x6cc784 */
  esp -= 4; W32(esp, 0x868167u); SPILL(); f_6cc784(); if (g_unwind) return; RELOAD();
/* 868167: mov ebx, eax */
  ebx = eax;
/* 868169: jmp 0x86816d */
  goto L_86816d;
L_86816b: /* 86816b: xor ebx, ebx */
  ebx = 0;
L_86816d: /* 86816d: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 868170: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 868172: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 868179: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86817a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86817f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x868185u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 868185: mov edi, eax */
  edi = eax;
/* 868187: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 86818a: xor ebp, ebp */
  ebp = 0;
/* 86818c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 86818e: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 868192: jle 0x868248 */
  if ((zf || sf != of)) goto L_868248;
L_868198: /* 868198: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 86819c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8681a0: /* 8681a0: cmp dword ptr [ebx + 0x200], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x200u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8681a7: jge 0x868248 */
  if ((sf == of)) goto L_868248;
L_8681ad: /* 8681ad: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 8681b4: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8681b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8681b8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8681bc: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 8681c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8681c1: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 8681c4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8681c6: call dword ptr [0xcfab38] */
  esp -= 4; W32(esp, 0x8681ccu); SPILL(); f_4e349f(); if (g_unwind) return; /* Core!?TransformBy@FPlane@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 8681cc: fld dword ptr [esp + 0x94] */
  { double v = F32((uint32_t)(esp + 0x94u)); FPUSH(v); }
/* 8681d3: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8681d7: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 8681de: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 8681e2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8681e4: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 8681eb: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 8681ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8681f1: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 8681f5: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8681fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8681fd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 868200: jne 0x86822e */
  if (!zf) goto L_86822e;
L_868202: /* 868202: mov edx, dword ptr [ebx + 0x200] */
  edx = R32((uint32_t)(ebx + 0x200u));
/* 868208: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 86820c: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 86820f: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 868211: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 868213: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 868217: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 86821a: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 86821e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 868221: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 868225: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 868228: inc dword ptr [ebx + 0x200] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x200u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x200u), r);
  }
L_86822e: /* 86822e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 868232: fstp dword ptr [edi + ebp*4] */
  WF32((uint32_t)(edi + ebp*4), ST0); FPOP();
/* 868235: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 868238: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 868239: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86823c: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86823e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 868242: jl 0x8681a0 */
  if ((sf != of)) goto L_8681a0;
L_868248: /* 868248: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 86824b: xor eax, eax */
  eax = 0;
/* 86824d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86824f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 868253: jle 0x868546 */
  if ((zf || sf != of)) goto L_868546;
L_868259: /* 868259: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 86825d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_868260: /* 868260: cmp dword ptr [ebx + 0x200], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x200u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868267: jge 0x868546 */
  if ((sf == of)) goto L_868546;
L_86826d: /* 86826d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 868271: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 868274: mov edx, dword ptr [ecx + eax + 4] */
  edx = R32((uint32_t)(ecx + eax + 0x4u));
/* 868278: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86827a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86827c: fld dword ptr [edi + eax*4] */
  { double v = F32((uint32_t)(edi + eax*4)); FPUSH(v); }
/* 86827f: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 868282: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 868284: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86828a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86828c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86828f: jp 0x868527 */
  if (pf) goto L_868527;
L_868295: /* 868295: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 868297: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86829d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86829f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8682a2: jne 0x8682ab */
  if (!zf) goto L_8682ab;
L_8682a4: /* 8682a4: mov ebp, 1 */
  ebp = 0x1u;
/* 8682a9: jmp 0x8682ad */
  goto L_8682ad;
L_8682ab: /* 8682ab: xor ebp, ebp */
  ebp = 0;
L_8682ad: /* 8682ad: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 8682b0: lea eax, [ebp*4] */
  eax = (uint32_t)(ebp*4);
/* 8682b7: mov edx, ecx */
  edx = ecx;
/* 8682b9: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8682bb: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 8682be: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8682c1: mov edx, dword ptr [edx + esi + 0x10] */
  edx = R32((uint32_t)(edx + esi + 0x10u));
/* 8682c5: mov eax, 3 */
  eax = 0x3u;
/* 8682ca: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8682cc: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 8682cf: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8682d2: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8682d5: mov edx, dword ptr [esp + 0x98] */
  edx = R32((uint32_t)(esp + 0x98u));
/* 8682dc: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8682df: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8682e2: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8682e6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8682e8: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8682ec: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8682ef: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 8682f3: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8682f7: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 8682fb: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* 868303: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 868307: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 86830b: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 86830f: lea edi, [esp + 0x48] */
  edi = (uint32_t)(esp + 0x48u);
/* 868313: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 868315: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 868317: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 868319: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86831c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86831e: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 868321: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 868323: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 868326: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 868329: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86832c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86832f: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 868332: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 868335: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 868338: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86833b: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86833e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 868340: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 868342: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 868344: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 868346: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 868348: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86834b: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86834e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 868351: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 868354: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 868357: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86835a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86835d: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 868360: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 868362: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 868364: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 868366: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 868368: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86836a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86836d: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 868370: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 868373: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 868376: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 868379: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86837c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86837f: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 868382: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 868384: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 868386: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 868388: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86838a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86838c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86838e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 868390: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 868392: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 868395: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 868398: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86839b: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 86839f: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8683a3: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8683a7: mov eax, dword ptr [ecx + ebp*4] */
  eax = R32((uint32_t)(ecx + ebp*4));
/* 8683aa: mov ecx, dword ptr [ecx + ebp*4 + 8] */
  ecx = R32((uint32_t)(ecx + ebp*4 + 0x8u));
/* 8683ae: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8683b1: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8683b5: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 8683b9: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 8683bd: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8683c1: mov edx, dword ptr [edx + 0x54] */
  edx = R32((uint32_t)(edx + 0x54u));
/* 8683c4: mov edx, dword ptr [eax + edx + 0x10] */
  edx = R32((uint32_t)(eax + edx + 0x10u));
/* 8683c8: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8683cb: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8683ce: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 8683d5: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8683d8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8683db: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 8683df: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8683e1: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 8683e5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8683e8: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 8683ec: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8683f0: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 8683f4: mov dword ptr [esp + 0x64], 0x3f800000 */
  W32((uint32_t)(esp + 0x64u), 0x3f800000u);
/* 8683fc: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 868400: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 868404: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 868408: lea edi, [esp + 0x68] */
  edi = (uint32_t)(esp + 0x68u);
/* 86840c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86840e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 868410: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 868412: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 868415: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 868417: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86841a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86841c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86841f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 868422: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 868425: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 868428: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86842b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86842e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 868431: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 868434: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 868437: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 868439: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86843b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86843d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86843f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 868441: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 868444: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 868447: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86844a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86844d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 868450: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 868453: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 868456: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 868459: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86845b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86845d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86845f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 868461: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 868463: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 868466: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 868469: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86846c: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86846f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 868472: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 868475: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 868478: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86847b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86847d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86847f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 868481: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 868483: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 868485: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 868487: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 868489: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86848b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86848e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 868491: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 868494: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 868498: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 86849c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86849f: mov eax, esp */
  eax = esp;
/* 8684a1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8684a3: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 8684a7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8684aa: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8684ad: mov eax, dword ptr [esp + 0x74] */
  eax = R32((uint32_t)(esp + 0x74u));
/* 8684b1: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 8684b5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8684b8: mov edx, esp */
  edx = esp;
/* 8684ba: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8684bc: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 8684c3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8684c6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8684c9: mov edx, dword ptr [esp + 0xa4] */
  edx = R32((uint32_t)(esp + 0xa4u));
/* 8684d0: mov eax, dword ptr [esp + 0xa8] */
  eax = R32((uint32_t)(esp + 0xa8u));
/* 8684d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8684da: mov ecx, esp */
  ecx = esp;
/* 8684dc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8684de: mov edx, dword ptr [esp + 0xb8] */
  edx = R32((uint32_t)(esp + 0xb8u));
/* 8684e5: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8684e8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8684eb: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 8684f2: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8684f8u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8684f8: mov ecx, dword ptr [ebx + 0x200] */
  ecx = R32((uint32_t)(ebx + 0x200u));
/* 8684fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 868500: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 868504: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 868508: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 86850b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86850d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86850f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 868512: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 868515: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 868518: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 86851b: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 86851e: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 868521: inc dword ptr [ebx + 0x200] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x200u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x200u), r);
  }
L_868527: /* 868527: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 86852b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 86852f: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 868532: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 868533: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 868536: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868538: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 86853c: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 868540: jl 0x868260 */
  if ((sf != of)) goto L_868260;
L_868546: /* 868546: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 868547: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 868548: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 868549: mov eax, ebx */
  eax = ebx;
/* 86854b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86854c: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86854f: ret  */
  esp += 4; SPILL(); return;
}

void f_868660(void) {
  LOAD_REGS();
L_868660: /* 868660: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 868662: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 868665: mov eax, dword ptr [ecx + 0x154] */
  eax = R32((uint32_t)(ecx + 0x154u));
/* 86866b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86866e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 868670: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 868671: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 868672: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 868676: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 868677: jne 0x8687cd */
  if (!zf) goto L_8687cd;
L_86867d: /* 86867d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 868680: cmp ebp, dword ptr [eax + 0x112c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x112cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868686: jge 0x8687cd */
  if ((sf == of)) goto L_8687cd;
L_86868c: /* 86868c: mov edx, dword ptr [eax + 0x1128] */
  edx = R32((uint32_t)(eax + 0x1128u));
/* 868692: lea ebx, [ebp + ebp*2] */
  ebx = (uint32_t)(ebp + ebp*2);
/* 868696: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 868699: mov eax, dword ptr [edx + ebx + 4] */
  eax = R32((uint32_t)(edx + ebx + 0x4u));
/* 86869d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 86869f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 8686a7: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 8686ab: jle 0x8687cd */
  if ((zf || sf != of)) goto L_8687cd;
L_8686b1: /* 8686b1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8686b4: mov ecx, dword ptr [eax + 0x1128] */
  ecx = R32((uint32_t)(eax + 0x1128u));
/* 8686ba: mov edx, dword ptr [ecx + ebx] */
  edx = R32((uint32_t)(ecx + ebx));
/* 8686bd: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8686c1: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 8686c4: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x8686c9u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 8686c9: mov edi, eax */
  edi = eax;
/* 8686cb: mov ecx, dword ptr [edi + 0xc0] */
  ecx = R32((uint32_t)(edi + 0xc0u));
/* 8686d1: cmp ecx, dword ptr [0xcd8adc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcd8adcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8686d7: je 0x8687af */
  if (zf) goto L_8687af;
L_8686dd: /* 8686dd: mov edx, dword ptr [ebx + esi + 0x1c] */
  edx = R32((uint32_t)(ebx + esi + 0x1cu));
/* 8686e1: lea ecx, [ebx + esi + 0x1c] */
  ecx = (uint32_t)(ebx + esi + 0x1cu);
/* 8686e5: lea eax, [edi + 0x8c] */
  eax = (uint32_t)(edi + 0x8cu);
/* 8686eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8686ec: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8686efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8686ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8686f1: je 0x8687af */
  if (zf) goto L_8687af;
L_8686f7: /* 8686f7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8686f9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8686fc: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 868702: mov eax, edi */
  eax = edi;
/* 868704: call 0x867e00 */
  esp -= 4; W32(esp, 0x868709u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 868709: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86870b: je 0x8687ab */
  if (zf) goto L_8687ab;
L_868711: /* 868711: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 868713: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 868719: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86871b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86871c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86871f: mov edx, esp */
  edx = esp;
/* 868721: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 868723: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 868726: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 868729: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 86872c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 86872f: call 0x6c8440 */
  esp -= 4; W32(esp, 0x868734u); SPILL(); f_6c8440(); if (g_unwind) return; RELOAD();
/* 868734: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 868737: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 868739: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86873b: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 868740: mov ebx, eax */
  ebx = eax;
/* 868742: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x868748u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 868748: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86874a: je 0x86875a */
  if (zf) goto L_86875a;
L_86874c: /* 86874c: lea edx, [ebp + ebp*2 + 9] */
  edx = (uint32_t)(ebp + ebp*2 + 0x9u);
/* 868750: mov ecx, dword ptr [esi + edx*4] */
  ecx = R32((uint32_t)(esi + edx*4));
/* 868753: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 868755: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 868758: jmp 0x86875c */
  goto L_86875c;
L_86875a: /* 86875a: xor eax, eax */
  eax = 0;
L_86875c: /* 86875c: lea ecx, [ebp + ebp*2 + 9] */
  ecx = (uint32_t)(ebp + ebp*2 + 0x9u);
/* 868760: mov dword ptr [esi + ecx*4], eax */
  W32((uint32_t)(esi + ecx*4), eax);
/* 868763: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 868765: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 868768: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86876b: test dword ptr [ecx + 0x534], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 868775: je 0x86879f */
  if (zf) goto L_86879f;
L_868777: /* 868777: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 868779: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86877b: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 868780: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x868786u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 868786: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 868788: je 0x868797 */
  if (zf) goto L_868797;
L_86878a: /* 86878a: mov ecx, dword ptr [esi + 0x338] */
  ecx = R32((uint32_t)(esi + 0x338u));
/* 868790: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 868792: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 868795: jmp 0x868799 */
  goto L_868799;
L_868797: /* 868797: xor eax, eax */
  eax = 0;
L_868799: /* 868799: mov dword ptr [esi + 0x338], eax */
  W32((uint32_t)(esi + 0x338u), eax);
L_86879f: /* 86879f: mov edx, dword ptr [0xcd8adc] */
  edx = R32((uint32_t)(0xcd8adcu));
/* 8687a5: mov dword ptr [edi + 0xc0], edx */
  W32((uint32_t)(edi + 0xc0u), edx);
L_8687ab: /* 8687ab: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_8687af: /* 8687af: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8687b2: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8687b6: mov edx, dword ptr [ecx + 0x1128] */
  edx = R32((uint32_t)(ecx + 0x1128u));
/* 8687bc: mov ecx, dword ptr [edx + ebx + 4] */
  ecx = R32((uint32_t)(edx + ebx + 0x4u));
/* 8687c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8687c1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8687c3: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 8687c7: jl 0x8686b1 */
  if ((sf != of)) goto L_8686b1;
L_8687cd: /* 8687cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8687ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8687cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8687d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8687d3: ret  */
  esp += 4; SPILL(); return;
}

void f_868840(void) {
  LOAD_REGS();
L_868840: /* 868840: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 868842: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 868843: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868848u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868848: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 86884c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86884e: mov esi, eax */
  esi = eax;
/* 868850: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868855u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868855: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 868858: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 86885b: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86885d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86885e: ret  */
  esp += 4; SPILL(); return;
}

void f_868870(void) {
  LOAD_REGS();
L_868870: /* 868870: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 868873: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 868874: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 868876: mov al, byte ptr [ebx + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x29u))) & 0xffu);
/* 868879: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86887b: jne 0x868889 */
  if (!zf) goto L_868889;
L_86887d: /* 86887d: mov dword ptr [esi + 0x3c], 0x7ffffffe */
  W32((uint32_t)(esi + 0x3cu), 0x7ffffffeu);
/* 868884: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 868885: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 868888: ret  */
  esp += 4; SPILL(); return;
L_868889: /* 868889: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86888b: je 0x8688f5 */
  if (zf) goto L_8688f5;
L_86888d: /* 86888d: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86888f: je 0x8688f5 */
  if (zf) goto L_8688f5;
L_868891: /* 868891: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 868894: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 868898: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 86889c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8688a0: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8688a3: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 8688a7: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8688ab: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8688ae: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 8688b2: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8688b6: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8688ba: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 8688bd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8688c1: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8688c7u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8688c7: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8688cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8688cc: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 8688d0: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8688d2: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8688d8: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 8688db: fmul dword ptr [0xa11dd0] */
  ST0 = ST0 * (F32((uint32_t)(0xa11dd0u)));
/* 8688e1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8688e4: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8688eau); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8688ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8688ed: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 8688f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8688f1: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8688f4: ret  */
  esp += 4; SPILL(); return;
L_8688f5: /* 8688f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8688f6: lea edi, [esi + 0x18] */
  edi = (uint32_t)(esi + 0x18u);
/* 8688f9: mov eax, edi */
  eax = edi;
/* 8688fb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8688fd: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 868900: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 868903: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 868907: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 86890b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86890c: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 868910: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 868914: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 868918: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 868919: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 86891d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86891e: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 868922: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 86892a: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x868930u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 868930: mov ecx, eax */
  ecx = eax;
/* 868932: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x868938u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 868938: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 86893b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86893e: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 868941: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 868944: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 868946: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 868949: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 86894b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86894d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 868953: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 868955: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 868958: jne 0x8689ed */
  if (!zf) goto L_8689ed;
L_86895e: /* 86895e: movzx ecx, byte ptr [ebx + 0x38] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x38u)));
/* 868962: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 868966: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 86896a: fmul dword ptr [0xa181b8] */
  ST0 = ST0 * (F32((uint32_t)(0xa181b8u)));
/* 868970: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 868976: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 868978: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 86897a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86897c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 86897e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 868980: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 868982: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 868984: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 868987: jne 0x8689ef */
  if (!zf) goto L_8689ef;
L_868989: /* 868989: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 86898b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 86898f: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 868993: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 868997: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 86899a: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 86899e: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8689a2: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8689a5: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 8689a9: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8689ad: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8689b1: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 8689b4: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8689b8: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8689beu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8689be: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8689c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8689c3: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 8689c7: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8689c9: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8689cf: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 8689d2: fmul dword ptr [0xa11dd0] */
  ST0 = ST0 * (F32((uint32_t)(0xa11dd0u)));
/* 8689d8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8689db: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8689e1u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8689e1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8689e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8689e5: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 8689e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8689e9: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8689ec: ret  */
  esp += 4; SPILL(); return;
L_8689ed: /* 8689ed: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8689ef: /* 8689ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8689f0: mov dword ptr [esi + 0x3c], 0 */
  W32((uint32_t)(esi + 0x3cu), 0x0u);
/* 8689f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8689f8: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8689fb: ret  */
  esp += 4; SPILL(); return;
}

void f_868a70(void) {
  LOAD_REGS();
L_868a70: /* 868a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 868a71: push 0x6c45c5 */
  { uint32_t v = 0x6c45c5u; esp -= 4; W32(esp, v); }
/* 868a76: push 0x6c241e */
  { uint32_t v = 0x6c241eu; esp -= 4; W32(esp, v); }
/* 868a7b: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 868a7d: mov esi, ecx */
  esi = ecx;
/* 868a7f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 868a81: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
/* 868a84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 868a85: call 0x99cafe */
  esp -= 4; W32(esp, 0x868a8au); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 868a8a: mov eax, esi */
  eax = esi;
/* 868a8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 868a8d: ret  */
  esp += 4; SPILL(); return;
}

void f_868aa0(void) {
  LOAD_REGS();
L_868aa0: /* 868aa0: push 0x6c45c5 */
  { uint32_t v = 0x6c45c5u; esp -= 4; W32(esp, v); }
/* 868aa5: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 868aa7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 868aa9: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 868aac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 868aad: call 0x99ca3d */
  esp -= 4; W32(esp, 0x868ab2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 868ab2: ret  */
  esp += 4; SPILL(); return;
}

void f_868ad0(void) {
  LOAD_REGS();
L_868ad0: /* 868ad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 868ad1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 868ad3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 868ad5: mov esi, ecx */
  esi = ecx;
/* 868ad7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x868addu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 868add: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 868ae1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 868ae3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 868ae5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 868ae8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 868ae9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_868b00(void) {
  LOAD_REGS();
L_868b00: /* 868b00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 868b01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 868b02: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 868b08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 868b09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 868b0a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 868b0e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 868b10: mov esi, ecx */
  esi = ecx;
/* 868b12: jge 0x868b28 */
  if ((sf == of)) goto L_868b28;
L_868b14: /* 868b14: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 868b19: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 868b1e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 868b23: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x868b25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 868b25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_868b28: /* 868b28: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868b2b: jle 0x868b41 */
  if ((zf || sf != of)) goto L_868b41;
L_868b2d: /* 868b2d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 868b32: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 868b37: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 868b3c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x868b3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 868b3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_868b41: /* 868b41: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 868b45: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 868b48: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 868b4b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868b4d: jle 0x868b63 */
  if ((zf || sf != of)) goto L_868b63;
L_868b4f: /* 868b4f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 868b54: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 868b59: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 868b5e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x868b60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 868b60: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_868b63: /* 868b63: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 868b65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 868b66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 868b67: mov ecx, esi */
  ecx = esi;
/* 868b69: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x868b6fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 868b6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 868b70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 868b71: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 868b72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 868b73: ret 8 */
  esp += 12; SPILL(); return;
}

void f_868ba0(void) {
  LOAD_REGS();
L_868ba0: /* 868ba0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 868ba4: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 868baa: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868bad: jl 0x868cff */
  if ((sf != of)) goto L_868cff;
L_868bb3: /* 868bb3: mov eax, dword ptr [esp + 0x108] */
  eax = R32((uint32_t)(esp + 0x108u));
/* 868bba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 868bbb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 868bbc: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 868bc0: lea eax, [eax + ecx*4 - 4] */
  eax = (uint32_t)(eax + ecx*4 + 0xfffffffcu);
/* 868bc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 868bc5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 868bc6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 868bca: mov ecx, 0x3e */
  ecx = 0x3eu;
/* 868bcf: xor eax, eax */
  eax = 0;
/* 868bd1: lea edi, [esp + 0x1c] */
  edi = (uint32_t)(esp + 0x1cu);
/* 868bd5: lea ebx, [esp + 0x14] */
  ebx = (uint32_t)(esp + 0x14u);
/* 868bd9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 868bdb: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 868bdf: nop  */
L_868be0: /* 868be0: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 868be3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 868be5: mov eax, esi */
  eax = esi;
/* 868be7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868be9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 868bec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 868bed: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868bf0: jle 0x868ca6 */
  if ((zf || sf != of)) goto L_868ca6;
L_868bf6: /* 868bf6: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 868bf8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 868bf9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868bfb: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 868bfd: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 868c00: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 868c03: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 868c05: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 868c07: mov edx, ecx */
  edx = ecx;
/* 868c09: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 868c0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_868c10: /* 868c10: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 868c13: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868c15: ja 0x868c25 */
  if ((!cf && !zf)) goto L_868c25;
L_868c17: /* 868c17: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 868c19: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 868c1b: mov edi, dword ptr [edi + 0x3c] */
  edi = R32((uint32_t)(edi + 0x3cu));
/* 868c1e: sub edi, dword ptr [ebp + 0x3c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 868c21: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 868c23: jle 0x868c10 */
  if ((zf || sf != of)) goto L_868c10;
L_868c25: /* 868c25: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868c28: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868c2a: jbe 0x868c38 */
  if ((cf | zf)) goto L_868c38;
L_868c2c: /* 868c2c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 868c2e: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 868c30: mov edi, dword ptr [edi + 0x3c] */
  edi = R32((uint32_t)(edi + 0x3cu));
/* 868c33: sub edi, dword ptr [ebp + 0x3c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 868c36: jns 0x868c25 */
  if (!sf) goto L_868c25;
L_868c38: /* 868c38: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868c3a: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 868c3c: ja 0x868c46 */
  if ((!cf && !zf)) goto L_868c46;
L_868c3e: /* 868c3e: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 868c40: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 868c42: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 868c44: jmp 0x868c10 */
  goto L_868c10;
L_868c46: /* 868c46: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 868c48: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 868c4a: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 868c4c: mov edi, eax */
  edi = eax;
/* 868c4e: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 868c50: mov ebp, esi */
  ebp = esi;
/* 868c52: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 868c55: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 868c57: and edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 868c5a: and ebp, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 868c5d: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868c5f: jl 0x868c7b */
  if ((sf != of)) goto L_868c7b;
L_868c61: /* 868c61: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 868c64: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 868c66: jae 0x868c73 */
  if (!cf) goto L_868c73;
L_868c68: /* 868c68: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 868c6b: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 868c6d: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 868c70: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_868c73: /* 868c73: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868c75: jbe 0x868ce4 */
  if ((cf | zf)) goto L_868ce4;
L_868c77: /* 868c77: mov ecx, edx */
  ecx = edx;
/* 868c79: jmp 0x868c91 */
  goto L_868c91;
L_868c7b: /* 868c7b: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868c7d: jbe 0x868c87 */
  if ((cf | zf)) goto L_868c87;
L_868c7f: /* 868c7f: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 868c81: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 868c84: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_868c87: /* 868c87: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 868c8a: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 868c8c: jae 0x868ce4 */
  if (!cf) goto L_868ce4;
L_868c8e: /* 868c8e: lea esi, [eax - 4] */
  esi = (uint32_t)(eax + 0xfffffffcu);
L_868c91: /* 868c91: mov eax, esi */
  eax = esi;
/* 868c93: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868c95: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 868c98: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 868c99: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868c9c: jg 0x868bf6 */
  if ((!zf && sf == of)) goto L_868bf6;
L_868ca2: /* 868ca2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_868ca6: /* 868ca6: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868ca8: jbe 0x868ce8 */
  if ((cf | zf)) goto L_868ce8;
L_868caa: /* 868caa: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 868cad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_868cb0: /* 868cb0: mov eax, edi */
  eax = edi;
/* 868cb2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868cb4: mov edx, ecx */
  edx = ecx;
/* 868cb6: ja 0x868cd3 */
  if ((!cf && !zf)) goto L_868cd3;
L_868cb8: /* 868cb8: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 868cba: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 868cbc: mov ebp, dword ptr [ebp + 0x3c] */
  ebp = R32((uint32_t)(ebp + 0x3cu));
/* 868cbf: sub ebp, dword ptr [ebx + 0x3c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 868cc2: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 868cc4: jle 0x868cc8 */
  if ((zf || sf != of)) goto L_868cc8;
L_868cc6: /* 868cc6: mov edx, eax */
  edx = eax;
L_868cc8: /* 868cc8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 868ccb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868ccd: jbe 0x868cb8 */
  if ((cf | zf)) goto L_868cb8;
L_868ccf: /* 868ccf: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_868cd3: /* 868cd3: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 868cd5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 868cd7: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 868cd9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 868cdb: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 868cde: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868ce0: ja 0x868cb0 */
  if ((!cf && !zf)) goto L_868cb0;
L_868ce2: /* 868ce2: jmp 0x868ce8 */
  goto L_868ce8;
L_868ce4: /* 868ce4: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_868ce8: /* 868ce8: sub ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 868ceb: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 868cef: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 868cf1: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 868cf5: jae 0x868be0 */
  if (!cf) goto L_868be0;
L_868cfb: /* 868cfb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 868cfc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 868cfd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 868cfe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_868cff: /* 868cff: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 868d05: ret  */
  esp += 4; SPILL(); return;
}

void f_868d70(void) {
  LOAD_REGS();
L_868d70: /* 868d70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 868d71: mov ebp, esp */
  ebp = esp;
/* 868d73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 868d75: push 0x9d4540 */
  { uint32_t v = 0x9d4540u; esp -= 4; W32(esp, v); }
/* 868d7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 868d80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 868d81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 868d88: sub esp, 0x1a4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1a4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 868d8e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 868d91: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868d94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 868d95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 868d96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 868d97: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 868d9a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 868da1: jl 0x868ff2 */
  if ((sf != of)) goto L_868ff2;
L_868da7: /* 868da7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 868daa: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 868dad: lea eax, [eax + ecx - 0x20] */
  eax = (uint32_t)(eax + ecx + 0xffffffe0u);
/* 868db1: mov dword ptr [ebp - 0x1ac], eax */
  W32((uint32_t)(ebp + 0xfffffe54u), eax);
/* 868db7: mov dword ptr [ebp - 0x1b0], ecx */
  W32((uint32_t)(ebp + 0xfffffe50u), ecx);
/* 868dbd: xor eax, eax */
  eax = 0;
/* 868dbf: mov ecx, 0x3e */
  ecx = 0x3eu;
/* 868dc4: lea edi, [ebp - 0x1a8] */
  edi = (uint32_t)(ebp + 0xfffffe58u);
/* 868dca: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 868dcc: lea eax, [ebp - 0x1b0] */
  eax = (uint32_t)(ebp + 0xfffffe50u);
L_868dd2: /* 868dd2: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 868dd8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 868dda: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 868ddd: jb 0x868ff2 */
  if (cf) goto L_868ff2;
L_868de3: /* 868de3: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 868de5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 868de8: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 868deb: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 868dee: mov edi, edi */
  edi = edi;
L_868df0: /* 868df0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 868df3: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868df5: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 868df8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 868df9: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868dfc: jg 0x868e71 */
  if ((!zf && sf == of)) goto L_868e71;
L_868dfe: /* 868dfe: mov edi, edi */
  edi = edi;
L_868e00: /* 868e00: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868e03: jbe 0x868fba */
  if ((cf | zf)) goto L_868fba;
L_868e09: /* 868e09: mov esi, ebx */
  esi = ebx;
/* 868e0b: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 868e0e: lea edi, [ebx + 0x20] */
  edi = (uint32_t)(ebx + 0x20u);
L_868e11: /* 868e11: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868e14: ja 0x868e3e */
  if ((!cf && !zf)) goto L_868e3e;
L_868e16: /* 868e16: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 868e18: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868e1du); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868e1d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 868e1f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 868e22: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868e27u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868e27: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 868e2a: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 868e2d: sub eax, dword ptr [ecx + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 868e32: jle 0x868e39 */
  if ((zf || sf != of)) goto L_868e39;
L_868e34: /* 868e34: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 868e37: mov esi, edi */
  esi = edi;
L_868e39: /* 868e39: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 868e3c: jmp 0x868e11 */
  goto L_868e11;
L_868e3e: /* 868e3e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 868e41: mov ecx, 8 */
  ecx = 0x8u;
/* 868e46: lea edi, [ebp - 0xb0] */
  edi = (uint32_t)(ebp + 0xffffff50u);
/* 868e4c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e4e: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 868e51: mov esi, eax */
  esi = eax;
/* 868e53: mov ecx, 8 */
  ecx = 0x8u;
/* 868e58: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e5a: mov edi, eax */
  edi = eax;
/* 868e5c: mov ecx, 8 */
  ecx = 0x8u;
/* 868e61: lea esi, [ebp - 0xb0] */
  esi = (uint32_t)(ebp + 0xffffff50u);
/* 868e67: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868e6a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e6c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 868e6f: jmp 0x868e00 */
  goto L_868e00;
L_868e71: /* 868e71: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 868e72: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868e74: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 868e76: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 868e79: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 868e7b: mov ecx, 8 */
  ecx = 0x8u;
/* 868e80: mov esi, eax */
  esi = eax;
/* 868e82: lea edi, [ebp - 0x50] */
  edi = (uint32_t)(ebp + 0xffffffb0u);
/* 868e85: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e87: mov esi, ebx */
  esi = ebx;
/* 868e89: mov ecx, 8 */
  ecx = 0x8u;
/* 868e8e: mov edi, eax */
  edi = eax;
/* 868e90: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e92: mov edi, ebx */
  edi = ebx;
/* 868e94: mov ecx, 8 */
  ecx = 0x8u;
/* 868e99: lea esi, [ebp - 0x50] */
  esi = (uint32_t)(ebp + 0xffffffb0u);
/* 868e9c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e9e: mov edi, ebx */
  edi = ebx;
/* 868ea0: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 868ea3: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_868ea6: /* 868ea6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 868ea9: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 868eac: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868eae: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 868eb1: ja 0x868ed0 */
  if ((!cf && !zf)) goto L_868ed0;
L_868eb3: /* 868eb3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 868eb5: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868ebau); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868eba: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 868ebd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 868ebf: mov esi, eax */
  esi = eax;
/* 868ec1: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868ec6u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868ec6: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 868ec9: sub eax, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868ecc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 868ece: jle 0x868ea6 */
  if ((zf || sf != of)) goto L_868ea6;
L_868ed0: /* 868ed0: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 868ed3: sub ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 868ed6: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868ed8: jbe 0x868ef6 */
  if ((cf | zf)) goto L_868ef6;
L_868eda: /* 868eda: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 868edc: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868ee1u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868ee1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 868ee3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 868ee6: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868eebu); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868eeb: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 868eee: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 868ef1: sub ecx, dword ptr [edx + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 868ef4: jns 0x868ed0 */
  if (!sf) goto L_868ed0;
L_868ef6: /* 868ef6: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868ef8: mov ecx, 8 */
  ecx = 0x8u;
/* 868efd: jbe 0x868fc5 */
  if ((cf | zf)) goto L_868fc5;
L_868f03: /* 868f03: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 868f06: lea edi, [ebp - 0x70] */
  edi = (uint32_t)(ebp + 0xffffff90u);
/* 868f09: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868f0b: mov ecx, 8 */
  ecx = 0x8u;
/* 868f10: mov esi, ebx */
  esi = ebx;
/* 868f12: mov edi, eax */
  edi = eax;
/* 868f14: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868f16: mov ecx, 8 */
  ecx = 0x8u;
/* 868f1b: lea esi, [ebp - 0x70] */
  esi = (uint32_t)(ebp + 0xffffff90u);
/* 868f1e: mov edi, ebx */
  edi = ebx;
/* 868f20: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868f22: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 868f25: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 868f28: mov edx, ebx */
  edx = ebx;
/* 868f2a: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 868f2c: mov edi, esi */
  edi = esi;
/* 868f2e: sub edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 868f31: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 868f33: and edx, 0xffffffe0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 868f36: and edi, 0xffffffe0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 868f39: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868f3b: jl 0x868f93 */
  if ((sf != of)) goto L_868f93;
L_868f3d: /* 868f3d: lea edx, [eax + 0x20] */
  edx = (uint32_t)(eax + 0x20u);
/* 868f40: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 868f42: jae 0x868f55 */
  if (!cf) goto L_868f55;
L_868f44: /* 868f44: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 868f47: add ebx, -0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 868f4a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 868f4c: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 868f4f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 868f52: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_868f55: /* 868f55: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868f57: jbe 0x868fba */
  if ((cf | zf)) goto L_868fba;
L_868f59: /* 868f59: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 868f5c: mov ebx, ecx */
  ebx = ecx;
/* 868f5e: jmp 0x868df0 */
  goto L_868df0;
L_868f93: /* 868f93: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868f95: jbe 0x868fa5 */
  if ((cf | zf)) goto L_868fa5;
L_868f97: /* 868f97: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 868f9a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 868f9c: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 868f9f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 868fa2: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_868fa5: /* 868fa5: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 868fa8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 868faa: jae 0x868fba */
  if (!cf) goto L_868fba;
L_868fac: /* 868fac: add ebx, -0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 868faf: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 868fb2: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 868fb5: jmp 0x868df0 */
  goto L_868df0;
L_868fba: /* 868fba: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 868fbd: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868fc0: jmp 0x868dd2 */
  goto L_868dd2;
L_868fc5: /* 868fc5: mov esi, edi */
  esi = edi;
/* 868fc7: lea edi, [ebp - 0x90] */
  edi = (uint32_t)(ebp + 0xffffff70u);
/* 868fcd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868fcf: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 868fd2: mov ecx, 8 */
  ecx = 0x8u;
/* 868fd7: mov esi, ebx */
  esi = ebx;
/* 868fd9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868fdb: mov ecx, 8 */
  ecx = 0x8u;
/* 868fe0: lea esi, [ebp - 0x90] */
  esi = (uint32_t)(ebp + 0xffffff70u);
/* 868fe6: mov edi, ebx */
  edi = ebx;
/* 868fe8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868fea: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 868fed: jmp 0x868ea6 */
  goto L_868ea6;
L_868ff2: /* 868ff2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 868ff5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 868ff6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 868ff7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 868ffe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 868fff: mov esp, ebp */
  esp = ebp;
/* 869001: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 869002: ret  */
  esp += 4; SPILL(); return;
}

void f_868f63(void) {
  LOAD_REGS();
L_868f63: /* 868f63: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 868f66: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 868f6b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 868f6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 868f6f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 868f72: call 0x99caf8 */
  esp -= 4; W32(esp, 0x868f77u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_868f77(); return;
}

void f_868f77(void) {
  LOAD_REGS();
  goto L_868f77;
L_868dd2: /* 868dd2: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 868dd8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 868dda: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 868ddd: jb 0x868ff2 */
  if (cf) goto L_868ff2;
L_868de3: /* 868de3: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 868de5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 868de8: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 868deb: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 868dee: mov edi, edi */
  edi = edi;
L_868df0: /* 868df0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 868df3: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868df5: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 868df8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 868df9: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868dfc: jg 0x868e71 */
  if ((!zf && sf == of)) goto L_868e71;
L_868dfe: /* 868dfe: mov edi, edi */
  edi = edi;
L_868e00: /* 868e00: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868e03: jbe 0x868fba */
  if ((cf | zf)) goto L_868fba;
L_868e09: /* 868e09: mov esi, ebx */
  esi = ebx;
/* 868e0b: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 868e0e: lea edi, [ebx + 0x20] */
  edi = (uint32_t)(ebx + 0x20u);
L_868e11: /* 868e11: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868e14: ja 0x868e3e */
  if ((!cf && !zf)) goto L_868e3e;
L_868e16: /* 868e16: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 868e18: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868e1du); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868e1d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 868e1f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 868e22: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868e27u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868e27: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 868e2a: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 868e2d: sub eax, dword ptr [ecx + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868e30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 868e32: jle 0x868e39 */
  if ((zf || sf != of)) goto L_868e39;
L_868e34: /* 868e34: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 868e37: mov esi, edi */
  esi = edi;
L_868e39: /* 868e39: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 868e3c: jmp 0x868e11 */
  goto L_868e11;
L_868e3e: /* 868e3e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 868e41: mov ecx, 8 */
  ecx = 0x8u;
/* 868e46: lea edi, [ebp - 0xb0] */
  edi = (uint32_t)(ebp + 0xffffff50u);
/* 868e4c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e4e: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 868e51: mov esi, eax */
  esi = eax;
/* 868e53: mov ecx, 8 */
  ecx = 0x8u;
/* 868e58: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e5a: mov edi, eax */
  edi = eax;
/* 868e5c: mov ecx, 8 */
  ecx = 0x8u;
/* 868e61: lea esi, [ebp - 0xb0] */
  esi = (uint32_t)(ebp + 0xffffff50u);
/* 868e67: sub eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868e6a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e6c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 868e6f: jmp 0x868e00 */
  goto L_868e00;
L_868e71: /* 868e71: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 868e72: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868e74: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 868e76: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 868e79: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 868e7b: mov ecx, 8 */
  ecx = 0x8u;
/* 868e80: mov esi, eax */
  esi = eax;
/* 868e82: lea edi, [ebp - 0x50] */
  edi = (uint32_t)(ebp + 0xffffffb0u);
/* 868e85: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e87: mov esi, ebx */
  esi = ebx;
/* 868e89: mov ecx, 8 */
  ecx = 0x8u;
/* 868e8e: mov edi, eax */
  edi = eax;
/* 868e90: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e92: mov edi, ebx */
  edi = ebx;
/* 868e94: mov ecx, 8 */
  ecx = 0x8u;
/* 868e99: lea esi, [ebp - 0x50] */
  esi = (uint32_t)(ebp + 0xffffffb0u);
/* 868e9c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868e9e: mov edi, ebx */
  edi = ebx;
/* 868ea0: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 868ea3: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_868ea6: /* 868ea6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 868ea9: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 868eac: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868eae: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 868eb1: ja 0x868ed0 */
  if ((!cf && !zf)) goto L_868ed0;
L_868eb3: /* 868eb3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 868eb5: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868ebau); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868eba: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 868ebd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 868ebf: mov esi, eax */
  esi = eax;
/* 868ec1: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868ec6u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868ec6: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 868ec9: sub eax, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868ecc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 868ece: jle 0x868ea6 */
  if ((zf || sf != of)) goto L_868ea6;
L_868ed0: /* 868ed0: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 868ed3: sub ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 868ed6: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868ed8: jbe 0x868ef6 */
  if ((cf | zf)) goto L_868ef6;
L_868eda: /* 868eda: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 868edc: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868ee1u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868ee1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 868ee3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 868ee6: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x868eebu); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 868eeb: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 868eee: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 868ef1: sub ecx, dword ptr [edx + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 868ef4: jns 0x868ed0 */
  if (!sf) goto L_868ed0;
L_868ef6: /* 868ef6: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868ef8: mov ecx, 8 */
  ecx = 0x8u;
/* 868efd: jbe 0x868fc5 */
  if ((cf | zf)) goto L_868fc5;
L_868f03: /* 868f03: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 868f06: lea edi, [ebp - 0x70] */
  edi = (uint32_t)(ebp + 0xffffff90u);
/* 868f09: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868f0b: mov ecx, 8 */
  ecx = 0x8u;
/* 868f10: mov esi, ebx */
  esi = ebx;
/* 868f12: mov edi, eax */
  edi = eax;
/* 868f14: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868f16: mov ecx, 8 */
  ecx = 0x8u;
/* 868f1b: lea esi, [ebp - 0x70] */
  esi = (uint32_t)(ebp + 0xffffff90u);
/* 868f1e: mov edi, ebx */
  edi = ebx;
/* 868f20: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868f22: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 868f25: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 868f28: mov edx, ebx */
  edx = ebx;
/* 868f2a: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 868f2c: mov edi, esi */
  edi = esi;
/* 868f2e: sub edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 868f31: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 868f33: and edx, 0xffffffe0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 868f36: and edi, 0xffffffe0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 868f39: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 868f3b: jl 0x868f93 */
  if ((sf != of)) goto L_868f93;
L_868f3d: /* 868f3d: lea edx, [eax + 0x20] */
  edx = (uint32_t)(eax + 0x20u);
/* 868f40: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 868f42: jae 0x868f55 */
  if (!cf) goto L_868f55;
L_868f44: /* 868f44: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 868f47: add ebx, -0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 868f4a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 868f4c: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 868f4f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 868f52: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_868f55: /* 868f55: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868f57: jbe 0x868fba */
  if ((cf | zf)) goto L_868fba;
L_868f59: /* 868f59: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 868f5c: mov ebx, ecx */
  ebx = ecx;
/* 868f5e: jmp 0x868df0 */
  goto L_868df0;
L_868f77: /* 868f77: push 0xa181bc */
  { uint32_t v = 0xa181bcu; esp -= 4; W32(esp, v); }
/* 868f7c: push 0xae56d0 */
  { uint32_t v = 0xae56d0u; esp -= 4; W32(esp, v); }
/* 868f81: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x868f87u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 868f87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 868f8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 868f8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 868f8e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x868f93u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_868f93: /* 868f93: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 868f95: jbe 0x868fa5 */
  if ((cf | zf)) goto L_868fa5;
L_868f97: /* 868f97: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 868f9a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 868f9c: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 868f9f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 868fa2: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_868fa5: /* 868fa5: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 868fa8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 868faa: jae 0x868fba */
  if (!cf) goto L_868fba;
L_868fac: /* 868fac: add ebx, -0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 868faf: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 868fb2: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 868fb5: jmp 0x868df0 */
  goto L_868df0;
L_868fba: /* 868fba: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 868fbd: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 868fc0: jmp 0x868dd2 */
  goto L_868dd2;
L_868fc5: /* 868fc5: mov esi, edi */
  esi = edi;
/* 868fc7: lea edi, [ebp - 0x90] */
  edi = (uint32_t)(ebp + 0xffffff70u);
/* 868fcd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868fcf: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 868fd2: mov ecx, 8 */
  ecx = 0x8u;
/* 868fd7: mov esi, ebx */
  esi = ebx;
/* 868fd9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868fdb: mov ecx, 8 */
  ecx = 0x8u;
/* 868fe0: lea esi, [ebp - 0x90] */
  esi = (uint32_t)(ebp + 0xffffff70u);
/* 868fe6: mov edi, ebx */
  edi = ebx;
/* 868fe8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 868fea: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 868fed: jmp 0x868ea6 */
  goto L_868ea6;
L_868ff2: /* 868ff2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 868ff5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 868ff6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 868ff7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 868ffe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 868fff: mov esp, ebp */
  esp = ebp;
/* 869001: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 869002: ret  */
  esp += 4; SPILL(); return;
}

void f_8690c0(void) {
  LOAD_REGS();
L_8690c0: /* 8690c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8690c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8690c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8690c7: je 0x8690de */
  if (zf) goto L_8690de;
L_8690c9: /* 8690c9: push 0xb621f8 */
  { uint32_t v = 0xb621f8u; esp -= 4; W32(esp, v); }
/* 8690ce: mov ecx, esi */
  ecx = esi;
/* 8690d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8690d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8690d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8690d8: je 0x8690de */
  if (zf) goto L_8690de;
L_8690da: /* 8690da: mov eax, esi */
  eax = esi;
/* 8690dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8690dd: ret  */
  esp += 4; SPILL(); return;
L_8690de: /* 8690de: xor eax, eax */
  eax = 0;
/* 8690e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8690e1: ret  */
  esp += 4; SPILL(); return;
}

void f_869100(void) {
  LOAD_REGS();
L_869100: /* 869100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 869101: mov ebp, esp */
  ebp = esp;
/* 869103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 869105: push 0x9d456b */
  { uint32_t v = 0x9d456bu; esp -= 4; W32(esp, v); }
/* 86910a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 869110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 869111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 869118: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86911e: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 869123: mov ecx, dword ptr [0xce839c] */
  ecx = R32((uint32_t)(0xce839cu));
/* 869129: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86912a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86912b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86912c: xor edi, edi */
  edi = 0;
/* 86912e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 869131: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 869134: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 869137: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 869139: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 86913b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86913e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 869140: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869142: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 869145: je 0x86914f */
  if (zf) goto L_86914f;
L_869147: /* 869147: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x86914du); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 86914d: jmp 0x869151 */
  goto L_869151;
L_86914f: /* 86914f: xor eax, eax */
  eax = 0;
L_869151: /* 869151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 869152: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 869157: xor ecx, ecx */
  ecx = 0;
/* 869159: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86915a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86915b: call 0x99c910 */
  esp -= 4; W32(esp, 0x869160u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 869160: mov esi, eax */
  esi = eax;
/* 869162: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 869164: mov ebx, edx */
  ebx = edx;
/* 869166: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 869169: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 86916c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86916d: adc ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 86916f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 869170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 869171: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 869176: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 869179: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 86917c: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 86917f: call dword ptr [0xcfaa64] */
  esp -= 4; W32(esp, 0x869185u); SPILL(); f_4e102d(); if (g_unwind) return; /* Core!?Get@FMemCache@@QAEPAE_KAAPAVFCacheItem@1@H@Z */ RELOAD();
/* 869185: mov edi, eax */
  edi = eax;
/* 869187: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869189: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86918c: jne 0x8691bd */
  if (!zf) goto L_8691bd;
L_86918e: /* 86918e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86918f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 869191: push 0x204 */
  { uint32_t v = 0x204u; esp -= 4; W32(esp, v); }
/* 869196: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 869199: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86919a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86919b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86919c: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 8691a1: call dword ptr [0xcfaa60] */
  esp -= 4; W32(esp, 0x8691a7u); SPILL(); f_4e24af(); if (g_unwind) return; /* Core!?Create@FMemCache@@QAEPAE_KAAPAVFCacheItem@1@HHH@Z */ RELOAD();
/* 8691a7: mov edi, eax */
  edi = eax;
/* 8691a9: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8691ac: mov dword ptr [edi + 0x200], 0 */
  W32((uint32_t)(edi + 0x200u), 0x0u);
/* 8691b6: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
L_8691bd: /* 8691bd: xor eax, eax */
  eax = 0;
/* 8691bf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8691c2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8691c6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8691c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8691d0: /* 8691d0: cmp eax, dword ptr [edi + 0x200] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8691d6: jge 0x8692b9 */
  if ((sf == of)) goto L_8692b9;
L_8691dc: /* 8691dc: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8691df: lea ebx, [eax + edi] */
  ebx = (uint32_t)(eax + edi);
/* 8691e2: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8691e5: je 0x86927d */
  if (zf) goto L_86927d;
L_8691eb: /* 8691eb: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 8691ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8691ef: call dword ptr [0xcfab3c] */
  esp -= 4; W32(esp, 0x8691f5u); SPILL(); f_4e35bc(); if (g_unwind) return; /* Core!?GetIndexedObject@UObject@@SAPAV1@H@Z */ RELOAD();
/* 8691f5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8691f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8691fa: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8691fc: jne 0x86927d */
  if (!zf) goto L_86927d;
L_8691fe: /* 8691fe: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x869204u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 869204: cmp dword ptr [ebx + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869207: jne 0x86927d */
  if (!zf) goto L_86927d;
L_869209: /* 869209: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86920b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 869211: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869214: jne 0x86927d */
  if (!zf) goto L_86927d;
L_869216: /* 869216: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x86921bu); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 86921b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86921d: je 0x86927d */
  if (zf) goto L_86927d;
L_86921f: /* 86921f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 869222: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 869225: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869227: je 0x86923e */
  if (zf) goto L_86923e;
L_869229: /* 869229: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86922c: mov edi, ecx */
  edi = ecx;
/* 86922e: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 869231: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 869233: mov ecx, 8 */
  ecx = 0x8u;
/* 869238: mov esi, ebx */
  esi = ebx;
/* 86923a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86923c: mov edi, eax */
  edi = eax;
L_86923e: /* 86923e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 869241: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 869244: mov dword ptr [ecx + edi + 0x14], 0 */
  W32((uint32_t)(ecx + edi + 0x14u), 0x0u);
/* 86924c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86924e: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x869253u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 869253: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 869256: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 869259: mov ecx, esp */
  ecx = esp;
/* 86925b: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 86925e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86925f: mov esi, eax */
  esi = eax;
/* 869261: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x869267u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 869267: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 86926a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86926b: call 0x868870 */
  esp -= 4; W32(esp, 0x869270u); SPILL(); f_868870(); if (g_unwind) return; RELOAD();
/* 869270: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 869273: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 869276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 869278: jle 0x86927d */
  if ((zf || sf != of)) goto L_86927d;
L_86927a: /* 86927a: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_86927d: /* 86927d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 869280: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 869281: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 869284: jmp 0x8691d0 */
  goto L_8691d0;
L_8692b9: /* 8692b9: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8692bc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8692bf: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 8692c2: xor ebx, ebx */
  ebx = 0;
/* 8692c4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8692c7: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* 8692cd: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_8692d1: /* 8692d1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 8692d4: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8692d6: jge 0x8692ff */
  if ((sf == of)) goto L_8692ff;
L_8692d8: /* 8692d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8692db: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 8692de: mov ecx, esp */
  ecx = esp;
/* 8692e0: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 8692e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8692e4: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x8692eau); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 8692ea: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8692ed: mov esi, dword ptr [edi + ebx*4] */
  esi = R32((uint32_t)(edi + ebx*4));
/* 8692f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8692f1: call 0x868870 */
  esp -= 4; W32(esp, 0x8692f6u); SPILL(); f_868870(); if (g_unwind) return; RELOAD();
/* 8692f6: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8692f9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8692fc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8692fd: jmp 0x8692d1 */
  goto L_8692d1;
L_8692ff: /* 8692ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 869300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 869301: call 0x6c6bcc */
  esp -= 4; W32(esp, 0x869306u); SPILL(); f_6c6bcc(); if (g_unwind) return; RELOAD();
/* 869306: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 869309: xor eax, eax */
  eax = 0;
/* 86930b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86930e: mov edi, edi */
  edi = edi;
L_869310: /* 869310: cmp eax, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869313: jge 0x869439 */
  if ((sf == of)) goto L_869439;
L_869319: /* 869319: mov edx, dword ptr [edi + eax*4] */
  edx = R32((uint32_t)(edi + eax*4));
/* 86931c: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 86931f: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 869322: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 869325: xor eax, eax */
  eax = 0;
L_869327: /* 869327: cmp eax, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86932d: jge 0x869342 */
  if ((sf == of)) goto L_869342;
L_86932f: /* 86932f: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 869331: mov edi, eax */
  edi = eax;
/* 869333: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 869336: mov edi, dword ptr [edi + esi] */
  edi = R32((uint32_t)(edi + esi));
/* 869339: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86933b: jne 0x869370 */
  if (!zf) goto L_869370;
L_86933d: /* 86933d: mov ecx, eax */
  ecx = eax;
/* 86933f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_869342: /* 869342: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869345: jne 0x86941c */
  if (!zf) goto L_86941c;
L_86934b: /* 86934b: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 86934e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 869350: jle 0x869427 */
  if ((zf || sf != of)) goto L_869427;
L_869356: /* 869356: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 869359: mov eax, dword ptr [edx + 0x200] */
  eax = R32((uint32_t)(edx + 0x200u));
/* 86935f: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869362: jge 0x869373 */
  if ((sf == of)) goto L_869373;
L_869364: /* 869364: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 869367: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 869368: mov dword ptr [edx + 0x200], eax */
  W32((uint32_t)(edx + 0x200u), eax);
/* 86936e: jmp 0x8693d2 */
  goto L_8693d2;
L_869370: /* 869370: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 869371: jmp 0x869327 */
  goto L_869327;
L_869373: /* 869373: mov dword ptr [ebp - 0x2c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xffffffffu);
/* 86937a: mov edi, ecx */
  edi = ecx;
/* 86937c: xor esi, esi */
  esi = 0;
/* 86937e: mov edi, edi */
  edi = edi;
L_869380: /* 869380: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 869383: cmp esi, dword ptr [ecx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869389: jge 0x8693c7 */
  if ((sf == of)) goto L_8693c7;
L_86938b: /* 86938b: mov edx, esi */
  edx = esi;
/* 86938d: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 869390: mov eax, ecx */
  eax = ecx;
/* 869392: mov ecx, dword ptr [edx + eax] */
  ecx = R32((uint32_t)(edx + eax));
/* 869395: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x86939au); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 86939a: mov ebx, eax */
  ebx = eax;
/* 86939c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86939e: jne 0x8693b8 */
  if (!zf) goto L_8693b8;
L_8693a0: /* 8693a0: push 0x1de */
  { uint32_t v = 0x1deu; esp -= 4; W32(esp, v); }
/* 8693a5: push 0xae54a0 */
  { uint32_t v = 0xae54a0u; esp -= 4; W32(esp, v); }
/* 8693aa: push 0xae54b8 */
  { uint32_t v = 0xae54b8u; esp -= 4; W32(esp, v); }
/* 8693af: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8693b5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8693b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8693b8: /* 8693b8: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 8693bb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8693bd: jge 0x8693c4 */
  if ((sf == of)) goto L_8693c4;
L_8693bf: /* 8693bf: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 8693c2: mov edi, eax */
  edi = eax;
L_8693c4: /* 8693c4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8693c5: jmp 0x869380 */
  goto L_869380;
L_8693c7: /* 8693c7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8693ca: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8693cd: je 0x8693d2 */
  if (zf) goto L_8693d2;
L_8693cf: /* 8693cf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_8693d2: /* 8693d2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8693d5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8693d8: je 0x869427 */
  if (zf) goto L_869427;
L_8693da: /* 8693da: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8693dd: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8693e0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8693e2: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8693e5: lea esi, [eax + ecx] */
  esi = (uint32_t)(eax + ecx);
/* 8693e8: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 8693ea: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8693ec: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x8693f2u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 8693f2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8693f5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8693f7: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8693fdu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8693fd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 869400: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 869403: xor eax, eax */
  eax = 0;
/* 869405: mov dword ptr [esi + 0xc], 0x60000000 */
  W32((uint32_t)(esi + 0xcu), 0x60000000u);
/* 86940c: mov dword ptr [esi + 0x10], 0xbfd66666 */
  W32((uint32_t)(esi + 0x10u), 0xbfd66666u);
/* 869413: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 869416: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 869419: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_86941c: /* 86941c: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 86941f: mov dword ptr [ecx + esi + 0x14], 1 */
  W32((uint32_t)(ecx + esi + 0x14u), 0x1u);
L_869427: /* 869427: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86942a: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86942d: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 869430: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 869431: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 869434: jmp 0x869310 */
  goto L_869310;
L_869439: /* 869439: mov eax, dword ptr [esi + 0x200] */
  eax = R32((uint32_t)(esi + 0x200u));
/* 86943f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 869440: xor edi, edi */
  edi = 0;
/* 869442: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 869443: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 869446: call 0x6c187f */
  esp -= 4; W32(esp, 0x86944bu); SPILL(); f_6c187f(); if (g_unwind) return; RELOAD();
/* 86944b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86944e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
L_869452: /* 869452: cmp edi, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869458: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 86945b: jge 0x86961b */
  if ((sf == of)) goto L_86961b;
L_869461: /* 869461: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 869464: mov esi, edi */
  esi = edi;
/* 869466: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 869469: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 86946c: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86946e: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x869473u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 869473: mov ebx, eax */
  ebx = eax;
/* 869475: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869477: jne 0x869491 */
  if (!zf) goto L_869491;
L_869479: /* 869479: push 0x207 */
  { uint32_t v = 0x207u; esp -= 4; W32(esp, v); }
/* 86947e: push 0xae54cc */
  { uint32_t v = 0xae54ccu; esp -= 4; W32(esp, v); }
/* 869483: push 0xae54e4 */
  { uint32_t v = 0xae54e4u; esp -= 4; W32(esp, v); }
/* 869488: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86948eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86948e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_869491: /* 869491: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 869494: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 869497: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 86949d: fsub qword ptr [0xa18288] */
  ST0 = ST0 - (F64((uint32_t)(0xa18288u)));
/* 8694a3: fcomp qword ptr [esi + 0xc] */
  fpu_com(ST0, F64((uint32_t)(esi + 0xcu)));
  FPOP();
/* 8694a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8694a8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8694ab: jne 0x8695e2 */
  if (!zf) goto L_8695e2;
L_8694b1: /* 8694b1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8694b4: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8694b7: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8694ba: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8694bd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8694bf: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 8694c2: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 8694c5: cmp byte ptr [eax + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8694c9: jne 0x869509 */
  if (!zf) goto L_869509;
L_8694cb: /* 8694cb: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 8694ce: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8694d1: fmul dword ptr [0xa110a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa110a4u)));
/* 8694d7: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 8694da: fmul dword ptr [0xa110a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa110a4u)));
/* 8694e0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8694e3: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 8694e6: fmul dword ptr [0xa110a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa110a4u)));
/* 8694ec: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8694ef: fsubr dword ptr [ebp + 0x18] */
  ST0 = (F32((uint32_t)(ebp + 0x18u))) - ST0;
/* 8694f2: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8694f5: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8694f8: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8694fb: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 8694fe: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 869501: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 869504: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 869507: jmp 0x86950c */
  goto L_86950c;
L_869509: /* 869509: lea eax, [ebx + 0x18] */
  eax = (uint32_t)(ebx + 0x18u);
L_86950c: /* 86950c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86950e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 869511: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 869514: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 869517: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 86951a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86951c: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 869522: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 869525: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 869528: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 869532: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 869535: je 0x8695c2 */
  if (zf) goto L_8695c2;
L_86953b: /* 86953b: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 869541: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869544: jne 0x8695bb */
  if (!zf) goto L_8695bb;
L_869546: /* 869546: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 869549: test byte ptr [eax + 0x80], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869550: je 0x8695bb */
  if (zf) goto L_8695bb;
L_869552: /* 869552: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 869554: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86955b: je 0x8695bb */
  if (zf) goto L_8695bb;
L_86955d: /* 86955d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 869560: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 869563: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 869566: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 86956c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86956e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 869571: mov edi, esp */
  edi = esp;
/* 869573: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 86957a: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86957d: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 86957f: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 869586: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 869589: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 86958c: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 869593: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 869596: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 86959b: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 86959e: lea edi, [ebp - 0x78] */
  edi = (uint32_t)(ebp + 0xffffff88u);
/* 8695a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8695a2: lea edi, [ebp - 0x84] */
  edi = (uint32_t)(ebp + 0xffffff7cu);
/* 8695a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8695a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8695aa: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 8695b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8695b1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8695b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8695b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8695b9: je 0x8695c2 */
  if (zf) goto L_8695c2;
L_8695bb: /* 8695bb: mov eax, 1 */
  eax = 0x1u;
/* 8695c0: jmp 0x8695c4 */
  goto L_8695c4;
L_8695c2: /* 8695c2: xor eax, eax */
  eax = 0;
L_8695c4: /* 8695c4: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8695c7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8695ca: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8695cd: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8695d0: fmul dword ptr [0xa08928] */
  ST0 = ST0 * (F32((uint32_t)(0xa08928u)));
/* 8695d6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8695d9: fsubr qword ptr [edx + 0x138] */
  ST0 = (F64((uint32_t)(edx + 0x138u))) - ST0;
/* 8695df: fstp qword ptr [esi + 0xc] */
  WF64((uint32_t)(esi + 0xcu), ST0); FPOP();
L_8695e2: /* 8695e2: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8695e5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8695e6: jmp 0x869452 */
  goto L_869452;
L_86961b: /* 86961b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 86961e: movzx eax, byte ptr [edx + 0x2b1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2b1u)));
/* 869625: xor edi, edi */
  edi = 0;
/* 869627: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86962a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 86962d: mov dword ptr [ebp - 0x28], 8 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x8u);
/* 869634: jge 0x869639 */
  if ((sf == of)) goto L_869639;
L_869636: /* 869636: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_869639: /* 869639: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 86963c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
L_869640: /* 869640: cmp edi, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869646: jge 0x869724 */
  if ((sf == of)) goto L_869724;
L_86964c: /* 86964c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86964f: mov esi, edi */
  esi = edi;
/* 869651: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 869654: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 869657: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 869659: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x86965eu); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 86965e: mov ebx, eax */
  ebx = eax;
/* 869660: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869662: jne 0x86967c */
  if (!zf) goto L_86967c;
L_869664: /* 869664: push 0x21f */
  { uint32_t v = 0x21fu; esp -= 4; W32(esp, v); }
/* 869669: push 0xae54fc */
  { uint32_t v = 0xae54fcu; esp -= 4; W32(esp, v); }
/* 86966e: push 0xae5514 */
  { uint32_t v = 0xae5514u; esp -= 4; W32(esp, v); }
/* 869673: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x869679u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 869679: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86967c: /* 86967c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86967f: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869682: jge 0x86971b */
  if ((sf == of)) goto L_86971b;
L_869688: /* 869688: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 86968b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86968d: jne 0x86969a */
  if (!zf) goto L_86969a;
L_86968f: /* 86968f: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 869692: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869694: je 0x86971b */
  if (zf) goto L_86971b;
L_86969a: /* 86969a: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86969d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86969f: je 0x8696a9 */
  if (zf) goto L_8696a9;
L_8696a1: /* 8696a1: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8696a7: jmp 0x8696af */
  goto L_8696af;
L_8696a9: /* 8696a9: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8696af: /* 8696af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8696b1: je 0x8696bb */
  if (zf) goto L_8696bb;
L_8696b3: /* 8696b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8696b9: jmp 0x8696c1 */
  goto L_8696c1;
L_8696bb: /* 8696bb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8696c1: /* 8696c1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8696c4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8696c7: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 8696cd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8696cf: fsub qword ptr [esi + 0xc] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0xcu)));
/* 8696d2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8696d4: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8696d9: fmul qword ptr [0xa18250] */
  ST0 = ST0 * (F64((uint32_t)(0xa18250u)));
/* 8696df: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8696e1: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8696e3: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8696e5: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8696e7: fstp dword ptr [ebx + 0x40] */
  WF32((uint32_t)(ebx + 0x40u), ST0); FPOP();
/* 8696ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8696ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8696f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8696f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8696f4: je 0x86970d */
  if (zf) goto L_86970d;
L_8696f6: /* 8696f6: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8696f9: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8696fc: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8696fe: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 869701: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 869704: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 869707: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 869708: jmp 0x869640 */
  goto L_869640;
L_86970d: /* 86970d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 869710: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 869711: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 869718: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_86971b: /* 86971b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86971e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86971f: jmp 0x869640 */
  goto L_869640;
L_869724: /* 869724: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 869727: call dword ptr [0xcfaa68] */
  esp -= 4; W32(esp, 0x86972du); SPILL(); f_4e1253(); if (g_unwind) return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */ RELOAD();
/* 86972d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 869730: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 869733: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 869736: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 86973c: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 86973f: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* 869742: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869744: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86974b: je 0x869973 */
  if (zf) goto L_869973;
L_869751: /* 869751: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 869754: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 869759: mov ecx, ebx */
  ecx = ebx;
/* 86975b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x869761u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 869761: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869763: je 0x869973 */
  if (zf) goto L_869973;
L_869769: /* 869769: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 86976c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86976e: je 0x869973 */
  if (zf) goto L_869973;
L_869774: /* 869774: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 869777: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869779: je 0x869973 */
  if (zf) goto L_869973;
L_86977f: /* 86977f: cmp dword ptr [eax + 0x14c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869785: jne 0x869973 */
  if (!zf) goto L_869973;
L_86978b: /* 86978b: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 86978e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 869791: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 869794: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x86979au); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 86979a: mov ecx, ebx */
  ecx = ebx;
/* 86979c: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8697a0: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8697a6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8697a6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8697a9: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8697ac: fld dword ptr [edx + 0xb4] */
  { double v = F32((uint32_t)(edx + 0xb4u)); FPUSH(v); }
/* 8697b2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8697b5: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8697b8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8697bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8697bc: push 0xae5530 */
  { uint32_t v = 0xae5530u; esp -= 4; W32(esp, v); }
/* 8697c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8697c2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8697c8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8697c8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8697cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8697cc: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8697cf: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8697d3: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8697d9u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8697d9: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8697dc: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8697e0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8697e6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8697e6: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8697e9: fadd dword ptr [0xa14ac4] */
  ST0 = ST0 + (F32((uint32_t)(0xa14ac4u)));
/* 8697ef: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8697f2: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8697f6: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8697fa: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8697fd: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 869801: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 869805: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x86980bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 86980b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86980e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86980f: push 0xae557c */
  { uint32_t v = 0xae557cu; esp -= 4; W32(esp, v); }
/* 869814: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 869816: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 869817: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 869818: call 0x6c5e43 */
  esp -= 4; W32(esp, 0x86981du); SPILL(); f_6c5e43(); if (g_unwind) return; RELOAD();
/* 86981d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 869820: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 869826: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 869829: xor ebx, ebx */
  ebx = 0;
/* 86982b: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 86982e: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
L_869831: /* 869831: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 869834: cmp eax, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86983a: jge 0x869966 */
  if ((sf == of)) goto L_869966;
L_869840: /* 869840: mov edi, eax */
  edi = eax;
/* 869842: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 869845: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 869848: mov ecx, dword ptr [edi + eax] */
  ecx = R32((uint32_t)(edi + eax));
/* 86984b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86984d: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x869852u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 869852: mov esi, eax */
  esi = eax;
/* 869854: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869857: je 0x869956 */
  if (zf) goto L_869956;
L_86985d: /* 86985d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 869860: fld dword ptr [eax + 0xa8] */
  { double v = F32((uint32_t)(eax + 0xa8u)); FPUSH(v); }
/* 869866: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 869869: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 86986c: fld dword ptr [eax + 0xac] */
  { double v = F32((uint32_t)(eax + 0xacu)); FPUSH(v); }
/* 869872: fsub dword ptr [esi + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1cu)));
/* 869875: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 86987b: fsub dword ptr [esi + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x20u)));
/* 86987e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 869880: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 869882: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 869884: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 869886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 869888: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86988a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86988c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86988e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 869891: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 869893: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 869895: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 869897: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x86989du); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 86989d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86989f: fst qword ptr [ebp - 0x48] */
  WF64((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 8698a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8698a5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8698a8: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8698aeu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8698ae: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 8698b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8698b3: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 8698b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8698b7: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 8698ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8698bb: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 8698be: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8698c1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8698c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8698c5: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8698c8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8698cb: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8698cf: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 8698d2: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8698d6: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8698d9: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8698dd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8698e0: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8698e4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8698e7: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8698eb: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 8698ee: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8698f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8698f2: movzx eax, byte ptr [ecx + 0x29] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x29u)));
/* 8698f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8698f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8698f8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8698fb: push 0xae5588 */
  { uint32_t v = 0xae5588u; esp -= 4; W32(esp, v); }
/* 869900: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 869901: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x869907u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 869907: add esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86990a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86990b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 86990e: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 869912: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x869918u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 869918: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 86991b: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 86991f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x869925u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 869925: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 869928: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86992c: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 869930: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 869934: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 869938: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x86993eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 86993e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 869941: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 869942: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 869945: push 0xae5644 */
  { uint32_t v = 0xae5644u; esp -= 4; W32(esp, v); }
/* 86994a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86994c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86994d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86994e: call 0x6c5e43 */
  esp -= 4; W32(esp, 0x869953u); SPILL(); f_6c5e43(); if (g_unwind) return; RELOAD();
/* 869953: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_869956: /* 869956: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 869959: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86995c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86995d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86995e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 869961: jmp 0x869831 */
  goto L_869831;
L_869966: /* 869966: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 869969: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86996d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x869973u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_869973: /* 869973: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 869979: mov edx, dword ptr [0xce839c] */
  edx = R32((uint32_t)(0xce839cu));
/* 86997f: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 869982: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 869984: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 869986: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 869989: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86998b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 86998e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86998f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 869991: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 869994: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 869995: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86999c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86999d: mov esp, ebp */
  esp = ebp;
/* 86999f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8699a0: ret  */
  esp += 4; SPILL(); return;
}

void f_869289(void) {
  LOAD_REGS();
L_869289: /* 869289: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86928c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 869291: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 869294: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 869295: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 869298: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86929du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86929d(); return;
}

void f_86929d(void) {
  LOAD_REGS();
L_86929d: /* 86929d: push 0xa18294 */
  { uint32_t v = 0xa18294u; esp -= 4; W32(esp, v); }
/* 8692a2: push 0xae5498 */
  { uint32_t v = 0xae5498u; esp -= 4; W32(esp, v); }
/* 8692a7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8692adu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8692ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8692b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8692b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8692b4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8692b9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8692b9: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8692bc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8692bf: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 8692c2: xor ebx, ebx */
  ebx = 0;
/* 8692c4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8692c7: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* 8692cd: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_8692d1: /* 8692d1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 8692d4: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8692d6: jge 0x8692ff */
  if ((sf == of)) goto L_8692ff;
L_8692d8: /* 8692d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8692db: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 8692de: mov ecx, esp */
  ecx = esp;
/* 8692e0: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 8692e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8692e4: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x8692eau); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 8692ea: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8692ed: mov esi, dword ptr [edi + ebx*4] */
  esi = R32((uint32_t)(edi + ebx*4));
/* 8692f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8692f1: call 0x868870 */
  esp -= 4; W32(esp, 0x8692f6u); SPILL(); f_868870(); if (g_unwind) return; RELOAD();
/* 8692f6: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8692f9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8692fc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8692fd: jmp 0x8692d1 */
  goto L_8692d1;
L_8692ff: /* 8692ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 869300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 869301: call 0x6c6bcc */
  esp -= 4; W32(esp, 0x869306u); SPILL(); f_6c6bcc(); if (g_unwind) return; RELOAD();
/* 869306: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 869309: xor eax, eax */
  eax = 0;
/* 86930b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86930e: mov edi, edi */
  edi = edi;
L_869310: /* 869310: cmp eax, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869313: jge 0x869439 */
  if ((sf == of)) goto L_869439;
L_869319: /* 869319: mov edx, dword ptr [edi + eax*4] */
  edx = R32((uint32_t)(edi + eax*4));
/* 86931c: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 86931f: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 869322: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 869325: xor eax, eax */
  eax = 0;
L_869327: /* 869327: cmp eax, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86932d: jge 0x869342 */
  if ((sf == of)) goto L_869342;
L_86932f: /* 86932f: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 869331: mov edi, eax */
  edi = eax;
/* 869333: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 869336: mov edi, dword ptr [edi + esi] */
  edi = R32((uint32_t)(edi + esi));
/* 869339: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86933b: jne 0x869370 */
  if (!zf) goto L_869370;
L_86933d: /* 86933d: mov ecx, eax */
  ecx = eax;
/* 86933f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_869342: /* 869342: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869345: jne 0x86941c */
  if (!zf) goto L_86941c;
L_86934b: /* 86934b: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 86934e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 869350: jle 0x869427 */
  if ((zf || sf != of)) goto L_869427;
L_869356: /* 869356: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 869359: mov eax, dword ptr [edx + 0x200] */
  eax = R32((uint32_t)(edx + 0x200u));
/* 86935f: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869362: jge 0x869373 */
  if ((sf == of)) goto L_869373;
L_869364: /* 869364: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 869367: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 869368: mov dword ptr [edx + 0x200], eax */
  W32((uint32_t)(edx + 0x200u), eax);
/* 86936e: jmp 0x8693d2 */
  goto L_8693d2;
L_869370: /* 869370: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 869371: jmp 0x869327 */
  goto L_869327;
L_869373: /* 869373: mov dword ptr [ebp - 0x2c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xffffffffu);
/* 86937a: mov edi, ecx */
  edi = ecx;
/* 86937c: xor esi, esi */
  esi = 0;
/* 86937e: mov edi, edi */
  edi = edi;
L_869380: /* 869380: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 869383: cmp esi, dword ptr [ecx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869389: jge 0x8693c7 */
  if ((sf == of)) goto L_8693c7;
L_86938b: /* 86938b: mov edx, esi */
  edx = esi;
/* 86938d: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 869390: mov eax, ecx */
  eax = ecx;
/* 869392: mov ecx, dword ptr [edx + eax] */
  ecx = R32((uint32_t)(edx + eax));
/* 869395: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x86939au); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 86939a: mov ebx, eax */
  ebx = eax;
/* 86939c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86939e: jne 0x8693b8 */
  if (!zf) goto L_8693b8;
L_8693a0: /* 8693a0: push 0x1de */
  { uint32_t v = 0x1deu; esp -= 4; W32(esp, v); }
/* 8693a5: push 0xae54a0 */
  { uint32_t v = 0xae54a0u; esp -= 4; W32(esp, v); }
/* 8693aa: push 0xae54b8 */
  { uint32_t v = 0xae54b8u; esp -= 4; W32(esp, v); }
/* 8693af: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8693b5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8693b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8693b8: /* 8693b8: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 8693bb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8693bd: jge 0x8693c4 */
  if ((sf == of)) goto L_8693c4;
L_8693bf: /* 8693bf: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 8693c2: mov edi, eax */
  edi = eax;
L_8693c4: /* 8693c4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8693c5: jmp 0x869380 */
  goto L_869380;
L_8693c7: /* 8693c7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8693ca: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8693cd: je 0x8693d2 */
  if (zf) goto L_8693d2;
L_8693cf: /* 8693cf: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_8693d2: /* 8693d2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8693d5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8693d8: je 0x869427 */
  if (zf) goto L_869427;
L_8693da: /* 8693da: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8693dd: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8693e0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8693e2: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8693e5: lea esi, [eax + ecx] */
  esi = (uint32_t)(eax + ecx);
/* 8693e8: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 8693ea: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8693ec: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x8693f2u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 8693f2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8693f5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8693f7: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8693fdu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8693fd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 869400: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 869403: xor eax, eax */
  eax = 0;
/* 869405: mov dword ptr [esi + 0xc], 0x60000000 */
  W32((uint32_t)(esi + 0xcu), 0x60000000u);
/* 86940c: mov dword ptr [esi + 0x10], 0xbfd66666 */
  W32((uint32_t)(esi + 0x10u), 0xbfd66666u);
/* 869413: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 869416: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 869419: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_86941c: /* 86941c: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 86941f: mov dword ptr [ecx + esi + 0x14], 1 */
  W32((uint32_t)(ecx + esi + 0x14u), 0x1u);
L_869427: /* 869427: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86942a: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86942d: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 869430: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 869431: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 869434: jmp 0x869310 */
  goto L_869310;
L_869439: /* 869439: mov eax, dword ptr [esi + 0x200] */
  eax = R32((uint32_t)(esi + 0x200u));
/* 86943f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 869440: xor edi, edi */
  edi = 0;
/* 869442: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 869443: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 869446: call 0x6c187f */
  esp -= 4; W32(esp, 0x86944bu); SPILL(); f_6c187f(); if (g_unwind) return; RELOAD();
/* 86944b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86944e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
L_869452: /* 869452: cmp edi, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869458: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 86945b: jge 0x86961b */
  if ((sf == of)) goto L_86961b;
L_869461: /* 869461: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 869464: mov esi, edi */
  esi = edi;
/* 869466: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 869469: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 86946c: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86946e: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x869473u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 869473: mov ebx, eax */
  ebx = eax;
/* 869475: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869477: jne 0x869491 */
  if (!zf) goto L_869491;
L_869479: /* 869479: push 0x207 */
  { uint32_t v = 0x207u; esp -= 4; W32(esp, v); }
/* 86947e: push 0xae54cc */
  { uint32_t v = 0xae54ccu; esp -= 4; W32(esp, v); }
/* 869483: push 0xae54e4 */
  { uint32_t v = 0xae54e4u; esp -= 4; W32(esp, v); }
/* 869488: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86948eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86948e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_869491: /* 869491: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 869494: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 869497: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 86949d: fsub qword ptr [0xa18288] */
  ST0 = ST0 - (F64((uint32_t)(0xa18288u)));
/* 8694a3: fcomp qword ptr [esi + 0xc] */
  fpu_com(ST0, F64((uint32_t)(esi + 0xcu)));
  FPOP();
/* 8694a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8694a8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8694ab: jne 0x8695e2 */
  if (!zf) goto L_8695e2;
L_8694b1: /* 8694b1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8694b4: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8694b7: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8694ba: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8694bd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8694bf: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 8694c2: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 8694c5: cmp byte ptr [eax + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8694c9: jne 0x869509 */
  if (!zf) goto L_869509;
L_8694cb: /* 8694cb: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 8694ce: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8694d1: fmul dword ptr [0xa110a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa110a4u)));
/* 8694d7: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 8694da: fmul dword ptr [0xa110a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa110a4u)));
/* 8694e0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8694e3: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 8694e6: fmul dword ptr [0xa110a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa110a4u)));
/* 8694ec: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8694ef: fsubr dword ptr [ebp + 0x18] */
  ST0 = (F32((uint32_t)(ebp + 0x18u))) - ST0;
/* 8694f2: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8694f5: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8694f8: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8694fb: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 8694fe: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 869501: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 869504: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 869507: jmp 0x86950c */
  goto L_86950c;
L_869509: /* 869509: lea eax, [ebx + 0x18] */
  eax = (uint32_t)(ebx + 0x18u);
L_86950c: /* 86950c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86950e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 869511: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 869514: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 869517: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 86951a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86951c: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 869522: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 869525: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 869528: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 869532: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 869535: je 0x8695c2 */
  if (zf) goto L_8695c2;
L_86953b: /* 86953b: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 869541: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869544: jne 0x8695bb */
  if (!zf) goto L_8695bb;
L_869546: /* 869546: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 869549: test byte ptr [eax + 0x80], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869550: je 0x8695bb */
  if (zf) goto L_8695bb;
L_869552: /* 869552: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 869554: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86955b: je 0x8695bb */
  if (zf) goto L_8695bb;
L_86955d: /* 86955d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 869560: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 869563: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 869566: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 86956c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86956e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 869571: mov edi, esp */
  edi = esp;
/* 869573: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 86957a: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86957d: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 86957f: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 869586: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 869589: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 86958c: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 869593: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 869596: push 0x304 */
  { uint32_t v = 0x304u; esp -= 4; W32(esp, v); }
/* 86959b: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 86959e: lea edi, [ebp - 0x78] */
  edi = (uint32_t)(ebp + 0xffffff88u);
/* 8695a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8695a2: lea edi, [ebp - 0x84] */
  edi = (uint32_t)(ebp + 0xffffff7cu);
/* 8695a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8695a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8695aa: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 8695b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8695b1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8695b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8695b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8695b9: je 0x8695c2 */
  if (zf) goto L_8695c2;
L_8695bb: /* 8695bb: mov eax, 1 */
  eax = 0x1u;
/* 8695c0: jmp 0x8695c4 */
  goto L_8695c4;
L_8695c2: /* 8695c2: xor eax, eax */
  eax = 0;
L_8695c4: /* 8695c4: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8695c7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8695ca: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8695cd: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8695d0: fmul dword ptr [0xa08928] */
  ST0 = ST0 * (F32((uint32_t)(0xa08928u)));
/* 8695d6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8695d9: fsubr qword ptr [edx + 0x138] */
  ST0 = (F64((uint32_t)(edx + 0x138u))) - ST0;
/* 8695df: fstp qword ptr [esi + 0xc] */
  WF64((uint32_t)(esi + 0xcu), ST0); FPOP();
L_8695e2: /* 8695e2: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8695e5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8695e6: jmp 0x869452 */
  goto L_869452;
L_86961b: /* 86961b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 86961e: movzx eax, byte ptr [edx + 0x2b1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2b1u)));
/* 869625: xor edi, edi */
  edi = 0;
/* 869627: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86962a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 86962d: mov dword ptr [ebp - 0x28], 8 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x8u);
/* 869634: jge 0x869639 */
  if ((sf == of)) goto L_869639;
L_869636: /* 869636: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_869639: /* 869639: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 86963c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
L_869640: /* 869640: cmp edi, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869646: jge 0x869724 */
  if ((sf == of)) goto L_869724;
L_86964c: /* 86964c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86964f: mov esi, edi */
  esi = edi;
/* 869651: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 869654: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 869657: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 869659: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x86965eu); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 86965e: mov ebx, eax */
  ebx = eax;
/* 869660: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869662: jne 0x86967c */
  if (!zf) goto L_86967c;
L_869664: /* 869664: push 0x21f */
  { uint32_t v = 0x21fu; esp -= 4; W32(esp, v); }
/* 869669: push 0xae54fc */
  { uint32_t v = 0xae54fcu; esp -= 4; W32(esp, v); }
/* 86966e: push 0xae5514 */
  { uint32_t v = 0xae5514u; esp -= 4; W32(esp, v); }
/* 869673: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x869679u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 869679: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86967c: /* 86967c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86967f: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869682: jge 0x86971b */
  if ((sf == of)) goto L_86971b;
L_869688: /* 869688: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 86968b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86968d: jne 0x86969a */
  if (!zf) goto L_86969a;
L_86968f: /* 86968f: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 869692: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869694: je 0x86971b */
  if (zf) goto L_86971b;
L_86969a: /* 86969a: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86969d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86969f: je 0x8696a9 */
  if (zf) goto L_8696a9;
L_8696a1: /* 8696a1: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8696a7: jmp 0x8696af */
  goto L_8696af;
L_8696a9: /* 8696a9: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8696af: /* 8696af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8696b1: je 0x8696bb */
  if (zf) goto L_8696bb;
L_8696b3: /* 8696b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8696b9: jmp 0x8696c1 */
  goto L_8696c1;
L_8696bb: /* 8696bb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8696c1: /* 8696c1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8696c4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8696c7: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 8696cd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8696cf: fsub qword ptr [esi + 0xc] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0xcu)));
/* 8696d2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8696d4: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8696d9: fmul qword ptr [0xa18250] */
  ST0 = ST0 * (F64((uint32_t)(0xa18250u)));
/* 8696df: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8696e1: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8696e3: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8696e5: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8696e7: fstp dword ptr [ebx + 0x40] */
  WF32((uint32_t)(ebx + 0x40u), ST0); FPOP();
/* 8696ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8696ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8696f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8696f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8696f4: je 0x86970d */
  if (zf) goto L_86970d;
L_8696f6: /* 8696f6: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8696f9: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8696fc: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8696fe: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 869701: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 869704: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 869707: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 869708: jmp 0x869640 */
  goto L_869640;
L_86970d: /* 86970d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 869710: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 869711: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 869718: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_86971b: /* 86971b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86971e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86971f: jmp 0x869640 */
  goto L_869640;
L_869724: /* 869724: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 869727: call dword ptr [0xcfaa68] */
  esp -= 4; W32(esp, 0x86972du); SPILL(); f_4e1253(); if (g_unwind) return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */ RELOAD();
/* 86972d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 869730: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 869733: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 869736: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 86973c: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 86973f: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* 869742: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869744: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86974b: je 0x869973 */
  if (zf) goto L_869973;
L_869751: /* 869751: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 869754: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 869759: mov ecx, ebx */
  ecx = ebx;
/* 86975b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x869761u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 869761: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869763: je 0x869973 */
  if (zf) goto L_869973;
L_869769: /* 869769: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 86976c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86976e: je 0x869973 */
  if (zf) goto L_869973;
L_869774: /* 869774: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 869777: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869779: je 0x869973 */
  if (zf) goto L_869973;
L_86977f: /* 86977f: cmp dword ptr [eax + 0x14c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869785: jne 0x869973 */
  if (!zf) goto L_869973;
L_86978b: /* 86978b: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 86978e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 869791: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 869794: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x86979au); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 86979a: mov ecx, ebx */
  ecx = ebx;
/* 86979c: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8697a0: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8697a6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8697a6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8697a9: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8697ac: fld dword ptr [edx + 0xb4] */
  { double v = F32((uint32_t)(edx + 0xb4u)); FPUSH(v); }
/* 8697b2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8697b5: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8697b8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8697bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8697bc: push 0xae5530 */
  { uint32_t v = 0xae5530u; esp -= 4; W32(esp, v); }
/* 8697c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8697c2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8697c8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8697c8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8697cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8697cc: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8697cf: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8697d3: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8697d9u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8697d9: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8697dc: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8697e0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8697e6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8697e6: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8697e9: fadd dword ptr [0xa14ac4] */
  ST0 = ST0 + (F32((uint32_t)(0xa14ac4u)));
/* 8697ef: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8697f2: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8697f6: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8697fa: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8697fd: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 869801: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 869805: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x86980bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 86980b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86980e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86980f: push 0xae557c */
  { uint32_t v = 0xae557cu; esp -= 4; W32(esp, v); }
/* 869814: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 869816: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 869817: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 869818: call 0x6c5e43 */
  esp -= 4; W32(esp, 0x86981du); SPILL(); f_6c5e43(); if (g_unwind) return; RELOAD();
/* 86981d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 869820: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 869826: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 869829: xor ebx, ebx */
  ebx = 0;
/* 86982b: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 86982e: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
L_869831: /* 869831: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 869834: cmp eax, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86983a: jge 0x869966 */
  if ((sf == of)) goto L_869966;
L_869840: /* 869840: mov edi, eax */
  edi = eax;
/* 869842: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 869845: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 869848: mov ecx, dword ptr [edi + eax] */
  ecx = R32((uint32_t)(edi + eax));
/* 86984b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86984d: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x869852u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 869852: mov esi, eax */
  esi = eax;
/* 869854: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869857: je 0x869956 */
  if (zf) goto L_869956;
L_86985d: /* 86985d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 869860: fld dword ptr [eax + 0xa8] */
  { double v = F32((uint32_t)(eax + 0xa8u)); FPUSH(v); }
/* 869866: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 869869: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 86986c: fld dword ptr [eax + 0xac] */
  { double v = F32((uint32_t)(eax + 0xacu)); FPUSH(v); }
/* 869872: fsub dword ptr [esi + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1cu)));
/* 869875: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 86987b: fsub dword ptr [esi + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x20u)));
/* 86987e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 869880: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 869882: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 869884: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 869886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 869888: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86988a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86988c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86988e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 869891: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 869893: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 869895: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 869897: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x86989du); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 86989d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86989f: fst qword ptr [ebp - 0x48] */
  WF64((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 8698a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8698a5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8698a8: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8698aeu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8698ae: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 8698b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8698b3: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 8698b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8698b7: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 8698ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8698bb: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 8698be: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8698c1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8698c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8698c5: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8698c8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8698cb: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8698cf: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 8698d2: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8698d6: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8698d9: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8698dd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8698e0: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8698e4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8698e7: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8698eb: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 8698ee: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8698f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8698f2: movzx eax, byte ptr [ecx + 0x29] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x29u)));
/* 8698f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8698f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8698f8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8698fb: push 0xae5588 */
  { uint32_t v = 0xae5588u; esp -= 4; W32(esp, v); }
/* 869900: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 869901: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x869907u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 869907: add esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86990a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86990b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 86990e: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 869912: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x869918u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 869918: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 86991b: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 86991f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x869925u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 869925: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 869928: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86992c: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 869930: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 869934: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 869938: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x86993eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 86993e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 869941: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 869942: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 869945: push 0xae5644 */
  { uint32_t v = 0xae5644u; esp -= 4; W32(esp, v); }
/* 86994a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86994c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86994d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86994e: call 0x6c5e43 */
  esp -= 4; W32(esp, 0x869953u); SPILL(); f_6c5e43(); if (g_unwind) return; RELOAD();
/* 869953: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_869956: /* 869956: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 869959: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86995c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86995d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86995e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 869961: jmp 0x869831 */
  goto L_869831;
L_869966: /* 869966: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 869969: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86996d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x869973u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_869973: /* 869973: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 869979: mov edx, dword ptr [0xce839c] */
  edx = R32((uint32_t)(0xce839cu));
/* 86997f: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 869982: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 869984: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 869986: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 869989: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86998b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 86998e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86998f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 869991: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 869994: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 869995: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86999c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86999d: mov esp, ebp */
  esp = ebp;
/* 86999f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8699a0: ret  */
  esp += 4; SPILL(); return;
}

void f_8695eb(void) {
  LOAD_REGS();
L_8695eb: /* 8695eb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8695ee: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8695f3: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8695f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8695f7: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8695fa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8695ffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8695ff(); return;
}

void f_8695ff(void) {
  LOAD_REGS();
L_8695ff: /* 8695ff: push 0xa1825c */
  { uint32_t v = 0xa1825cu; esp -= 4; W32(esp, v); }
/* 869604: push 0xae54f4 */
  { uint32_t v = 0xae54f4u; esp -= 4; W32(esp, v); }
/* 869609: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86960fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86960f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 869612: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 869614: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 869616: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86961bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 86961b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 86961e: movzx eax, byte ptr [edx + 0x2b1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2b1u)));
/* 869625: xor edi, edi */
  edi = 0;
/* 869627: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86962a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 86962d: mov dword ptr [ebp - 0x28], 8 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x8u);
/* 869634: jge 0x869639 */
  if ((sf == of)) goto L_869639;
L_869636: /* 869636: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_869639: /* 869639: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 86963c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
L_869640: /* 869640: cmp edi, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869646: jge 0x869724 */
  if ((sf == of)) goto L_869724;
L_86964c: /* 86964c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86964f: mov esi, edi */
  esi = edi;
/* 869651: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 869654: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 869657: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 869659: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x86965eu); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 86965e: mov ebx, eax */
  ebx = eax;
/* 869660: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869662: jne 0x86967c */
  if (!zf) goto L_86967c;
L_869664: /* 869664: push 0x21f */
  { uint32_t v = 0x21fu; esp -= 4; W32(esp, v); }
/* 869669: push 0xae54fc */
  { uint32_t v = 0xae54fcu; esp -= 4; W32(esp, v); }
/* 86966e: push 0xae5514 */
  { uint32_t v = 0xae5514u; esp -= 4; W32(esp, v); }
/* 869673: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x869679u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 869679: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86967c: /* 86967c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86967f: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869682: jge 0x86971b */
  if ((sf == of)) goto L_86971b;
L_869688: /* 869688: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 86968b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86968d: jne 0x86969a */
  if (!zf) goto L_86969a;
L_86968f: /* 86968f: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 869692: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869694: je 0x86971b */
  if (zf) goto L_86971b;
L_86969a: /* 86969a: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86969d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86969f: je 0x8696a9 */
  if (zf) goto L_8696a9;
L_8696a1: /* 8696a1: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8696a7: jmp 0x8696af */
  goto L_8696af;
L_8696a9: /* 8696a9: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8696af: /* 8696af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8696b1: je 0x8696bb */
  if (zf) goto L_8696bb;
L_8696b3: /* 8696b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8696b9: jmp 0x8696c1 */
  goto L_8696c1;
L_8696bb: /* 8696bb: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8696c1: /* 8696c1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8696c4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8696c7: fld qword ptr [edx + 0x138] */
  { double v = F64((uint32_t)(edx + 0x138u)); FPUSH(v); }
/* 8696cd: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8696cf: fsub qword ptr [esi + 0xc] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0xcu)));
/* 8696d2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8696d4: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8696d9: fmul qword ptr [0xa18250] */
  ST0 = ST0 * (F64((uint32_t)(0xa18250u)));
/* 8696df: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8696e1: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8696e3: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8696e5: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8696e7: fstp dword ptr [ebx + 0x40] */
  WF32((uint32_t)(ebx + 0x40u), ST0); FPOP();
/* 8696ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8696ec: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8696f2u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8696f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8696f4: je 0x86970d */
  if (zf) goto L_86970d;
L_8696f6: /* 8696f6: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8696f9: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8696fc: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8696fe: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 869701: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 869704: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 869707: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 869708: jmp 0x869640 */
  goto L_869640;
L_86970d: /* 86970d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 869710: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 869711: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 869718: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_86971b: /* 86971b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86971e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 86971f: jmp 0x869640 */
  goto L_869640;
L_869724: /* 869724: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 869727: call dword ptr [0xcfaa68] */
  esp -= 4; W32(esp, 0x86972du); SPILL(); f_4e1253(); if (g_unwind) return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */ RELOAD();
/* 86972d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 869730: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 869733: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 869736: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 86973c: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 86973f: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* 869742: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869744: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86974b: je 0x869973 */
  if (zf) goto L_869973;
L_869751: /* 869751: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 869754: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 869759: mov ecx, ebx */
  ecx = ebx;
/* 86975b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x869761u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 869761: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869763: je 0x869973 */
  if (zf) goto L_869973;
L_869769: /* 869769: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 86976c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86976e: je 0x869973 */
  if (zf) goto L_869973;
L_869774: /* 869774: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 869777: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869779: je 0x869973 */
  if (zf) goto L_869973;
L_86977f: /* 86977f: cmp dword ptr [eax + 0x14c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869785: jne 0x869973 */
  if (!zf) goto L_869973;
L_86978b: /* 86978b: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 86978e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 869791: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 869794: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x86979au); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 86979a: mov ecx, ebx */
  ecx = ebx;
/* 86979c: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8697a0: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8697a6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8697a6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8697a9: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8697ac: fld dword ptr [edx + 0xb4] */
  { double v = F32((uint32_t)(edx + 0xb4u)); FPUSH(v); }
/* 8697b2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8697b5: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8697b8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8697bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8697bc: push 0xae5530 */
  { uint32_t v = 0xae5530u; esp -= 4; W32(esp, v); }
/* 8697c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8697c2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8697c8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8697c8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8697cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8697cc: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8697cf: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8697d3: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8697d9u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8697d9: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8697dc: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8697e0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8697e6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8697e6: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 8697e9: fadd dword ptr [0xa14ac4] */
  ST0 = ST0 + (F32((uint32_t)(0xa14ac4u)));
/* 8697ef: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8697f2: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8697f6: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8697fa: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 8697fd: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 869801: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 869805: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x86980bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 86980b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86980e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86980f: push 0xae557c */
  { uint32_t v = 0xae557cu; esp -= 4; W32(esp, v); }
/* 869814: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 869816: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 869817: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 869818: call 0x6c5e43 */
  esp -= 4; W32(esp, 0x86981du); SPILL(); f_6c5e43(); if (g_unwind) return; RELOAD();
/* 86981d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 869820: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 869826: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 869829: xor ebx, ebx */
  ebx = 0;
/* 86982b: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 86982e: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
L_869831: /* 869831: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 869834: cmp eax, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86983a: jge 0x869966 */
  if ((sf == of)) goto L_869966;
L_869840: /* 869840: mov edi, eax */
  edi = eax;
/* 869842: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 869845: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 869848: mov ecx, dword ptr [edi + eax] */
  ecx = R32((uint32_t)(edi + eax));
/* 86984b: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86984d: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x869852u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 869852: mov esi, eax */
  esi = eax;
/* 869854: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869857: je 0x869956 */
  if (zf) goto L_869956;
L_86985d: /* 86985d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 869860: fld dword ptr [eax + 0xa8] */
  { double v = F32((uint32_t)(eax + 0xa8u)); FPUSH(v); }
/* 869866: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 869869: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 86986c: fld dword ptr [eax + 0xac] */
  { double v = F32((uint32_t)(eax + 0xacu)); FPUSH(v); }
/* 869872: fsub dword ptr [esi + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1cu)));
/* 869875: fld dword ptr [eax + 0xb0] */
  { double v = F32((uint32_t)(eax + 0xb0u)); FPUSH(v); }
/* 86987b: fsub dword ptr [esi + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x20u)));
/* 86987e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 869880: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 869882: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 869884: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 869886: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 869888: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86988a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86988c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86988e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 869891: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 869893: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 869895: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 869897: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x86989du); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 86989d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86989f: fst qword ptr [ebp - 0x48] */
  WF64((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 8698a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8698a5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8698a8: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8698aeu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8698ae: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 8698b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8698b3: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 8698b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8698b7: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 8698ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8698bb: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 8698be: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8698c1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8698c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8698c5: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8698c8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8698cb: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8698cf: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 8698d2: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8698d6: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8698d9: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8698dd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8698e0: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8698e4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8698e7: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8698eb: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 8698ee: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8698f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8698f2: movzx eax, byte ptr [ecx + 0x29] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x29u)));
/* 8698f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8698f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8698f8: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8698fb: push 0xae5588 */
  { uint32_t v = 0xae5588u; esp -= 4; W32(esp, v); }
/* 869900: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 869901: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x869907u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 869907: add esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86990a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86990b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 86990e: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 869912: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x869918u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 869918: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 86991b: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 86991f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x869925u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 869925: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 869928: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86992c: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 869930: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 869934: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 869938: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x86993eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 86993e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 869941: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 869942: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 869945: push 0xae5644 */
  { uint32_t v = 0xae5644u; esp -= 4; W32(esp, v); }
/* 86994a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86994c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86994d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86994e: call 0x6c5e43 */
  esp -= 4; W32(esp, 0x869953u); SPILL(); f_6c5e43(); if (g_unwind) return; RELOAD();
/* 869953: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_869956: /* 869956: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 869959: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86995c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86995d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86995e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 869961: jmp 0x869831 */
  goto L_869831;
L_869966: /* 869966: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 869969: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86996d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x869973u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_869973: /* 869973: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 869979: mov edx, dword ptr [0xce839c] */
  edx = R32((uint32_t)(0xce839cu));
/* 86997f: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 869982: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 869984: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 869986: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 869989: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86998b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 86998e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86998f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 869991: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 869994: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 869995: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86999c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86999d: mov esp, ebp */
  esp = ebp;
/* 86999f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8699a0: ret  */
  esp += 4; SPILL(); return;
}

void f_8699a1(void) {
  LOAD_REGS();
L_8699a1: /* 8699a1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8699a4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8699a9: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8699ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8699ad: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8699b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8699b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8699b5(); return;
}

void f_8699b5(void) {
  LOAD_REGS();
L_8699b5: /* 8699b5: push 0xa18218 */
  { uint32_t v = 0xa18218u; esp -= 4; W32(esp, v); }
/* 8699ba: push 0xae5524 */
  { uint32_t v = 0xae5524u; esp -= 4; W32(esp, v); }
/* 8699bf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8699c5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8699c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8699c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8699ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8699cc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8699d1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8699d1(); return;
}

void f_8699d1(void) {
  LOAD_REGS();
L_8699d1: /* 8699d1: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8699d4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8699d9: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 8699dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8699dd: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 8699e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8699e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8699e5(); return;
}

void f_8699e5(void) {
  LOAD_REGS();
L_8699e5: /* 8699e5: push 0xa181f4 */
  { uint32_t v = 0xa181f4u; esp -= 4; W32(esp, v); }
/* 8699ea: push 0xae54c4 */
  { uint32_t v = 0xae54c4u; esp -= 4; W32(esp, v); }
/* 8699ef: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8699f5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8699f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8699f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8699fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8699fc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x869a01u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_869a01(); return;
}

void f_869a01(void) {
  LOAD_REGS();
L_869a01: /* 869a01: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 869a07: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 869a0c: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 869a0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 869a10: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 869a13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x869a18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_869a18(); return;
}

void f_869a18(void) {
  LOAD_REGS();
L_869a18: /* 869a18: push 0xa181c8 */
  { uint32_t v = 0xa181c8u; esp -= 4; W32(esp, v); }
/* 869a1d: push 0xae564c */
  { uint32_t v = 0xae564cu; esp -= 4; W32(esp, v); }
/* 869a22: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x869a28u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 869a28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 869a2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 869a2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 869a2f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x869a34u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_869a34: guest_badaddr(0x869a34); return;
}

void f_869c90(void) {
  LOAD_REGS();
L_869c90: /* 869c90: sub esp, 0x4a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4a0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 869c96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 869c97: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 869c98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 869c99: mov esi, dword ptr [esp + 0x4b4] */
  esi = R32((uint32_t)(esp + 0x4b4u));
/* 869ca0: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 869ca2: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* 869ca8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 869ca9: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 869caf: xor edi, edi */
  edi = 0;
/* 869cb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 869cb2: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 869cb6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 869cba: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 869cbe: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 869cc2: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 869cc6: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x869cccu); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 869ccc: cmp byte ptr [ebx + 0x51], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x51u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 869cd0: jne 0x869e61 */
  if (!zf) goto L_869e61;
L_869cd6: /* 869cd6: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 869cdc: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869cde: je 0x869e61 */
  if (zf) goto L_869e61;
L_869ce4: /* 869ce4: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 869ce9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x869cefu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 869cef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869cf1: je 0x869e61 */
  if (zf) goto L_869e61;
L_869cf7: /* 869cf7: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 869cfd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 869cff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 869d00: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x869d06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 869d06: mov ebp, eax */
  ebp = eax;
/* 869d08: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869d0a: je 0x869d1d */
  if (zf) goto L_869d1d;
L_869d0c: /* 869d0c: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 869d11: mov ecx, ebp */
  ecx = ebp;
/* 869d13: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x869d19u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 869d19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869d1b: jne 0x869d37 */
  if (!zf) goto L_869d37;
L_869d1d: /* 869d1d: push 0x278 */
  { uint32_t v = 0x278u; esp -= 4; W32(esp, v); }
/* 869d22: push 0xae5654 */
  { uint32_t v = 0xae5654u; esp -= 4; W32(esp, v); }
/* 869d27: push 0xae566c */
  { uint32_t v = 0xae566cu; esp -= 4; W32(esp, v); }
/* 869d2c: xor ebp, ebp */
  ebp = 0;
/* 869d2e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x869d34u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 869d34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_869d37: /* 869d37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 869d39: lea eax, [esp + 0x84] */
  eax = (uint32_t)(esp + 0x84u);
/* 869d40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 869d41: mov ecx, ebp */
  ecx = ebp;
/* 869d43: call 0x6c5060 */
  esp -= 4; W32(esp, 0x869d48u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 869d48: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 869d4a: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 869d50: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 869d54: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 869d58: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 869d5b: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 869d61: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 869d65: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 869d68: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 869d6c: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 869d72: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 869d76: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 869d7a: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 869d7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 869d7f: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 869d83: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 869d87: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* 869d8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 869d8c: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 869d90: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 869d94: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 869d9c: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x869da2u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 869da2: mov eax, dword ptr [0xcfab30] */
  eax = R32((uint32_t)(0xcfab30u));
/* 869da7: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869daa: je 0x869e61 */
  if (zf) goto L_869e61;
L_869db0: /* 869db0: add esi, 0x8c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 869db6: mov ecx, 7 */
  ecx = 0x7u;
/* 869dbb: lea edi, [esp + 0x54] */
  edi = (uint32_t)(esp + 0x54u);
/* 869dbf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 869dc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 869dc3: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 869dca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 869dcb: mov ecx, ebp */
  ecx = ebp;
/* 869dcd: call 0x6c5060 */
  esp -= 4; W32(esp, 0x869dd2u); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 869dd2: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 869dd6: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 869dd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 869dda: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 869de0: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 869de4: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 869de7: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 869ded: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 869def: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 869df5: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 869df9: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 869dfd: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 869e01: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x869e07u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 869e07: mov edi, dword ptr [esp + 0x4b4] */
  edi = R32((uint32_t)(esp + 0x4b4u));
/* 869e0e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 869e11: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 869e13: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 869e17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 869e18: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x869e1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 869e1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869e1d: je 0x86a341 */
  if (zf) goto L_86a341;
L_869e23: /* 869e23: mov esi, dword ptr [esp + 0x4b8] */
  esi = R32((uint32_t)(esp + 0x4b8u));
L_869e2a: /* 869e2a: cmp byte ptr [ebx + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 869e2e: jne 0x869e47 */
  if (!zf) goto L_869e47;
L_869e30: /* 869e30: test byte ptr [ebx + 0x80], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x80u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869e37: je 0x869e47 */
  if (zf) goto L_869e47;
L_869e39: /* 869e39: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 869e3d: fmul dword ptr [0xa182bc] */
  ST0 = ST0 * (F32((uint32_t)(0xa182bcu)));
/* 869e43: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
L_869e47: /* 869e47: mov al, byte ptr [ebx + 0x86] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x86u))) & 0xffu);
/* 869e4d: xor ebp, ebp */
  ebp = 0;
/* 869e4f: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869e51: je 0x869e6a */
  if (zf) goto L_869e6a;
L_869e53: /* 869e53: mov ecx, dword ptr [ebx + 0x5c] */
  ecx = R32((uint32_t)(ebx + 0x5cu));
/* 869e56: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869e58: je 0x869e6a */
  if (zf) goto L_869e6a;
L_869e5a: /* 869e5a: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x869e5fu); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 869e5f: jmp 0x869e6c */
  goto L_869e6c;
L_869e61: /* 869e61: mov edi, dword ptr [esp + 0x4b4] */
  edi = R32((uint32_t)(esp + 0x4b4u));
/* 869e68: jmp 0x869e2a */
  goto L_869e2a;
L_869e6a: /* 869e6a: mov eax, ebx */
  eax = ebx;
L_869e6c: /* 869e6c: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 869e72: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869e75: jne 0x86a276 */
  if (!zf) goto L_86a276;
L_869e7b: /* 869e7b: cmp byte ptr [ebx + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 869e7f: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 869e83: jne 0x869eca */
  if (!zf) goto L_869eca;
L_869e85: /* 869e85: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 869e8a: mov ecx, ebx */
  ecx = ebx;
/* 869e8c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x869e92u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 869e92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869e94: je 0x869eb2 */
  if (zf) goto L_869eb2;
L_869e96: /* 869e96: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 869e9b: mov ecx, ebx */
  ecx = ebx;
/* 869e9d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x869ea3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 869ea3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 869ea5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 869ea7: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 869ea9: test byte ptr [eax + 0x354], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x354u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869eb0: je 0x869ec0 */
  if (zf) goto L_869ec0;
L_869eb2: /* 869eb2: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 869eb8: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869eba: je 0x869eca */
  if (zf) goto L_869eca;
L_869ebc: /* 869ebc: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869ebe: jne 0x869eca */
  if (!zf) goto L_869eca;
L_869ec0: /* 869ec0: mov dword ptr [esp + 0x50], 1 */
  W32((uint32_t)(esp + 0x50u), 0x1u);
/* 869ec8: jmp 0x869ece */
  goto L_869ece;
L_869eca: /* 869eca: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
L_869ece: /* 869ece: cmp dword ptr [ebx + 0xdc], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xdcu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869ed4: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 869ed8: jle 0x86a276 */
  if ((zf || sf != of)) goto L_86a276;
L_869ede: /* 869ede: jmp 0x869ef0 */
  goto L_869ef0;
L_869ee0: /* 869ee0: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 869ee4: jmp 0x869ef0 */
  goto L_869ef0;
L_869ef0: /* 869ef0: mov eax, dword ptr [ebx + 0xd8] */
  eax = R32((uint32_t)(ebx + 0xd8u));
/* 869ef6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 869efa: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 869efd: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 869f00: mov ecx, dword ptr [eax + 0xc0] */
  ecx = R32((uint32_t)(eax + 0xc0u));
/* 869f06: mov eax, dword ptr [0xce839c] */
  eax = R32((uint32_t)(0xce839cu));
/* 869f0b: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 869f0e: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 869f11: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 869f17: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 869f1b: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 869f1f: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 869f22: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 869f24: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 869f26: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 869f29: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869f2c: je 0x869f3c */
  if (zf) goto L_869f3c;
L_869f2e: /* 869f2e: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 869f31: mov edx, dword ptr [ecx + 0xcc] */
  edx = R32((uint32_t)(ecx + 0xccu));
/* 869f37: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 869f3a: jmp 0x869f3e */
  goto L_869f3e;
L_869f3c: /* 869f3c: xor ebx, ebx */
  ebx = 0;
L_869f3e: /* 869f3e: mov eax, dword ptr [edi + 0x330] */
  eax = R32((uint32_t)(edi + 0x330u));
/* 869f44: mov ebp, dword ptr [eax + esi*4] */
  ebp = R32((uint32_t)(eax + esi*4));
/* 869f47: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 869f4b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869f4e: mov ecx, eax */
  ecx = eax;
/* 869f50: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 869f54: jge 0x86a09b */
  if ((sf == of)) goto L_86a09b;
L_869f5a: /* 869f5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_869f60: /* 869f60: cmp dword ptr [esp + 0x18], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869f68: jge 0x86a085 */
  if ((sf == of)) goto L_86a085;
L_869f6e: /* 869f6e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869f70: jne 0x869f7c */
  if (!zf) goto L_869f7c;
L_869f72: /* 869f72: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 869f76: cmp dword ptr [ecx + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869f7a: jmp 0x869f94 */
  goto L_869f94;
L_869f7c: /* 869f7c: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869f7f: jne 0x869fa0 */
  if (!zf) goto L_869fa0;
L_869f81: /* 869f81: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869f83: je 0x86a085 */
  if (zf) goto L_86a085;
L_869f89: /* 869f89: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 869f8d: test byte ptr [edx + 0x80], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x80u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
L_869f94: /* 869f94: je 0x86a085 */
  if (zf) goto L_86a085;
L_869f9a: /* 869f9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_869fa0: /* 869fa0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 869fa4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869fa6: jne 0x869fc0 */
  if (!zf) goto L_869fc0;
L_869fa8: /* 869fa8: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 869faa: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 869fad: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869faf: je 0x86a07e */
  if (zf) goto L_86a07e;
L_869fb5: /* 869fb5: mov ecx, edi */
  ecx = edi;
/* 869fb7: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x869fbcu); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 869fbc: mov esi, eax */
  esi = eax;
/* 869fbe: jmp 0x869fd0 */
  goto L_869fd0;
L_869fc0: /* 869fc0: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 869fc3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 869fc6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869fc8: je 0x86a07e */
  if (zf) goto L_86a07e;
L_869fce: /* 869fce: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
L_869fd0: /* 869fd0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869fd2: je 0x869fa0 */
  if (zf) goto L_869fa0;
L_869fd4: /* 869fd4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 869fd8: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 869fde: xor eax, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 869fe4: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869fe6: mov dword ptr [esp + 0x34], 1 */
  W32((uint32_t)(esp + 0x34u), 0x1u);
/* 869fee: jne 0x869fa0 */
  if (!zf) goto L_869fa0;
L_869ff0: /* 869ff0: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 869ff3: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 869ff7: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 869ffb: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 869fff: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 86a002: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 86a006: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 86a00a: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 86a00d: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 86a011: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 86a015: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86a01bu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86a01b: cmp byte ptr [edi + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86a01f: je 0x86a041 */
  if (zf) goto L_86a041;
L_86a021: /* 86a021: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 86a025: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 86a028: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 86a02a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 86a02c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86a02e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 86a030: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86a032: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86a034: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86a036: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a039: je 0x869fa0 */
  if (zf) goto L_869fa0;
L_86a03f: /* 86a03f: jmp 0x86a043 */
  goto L_86a043;
L_86a041: /* 86a041: fstp st(0) */
  STI(0) = ST0; FPOP();
L_86a043: /* 86a043: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 86a047: xor eax, eax */
  eax = 0;
/* 86a049: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 86a04b: jle 0x86a066 */
  if ((zf || sf != of)) goto L_86a066;
L_86a04d: /* 86a04d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86a050: /* 86a050: cmp dword ptr [esp + eax*4 + 0xb0], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0xb0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a057: je 0x869fa0 */
  if (zf) goto L_869fa0;
L_86a05d: /* 86a05d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 86a061: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86a062: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a064: jl 0x86a050 */
  if ((sf != of)) goto L_86a050;
L_86a066: /* 86a066: mov dword ptr [esp + ecx*4 + 0xb0], esi */
  W32((uint32_t)(esp + ecx*4 + 0xb0u), esi);
/* 86a06d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86a06e: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a074: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 86a078: jl 0x869fa0 */
  if ((sf != of)) goto L_869fa0;
L_86a07e: /* 86a07e: mov edi, dword ptr [esp + 0x4b4] */
  edi = R32((uint32_t)(esp + 0x4b4u));
L_86a085: /* 86a085: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 86a089: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86a08a: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a08d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 86a091: jl 0x869f60 */
  if ((sf != of)) goto L_869f60;
L_86a097: /* 86a097: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_86a09b: /* 86a09b: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 86a0a1: mov eax, dword ptr [0xce839c] */
  eax = R32((uint32_t)(0xce839cu));
/* 86a0a6: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 86a0a9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86a0ab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a0ad: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86a0b0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86a0b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86a0b4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 86a0b8: test dword ptr [ecx + 0x80], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a0c2: je 0x86a21c */
  if (zf) goto L_86a21c;
L_86a0c8: /* 86a0c8: mov edx, dword ptr [edi + 0x334] */
  edx = R32((uint32_t)(edi + 0x334u));
/* 86a0ce: mov ebp, dword ptr [edx + esi*4] */
  ebp = R32((uint32_t)(edx + esi*4));
/* 86a0d1: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a0d3: je 0x86a21c */
  if (zf) goto L_86a21c;
L_86a0d9: /* 86a0d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86a0e0: /* 86a0e0: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 86a0e3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a0e5: je 0x86a215 */
  if (zf) goto L_86a215;
L_86a0eb: /* 86a0eb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86a0ed: mov eax, dword ptr [eax + 0x34c] */
  eax = R32((uint32_t)(eax + 0x34cu));
/* 86a0f3: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a0f5: mov dword ptr [esp + 0x34], 1 */
  W32((uint32_t)(esp + 0x34u), 0x1u);
/* 86a0fd: jne 0x86a10d */
  if (!zf) goto L_86a10d;
L_86a0ff: /* 86a0ff: mov edx, dword ptr [ecx + 0xd0] */
  edx = R32((uint32_t)(ecx + 0xd0u));
/* 86a105: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a107: jne 0x86a208 */
  if (!zf) goto L_86a208;
L_86a10d: /* 86a10d: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a10f: jne 0x86a11c */
  if (!zf) goto L_86a11c;
L_86a111: /* 86a111: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 86a114: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a116: jne 0x86a208 */
  if (!zf) goto L_86a208;
L_86a11c: /* 86a11c: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 86a120: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a122: mov eax, ebx */
  eax = ebx;
/* 86a124: je 0x86a135 */
  if (zf) goto L_86a135;
L_86a126: /* 86a126: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a128: je 0x86a208 */
  if (zf) goto L_86a208;
L_86a12e: /* 86a12e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86a131: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a133: jne 0x86a126 */
  if (!zf) goto L_86a126;
L_86a135: /* 86a135: mov esi, dword ptr [esp + 0x4b8] */
  esi = R32((uint32_t)(esp + 0x4b8u));
/* 86a13c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 86a140: add esi, 0x8c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86a146: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a147: mov ecx, esi */
  ecx = esi;
/* 86a149: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x86a14fu); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86a14f: lea edx, [esp + 0x70] */
  edx = (uint32_t)(esp + 0x70u);
/* 86a153: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a154: mov ecx, esi */
  ecx = esi;
/* 86a156: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x86a15cu); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86a15c: xor edx, edx */
  edx = 0;
/* 86a15e: lea ecx, [edi + 0xc4] */
  ecx = (uint32_t)(edi + 0xc4u);
L_86a164: /* 86a164: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 86a168: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 86a16d: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 86a170: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 86a174: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 86a178: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 86a17c: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 86a17f: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 86a181: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 86a185: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 86a189: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 86a18d: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 86a191: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 86a193: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 86a195: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 86a199: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 86a19d: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 86a1a1: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 86a1a5: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 86a1a8: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 86a1aa: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 86a1ae: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 86a1b2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 86a1b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a1b6: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 86a1ba: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 86a1bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a1bf: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 86a1c2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 86a1c6: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 86a1ca: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 86a1ce: fchs  */
  ST0 = -ST0;
/* 86a1d0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86a1d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86a1d4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a1d7: je 0x86a208 */
  if (zf) goto L_86a208;
L_86a1d9: /* 86a1d9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86a1da: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86a1dd: cmp edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a1e0: jl 0x86a164 */
  if ((sf != of)) goto L_86a164;
L_86a1e2: /* 86a1e2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a1e4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a1e6: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86a1eb: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86a1f1u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86a1f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a1f3: je 0x86a200 */
  if (zf) goto L_86a200;
L_86a1f5: /* 86a1f5: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86a1f7: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 86a1fa: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 86a1fe: jmp 0x86a208 */
  goto L_86a208;
L_86a200: /* 86a200: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
L_86a208: /* 86a208: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ebp = r;
  }
/* 86a20b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 86a20f: jne 0x86a0e0 */
  if (!zf) goto L_86a0e0;
L_86a215: /* 86a215: mov edi, dword ptr [esp + 0x4b4] */
  edi = R32((uint32_t)(esp + 0x4b4u));
L_86a21c: /* 86a21c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 86a220: mov edx, dword ptr [ecx + 0xdc] */
  edx = R32((uint32_t)(ecx + 0xdcu));
/* 86a226: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86a227: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a229: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 86a22d: jl 0x869ee0 */
  if ((sf != of)) goto L_869ee0;
L_86a233: /* 86a233: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 86a237: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a239: je 0x86a26b */
  if (zf) goto L_86a26b;
L_86a23b: /* 86a23b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a23c: lea eax, [esp + 0xb4] */
  eax = (uint32_t)(esp + 0xb4u);
/* 86a243: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a244: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86a247: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 86a24b: mov ecx, esp */
  ecx = esp;
/* 86a24d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a24e: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x86a254u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 86a254: mov eax, dword ptr [esp + 0x4d0] */
  eax = R32((uint32_t)(esp + 0x4d0u));
/* 86a25b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86a25d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a25e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a25f: call 0x6c20ae */
  esp -= 4; W32(esp, 0x86a264u); SPILL(); f_6c20ae(); if (g_unwind) return; RELOAD();
/* 86a264: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a267: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
L_86a26b: /* 86a26b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 86a26f: mov esi, dword ptr [esp + 0x4b8] */
  esi = R32((uint32_t)(esp + 0x4b8u));
L_86a276: /* 86a276: cmp byte ptr [ebx + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86a27a: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a27c: /* 86a27c: test byte ptr [ebx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a283: je 0x86a2ed */
  if (zf) goto L_86a2ed;
L_86a285: /* 86a285: mov eax, dword ptr [ebx + 0x264] */
  eax = R32((uint32_t)(ebx + 0x264u));
/* 86a28b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a28d: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a28f: /* 86a28f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86a291: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 86a294: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x86a299u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 86a299: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a29b: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a29d: /* 86a29d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86a2a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a2a5: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a2a7: /* 86a2a7: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 86a2ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a2ad: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a2af: /* 86a2af: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 86a2b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a2b5: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a2b7: /* 86a2b7: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 86a2ba: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 86a2bd: test byte ptr [edx + 0x78], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x78u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a2c1: je 0x86a2ed */
  if (zf) goto L_86a2ed;
L_86a2c3: /* 86a2c3: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 86a2c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a2c9: je 0x86a2ed */
  if (zf) goto L_86a2ed;
L_86a2cb: /* 86a2cb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 86a2ce: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86a2d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a2d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a2d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86a2d3: add edi, 0x340 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x340u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86a2d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86a2da: call 0x6c5669 */
  esp -= 4; W32(esp, 0x86a2dfu); SPILL(); f_6c5669(); if (g_unwind) return; RELOAD();
/* 86a2df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a2e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86a2e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86a2e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86a2e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86a2e6: add esp, 0x4a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4a0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a2ec: ret  */
  esp += 4; SPILL(); return;
L_86a2ed: /* 86a2ed: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 86a2f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a2f2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86a2f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86a2f4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86a2f6: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86a2fc: fmul dword ptr [esi + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x88u)));
/* 86a302: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86a308: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86a30a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86a30d: jp 0x86a316 */
  if (pf) goto L_86a316;
L_86a30f: /* 86a30f: mov eax, 1 */
  eax = 0x1u;
/* 86a314: jmp 0x86a318 */
  goto L_86a318;
L_86a316: /* 86a316: xor eax, eax */
  eax = 0;
L_86a318: /* 86a318: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 86a31b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a31d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a31e: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86a321u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86a321: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 86a324: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 86a328: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 86a32c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a32d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86a32f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a330: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a332: mov ecx, esi */
  ecx = esi;
/* 86a334: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x86a339u); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
/* 86a339: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 86a33c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a33e: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86a341u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_86a341: /* 86a341: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86a342: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86a343: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86a344: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86a345: add esp, 0x4a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4a0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a34b: ret  */
  esp += 4; SPILL(); return;
}

void f_869ee6(void) {
  LOAD_REGS();
  goto L_869ee6;
L_869ee0: /* 869ee0: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 869ee4: jmp 0x869ef0 */
  goto L_869ef0;
L_869ee6: /* 869ee6: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 869eed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_869ef0: /* 869ef0: mov eax, dword ptr [ebx + 0xd8] */
  eax = R32((uint32_t)(ebx + 0xd8u));
/* 869ef6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 869efa: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 869efd: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 869f00: mov ecx, dword ptr [eax + 0xc0] */
  ecx = R32((uint32_t)(eax + 0xc0u));
/* 869f06: mov eax, dword ptr [0xce839c] */
  eax = R32((uint32_t)(0xce839cu));
/* 869f0b: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 869f0e: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 869f11: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 869f17: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 869f1b: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 869f1f: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 869f22: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 869f24: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 869f26: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 869f29: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869f2c: je 0x869f3c */
  if (zf) goto L_869f3c;
L_869f2e: /* 869f2e: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 869f31: mov edx, dword ptr [ecx + 0xcc] */
  edx = R32((uint32_t)(ecx + 0xccu));
/* 869f37: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 869f3a: jmp 0x869f3e */
  goto L_869f3e;
L_869f3c: /* 869f3c: xor ebx, ebx */
  ebx = 0;
L_869f3e: /* 869f3e: mov eax, dword ptr [edi + 0x330] */
  eax = R32((uint32_t)(edi + 0x330u));
/* 869f44: mov ebp, dword ptr [eax + esi*4] */
  ebp = R32((uint32_t)(eax + esi*4));
/* 869f47: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 869f4b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869f4e: mov ecx, eax */
  ecx = eax;
/* 869f50: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 869f54: jge 0x86a09b */
  if ((sf == of)) goto L_86a09b;
L_869f5a: /* 869f5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_869f60: /* 869f60: cmp dword ptr [esp + 0x18], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 869f68: jge 0x86a085 */
  if ((sf == of)) goto L_86a085;
L_869f6e: /* 869f6e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869f70: jne 0x869f7c */
  if (!zf) goto L_869f7c;
L_869f72: /* 869f72: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 869f76: cmp dword ptr [ecx + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869f7a: jmp 0x869f94 */
  goto L_869f94;
L_869f7c: /* 869f7c: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 869f7f: jne 0x869fa0 */
  if (!zf) goto L_869fa0;
L_869f81: /* 869f81: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869f83: je 0x86a085 */
  if (zf) goto L_86a085;
L_869f89: /* 869f89: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 869f8d: test byte ptr [edx + 0x80], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x80u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
L_869f94: /* 869f94: je 0x86a085 */
  if (zf) goto L_86a085;
L_869f9a: /* 869f9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_869fa0: /* 869fa0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 869fa4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869fa6: jne 0x869fc0 */
  if (!zf) goto L_869fc0;
L_869fa8: /* 869fa8: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 869faa: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 869fad: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869faf: je 0x86a07e */
  if (zf) goto L_86a07e;
L_869fb5: /* 869fb5: mov ecx, edi */
  ecx = edi;
/* 869fb7: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x869fbcu); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 869fbc: mov esi, eax */
  esi = eax;
/* 869fbe: jmp 0x869fd0 */
  goto L_869fd0;
L_869fc0: /* 869fc0: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 869fc3: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 869fc6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869fc8: je 0x86a07e */
  if (zf) goto L_86a07e;
L_869fce: /* 869fce: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
L_869fd0: /* 869fd0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 869fd2: je 0x869fa0 */
  if (zf) goto L_869fa0;
L_869fd4: /* 869fd4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 869fd8: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 869fde: xor eax, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 869fe4: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 869fe6: mov dword ptr [esp + 0x34], 1 */
  W32((uint32_t)(esp + 0x34u), 0x1u);
/* 869fee: jne 0x869fa0 */
  if (!zf) goto L_869fa0;
L_869ff0: /* 869ff0: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 869ff3: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 869ff7: fsub dword ptr [esp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x40u)));
/* 869ffb: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 869fff: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 86a002: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 86a006: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 86a00a: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 86a00d: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* 86a011: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 86a015: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86a01bu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86a01b: cmp byte ptr [edi + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86a01f: je 0x86a041 */
  if (zf) goto L_86a041;
L_86a021: /* 86a021: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 86a025: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 86a028: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 86a02a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 86a02c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86a02e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 86a030: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86a032: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86a034: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86a036: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a039: je 0x869fa0 */
  if (zf) goto L_869fa0;
L_86a03f: /* 86a03f: jmp 0x86a043 */
  goto L_86a043;
L_86a041: /* 86a041: fstp st(0) */
  STI(0) = ST0; FPOP();
L_86a043: /* 86a043: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 86a047: xor eax, eax */
  eax = 0;
/* 86a049: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 86a04b: jle 0x86a066 */
  if ((zf || sf != of)) goto L_86a066;
L_86a04d: /* 86a04d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86a050: /* 86a050: cmp dword ptr [esp + eax*4 + 0xb0], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + eax*4 + 0xb0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a057: je 0x869fa0 */
  if (zf) goto L_869fa0;
L_86a05d: /* 86a05d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 86a061: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86a062: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a064: jl 0x86a050 */
  if ((sf != of)) goto L_86a050;
L_86a066: /* 86a066: mov dword ptr [esp + ecx*4 + 0xb0], esi */
  W32((uint32_t)(esp + ecx*4 + 0xb0u), esi);
/* 86a06d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86a06e: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a074: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 86a078: jl 0x869fa0 */
  if ((sf != of)) goto L_869fa0;
L_86a07e: /* 86a07e: mov edi, dword ptr [esp + 0x4b4] */
  edi = R32((uint32_t)(esp + 0x4b4u));
L_86a085: /* 86a085: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 86a089: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86a08a: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a08d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 86a091: jl 0x869f60 */
  if ((sf != of)) goto L_869f60;
L_86a097: /* 86a097: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_86a09b: /* 86a09b: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 86a0a1: mov eax, dword ptr [0xce839c] */
  eax = R32((uint32_t)(0xce839cu));
/* 86a0a6: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 86a0a9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86a0ab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a0ad: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86a0b0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86a0b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86a0b4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 86a0b8: test dword ptr [ecx + 0x80], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a0c2: je 0x86a21c */
  if (zf) goto L_86a21c;
L_86a0c8: /* 86a0c8: mov edx, dword ptr [edi + 0x334] */
  edx = R32((uint32_t)(edi + 0x334u));
/* 86a0ce: mov ebp, dword ptr [edx + esi*4] */
  ebp = R32((uint32_t)(edx + esi*4));
/* 86a0d1: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a0d3: je 0x86a21c */
  if (zf) goto L_86a21c;
L_86a0d9: /* 86a0d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86a0e0: /* 86a0e0: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 86a0e3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a0e5: je 0x86a215 */
  if (zf) goto L_86a215;
L_86a0eb: /* 86a0eb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86a0ed: mov eax, dword ptr [eax + 0x34c] */
  eax = R32((uint32_t)(eax + 0x34cu));
/* 86a0f3: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a0f5: mov dword ptr [esp + 0x34], 1 */
  W32((uint32_t)(esp + 0x34u), 0x1u);
/* 86a0fd: jne 0x86a10d */
  if (!zf) goto L_86a10d;
L_86a0ff: /* 86a0ff: mov edx, dword ptr [ecx + 0xd0] */
  edx = R32((uint32_t)(ecx + 0xd0u));
/* 86a105: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a107: jne 0x86a208 */
  if (!zf) goto L_86a208;
L_86a10d: /* 86a10d: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a10f: jne 0x86a11c */
  if (!zf) goto L_86a11c;
L_86a111: /* 86a111: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 86a114: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a116: jne 0x86a208 */
  if (!zf) goto L_86a208;
L_86a11c: /* 86a11c: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 86a120: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a122: mov eax, ebx */
  eax = ebx;
/* 86a124: je 0x86a135 */
  if (zf) goto L_86a135;
L_86a126: /* 86a126: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a128: je 0x86a208 */
  if (zf) goto L_86a208;
L_86a12e: /* 86a12e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86a131: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a133: jne 0x86a126 */
  if (!zf) goto L_86a126;
L_86a135: /* 86a135: mov esi, dword ptr [esp + 0x4b8] */
  esi = R32((uint32_t)(esp + 0x4b8u));
/* 86a13c: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 86a140: add esi, 0x8c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86a146: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a147: mov ecx, esi */
  ecx = esi;
/* 86a149: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x86a14fu); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86a14f: lea edx, [esp + 0x70] */
  edx = (uint32_t)(esp + 0x70u);
/* 86a153: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a154: mov ecx, esi */
  ecx = esi;
/* 86a156: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x86a15cu); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 86a15c: xor edx, edx */
  edx = 0;
/* 86a15e: lea ecx, [edi + 0xc4] */
  ecx = (uint32_t)(edi + 0xc4u);
L_86a164: /* 86a164: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 86a168: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 86a16d: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 86a170: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 86a174: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 86a178: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 86a17c: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 86a17f: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 86a181: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 86a185: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 86a189: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 86a18d: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 86a191: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 86a193: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 86a195: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 86a199: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 86a19d: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 86a1a1: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 86a1a5: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 86a1a8: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 86a1aa: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 86a1ae: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 86a1b2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 86a1b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a1b6: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 86a1ba: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 86a1bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a1bf: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 86a1c2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 86a1c6: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 86a1ca: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 86a1ce: fchs  */
  ST0 = -ST0;
/* 86a1d0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86a1d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86a1d4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a1d7: je 0x86a208 */
  if (zf) goto L_86a208;
L_86a1d9: /* 86a1d9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86a1da: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86a1dd: cmp edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a1e0: jl 0x86a164 */
  if ((sf != of)) goto L_86a164;
L_86a1e2: /* 86a1e2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a1e4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a1e6: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86a1eb: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86a1f1u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86a1f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a1f3: je 0x86a200 */
  if (zf) goto L_86a200;
L_86a1f5: /* 86a1f5: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86a1f7: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 86a1fa: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 86a1fe: jmp 0x86a208 */
  goto L_86a208;
L_86a200: /* 86a200: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
L_86a208: /* 86a208: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  ebp = r;
  }
/* 86a20b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 86a20f: jne 0x86a0e0 */
  if (!zf) goto L_86a0e0;
L_86a215: /* 86a215: mov edi, dword ptr [esp + 0x4b4] */
  edi = R32((uint32_t)(esp + 0x4b4u));
L_86a21c: /* 86a21c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 86a220: mov edx, dword ptr [ecx + 0xdc] */
  edx = R32((uint32_t)(ecx + 0xdcu));
/* 86a226: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86a227: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a229: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 86a22d: jl 0x869ee0 */
  if ((sf != of)) goto L_869ee0;
L_86a233: /* 86a233: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 86a237: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a239: je 0x86a26b */
  if (zf) goto L_86a26b;
L_86a23b: /* 86a23b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a23c: lea eax, [esp + 0xb4] */
  eax = (uint32_t)(esp + 0xb4u);
/* 86a243: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a244: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86a247: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 86a24b: mov ecx, esp */
  ecx = esp;
/* 86a24d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a24e: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x86a254u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 86a254: mov eax, dword ptr [esp + 0x4d0] */
  eax = R32((uint32_t)(esp + 0x4d0u));
/* 86a25b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86a25d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a25e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a25f: call 0x6c20ae */
  esp -= 4; W32(esp, 0x86a264u); SPILL(); f_6c20ae(); if (g_unwind) return; RELOAD();
/* 86a264: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a267: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
L_86a26b: /* 86a26b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 86a26f: mov esi, dword ptr [esp + 0x4b8] */
  esi = R32((uint32_t)(esp + 0x4b8u));
/* 86a276: cmp byte ptr [ebx + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86a27a: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a27c: /* 86a27c: test byte ptr [ebx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a283: je 0x86a2ed */
  if (zf) goto L_86a2ed;
L_86a285: /* 86a285: mov eax, dword ptr [ebx + 0x264] */
  eax = R32((uint32_t)(ebx + 0x264u));
/* 86a28b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a28d: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a28f: /* 86a28f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86a291: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 86a294: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x86a299u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 86a299: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a29b: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a29d: /* 86a29d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86a2a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a2a5: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a2a7: /* 86a2a7: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 86a2ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a2ad: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a2af: /* 86a2af: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 86a2b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a2b5: jne 0x86a2ed */
  if (!zf) goto L_86a2ed;
L_86a2b7: /* 86a2b7: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 86a2ba: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 86a2bd: test byte ptr [edx + 0x78], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x78u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a2c1: je 0x86a2ed */
  if (zf) goto L_86a2ed;
L_86a2c3: /* 86a2c3: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 86a2c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a2c9: je 0x86a2ed */
  if (zf) goto L_86a2ed;
L_86a2cb: /* 86a2cb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 86a2ce: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86a2d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a2d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a2d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86a2d3: add edi, 0x340 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x340u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86a2d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86a2da: call 0x6c5669 */
  esp -= 4; W32(esp, 0x86a2dfu); SPILL(); f_6c5669(); if (g_unwind) return; RELOAD();
/* 86a2df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a2e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86a2e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86a2e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86a2e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86a2e6: add esp, 0x4a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4a0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a2ec: ret  */
  esp += 4; SPILL(); return;
L_86a2ed: /* 86a2ed: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 86a2f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a2f2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86a2f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86a2f4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86a2f6: fld dword ptr [eax + 0x1b8] */
  { double v = F32((uint32_t)(eax + 0x1b8u)); FPUSH(v); }
/* 86a2fc: fmul dword ptr [esi + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x88u)));
/* 86a302: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86a308: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86a30a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86a30d: jp 0x86a316 */
  if (pf) goto L_86a316;
L_86a30f: /* 86a30f: mov eax, 1 */
  eax = 0x1u;
/* 86a314: jmp 0x86a318 */
  goto L_86a318;
L_86a316: /* 86a316: xor eax, eax */
  eax = 0;
L_86a318: /* 86a318: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 86a31b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a31d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a31e: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x86a321u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86a321: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 86a324: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 86a328: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 86a32c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a32d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86a32f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a330: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a332: mov ecx, esi */
  ecx = esi;
/* 86a334: call 0x6c4b24 */
  esp -= 4; W32(esp, 0x86a339u); SPILL(); f_6c4b24(); if (g_unwind) return; RELOAD();
/* 86a339: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 86a33c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a33e: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86a341u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86a341: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86a342: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86a343: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86a344: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86a345: add esp, 0x4a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4a0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a34b: ret  */
  esp += 4; SPILL(); return;
}

void f_86a500(void) {
  LOAD_REGS();
L_86a500: /* 86a500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 86a501: mov ebp, esp */
  ebp = esp;
/* 86a503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86a505: push 0x9d4580 */
  { uint32_t v = 0x9d4580u; esp -= 4; W32(esp, v); }
/* 86a50a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86a510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 86a518: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86a51e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86a51f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86a520: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86a523: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a525: mov edx, dword ptr [eax + 0x1c8] */
  edx = R32((uint32_t)(eax + 0x1c8u));
/* 86a52b: xor ecx, ecx */
  ecx = 0;
/* 86a52d: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a52f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86a530: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 86a533: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 86a536: je 0x86a54a */
  if (zf) goto L_86a54a;
L_86a538: /* 86a538: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 86a53b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86a53e: mov edx, dword ptr [edx + 0xc0] */
  edx = R32((uint32_t)(edx + 0xc0u));
/* 86a544: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 86a547: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
L_86a54a: /* 86a54a: mov edx, ecx */
  edx = ecx;
/* 86a54c: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 86a54f: cmp edx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a555: je 0x86adff */
  if (zf) goto L_86adff;
L_86a55b: /* 86a55b: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 86a55e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86a561: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 86a564: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_86a567: /* 86a567: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a569: je 0x86a6d0 */
  if (zf) goto L_86a6d0;
L_86a56f: /* 86a56f: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 86a571: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86a573: cmp byte ptr [eax + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86a577: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 86a57a: jne 0x86a6c0 */
  if (!zf) goto L_86a6c0;
L_86a580: /* 86a580: mov ecx, dword ptr [eax + 0x2b4] */
  ecx = R32((uint32_t)(eax + 0x2b4u));
/* 86a586: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a588: je 0x86a6c0 */
  if (zf) goto L_86a6c0;
L_86a58e: /* 86a58e: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 86a594: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a597: je 0x86a6c0 */
  if (zf) goto L_86a6c0;
L_86a59d: /* 86a59d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a59f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86a5a2: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86a5a5: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 86a5ab: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a5ae: je 0x86a6c0 */
  if (zf) goto L_86a6c0;
L_86a5b4: /* 86a5b4: mov eax, dword ptr [0xcd8adc] */
  eax = R32((uint32_t)(0xcd8adcu));
/* 86a5b9: cmp dword ptr [edi + 0xc0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xc0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a5bf: je 0x86a6c0 */
  if (zf) goto L_86a6c0;
L_86a5c5: /* 86a5c5: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86a5c8: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 86a5cb: mov edx, dword ptr [esi + ecx*4 + 0x1c] */
  edx = R32((uint32_t)(esi + ecx*4 + 0x1cu));
/* 86a5cf: lea ecx, [esi + ecx*4 + 0x1c] */
  ecx = (uint32_t)(esi + ecx*4 + 0x1cu);
/* 86a5d3: lea eax, [edi + 0x8c] */
  eax = (uint32_t)(edi + 0x8cu);
/* 86a5d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a5da: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86a5ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86a5dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a5df: je 0x86a6c0 */
  if (zf) goto L_86a6c0;
L_86a5e5: /* 86a5e5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a5e7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86a5ea: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86a5f0: mov eax, edi */
  eax = edi;
/* 86a5f2: call 0x867e00 */
  esp -= 4; W32(esp, 0x86a5f7u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86a5f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a5f9: je 0x86a6c0 */
  if (zf) goto L_86a6c0;
L_86a5ff: /* 86a5ff: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86a601: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86a607: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86a609: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86a60a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86a60d: mov edx, esp */
  edx = esp;
/* 86a60f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 86a611: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86a614: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 86a617: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 86a61a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 86a61d: call 0x6c8440 */
  esp -= 4; W32(esp, 0x86a622u); SPILL(); f_6c8440(); if (g_unwind) return; RELOAD();
/* 86a622: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 86a625: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86a628: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a62b: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 86a62e: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 86a631: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 86a634: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 86a637: xor ecx, ecx */
  ecx = 0;
L_86a639: /* 86a639: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86a63b: cmp ecx, dword ptr [eax + 0xdc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a641: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86a644: jge 0x86a6b4 */
  if ((sf == of)) goto L_86a6b4;
L_86a646: /* 86a646: mov edx, dword ptr [eax + 0xd8] */
  edx = R32((uint32_t)(eax + 0xd8u));
/* 86a64c: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 86a64f: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86a652: mov edx, dword ptr [ecx + 0xc0] */
  edx = R32((uint32_t)(ecx + 0xc0u));
/* 86a658: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 86a65b: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 86a65e: xor eax, eax */
  eax = 0;
L_86a660: /* 86a660: xor ecx, ecx */
  ecx = 0;
/* 86a662: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a664: jge 0x86a66f */
  if ((sf == of)) goto L_86a66f;
L_86a666: /* 86a666: cmp dword ptr [ebp + eax*4 - 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + eax*4 + 0xffffffc8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a66a: je 0x86a66f */
  if (zf) goto L_86a66f;
L_86a66c: /* 86a66c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86a66d: jmp 0x86a660 */
  goto L_86a660;
L_86a66f: /* 86a66f: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a672: jge 0x86a6ae */
  if ((sf == of)) goto L_86a6ae;
L_86a674: /* 86a674: lea edi, [ebp + eax*4 - 0x38] */
  edi = (uint32_t)(ebp + eax*4 + 0xffffffc8u);
/* 86a678: cmp dword ptr [edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a67a: je 0x86a6ab */
  if (zf) goto L_86a6ab;
L_86a67c: /* 86a67c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a67e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a680: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86a685: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86a68bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86a68b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a68d: je 0x86a6a0 */
  if (zf) goto L_86a6a0;
L_86a68f: /* 86a68f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86a692: lea ecx, [ebx + ebx*2 + 9] */
  ecx = (uint32_t)(ebx + ebx*2 + 0x9u);
/* 86a696: mov ecx, dword ptr [esi + ecx*4] */
  ecx = R32((uint32_t)(esi + ecx*4));
/* 86a699: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86a69b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86a69e: jmp 0x86a6a2 */
  goto L_86a6a2;
L_86a6a0: /* 86a6a0: xor eax, eax */
  eax = 0;
L_86a6a2: /* 86a6a2: lea ecx, [ebx + ebx*2 + 9] */
  ecx = (uint32_t)(ebx + ebx*2 + 0x9u);
/* 86a6a6: mov dword ptr [esi + ecx*4], eax */
  W32((uint32_t)(esi + ecx*4), eax);
/* 86a6a9: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
L_86a6ab: /* 86a6ab: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
L_86a6ae: /* 86a6ae: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86a6b1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86a6b2: jmp 0x86a639 */
  goto L_86a639;
L_86a6b4: /* 86a6b4: mov edx, dword ptr [0xcd8adc] */
  edx = R32((uint32_t)(0xcd8adcu));
/* 86a6ba: mov dword ptr [edi + 0xc0], edx */
  W32((uint32_t)(edi + 0xc0u), edx);
L_86a6c0: /* 86a6c0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86a6c3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86a6c6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 86a6c9: mov eax, ecx */
  eax = ecx;
/* 86a6cb: jmp 0x86a567 */
  goto L_86a567;
L_86a6d0: /* 86a6d0: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 86a6d6: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a6d9: jne 0x86aaaf */
  if (!zf) goto L_86aaaf;
L_86a6df: /* 86a6df: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 86a6e2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 86a6e5: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 86a6e8: mov eax, dword ptr [ecx + 0x111c] */
  eax = R32((uint32_t)(ecx + 0x111cu));
/* 86a6ee: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 86a6f1: xor eax, eax */
  eax = 0;
/* 86a6f3: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 86a6f6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86a6f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86a700: /* 86a700: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a703: jge 0x86aaaf */
  if ((sf == of)) goto L_86aaaf;
L_86a709: /* 86a709: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86a70b: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 86a70e: mov al, byte ptr [edi + 0x6c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6cu))) & 0xffu);
/* 86a711: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a713: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86a716: jne 0x86a72a */
  if (!zf) goto L_86a72a;
L_86a718: /* 86a718: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86a71a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a71c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86a71d: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x86a720u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86a720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a722: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 86a725: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86a727: mov byte ptr [edi + 0x6c], al */
  W8((uint32_t)(edi + 0x6cu), (eax & 0xffu));
L_86a72a: /* 86a72a: cmp byte ptr [edi + 0x6c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x6cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86a72e: jne 0x86aaa0 */
  if (!zf) goto L_86aaa0;
L_86a734: /* 86a734: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86a737: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86a73cu); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86a73c: mov edi, eax */
  edi = eax;
/* 86a73e: mov ecx, dword ptr [edi + 0xc0] */
  ecx = R32((uint32_t)(edi + 0xc0u));
/* 86a744: cmp ecx, dword ptr [0xcd8adc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcd8adcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a74a: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 86a74d: je 0x86aaa0 */
  if (zf) goto L_86aaa0;
L_86a753: /* 86a753: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86a756: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 86a759: mov eax, dword ptr [esi + edx*4 + 0x1c] */
  eax = R32((uint32_t)(esi + edx*4 + 0x1cu));
/* 86a75d: lea ecx, [esi + edx*4 + 0x1c] */
  ecx = (uint32_t)(esi + edx*4 + 0x1cu);
/* 86a761: lea edx, [edi + 0x8c] */
  edx = (uint32_t)(edi + 0x8cu);
/* 86a767: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a768: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86a76bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86a76b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a76d: je 0x86a785 */
  if (zf) goto L_86a785;
L_86a76f: /* 86a76f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a771: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86a774: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86a77a: mov eax, edi */
  eax = edi;
/* 86a77c: call 0x867e00 */
  esp -= 4; W32(esp, 0x86a781u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86a781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a783: jne 0x86a798 */
  if (!zf) goto L_86a798;
L_86a785: /* 86a785: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a787: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86a78a: mov eax, dword ptr [ecx + 0x154] */
  eax = R32((uint32_t)(ecx + 0x154u));
/* 86a790: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a792: je 0x86aaa0 */
  if (zf) goto L_86aaa0;
L_86a798: /* 86a798: mov eax, dword ptr [edi + 0xbc] */
  eax = R32((uint32_t)(edi + 0xbcu));
/* 86a79e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a7a0: je 0x86a916 */
  if (zf) goto L_86a916;
L_86a7a6: /* 86a7a6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a7a8: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* 86a7ae: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86a7b3: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 86a7b6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86a7b9: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 86a7bc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 86a7bf: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 86a7c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a7c3: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 86a7c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a7ca: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 86a7d0: lea ebx, [esi + 0x33c] */
  ebx = (uint32_t)(esi + 0x33cu);
/* 86a7d6: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 86a7d9: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 86a7e0: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x86a7e6u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 86a7e6: mov ecx, eax */
  ecx = eax;
/* 86a7e8: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86a7eeu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86a7ee: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86a7f1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86a7f4: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 86a7f7: jmp 0x86a800 */
  goto L_86a800;
L_86a800: /* 86a800: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86a802: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a804: je 0x86a8d2 */
  if (zf) goto L_86a8d2;
L_86a80a: /* 86a80a: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a80d: jne 0x86a868 */
  if (!zf) goto L_86a868;
L_86a80f: /* 86a80f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a811: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* 86a817: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86a81c: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 86a81f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86a822: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 86a825: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86a828: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 86a82b: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 86a82e: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 86a835: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 86a838: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a839: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 86a83f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a840: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86a846: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x86a84cu); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 86a84c: mov ecx, eax */
  ecx = eax;
/* 86a84e: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86a854u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86a854: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 86a857: fcomp dword ptr [ebp - 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc0u)));
  FPOP();
/* 86a85a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86a85c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a85f: jne 0x86a868 */
  if (!zf) goto L_86a868;
L_86a861: /* 86a861: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 86a863: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 86a866: jmp 0x86a800 */
  goto L_86a800;
L_86a868: /* 86a868: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86a86a: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a86d: je 0x86a8d2 */
  if (zf) goto L_86a8d2;
L_86a86f: /* 86a86f: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86a872: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86a875: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86a878: add eax, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86a87b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86a87d: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86a883: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 86a886: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 86a889: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 86a88c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86a88f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a891: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 86a893: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 86a895: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a897: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 86a89a: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 86a8a0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 86a8a3: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 86a8a9: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86a8ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a8ae: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* 86a8b4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 86a8b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a8b8: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 86a8bb: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 86a8bd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86a8c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86a8c5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a8c8: jne 0x86a8d2 */
  if (!zf) goto L_86a8d2;
L_86a8ca: /* 86a8ca: lea ebx, [edx + 0x1c] */
  ebx = (uint32_t)(edx + 0x1cu);
/* 86a8cd: jmp 0x86a800 */
  goto L_86a800;
L_86a8d2: /* 86a8d2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a8d4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86a8d6: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86a8db: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 86a8e2: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 86a8e5: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86a8ebu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86a8eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a8ed: je 0x86a90d */
  if (zf) goto L_86a90d;
L_86a8ef: /* 86a8ef: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86a8f1: mov ecx, 7 */
  ecx = 0x7u;
/* 86a8f6: lea esi, [ebp - 0x74] */
  esi = (uint32_t)(ebp + 0xffffff8cu);
/* 86a8f9: mov edi, eax */
  edi = eax;
/* 86a8fb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86a8fd: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86a900: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86a903: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86a906: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 86a908: jmp 0x86a9b9 */
  goto L_86a9b9;
L_86a90d: /* 86a90d: xor eax, eax */
  eax = 0;
/* 86a90f: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 86a911: jmp 0x86a9b9 */
  goto L_86a9b9;
L_86a916: /* 86a916: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86a919: cmp byte ptr [eax + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86a91d: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a91f: /* 86a91f: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 86a925: test cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a928: je 0x86a991 */
  if (zf) goto L_86a991;
L_86a92a: /* 86a92a: mov edx, dword ptr [eax + 0x264] */
  edx = R32((uint32_t)(eax + 0x264u));
/* 86a930: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a932: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a934: /* 86a934: mov edx, dword ptr [esi + 0x330] */
  edx = R32((uint32_t)(esi + 0x330u));
/* 86a93a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 86a93d: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a941: je 0x86a948 */
  if (zf) goto L_86a948;
L_86a943: /* 86a943: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a946: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a948: /* 86a948: mov ecx, dword ptr [esi + 0x334] */
  ecx = R32((uint32_t)(esi + 0x334u));
/* 86a94e: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a952: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a954: /* 86a954: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86a956: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 86a959: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x86a95eu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 86a95e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a960: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a962: /* 86a962: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86a967: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a96a: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a96c: /* 86a96c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 86a96f: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 86a972: test byte ptr [edx + 0x78], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x78u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a976: je 0x86a991 */
  if (zf) goto L_86a991;
L_86a978: /* 86a978: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 86a97b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86a97d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a97e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a97f: lea edx, [esi + 0x340] */
  edx = (uint32_t)(esi + 0x340u);
/* 86a985: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86a986: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a987: call 0x6c5669 */
  esp -= 4; W32(esp, 0x86a98cu); SPILL(); f_6c5669(); if (g_unwind) return; RELOAD();
/* 86a98c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a98f: jmp 0x86a9b9 */
  goto L_86a9b9;
L_86a991: /* 86a991: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a993: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a995: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86a99a: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86a9a0u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86a9a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a9a2: je 0x86a9b1 */
  if (zf) goto L_86a9b1;
L_86a9a4: /* 86a9a4: mov ecx, dword ptr [esi + 0x338] */
  ecx = R32((uint32_t)(esi + 0x338u));
/* 86a9aa: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86a9ac: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86a9af: jmp 0x86a9b3 */
  goto L_86a9b3;
L_86a9b1: /* 86a9b1: xor eax, eax */
  eax = 0;
L_86a9b3: /* 86a9b3: mov dword ptr [esi + 0x338], eax */
  W32((uint32_t)(esi + 0x338u), eax);
L_86a9b9: /* 86a9b9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 86a9bc: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 86a9bf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a9c1: je 0x86aa94 */
  if (zf) goto L_86aa94;
L_86a9c7: /* 86a9c7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86a9c9: test byte ptr [ecx + 0x80], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a9d0: je 0x86aa94 */
  if (zf) goto L_86aa94;
L_86a9d6: /* 86a9d6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a9d8: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 86a9de: fsub dword ptr [eax + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x194u)));
/* 86a9e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a9e6: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86a9eb: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86a9ee: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 86a9f4: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 86a9f7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 86a9fa: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 86aa00: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 86aa03: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 86aa06: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x86aa0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86aa0c: fst dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0);
/* 86aa0f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 86aa12: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 86aa15: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 86aa18: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 86aa1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86aa1d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 86aa20: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 86aa23: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86aa25: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86aa27: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86aa29: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86aa2b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86aa2d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86aa2f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86aa32: je 0x86aa46 */
  if (zf) goto L_86aa46;
L_86aa34: /* 86aa34: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86aa36: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 86aa39: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86aa3f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86aa41: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86aa44: jp 0x86aa94 */
  if (pf) goto L_86aa94;
L_86aa46: /* 86aa46: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86aa48: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86aa4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86aa4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86aa4f: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 86aa55: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x86aa5bu); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 86aa5b: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86aa5e: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86aa61: mov edx, dword ptr [esi + ecx*4 + 0x1c] */
  edx = R32((uint32_t)(esi + ecx*4 + 0x1cu));
/* 86aa65: lea ecx, [esi + ecx*4 + 0x1c] */
  ecx = (uint32_t)(esi + ecx*4 + 0x1cu);
/* 86aa69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86aa6a: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86aa6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86aa6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aa6f: je 0x86aa94 */
  if (zf) goto L_86aa94;
L_86aa71: /* 86aa71: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86aa73: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86aa76: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86aa7c: mov eax, edi */
  eax = edi;
/* 86aa7e: call 0x867e00 */
  esp -= 4; W32(esp, 0x86aa83u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86aa83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aa85: je 0x86aa94 */
  if (zf) goto L_86aa94;
L_86aa87: /* 86aa87: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86aa89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86aa8a: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86aa8f: call 0x6c34db */
  esp -= 4; W32(esp, 0x86aa94u); SPILL(); f_6c34db(); if (g_unwind) return; RELOAD();
L_86aa94: /* 86aa94: mov ecx, dword ptr [0xcd8adc] */
  ecx = R32((uint32_t)(0xcd8adcu));
/* 86aa9a: mov dword ptr [edi + 0xc0], ecx */
  W32((uint32_t)(edi + 0xc0u), ecx);
L_86aaa0: /* 86aaa0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86aaa3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86aaa6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86aaa7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86aaaa: jmp 0x86a700 */
  goto L_86a700;
L_86aaaf: /* 86aaaf: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 86aab2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 86aab5: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 86aab8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86aabb: jmp 0x86aac0 */
  goto L_86aac0;
L_86aac0: /* 86aac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aac2: je 0x86adff */
  if (zf) goto L_86adff;
L_86aac8: /* 86aac8: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 86aaca: mov ecx, dword ptr [0xcd8adc] */
  ecx = R32((uint32_t)(0xcd8adcu));
/* 86aad0: cmp dword ptr [edi + 0xc0], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xc0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86aad6: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 86aad9: je 0x86adbf */
  if (zf) goto L_86adbf;
L_86aadf: /* 86aadf: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86aae2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 86aae5: mov eax, dword ptr [esi + edx*4 + 0x1c] */
  eax = R32((uint32_t)(esi + edx*4 + 0x1cu));
/* 86aae9: lea ecx, [esi + edx*4 + 0x1c] */
  ecx = (uint32_t)(esi + edx*4 + 0x1cu);
/* 86aaed: lea edx, [edi + 0x8c] */
  edx = (uint32_t)(edi + 0x8cu);
/* 86aaf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86aaf4: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86aaf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86aaf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aaf9: je 0x86ab11 */
  if (zf) goto L_86ab11;
L_86aafb: /* 86aafb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86aafd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ab00: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86ab06: mov eax, edi */
  eax = edi;
/* 86ab08: call 0x867e00 */
  esp -= 4; W32(esp, 0x86ab0du); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86ab0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab0f: jne 0x86ab24 */
  if (!zf) goto L_86ab24;
L_86ab11: /* 86ab11: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ab13: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ab16: mov eax, dword ptr [ecx + 0x154] */
  eax = R32((uint32_t)(ecx + 0x154u));
/* 86ab1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab1e: je 0x86adbf */
  if (zf) goto L_86adbf;
L_86ab24: /* 86ab24: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86ab26: cmp byte ptr [edx + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86ab2a: jne 0x86ab43 */
  if (!zf) goto L_86ab43;
L_86ab2c: /* 86ab2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ab2e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ab31: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86ab34: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 86ab3a: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab3d: jne 0x86adbf */
  if (!zf) goto L_86adbf;
L_86ab43: /* 86ab43: mov eax, dword ptr [edi + 0xbc] */
  eax = R32((uint32_t)(edi + 0xbcu));
/* 86ab49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab4b: je 0x86acb2 */
  if (zf) goto L_86acb2;
L_86ab51: /* 86ab51: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ab53: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* 86ab59: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ab5e: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 86ab61: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86ab64: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 86ab67: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86ab6a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 86ab6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ab6e: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 86ab74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ab75: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 86ab7b: lea ebx, [esi + 0x33c] */
  ebx = (uint32_t)(esi + 0x33cu);
/* 86ab81: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 86ab84: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 86ab8b: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x86ab91u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 86ab91: mov ecx, eax */
  ecx = eax;
/* 86ab93: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86ab99u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86ab99: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 86ab9c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86ab9f: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_86aba2: /* 86aba2: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86aba4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aba6: je 0x86ac74 */
  if (zf) goto L_86ac74;
L_86abac: /* 86abac: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86abaf: jne 0x86ac0a */
  if (!zf) goto L_86ac0a;
L_86abb1: /* 86abb1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86abb3: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* 86abb9: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86abbe: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 86abc1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86abc4: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 86abc7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86abca: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 86abcd: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 86abd0: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 86abd7: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 86abda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86abdb: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 86abe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86abe2: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86abe8: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x86abeeu); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 86abee: mov ecx, eax */
  ecx = eax;
/* 86abf0: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86abf6u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86abf6: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 86abf9: fcomp dword ptr [ebp - 0x3c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc4u)));
  FPOP();
/* 86abfc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86abfe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ac01: jne 0x86ac0a */
  if (!zf) goto L_86ac0a;
L_86ac03: /* 86ac03: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 86ac05: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 86ac08: jmp 0x86aba2 */
  goto L_86aba2;
L_86ac0a: /* 86ac0a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ac0c: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ac0f: je 0x86ac74 */
  if (zf) goto L_86ac74;
L_86ac11: /* 86ac11: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86ac14: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 86ac1a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86ac1d: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86ac20: add eax, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ac23: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86ac25: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86ac2b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86ac2e: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 86ac34: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 86ac37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac39: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* 86ac3f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 86ac41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac43: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 86ac46: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 86ac49: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86ac4c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 86ac4f: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 86ac52: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac54: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86ac56: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 86ac58: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac5a: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 86ac5d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 86ac5f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86ac65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86ac67: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ac6a: jne 0x86ac74 */
  if (!zf) goto L_86ac74;
L_86ac6c: /* 86ac6c: lea ebx, [edx + 0x1c] */
  ebx = (uint32_t)(edx + 0x1cu);
/* 86ac6f: jmp 0x86aba2 */
  goto L_86aba2;
L_86ac74: /* 86ac74: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86ac76: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86ac78: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ac7d: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 86ac84: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 86ac87: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86ac8du); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86ac8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ac8f: je 0x86acac */
  if (zf) goto L_86acac;
L_86ac91: /* 86ac91: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ac93: mov ecx, 7 */
  ecx = 0x7u;
/* 86ac98: lea esi, [ebp - 0x74] */
  esi = (uint32_t)(ebp + 0xffffff8cu);
/* 86ac9b: mov edi, eax */
  edi = eax;
/* 86ac9d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86ac9f: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86aca2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86aca5: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86aca8: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 86acaa: jmp 0x86acda */
  goto L_86acda;
L_86acac: /* 86acac: xor eax, eax */
  eax = 0;
/* 86acae: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 86acb0: jmp 0x86acda */
  goto L_86acda;
L_86acb2: /* 86acb2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86acb4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86acb6: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86acbb: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86acc1u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86acc3: je 0x86acd2 */
  if (zf) goto L_86acd2;
L_86acc5: /* 86acc5: mov ecx, dword ptr [esi + 0x338] */
  ecx = R32((uint32_t)(esi + 0x338u));
/* 86accb: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86accd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86acd0: jmp 0x86acd4 */
  goto L_86acd4;
L_86acd2: /* 86acd2: xor eax, eax */
  eax = 0;
L_86acd4: /* 86acd4: mov dword ptr [esi + 0x338], eax */
  W32((uint32_t)(esi + 0x338u), eax);
L_86acda: /* 86acda: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 86acdd: mov eax, dword ptr [edx + 0x50] */
  eax = R32((uint32_t)(edx + 0x50u));
/* 86ace0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ace2: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86ace8: /* 86ace8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86acea: test byte ptr [ecx + 0x80], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86acf1: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86acf7: /* 86acf7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86acf9: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 86acff: fsub dword ptr [eax + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x194u)));
/* 86ad05: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ad0a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 86ad0d: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 86ad13: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 86ad16: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 86ad19: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 86ad1f: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 86ad22: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86ad24: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86ad27: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86ad2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ad2d: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 86ad30: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 86ad33: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 86ad36: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 86ad39: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 86ad3c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ad3e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 86ad41: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 86ad44: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ad46: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86ad48: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86ad4a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86ad4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86ad4e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86ad50: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ad53: je 0x86ad67 */
  if (zf) goto L_86ad67;
L_86ad55: /* 86ad55: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86ad57: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 86ad5a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86ad60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86ad62: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86ad65: jp 0x86adb3 */
  if (pf) goto L_86adb3;
L_86ad67: /* 86ad67: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ad69: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ad6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ad6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ad70: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 86ad76: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x86ad7cu); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 86ad7c: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86ad7f: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86ad82: lea ecx, [esi + edx*4 + 0x1c] */
  ecx = (uint32_t)(esi + edx*4 + 0x1cu);
/* 86ad86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86ad88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ad89: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86ad8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ad8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ad8e: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86ad90: /* 86ad90: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ad92: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ad95: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86ad9b: mov eax, edi */
  eax = edi;
/* 86ad9d: call 0x867e00 */
  esp -= 4; W32(esp, 0x86ada2u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86ada2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ada4: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86ada6: /* 86ada6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ada8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ada9: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86adae: call 0x6c34db */
  esp -= 4; W32(esp, 0x86adb3u); SPILL(); f_6c34db(); if (g_unwind) return; RELOAD();
L_86adb3: /* 86adb3: mov ecx, dword ptr [0xcd8adc] */
  ecx = R32((uint32_t)(0xcd8adcu));
/* 86adb9: mov dword ptr [edi + 0xc0], ecx */
  W32((uint32_t)(edi + 0xc0u), ecx);
L_86adbf: /* 86adbf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86adc2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86adc5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86adc8: mov eax, edx */
  eax = edx;
/* 86adca: jmp 0x86aac0 */
  goto L_86aac0;
L_86adff: /* 86adff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ae02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ae03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ae04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ae0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ae0c: mov esp, ebp */
  esp = ebp;
/* 86ae0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86ae0f: ret  */
  esp += 4; SPILL(); return;
}

void f_86a7f9(void) {
  LOAD_REGS();
  goto L_86a7f9;
L_86a700: /* 86a700: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86a703: jge 0x86aaaf */
  if ((sf == of)) goto L_86aaaf;
L_86a709: /* 86a709: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86a70b: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 86a70e: mov al, byte ptr [edi + 0x6c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x6cu))) & 0xffu);
/* 86a711: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a713: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 86a716: jne 0x86a72a */
  if (!zf) goto L_86a72a;
L_86a718: /* 86a718: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86a71a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a71c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86a71d: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x86a720u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86a720: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a722: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 86a725: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86a727: mov byte ptr [edi + 0x6c], al */
  W8((uint32_t)(edi + 0x6cu), (eax & 0xffu));
L_86a72a: /* 86a72a: cmp byte ptr [edi + 0x6c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x6cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86a72e: jne 0x86aaa0 */
  if (!zf) goto L_86aaa0;
L_86a734: /* 86a734: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86a737: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86a73cu); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86a73c: mov edi, eax */
  edi = eax;
/* 86a73e: mov ecx, dword ptr [edi + 0xc0] */
  ecx = R32((uint32_t)(edi + 0xc0u));
/* 86a744: cmp ecx, dword ptr [0xcd8adc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xcd8adcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a74a: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 86a74d: je 0x86aaa0 */
  if (zf) goto L_86aaa0;
L_86a753: /* 86a753: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86a756: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 86a759: mov eax, dword ptr [esi + edx*4 + 0x1c] */
  eax = R32((uint32_t)(esi + edx*4 + 0x1cu));
/* 86a75d: lea ecx, [esi + edx*4 + 0x1c] */
  ecx = (uint32_t)(esi + edx*4 + 0x1cu);
/* 86a761: lea edx, [edi + 0x8c] */
  edx = (uint32_t)(edi + 0x8cu);
/* 86a767: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a768: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86a76bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86a76b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a76d: je 0x86a785 */
  if (zf) goto L_86a785;
L_86a76f: /* 86a76f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a771: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86a774: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86a77a: mov eax, edi */
  eax = edi;
/* 86a77c: call 0x867e00 */
  esp -= 4; W32(esp, 0x86a781u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86a781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a783: jne 0x86a798 */
  if (!zf) goto L_86a798;
L_86a785: /* 86a785: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a787: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86a78a: mov eax, dword ptr [ecx + 0x154] */
  eax = R32((uint32_t)(ecx + 0x154u));
/* 86a790: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a792: je 0x86aaa0 */
  if (zf) goto L_86aaa0;
L_86a798: /* 86a798: mov eax, dword ptr [edi + 0xbc] */
  eax = R32((uint32_t)(edi + 0xbcu));
/* 86a79e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a7a0: je 0x86a916 */
  if (zf) goto L_86a916;
L_86a7a6: /* 86a7a6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a7a8: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* 86a7ae: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86a7b3: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 86a7b6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86a7b9: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 86a7bc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 86a7bf: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 86a7c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a7c3: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 86a7c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a7ca: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 86a7d0: lea ebx, [esi + 0x33c] */
  ebx = (uint32_t)(esi + 0x33cu);
/* 86a7d6: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 86a7d9: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 86a7e0: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x86a7e6u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 86a7e6: mov ecx, eax */
  ecx = eax;
/* 86a7e8: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86a7eeu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86a7ee: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86a7f1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86a7f4: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 86a7f7: jmp 0x86a800 */
  goto L_86a800;
L_86a7f9: /* 86a7f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86a800: /* 86a800: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86a802: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a804: je 0x86a8d2 */
  if (zf) goto L_86a8d2;
L_86a80a: /* 86a80a: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a80d: jne 0x86a868 */
  if (!zf) goto L_86a868;
L_86a80f: /* 86a80f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a811: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* 86a817: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86a81c: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 86a81f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86a822: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 86a825: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86a828: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 86a82b: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 86a82e: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 86a835: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 86a838: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a839: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 86a83f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a840: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86a846: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x86a84cu); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 86a84c: mov ecx, eax */
  ecx = eax;
/* 86a84e: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86a854u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86a854: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 86a857: fcomp dword ptr [ebp - 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc0u)));
  FPOP();
/* 86a85a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86a85c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a85f: jne 0x86a868 */
  if (!zf) goto L_86a868;
L_86a861: /* 86a861: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 86a863: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 86a866: jmp 0x86a800 */
  goto L_86a800;
L_86a868: /* 86a868: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86a86a: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a86d: je 0x86a8d2 */
  if (zf) goto L_86a8d2;
L_86a86f: /* 86a86f: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86a872: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86a875: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86a878: add eax, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86a87b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86a87d: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86a883: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 86a886: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 86a889: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 86a88c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86a88f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a891: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 86a893: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 86a895: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a897: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 86a89a: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 86a8a0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 86a8a3: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 86a8a9: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86a8ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a8ae: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* 86a8b4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 86a8b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86a8b8: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 86a8bb: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 86a8bd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86a8c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86a8c5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a8c8: jne 0x86a8d2 */
  if (!zf) goto L_86a8d2;
L_86a8ca: /* 86a8ca: lea ebx, [edx + 0x1c] */
  ebx = (uint32_t)(edx + 0x1cu);
/* 86a8cd: jmp 0x86a800 */
  goto L_86a800;
L_86a8d2: /* 86a8d2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a8d4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86a8d6: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86a8db: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 86a8e2: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 86a8e5: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86a8ebu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86a8eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a8ed: je 0x86a90d */
  if (zf) goto L_86a90d;
L_86a8ef: /* 86a8ef: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86a8f1: mov ecx, 7 */
  ecx = 0x7u;
/* 86a8f6: lea esi, [ebp - 0x74] */
  esi = (uint32_t)(ebp + 0xffffff8cu);
/* 86a8f9: mov edi, eax */
  edi = eax;
/* 86a8fb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86a8fd: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86a900: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86a903: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86a906: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 86a908: jmp 0x86a9b9 */
  goto L_86a9b9;
L_86a90d: /* 86a90d: xor eax, eax */
  eax = 0;
/* 86a90f: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 86a911: jmp 0x86a9b9 */
  goto L_86a9b9;
L_86a916: /* 86a916: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86a919: cmp byte ptr [eax + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86a91d: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a91f: /* 86a91f: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 86a925: test cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a928: je 0x86a991 */
  if (zf) goto L_86a991;
L_86a92a: /* 86a92a: mov edx, dword ptr [eax + 0x264] */
  edx = R32((uint32_t)(eax + 0x264u));
/* 86a930: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a932: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a934: /* 86a934: mov edx, dword ptr [esi + 0x330] */
  edx = R32((uint32_t)(esi + 0x330u));
/* 86a93a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 86a93d: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a941: je 0x86a948 */
  if (zf) goto L_86a948;
L_86a943: /* 86a943: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a946: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a948: /* 86a948: mov ecx, dword ptr [esi + 0x334] */
  ecx = R32((uint32_t)(esi + 0x334u));
/* 86a94e: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a952: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a954: /* 86a954: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86a956: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 86a959: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x86a95eu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 86a95e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a960: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a962: /* 86a962: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86a967: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86a96a: jne 0x86a991 */
  if (!zf) goto L_86a991;
L_86a96c: /* 86a96c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 86a96f: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 86a972: test byte ptr [edx + 0x78], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x78u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a976: je 0x86a991 */
  if (zf) goto L_86a991;
L_86a978: /* 86a978: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 86a97b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86a97d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86a97e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86a97f: lea edx, [esi + 0x340] */
  edx = (uint32_t)(esi + 0x340u);
/* 86a985: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86a986: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86a987: call 0x6c5669 */
  esp -= 4; W32(esp, 0x86a98cu); SPILL(); f_6c5669(); if (g_unwind) return; RELOAD();
/* 86a98c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86a98f: jmp 0x86a9b9 */
  goto L_86a9b9;
L_86a991: /* 86a991: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a993: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86a995: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86a99a: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86a9a0u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86a9a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a9a2: je 0x86a9b1 */
  if (zf) goto L_86a9b1;
L_86a9a4: /* 86a9a4: mov ecx, dword ptr [esi + 0x338] */
  ecx = R32((uint32_t)(esi + 0x338u));
/* 86a9aa: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86a9ac: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86a9af: jmp 0x86a9b3 */
  goto L_86a9b3;
L_86a9b1: /* 86a9b1: xor eax, eax */
  eax = 0;
L_86a9b3: /* 86a9b3: mov dword ptr [esi + 0x338], eax */
  W32((uint32_t)(esi + 0x338u), eax);
L_86a9b9: /* 86a9b9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 86a9bc: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 86a9bf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86a9c1: je 0x86aa94 */
  if (zf) goto L_86aa94;
L_86a9c7: /* 86a9c7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86a9c9: test byte ptr [ecx + 0x80], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86a9d0: je 0x86aa94 */
  if (zf) goto L_86aa94;
L_86a9d6: /* 86a9d6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86a9d8: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 86a9de: fsub dword ptr [eax + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x194u)));
/* 86a9e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86a9e6: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86a9eb: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86a9ee: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 86a9f4: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 86a9f7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 86a9fa: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 86aa00: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 86aa03: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 86aa06: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x86aa0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86aa0c: fst dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0);
/* 86aa0f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 86aa12: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 86aa15: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 86aa18: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 86aa1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86aa1d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 86aa20: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 86aa23: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86aa25: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86aa27: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86aa29: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86aa2b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86aa2d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86aa2f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86aa32: je 0x86aa46 */
  if (zf) goto L_86aa46;
L_86aa34: /* 86aa34: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86aa36: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 86aa39: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86aa3f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86aa41: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86aa44: jp 0x86aa94 */
  if (pf) goto L_86aa94;
L_86aa46: /* 86aa46: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86aa48: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86aa4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86aa4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86aa4f: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 86aa55: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x86aa5bu); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 86aa5b: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86aa5e: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86aa61: mov edx, dword ptr [esi + ecx*4 + 0x1c] */
  edx = R32((uint32_t)(esi + ecx*4 + 0x1cu));
/* 86aa65: lea ecx, [esi + ecx*4 + 0x1c] */
  ecx = (uint32_t)(esi + ecx*4 + 0x1cu);
/* 86aa69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86aa6a: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86aa6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86aa6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aa6f: je 0x86aa94 */
  if (zf) goto L_86aa94;
L_86aa71: /* 86aa71: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86aa73: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86aa76: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86aa7c: mov eax, edi */
  eax = edi;
/* 86aa7e: call 0x867e00 */
  esp -= 4; W32(esp, 0x86aa83u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86aa83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aa85: je 0x86aa94 */
  if (zf) goto L_86aa94;
L_86aa87: /* 86aa87: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86aa89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86aa8a: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86aa8f: call 0x6c34db */
  esp -= 4; W32(esp, 0x86aa94u); SPILL(); f_6c34db(); if (g_unwind) return; RELOAD();
L_86aa94: /* 86aa94: mov ecx, dword ptr [0xcd8adc] */
  ecx = R32((uint32_t)(0xcd8adcu));
/* 86aa9a: mov dword ptr [edi + 0xc0], ecx */
  W32((uint32_t)(edi + 0xc0u), ecx);
L_86aaa0: /* 86aaa0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86aaa3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86aaa6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86aaa7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86aaaa: jmp 0x86a700 */
  goto L_86a700;
L_86aaaf: /* 86aaaf: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 86aab2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 86aab5: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 86aab8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86aabb: jmp 0x86aac0 */
  goto L_86aac0;
L_86aac0: /* 86aac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aac2: je 0x86adff */
  if (zf) goto L_86adff;
L_86aac8: /* 86aac8: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 86aaca: mov ecx, dword ptr [0xcd8adc] */
  ecx = R32((uint32_t)(0xcd8adcu));
/* 86aad0: cmp dword ptr [edi + 0xc0], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xc0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86aad6: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 86aad9: je 0x86adbf */
  if (zf) goto L_86adbf;
L_86aadf: /* 86aadf: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86aae2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 86aae5: mov eax, dword ptr [esi + edx*4 + 0x1c] */
  eax = R32((uint32_t)(esi + edx*4 + 0x1cu));
/* 86aae9: lea ecx, [esi + edx*4 + 0x1c] */
  ecx = (uint32_t)(esi + edx*4 + 0x1cu);
/* 86aaed: lea edx, [edi + 0x8c] */
  edx = (uint32_t)(edi + 0x8cu);
/* 86aaf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86aaf4: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86aaf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86aaf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aaf9: je 0x86ab11 */
  if (zf) goto L_86ab11;
L_86aafb: /* 86aafb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86aafd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ab00: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86ab06: mov eax, edi */
  eax = edi;
/* 86ab08: call 0x867e00 */
  esp -= 4; W32(esp, 0x86ab0du); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86ab0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab0f: jne 0x86ab24 */
  if (!zf) goto L_86ab24;
L_86ab11: /* 86ab11: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ab13: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ab16: mov eax, dword ptr [ecx + 0x154] */
  eax = R32((uint32_t)(ecx + 0x154u));
/* 86ab1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab1e: je 0x86adbf */
  if (zf) goto L_86adbf;
L_86ab24: /* 86ab24: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86ab26: cmp byte ptr [edx + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86ab2a: jne 0x86ab43 */
  if (!zf) goto L_86ab43;
L_86ab2c: /* 86ab2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ab2e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ab31: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86ab34: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 86ab3a: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab3d: jne 0x86adbf */
  if (!zf) goto L_86adbf;
L_86ab43: /* 86ab43: mov eax, dword ptr [edi + 0xbc] */
  eax = R32((uint32_t)(edi + 0xbcu));
/* 86ab49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab4b: je 0x86acb2 */
  if (zf) goto L_86acb2;
L_86ab51: /* 86ab51: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ab53: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* 86ab59: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ab5e: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 86ab61: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86ab64: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 86ab67: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86ab6a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 86ab6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ab6e: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 86ab74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ab75: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 86ab7b: lea ebx, [esi + 0x33c] */
  ebx = (uint32_t)(esi + 0x33cu);
/* 86ab81: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 86ab84: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 86ab8b: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x86ab91u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 86ab91: mov ecx, eax */
  ecx = eax;
/* 86ab93: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86ab99u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86ab99: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 86ab9c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86ab9f: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_86aba2: /* 86aba2: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86aba4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aba6: je 0x86ac74 */
  if (zf) goto L_86ac74;
L_86abac: /* 86abac: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86abaf: jne 0x86ac0a */
  if (!zf) goto L_86ac0a;
L_86abb1: /* 86abb1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86abb3: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* 86abb9: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86abbe: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 86abc1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86abc4: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 86abc7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86abca: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 86abcd: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 86abd0: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 86abd7: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 86abda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86abdb: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 86abe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86abe2: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86abe8: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x86abeeu); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 86abee: mov ecx, eax */
  ecx = eax;
/* 86abf0: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86abf6u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86abf6: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 86abf9: fcomp dword ptr [ebp - 0x3c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc4u)));
  FPOP();
/* 86abfc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86abfe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ac01: jne 0x86ac0a */
  if (!zf) goto L_86ac0a;
L_86ac03: /* 86ac03: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 86ac05: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 86ac08: jmp 0x86aba2 */
  goto L_86aba2;
L_86ac0a: /* 86ac0a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ac0c: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ac0f: je 0x86ac74 */
  if (zf) goto L_86ac74;
L_86ac11: /* 86ac11: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86ac14: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 86ac1a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86ac1d: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86ac20: add eax, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ac23: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86ac25: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86ac2b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86ac2e: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 86ac34: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 86ac37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac39: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* 86ac3f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 86ac41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac43: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 86ac46: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 86ac49: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86ac4c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 86ac4f: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 86ac52: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac54: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86ac56: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 86ac58: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac5a: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 86ac5d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 86ac5f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86ac65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86ac67: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ac6a: jne 0x86ac74 */
  if (!zf) goto L_86ac74;
L_86ac6c: /* 86ac6c: lea ebx, [edx + 0x1c] */
  ebx = (uint32_t)(edx + 0x1cu);
/* 86ac6f: jmp 0x86aba2 */
  goto L_86aba2;
L_86ac74: /* 86ac74: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86ac76: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86ac78: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ac7d: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 86ac84: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 86ac87: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86ac8du); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86ac8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ac8f: je 0x86acac */
  if (zf) goto L_86acac;
L_86ac91: /* 86ac91: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ac93: mov ecx, 7 */
  ecx = 0x7u;
/* 86ac98: lea esi, [ebp - 0x74] */
  esi = (uint32_t)(ebp + 0xffffff8cu);
/* 86ac9b: mov edi, eax */
  edi = eax;
/* 86ac9d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86ac9f: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86aca2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86aca5: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86aca8: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 86acaa: jmp 0x86acda */
  goto L_86acda;
L_86acac: /* 86acac: xor eax, eax */
  eax = 0;
/* 86acae: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 86acb0: jmp 0x86acda */
  goto L_86acda;
L_86acb2: /* 86acb2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86acb4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86acb6: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86acbb: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86acc1u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86acc3: je 0x86acd2 */
  if (zf) goto L_86acd2;
L_86acc5: /* 86acc5: mov ecx, dword ptr [esi + 0x338] */
  ecx = R32((uint32_t)(esi + 0x338u));
/* 86accb: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86accd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86acd0: jmp 0x86acd4 */
  goto L_86acd4;
L_86acd2: /* 86acd2: xor eax, eax */
  eax = 0;
L_86acd4: /* 86acd4: mov dword ptr [esi + 0x338], eax */
  W32((uint32_t)(esi + 0x338u), eax);
L_86acda: /* 86acda: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 86acdd: mov eax, dword ptr [edx + 0x50] */
  eax = R32((uint32_t)(edx + 0x50u));
/* 86ace0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ace2: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86ace8: /* 86ace8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86acea: test byte ptr [ecx + 0x80], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86acf1: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86acf7: /* 86acf7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86acf9: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 86acff: fsub dword ptr [eax + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x194u)));
/* 86ad05: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ad0a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 86ad0d: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 86ad13: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 86ad16: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 86ad19: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 86ad1f: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 86ad22: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86ad24: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86ad27: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86ad2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ad2d: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 86ad30: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 86ad33: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 86ad36: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 86ad39: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 86ad3c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ad3e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 86ad41: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 86ad44: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ad46: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86ad48: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86ad4a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86ad4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86ad4e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86ad50: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ad53: je 0x86ad67 */
  if (zf) goto L_86ad67;
L_86ad55: /* 86ad55: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86ad57: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 86ad5a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86ad60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86ad62: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86ad65: jp 0x86adb3 */
  if (pf) goto L_86adb3;
L_86ad67: /* 86ad67: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ad69: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ad6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ad6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ad70: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 86ad76: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x86ad7cu); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 86ad7c: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86ad7f: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86ad82: lea ecx, [esi + edx*4 + 0x1c] */
  ecx = (uint32_t)(esi + edx*4 + 0x1cu);
/* 86ad86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86ad88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ad89: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86ad8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ad8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ad8e: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86ad90: /* 86ad90: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ad92: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ad95: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86ad9b: mov eax, edi */
  eax = edi;
/* 86ad9d: call 0x867e00 */
  esp -= 4; W32(esp, 0x86ada2u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86ada2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ada4: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86ada6: /* 86ada6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ada8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ada9: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86adae: call 0x6c34db */
  esp -= 4; W32(esp, 0x86adb3u); SPILL(); f_6c34db(); if (g_unwind) return; RELOAD();
L_86adb3: /* 86adb3: mov ecx, dword ptr [0xcd8adc] */
  ecx = R32((uint32_t)(0xcd8adcu));
/* 86adb9: mov dword ptr [edi + 0xc0], ecx */
  W32((uint32_t)(edi + 0xc0u), ecx);
L_86adbf: /* 86adbf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86adc2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86adc5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86adc8: mov eax, edx */
  eax = edx;
/* 86adca: jmp 0x86aac0 */
  goto L_86aac0;
L_86adff: /* 86adff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ae02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ae03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ae04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ae0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ae0c: mov esp, ebp */
  esp = ebp;
/* 86ae0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86ae0f: ret  */
  esp += 4; SPILL(); return;
}

void f_86aabd(void) {
  LOAD_REGS();
L_86aabd: /* 86aabd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86aac0: /* 86aac0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aac2: je 0x86adff */
  if (zf) goto L_86adff;
L_86aac8: /* 86aac8: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 86aaca: mov ecx, dword ptr [0xcd8adc] */
  ecx = R32((uint32_t)(0xcd8adcu));
/* 86aad0: cmp dword ptr [edi + 0xc0], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xc0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86aad6: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 86aad9: je 0x86adbf */
  if (zf) goto L_86adbf;
L_86aadf: /* 86aadf: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86aae2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 86aae5: mov eax, dword ptr [esi + edx*4 + 0x1c] */
  eax = R32((uint32_t)(esi + edx*4 + 0x1cu));
/* 86aae9: lea ecx, [esi + edx*4 + 0x1c] */
  ecx = (uint32_t)(esi + edx*4 + 0x1cu);
/* 86aaed: lea edx, [edi + 0x8c] */
  edx = (uint32_t)(edi + 0x8cu);
/* 86aaf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86aaf4: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x86aaf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86aaf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aaf9: je 0x86ab11 */
  if (zf) goto L_86ab11;
L_86aafb: /* 86aafb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86aafd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ab00: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86ab06: mov eax, edi */
  eax = edi;
/* 86ab08: call 0x867e00 */
  esp -= 4; W32(esp, 0x86ab0du); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86ab0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab0f: jne 0x86ab24 */
  if (!zf) goto L_86ab24;
L_86ab11: /* 86ab11: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ab13: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ab16: mov eax, dword ptr [ecx + 0x154] */
  eax = R32((uint32_t)(ecx + 0x154u));
/* 86ab1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab1e: je 0x86adbf */
  if (zf) goto L_86adbf;
L_86ab24: /* 86ab24: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 86ab26: cmp byte ptr [edx + 0x51], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x51u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86ab2a: jne 0x86ab43 */
  if (!zf) goto L_86ab43;
L_86ab2c: /* 86ab2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ab2e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ab31: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86ab34: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 86ab3a: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab3d: jne 0x86adbf */
  if (!zf) goto L_86adbf;
L_86ab43: /* 86ab43: mov eax, dword ptr [edi + 0xbc] */
  eax = R32((uint32_t)(edi + 0xbcu));
/* 86ab49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ab4b: je 0x86acb2 */
  if (zf) goto L_86acb2;
L_86ab51: /* 86ab51: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ab53: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* 86ab59: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ab5e: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 86ab61: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86ab64: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 86ab67: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86ab6a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 86ab6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86ab6e: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 86ab74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86ab75: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 86ab7b: lea ebx, [esi + 0x33c] */
  ebx = (uint32_t)(esi + 0x33cu);
/* 86ab81: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 86ab84: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 86ab8b: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x86ab91u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 86ab91: mov ecx, eax */
  ecx = eax;
/* 86ab93: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86ab99u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86ab99: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 86ab9c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86ab9f: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_86aba2: /* 86aba2: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86aba4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86aba6: je 0x86ac74 */
  if (zf) goto L_86ac74;
L_86abac: /* 86abac: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86abaf: jne 0x86ac0a */
  if (!zf) goto L_86ac0a;
L_86abb1: /* 86abb1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86abb3: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* 86abb9: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86abbe: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 86abc1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86abc4: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 86abc7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86abca: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 86abcd: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 86abd0: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 86abd7: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 86abda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86abdb: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 86abe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86abe2: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86abe8: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x86abeeu); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 86abee: mov ecx, eax */
  ecx = eax;
/* 86abf0: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86abf6u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86abf6: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 86abf9: fcomp dword ptr [ebp - 0x3c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc4u)));
  FPOP();
/* 86abfc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86abfe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ac01: jne 0x86ac0a */
  if (!zf) goto L_86ac0a;
L_86ac03: /* 86ac03: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 86ac05: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 86ac08: jmp 0x86aba2 */
  goto L_86aba2;
L_86ac0a: /* 86ac0a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ac0c: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86ac0f: je 0x86ac74 */
  if (zf) goto L_86ac74;
L_86ac11: /* 86ac11: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86ac14: fld dword ptr [edi + 0xb0] */
  { double v = F32((uint32_t)(edi + 0xb0u)); FPUSH(v); }
/* 86ac1a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86ac1d: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 86ac20: add eax, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ac23: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86ac25: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86ac2b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86ac2e: fld dword ptr [edi + 0xac] */
  { double v = F32((uint32_t)(edi + 0xacu)); FPUSH(v); }
/* 86ac34: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 86ac37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac39: fld dword ptr [edi + 0xa8] */
  { double v = F32((uint32_t)(edi + 0xa8u)); FPUSH(v); }
/* 86ac3f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 86ac41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac43: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 86ac46: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 86ac49: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86ac4c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 86ac4f: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 86ac52: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac54: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86ac56: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 86ac58: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ac5a: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 86ac5d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 86ac5f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86ac65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86ac67: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ac6a: jne 0x86ac74 */
  if (!zf) goto L_86ac74;
L_86ac6c: /* 86ac6c: lea ebx, [edx + 0x1c] */
  ebx = (uint32_t)(edx + 0x1cu);
/* 86ac6f: jmp 0x86aba2 */
  goto L_86aba2;
L_86ac74: /* 86ac74: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86ac76: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86ac78: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86ac7d: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 86ac84: mov dword ptr [ebp - 0x5c], edi */
  W32((uint32_t)(ebp + 0xffffffa4u), edi);
/* 86ac87: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86ac8du); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86ac8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ac8f: je 0x86acac */
  if (zf) goto L_86acac;
L_86ac91: /* 86ac91: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86ac93: mov ecx, 7 */
  ecx = 0x7u;
/* 86ac98: lea esi, [ebp - 0x74] */
  esi = (uint32_t)(ebp + 0xffffff8cu);
/* 86ac9b: mov edi, eax */
  edi = eax;
/* 86ac9d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86ac9f: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86aca2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86aca5: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86aca8: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 86acaa: jmp 0x86acda */
  goto L_86acda;
L_86acac: /* 86acac: xor eax, eax */
  eax = 0;
/* 86acae: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 86acb0: jmp 0x86acda */
  goto L_86acda;
L_86acb2: /* 86acb2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86acb4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86acb6: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86acbb: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86acc1u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86acc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86acc3: je 0x86acd2 */
  if (zf) goto L_86acd2;
L_86acc5: /* 86acc5: mov ecx, dword ptr [esi + 0x338] */
  ecx = R32((uint32_t)(esi + 0x338u));
/* 86accb: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86accd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86acd0: jmp 0x86acd4 */
  goto L_86acd4;
L_86acd2: /* 86acd2: xor eax, eax */
  eax = 0;
L_86acd4: /* 86acd4: mov dword ptr [esi + 0x338], eax */
  W32((uint32_t)(esi + 0x338u), eax);
L_86acda: /* 86acda: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 86acdd: mov eax, dword ptr [edx + 0x50] */
  eax = R32((uint32_t)(edx + 0x50u));
/* 86ace0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ace2: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86ace8: /* 86ace8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86acea: test byte ptr [ecx + 0x80], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86acf1: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86acf7: /* 86acf7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86acf9: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 86acff: fsub dword ptr [eax + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x194u)));
/* 86ad05: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ad0a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 86ad0d: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 86ad13: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 86ad16: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 86ad19: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 86ad1f: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 86ad22: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86ad24: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 86ad27: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86ad2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ad2d: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 86ad30: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 86ad33: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 86ad36: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 86ad39: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 86ad3c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ad3e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 86ad41: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 86ad44: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ad46: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 86ad48: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86ad4a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 86ad4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86ad4e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86ad50: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86ad53: je 0x86ad67 */
  if (zf) goto L_86ad67;
L_86ad55: /* 86ad55: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86ad57: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 86ad5a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86ad60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86ad62: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86ad65: jp 0x86adb3 */
  if (pf) goto L_86adb3;
L_86ad67: /* 86ad67: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ad69: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86ad6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ad6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ad70: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 86ad76: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x86ad7cu); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 86ad7c: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86ad7f: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86ad82: lea ecx, [esi + edx*4 + 0x1c] */
  ecx = (uint32_t)(esi + edx*4 + 0x1cu);
/* 86ad86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86ad88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ad89: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x86ad8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86ad8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ad8e: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86ad90: /* 86ad90: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86ad92: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86ad95: lea ebx, [eax + 0x194] */
  ebx = (uint32_t)(eax + 0x194u);
/* 86ad9b: mov eax, edi */
  eax = edi;
/* 86ad9d: call 0x867e00 */
  esp -= 4; W32(esp, 0x86ada2u); SPILL(); f_867e00(); if (g_unwind) return; RELOAD();
/* 86ada2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ada4: je 0x86adb3 */
  if (zf) goto L_86adb3;
L_86ada6: /* 86ada6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86ada8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ada9: mov ecx, 0xcd8af0 */
  ecx = 0xcd8af0u;
/* 86adae: call 0x6c34db */
  esp -= 4; W32(esp, 0x86adb3u); SPILL(); f_6c34db(); if (g_unwind) return; RELOAD();
L_86adb3: /* 86adb3: mov ecx, dword ptr [0xcd8adc] */
  ecx = R32((uint32_t)(0xcd8adcu));
/* 86adb9: mov dword ptr [edi + 0xc0], ecx */
  W32((uint32_t)(edi + 0xc0u), ecx);
L_86adbf: /* 86adbf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86adc2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86adc5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86adc8: mov eax, edx */
  eax = edx;
/* 86adca: jmp 0x86aac0 */
  goto L_86aac0;
L_86adff: /* 86adff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ae02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ae03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ae04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ae0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ae0c: mov esp, ebp */
  esp = ebp;
/* 86ae0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86ae0f: ret  */
  esp += 4; SPILL(); return;
}

void f_86adcf(void) {
  LOAD_REGS();
L_86adcf: /* 86adcf: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 86add2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 86add7: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 86adda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86addb: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 86adde: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86ade3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_86ade3(); return;
}

void f_86ade3(void) {
  LOAD_REGS();
L_86ade3: /* 86ade3: push 0xa182c0 */
  { uint32_t v = 0xa182c0u; esp -= 4; W32(esp, v); }
/* 86ade8: push 0xae567c */
  { uint32_t v = 0xae567cu; esp -= 4; W32(esp, v); }
/* 86aded: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x86adf3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 86adf3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86adf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86adf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86adfa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x86adffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 86adff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86ae02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86ae03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86ae04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86ae0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86ae0c: mov esp, ebp */
  esp = ebp;
/* 86ae0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86ae0f: ret  */
  esp += 4; SPILL(); return;
}

void f_86b060(void) {
  LOAD_REGS();
L_86b060: /* 86b060: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86b063: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b064: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 86b065: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 86b069: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86b06a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86b06b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b06d: push 0x204 */
  { uint32_t v = 0x204u; esp -= 4; W32(esp, v); }
/* 86b072: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86b077: mov edi, eax */
  edi = eax;
/* 86b079: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86b07fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86b07f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b081: je 0x86b08e */
  if (zf) goto L_86b08e;
L_86b083: /* 86b083: mov ecx, eax */
  ecx = eax;
/* 86b085: call 0x6cc784 */
  esp -= 4; W32(esp, 0x86b08au); SPILL(); f_6cc784(); if (g_unwind) return; RELOAD();
/* 86b08a: mov esi, eax */
  esi = eax;
/* 86b08c: jmp 0x86b090 */
  goto L_86b090;
L_86b08e: /* 86b08e: xor esi, esi */
  esi = 0;
L_86b090: /* 86b090: lea ebx, [edi + 0x30] */
  ebx = (uint32_t)(edi + 0x30u);
/* 86b093: mov ecx, ebx */
  ecx = ebx;
/* 86b095: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86b097: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 86b09b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 86b09e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 86b0a1: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 86b0a5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 86b0a9: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 86b0ac: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 86b0af: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 86b0b3: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 86b0b7: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 86b0ba: mov edx, eax */
  edx = eax;
/* 86b0bc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 86b0be: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 86b0c2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 86b0c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b0c7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 86b0ca: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 86b0ce: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 86b0d0: mov eax, dword ptr [esi + 0x200] */
  eax = R32((uint32_t)(esi + 0x200u));
/* 86b0d6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 86b0d9: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86b0db: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 86b0df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b0e1: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 86b0e5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86b0e7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86b0ea: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 86b0ee: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 86b0f2: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 86b0f6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 86b0f9: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 86b0fc: mov eax, dword ptr [esi + 0x200] */
  eax = R32((uint32_t)(esi + 0x200u));
/* 86b102: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86b103: mov dword ptr [esi + 0x200], eax */
  W32((uint32_t)(esi + 0x200u), eax);
/* 86b109: mov ecx, dword ptr [edi + 0x100] */
  ecx = R32((uint32_t)(edi + 0x100u));
/* 86b10f: mov edx, eax */
  edx = eax;
/* 86b111: xor eax, eax */
  eax = 0;
/* 86b113: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 86b115: jle 0x86b1dd */
  if ((zf || sf != of)) goto L_86b1dd;
L_86b11b: /* 86b11b: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 86b11f: nop  */
L_86b120: /* 86b120: cmp edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86b123: jge 0x86b1dd */
  if ((sf == of)) goto L_86b1dd;
L_86b129: /* 86b129: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 86b12c: mov eax, ebx */
  eax = ebx;
/* 86b12e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 86b12f: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x86b12f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 86b131: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86b134: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86b137: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 86b13a: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* 86b13d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86b13f: mov edx, esp */
  edx = esp;
/* 86b141: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 86b143: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86b146: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 86b149: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 86b14c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 86b14f: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 86b153: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 86b155: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86b158: mov eax, esp */
  eax = esp;
/* 86b15a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 86b15c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 86b15f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 86b162: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86b165: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 86b168: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 86b16b: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86b170: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 86b172: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86b175: mov ecx, esp */
  ecx = esp;
/* 86b177: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86b179: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86b17c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 86b17f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 86b182: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 86b185: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 86b189: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x86b18fu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 86b18f: mov ecx, dword ptr [esi + 0x200] */
  ecx = R32((uint32_t)(esi + 0x200u));
/* 86b195: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 86b199: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 86b19c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86b19e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 86b1a0: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 86b1a4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 86b1a7: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 86b1ab: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 86b1ae: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 86b1b2: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 86b1b5: mov edx, dword ptr [esi + 0x200] */
  edx = R32((uint32_t)(esi + 0x200u));
/* 86b1bb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 86b1bf: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86b1c2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86b1c3: mov dword ptr [esi + 0x200], edx */
  W32((uint32_t)(esi + 0x200u), edx);
/* 86b1c9: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 86b1cd: mov ecx, dword ptr [edi + 0x100] */
  ecx = R32((uint32_t)(edi + 0x100u));
/* 86b1d3: mov eax, ebx */
  eax = ebx;
/* 86b1d5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86b1d7: jl 0x86b120 */
  if ((sf != of)) goto L_86b120;
L_86b1dd: /* 86b1dd: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 86b1e1: xor edi, edi */
  edi = 0;
/* 86b1e3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b1e5: je 0x86b317 */
  if (zf) goto L_86b317;
L_86b1eb: /* 86b1eb: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 86b1ee: mov eax, dword ptr [edx + 0x1c8] */
  eax = R32((uint32_t)(edx + 0x1c8u));
/* 86b1f4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86b1f7: mov ebx, dword ptr [ecx + 0x8c] */
  ebx = R32((uint32_t)(ecx + 0x8cu));
/* 86b1fd: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86b200: mov eax, dword ptr [ebx + eax*8 + 0x11c] */
  eax = R32((uint32_t)(ebx + eax*8 + 0x11cu));
/* 86b207: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b209: jne 0x86b210 */
  if (!zf) goto L_86b210;
L_86b20b: /* 86b20b: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 86b20e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_86b210: /* 86b210: test byte ptr [eax + 0x358], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x358u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b217: je 0x86b317 */
  if (zf) goto L_86b317;
L_86b21d: /* 86b21d: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 86b220: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 86b223: test dword ptr [ecx + 0x534], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b22d: je 0x86b317 */
  if (zf) goto L_86b317;
L_86b233: /* 86b233: mov edx, dword ptr [eax + 0x380] */
  edx = R32((uint32_t)(eax + 0x380u));
/* 86b239: mov ecx, dword ptr [0xcfa344] */
  ecx = R32((uint32_t)(0xcfa344u));
/* 86b23f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 86b241: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 86b245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b246: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86b249: mov eax, esp */
  eax = esp;
/* 86b24b: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 86b24f: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 86b252: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 86b256: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86b258: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 86b25b: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 86b25e: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 86b261: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b262: call 0x6c7018 */
  esp -= 4; W32(esp, 0x86b267u); SPILL(); f_6c7018(); if (g_unwind) return; RELOAD();
/* 86b267: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 86b26a: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 86b26d: fsub dword ptr [ecx + 0x19c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x19cu)));
/* 86b273: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86b279: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 86b27c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 86b27f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86b281: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 86b283: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 86b287: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 86b28b: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 86b28f: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 86b293: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x86b299u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 86b299: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 86b29d: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 86b2a0: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 86b2a4: mov edi, dword ptr [esi + 0x200] */
  edi = R32((uint32_t)(esi + 0x200u));
/* 86b2aa: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 86b2ae: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86b2b3: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 86b2b7: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 86b2bb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 86b2bf: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 86b2c3: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 86b2c7: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 86b2ca: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86b2cc: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 86b2d0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86b2d2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 86b2d4: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 86b2d8: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 86b2db: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 86b2df: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 86b2e2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 86b2e6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86b2e8: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 86b2ec: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86b2ee: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 86b2f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b2f4: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 86b2f8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 86b2fc: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 86b2fe: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 86b301: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 86b304: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b306: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 86b30a: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 86b30e: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 86b311: inc dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x200u), r);
  }
L_86b317: /* 86b317: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b318: mov eax, esi */
  eax = esi;
/* 86b31a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b31b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b31c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b31d: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86b320: ret  */
  esp += 4; SPILL(); return;
}

void f_86b3f0(void) {
  LOAD_REGS();
L_86b3f0: /* 86b3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 86b3f1: mov ebp, esp */
  ebp = esp;
/* 86b3f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 86b3f5: push 0x9d45b1 */
  { uint32_t v = 0x9d45b1u; esp -= 4; W32(esp, v); }
/* 86b3fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 86b400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 86b408: sub esp, 0x2ec */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2ecu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86b40e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b40f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 86b412: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 86b415: mov ecx, dword ptr [eax + 0x98] */
  ecx = R32((uint32_t)(eax + 0x98u));
/* 86b41b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86b41c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 86b41f: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 86b422: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86b423: add esi, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86b426: mov edi, dword ptr [esi + 0x1c] */
  edi = R32((uint32_t)(esi + 0x1cu));
/* 86b429: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 86b42c: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86b42e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86b430: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 86b433: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86b43a: fld dword ptr [ecx + 0x19c] */
  { double v = F32((uint32_t)(ecx + 0x19cu)); FPUSH(v); }
/* 86b440: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 86b443: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 86b446: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 86b449: fld dword ptr [ecx + 0x198] */
  { double v = F32((uint32_t)(ecx + 0x198u)); FPUSH(v); }
/* 86b44f: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 86b452: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b454: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b456: fmul dword ptr [ecx + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x194u)));
/* 86b45c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b45e: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 86b461: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 86b464: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86b46a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86b46c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b46f: jne 0x86b47b */
  if (!zf) goto L_86b47b;
L_86b471: /* 86b471: mov eax, 1 */
  eax = 0x1u;
/* 86b476: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 86b479: jmp 0x86b499 */
  goto L_86b499;
L_86b47b: /* 86b47b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 86b47e: xor eax, eax */
  eax = 0;
/* 86b480: test edx, 0x4000100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b486: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 86b489: jne 0x86b499 */
  if (!zf) goto L_86b499;
L_86b48b: /* 86b48b: mov edx, dword ptr [ecx + 0x1c8] */
  edx = R32((uint32_t)(ecx + 0x1c8u));
/* 86b491: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b493: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86b499: /* 86b499: mov edx, dword ptr [ecx + 0x1c8] */
  edx = R32((uint32_t)(ecx + 0x1c8u));
/* 86b49f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b4a1: je 0x86b4aa */
  if (zf) goto L_86b4aa;
L_86b4a3: /* 86b4a3: movzx eax, byte ptr [eax + esi + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(eax + esi + 0x54u)));
/* 86b4a8: jmp 0x86b4ac */
  goto L_86b4ac;
L_86b4aa: /* 86b4aa: xor eax, eax */
  eax = 0;
L_86b4ac: /* 86b4ac: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86b4af: mov edx, dword ptr [ebx + eax*4 + 0x1c] */
  edx = R32((uint32_t)(ebx + eax*4 + 0x1cu));
/* 86b4b3: lea ecx, [ebx + eax*4 + 0x1c] */
  ecx = (uint32_t)(ebx + eax*4 + 0x1cu);
/* 86b4b7: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 86b4ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b4bb: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x86b4beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86b4be: xor edx, edx */
  edx = 0;
/* 86b4c0: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b4c2: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86b4c8: /* 86b4c8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 86b4cb: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 86b4cd: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 86b4d0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 86b4d3: jns 0x86b682 */
  if (!sf) goto L_86b682;
L_86b4d9: /* 86b4d9: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b4db: jne 0x86b4e4 */
  if (!zf) goto L_86b4e4;
L_86b4dd: /* 86b4dd: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_86b4e4: /* 86b4e4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86b4e6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86b4e9: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86b4ec: test byte ptr [edx + 0x534], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x534u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b4f3: je 0x86be69 */
  if (zf) goto L_86be69;
L_86b4f9: /* 86b4f9: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86b4fd: jge 0x86be69 */
  if ((sf == of)) goto L_86be69;
L_86b503: /* 86b503: mov al, byte ptr [ecx + 0x150] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x150u))) & 0xffu);
/* 86b509: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b50b: je 0x86be69 */
  if (zf) goto L_86be69;
L_86b511: /* 86b511: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86b516: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 86b518: xor edi, edi */
  edi = 0;
/* 86b51a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b51c: je 0x86b568 */
  if (zf) goto L_86b568;
L_86b51e: /* 86b51e: call 0x6c89e0 */
  esp -= 4; W32(esp, 0x86b523u); SPILL(); f_6c89e0(); if (g_unwind) return; RELOAD();
/* 86b523: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b525: je 0x86b568 */
  if (zf) goto L_86b568;
L_86b527: /* 86b527: xor esi, esi */
  esi = 0;
/* 86b529: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_86b530: /* 86b530: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86b533: cmp esi, dword ptr [ecx + 0x118] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86b539: jge 0x86b581 */
  if ((sf == of)) goto L_86b581;
L_86b53b: /* 86b53b: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 86b53e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86b53f: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86b544u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86b544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b545: call 0x6c76c1 */
  esp -= 4; W32(esp, 0x86b54au); SPILL(); f_6c76c1(); if (g_unwind) return; RELOAD();
/* 86b54a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86b54d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b54f: je 0x86b565 */
  if (zf) goto L_86b565;
L_86b551: /* 86b551: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 86b554: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86b555: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86b55au); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86b55a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b55b: call 0x6c76c1 */
  esp -= 4; W32(esp, 0x86b560u); SPILL(); f_6c76c1(); if (g_unwind) return; RELOAD();
/* 86b560: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86b563: mov edi, eax */
  edi = eax;
L_86b565: /* 86b565: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86b566: jmp 0x86b530 */
  goto L_86b530;
L_86b568: /* 86b568: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86b56b: movzx eax, byte ptr [edx + esi + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86b570: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 86b573: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b574: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86b579u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86b579: mov edi, dword ptr [eax + 0x33c] */
  edi = R32((uint32_t)(eax + 0x33cu));
/* 86b57f: jmp 0x86b584 */
  goto L_86b584;
L_86b581: /* 86b581: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_86b584: /* 86b584: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86b586: mov edx, dword ptr [ecx + 0x1c8] */
  edx = R32((uint32_t)(ecx + 0x1c8u));
/* 86b58c: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 86b58f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b590: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86b595u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86b595: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b597: je 0x86be69 */
  if (zf) goto L_86be69;
L_86b59d: /* 86b59d: test byte ptr [eax + 0x398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b5a4: jne 0x86be69 */
  if (!zf) goto L_86be69;
L_86b5aa: /* 86b5aa: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 86b5b0: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 86b5b6: mov dword ptr [edi + 0xd4], ecx */
  W32((uint32_t)(edi + 0xd4u), ecx);
/* 86b5bc: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 86b5c2: xor esi, esi */
  esi = 0;
L_86b5c4: /* 86b5c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b5c6: je 0x86b5e0 */
  if (zf) goto L_86b5e0;
L_86b5c8: /* 86b5c8: movzx edx, byte ptr [edi + 0xc8] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0xc8u)));
/* 86b5cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86b5d1: cmp dword ptr [ecx + 0x1c8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1c8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b5d7: jne 0x86b5db */
  if (!zf) goto L_86b5db;
L_86b5d9: /* 86b5d9: mov esi, ecx */
  esi = ecx;
L_86b5db: /* 86b5db: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86b5de: jmp 0x86b5c4 */
  goto L_86b5c4;
L_86b5e0: /* 86b5e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b5e2: jne 0x86b640 */
  if (!zf) goto L_86b640;
L_86b5e4: /* 86b5e4: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 86b5e9: call 0x6c242d */
  esp -= 4; W32(esp, 0x86b5eeu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 86b5ee: mov ecx, eax */
  ecx = eax;
/* 86b5f0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86b5f3: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 86b5f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b5f8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 86b5fc: je 0x86b612 */
  if (zf) goto L_86b612;
L_86b5fe: /* 86b5fe: movzx eax, byte ptr [edi + 0xc8] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0xc8u)));
/* 86b605: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86b607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b608: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b609: call 0x6cc243 */
  esp -= 4; W32(esp, 0x86b60eu); SPILL(); f_6cc243(); if (g_unwind) return; RELOAD();
/* 86b60e: mov esi, eax */
  esi = eax;
/* 86b610: jmp 0x86b614 */
  goto L_86b614;
L_86b612: /* 86b612: xor esi, esi */
  esi = 0;
L_86b614: /* 86b614: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b616: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b618: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86b61d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86b621: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86b627u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86b627: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b629: je 0x86b638 */
  if (zf) goto L_86b638;
L_86b62b: /* 86b62b: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86b631: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86b633: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86b636: jmp 0x86b63a */
  goto L_86b63a;
L_86b638: /* 86b638: xor eax, eax */
  eax = 0;
L_86b63a: /* 86b63a: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_86b640: /* 86b640: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* 86b646: mov dword ptr [ebx + 0x360], eax */
  W32((uint32_t)(ebx + 0x360u), eax);
L_86b64c: /* 86b64c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86b64f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 86b652: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b655: je 0x86b671 */
  if (zf) goto L_86b671;
L_86b657: /* 86b657: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86b65a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86b65d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b65e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 86b661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b662: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 86b665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b666: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86b667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86b669: call 0x86b3f0 */
  esp -= 4; W32(esp, 0x86b66eu); SPILL(); f_86b3f0(); if (g_unwind) return; RELOAD();
/* 86b66e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86b671: /* 86b671: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 86b674: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 86b675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 86b676: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 86b67d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 86b67e: mov esp, ebp */
  esp = ebp;
/* 86b680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 86b681: ret  */
  esp += 4; SPILL(); return;
L_86b682: /* 86b682: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b687: je 0x86b7be */
  if (zf) goto L_86b7be;
L_86b68d: /* 86b68d: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 86b693: cmp dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b695: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 86b69c: je 0x86b6b5 */
  if (zf) goto L_86b6b5;
L_86b69e: /* 86b69e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 86b6a0: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86b6a3: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86b6a6: mov eax, dword ptr [ecx + 0x534] */
  eax = R32((uint32_t)(ecx + 0x534u));
/* 86b6ac: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b6af: je 0x86be74 */
  if (zf) goto L_86be74;
L_86b6b5: /* 86b6b5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86b6b7: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86b6bb: jge 0x86be74 */
  if ((sf == of)) goto L_86be74;
L_86b6c1: /* 86b6c1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86b6c4: mov al, byte ptr [edx + 0x150] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x150u))) & 0xffu);
/* 86b6ca: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b6cc: je 0x86be74 */
  if (zf) goto L_86be74;
L_86b6d2: /* 86b6d2: mov edi, dword ptr [ebx + 0x32c] */
  edi = R32((uint32_t)(ebx + 0x32cu));
/* 86b6d8: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 86b6df: nop  */
L_86b6e0: /* 86b6e0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b6e2: je 0x86b712 */
  if (zf) goto L_86b712;
L_86b6e4: /* 86b6e4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86b6e6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86b6e8: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x86b6ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86b6eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b6ed: je 0x86b70d */
  if (zf) goto L_86b70d;
L_86b6ef: /* 86b6ef: mov ecx, dword ptr [eax + 0x1d4] */
  ecx = R32((uint32_t)(eax + 0x1d4u));
/* 86b6f5: cmp ecx, dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b6f8: jne 0x86b70d */
  if (!zf) goto L_86b70d;
L_86b6fa: /* 86b6fa: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86b6fd: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86b702: cmp dword ptr [eax + 0x1c8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1c8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b708: jne 0x86b70d */
  if (!zf) goto L_86b70d;
L_86b70a: /* 86b70a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_86b70d: /* 86b70d: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 86b710: jmp 0x86b6e0 */
  goto L_86b6e0;
L_86b712: /* 86b712: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86b715: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b717: jne 0x86b7ad */
  if (!zf) goto L_86b7ad;
L_86b71d: /* 86b71d: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 86b723: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 86b725: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86b727: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 86b72c: push 0x1d8 */
  { uint32_t v = 0x1d8u; esp -= 4; W32(esp, v); }
/* 86b731: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x86b733u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86b733: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86b736: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b738: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 86b73c: je 0x86b77c */
  if (zf) goto L_86b77c;
L_86b73e: /* 86b73e: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86b741: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86b744: movzx eax, byte ptr [edx + esi + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86b749: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b74a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b74b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86b74e: mov eax, esp */
  eax = esp;
/* 86b750: mov ecx, esi */
  ecx = esi;
/* 86b752: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 86b754: mov edx, eax */
  edx = eax;
/* 86b756: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 86b758: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 86b75b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 86b75e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 86b761: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 86b764: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 86b767: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86b76a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 86b76d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86b76f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 86b772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b773: call 0x6cb136 */
  esp -= 4; W32(esp, 0x86b778u); SPILL(); f_6cb136(); if (g_unwind) return; RELOAD();
/* 86b778: mov edi, eax */
  edi = eax;
/* 86b77a: jmp 0x86b77e */
  goto L_86b77e;
L_86b77c: /* 86b77c: xor edi, edi */
  edi = 0;
L_86b77e: /* 86b77e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b780: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86b782: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86b787: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86b78b: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 86b78e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86b794u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86b794: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b796: je 0x86b7a5 */
  if (zf) goto L_86b7a5;
L_86b798: /* 86b798: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86b79e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86b7a0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86b7a3: jmp 0x86b7a7 */
  goto L_86b7a7;
L_86b7a5: /* 86b7a5: xor eax, eax */
  eax = 0;
L_86b7a7: /* 86b7a7: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_86b7ad: /* 86b7ad: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86b7b0: mov edx, dword ptr [ecx + 0x1d0] */
  edx = R32((uint32_t)(ecx + 0x1d0u));
/* 86b7b6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 86b7b9: jmp 0x86be69 */
  goto L_86be69;
L_86b7be: /* 86b7be: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86b7c0: cmp dword ptr [ecx + 0x1c8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1c8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b7c6: je 0x86bf25 */
  if (zf) goto L_86bf25;
L_86b7cc: /* 86b7cc: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b7d1: je 0x86bf25 */
  if (zf) goto L_86bf25;
L_86b7d7: /* 86b7d7: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86b7dc: cmp dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86b7de: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 86b7e5: je 0x86b7fc */
  if (zf) goto L_86b7fc;
L_86b7e7: /* 86b7e7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86b7ea: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86b7ed: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 86b7f3: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b7f6: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b7fc: /* 86b7fc: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86b7ff: mov eax, esi */
  eax = esi;
/* 86b801: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86b803: movzx ecx, byte ptr [eax + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x55u)));
/* 86b807: add eax, 0x55 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x55u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86b80a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86b80b: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 86b80e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86b811: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86b816u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86b816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86b817: call 0x6cb4ab */
  esp -= 4; W32(esp, 0x86b81cu); SPILL(); f_6cb4ab(); if (g_unwind) return; RELOAD();
/* 86b81c: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 86b81f: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 86b822: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86b825: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b827: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b82d: /* 86b82d: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 86b833: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b835: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b83b: /* 86b83b: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 86b83e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86b840: je 0x86be63 */
  if (zf) goto L_86be63;
L_86b846: /* 86b846: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86b849: mov esi, dword ptr [ebx + 0x328] */
  esi = R32((uint32_t)(ebx + 0x328u));
/* 86b84f: mov edx, ecx */
  edx = ecx;
/* 86b851: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86b854: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86b857: mov eax, 1 */
  eax = 0x1u;
/* 86b85c: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 86b85e: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86b861: mov cl, byte ptr [edx + esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + esi))) & 0xffu);
/* 86b864: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 86b867: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86b869: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86b86c: jne 0x86bf19 */
  if (!zf) goto L_86bf19;
L_86b872: /* 86b872: mov cl, byte ptr [esi + 0x54] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x54u))) & 0xffu);
/* 86b875: cmp cl, byte ptr [esi + 0x55] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x55u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 86b878: je 0x86bf19 */
  if (zf) goto L_86bf19;
L_86b87e: /* 86b87e: mov edx, dword ptr [eax + 0x280] */
  edx = R32((uint32_t)(eax + 0x280u));
/* 86b884: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 86b887: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86b88a: mov edx, dword ptr [edx + 0x18] */
  edx = R32((uint32_t)(edx + 0x18u));
/* 86b88d: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 86b890: imul edx, edx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x148u);
  edx = (uint32_t)r;
  }
/* 86b896: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86b898: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86b89d: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 86b8a3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86b8a5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86b8a8: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 86b8ab: mov ecx, eax */
  ecx = eax;
/* 86b8ad: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 86b8b0: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86b8b5u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86b8b5: mov ecx, dword ptr [ebp - 0x1a0] */
  ecx = R32((uint32_t)(ebp + 0xfffffe60u));
/* 86b8bb: mov edx, dword ptr [ebp - 0x19c] */
  edx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86b8c1: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86b8c4: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86b8c7: mov eax, dword ptr [ebp - 0x1a4] */
  eax = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86b8cd: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 86b8d0: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 86b8d3: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 86b8d6: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 86b8d9: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 86b8e0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 86b8e3: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86b8e6: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86b8e9: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86b8ec: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8ee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86b8f0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8f2: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86b8f5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8f7: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86b8fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b8fc: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86b8ff: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b902: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86b905: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b908: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86b90b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b90e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86b911: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b914: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86b917: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b919: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86b91b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b91d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b91f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b921: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b924: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86b927: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b92a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86b92d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b930: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86b933: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86b936: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86b939: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b93b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86b93d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b93f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b941: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b943: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b946: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86b949: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b94c: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86b94f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b952: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86b955: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86b958: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86b95b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b95d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86b95f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b961: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86b963: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86b965: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86b967: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86b969: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86b96b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86b96e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86b971: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86b974: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86b977: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86b97a: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86b97d: mov dword ptr [ebp - 0x1a4], ecx */
  W32((uint32_t)(ebp + 0xfffffe5cu), ecx);
/* 86b983: mov dword ptr [ebp - 0x1a0], edx */
  W32((uint32_t)(ebp + 0xfffffe60u), edx);
/* 86b989: mov dword ptr [ebp - 0x19c], eax */
  W32((uint32_t)(ebp + 0xfffffe64u), eax);
/* 86b98f: xor ecx, ecx */
  ecx = 0;
L_86b991: /* 86b991: cmp ecx, dword ptr [ebp - 0xb0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86b997: jge 0x86ba76 */
  if ((sf == of)) goto L_86ba76;
L_86b99d: /* 86b99d: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 86b9a0: fld dword ptr [ebp + eax*4 - 0x17c] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffe84u)); FPUSH(v); }
/* 86b9a7: mov edx, dword ptr [ebp + eax*4 - 0x180] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffe80u));
/* 86b9ae: lea eax, [ebp + eax*4 - 0x180] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffe80u);
/* 86b9b5: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 86b9b8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 86b9bb: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86b9be: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86b9c1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 86b9c4: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 86b9cb: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86b9ce: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86b9d1: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86b9d4: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86b9d7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9d9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86b9db: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9dd: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86b9e0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9e2: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86b9e5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86b9e7: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86b9ea: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9ed: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86b9f0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9f3: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86b9f6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9f9: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86b9fc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86b9ff: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86ba02: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba04: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86ba06: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba08: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba0a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ba0c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba0f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86ba12: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba15: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86ba18: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba1b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86ba1e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86ba21: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86ba24: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba26: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86ba28: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba2a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba2c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ba2e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba31: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86ba34: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba37: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86ba3a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba3d: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86ba40: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86ba43: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86ba46: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba48: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86ba4a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba4c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86ba4e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86ba50: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86ba52: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86ba54: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86ba56: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86ba59: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86ba5c: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86ba5f: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86ba62: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86ba64: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86ba67: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86ba6a: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86ba6d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 86ba70: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86ba71: jmp 0x86b991 */
  goto L_86b991;
L_86ba76: /* 86ba76: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86ba79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ba7b: jne 0x86ba88 */
  if (!zf) goto L_86ba88;
L_86ba7d: /* 86ba7d: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86ba83: call 0x6cc36f */
  esp -= 4; W32(esp, 0x86ba88u); SPILL(); f_6cc36f(); if (g_unwind) return; RELOAD();
L_86ba88: /* 86ba88: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86ba8b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86ba8d: jne 0x86bd53 */
  if (!zf) goto L_86bd53;
L_86ba93: /* 86ba93: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86ba96: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 86ba99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86ba9a: mov ecx, esi */
  ecx = esi;
/* 86ba9c: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86baa1u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86baa1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86baa3: mov edx, dword ptr [ecx + 0x1c8] */
  edx = R32((uint32_t)(ecx + 0x1c8u));
/* 86baa9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86baaa: mov ecx, esi */
  ecx = esi;
/* 86baac: mov edi, eax */
  edi = eax;
/* 86baae: call 0x6c2045 */
  esp -= 4; W32(esp, 0x86bab3u); SPILL(); f_6c2045(); if (g_unwind) return; RELOAD();
/* 86bab3: test byte ptr [edi + 0x398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86baba: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bac0: /* 86bac0: test byte ptr [eax + 0x398], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x398u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bac7: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bacd: /* 86bacd: xor ecx, ecx */
  ecx = 0;
/* 86bacf: nop  */
L_86bad0: /* 86bad0: cmp ecx, dword ptr [eax + 0x3a0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3a0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86bad6: jge 0x86baea */
  if ((sf == of)) goto L_86baea;
L_86bad8: /* 86bad8: mov edx, dword ptr [eax + 0x39c] */
  edx = R32((uint32_t)(eax + 0x39cu));
/* 86bade: cmp edi, dword ptr [edx + ecx*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bae1: je 0x86bd47 */
  if (zf) goto L_86bd47;
L_86bae7: /* 86bae7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86bae8: jmp 0x86bad0 */
  goto L_86bad0;
L_86baea: /* 86baea: xor eax, eax */
  eax = 0;
/* 86baec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86baee: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86baf4: /* 86baf4: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86bafa: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86baffu); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86baff: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 86bb02: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bb05: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bb08: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86bb0b: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 86bb0e: movzx eax, byte ptr [ecx + edx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx + 0x54u)));
/* 86bb13: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86bb16: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bb19: mov ecx, dword ptr [ebx + eax*4] */
  ecx = R32((uint32_t)(ebx + eax*4));
/* 86bb1c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 86bb1f: nop  */
L_86bb20: /* 86bb20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb25: je 0x86bbb7 */
  if (zf) goto L_86bbb7;
L_86bb2b: /* 86bb2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bb31: mov edi, esp */
  edi = esp;
/* 86bb33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bb38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bb3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bb46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bb48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bb49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bb4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bb4e: lea ecx, [ebp - 0x2f8] */
  ecx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bb54: call 0x6c5bf5 */
  esp -= 4; W32(esp, 0x86bb59u); SPILL(); f_6c5bf5(); if (g_unwind) return; RELOAD();
/* 86bb59: fcom dword ptr [ebp - 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc0u)));
/* 86bb5c: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 86bb5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb61: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb64: je 0x86bd45 */
  if (zf) goto L_86bd45;
L_86bb6a: /* 86bb6a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86bb70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bb72: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb75: jne 0x86bba9 */
  if (!zf) goto L_86bba9;
L_86bb77: /* 86bb77: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb79: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bb7b: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bb80: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bb86u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bb86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bb88: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bb8b: je 0x86bba0 */
  if (zf) goto L_86bba0;
L_86bb8d: /* 86bb8d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bb90: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 86bb92: lea edx, [ecx + ecx*2 + 9] */
  edx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bb96: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86bb99: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bb9b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bb9e: jmp 0x86bba2 */
  goto L_86bba2;
L_86bba0: /* 86bba0: xor eax, eax */
  eax = 0;
L_86bba2: /* 86bba2: lea ecx, [ecx + ecx*2 + 9] */
  ecx = (uint32_t)(ecx + ecx*2 + 0x9u);
/* 86bba6: mov dword ptr [ebx + ecx*4], eax */
  W32((uint32_t)(ebx + ecx*4), eax);
L_86bba9: /* 86bba9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bbac: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bbaf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bbb2: jmp 0x86bb20 */
  goto L_86bb20;
L_86bbb7: /* 86bbb7: xor eax, eax */
  eax = 0;
/* 86bbb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbbb: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bbc1: /* 86bbc1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bbc4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bbc7: movzx eax, byte ptr [edx + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86bbcc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86bbcf: mov ecx, dword ptr [ebx + eax*4 + 0x20] */
  ecx = R32((uint32_t)(ebx + eax*4 + 0x20u));
/* 86bbd3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_86bbd6: /* 86bbd6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbd8: je 0x86bca8 */
  if (zf) goto L_86bca8;
L_86bbde: /* 86bbde: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbe1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 86bbe7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbe9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bbec: je 0x86bc28 */
  if (zf) goto L_86bc28;
L_86bbee: /* 86bbee: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 86bbf1: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 86bbf7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86bbf9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86bbfc: jnp 0x86bc28 */
  if (!pf) goto L_86bc28;
L_86bbfe: /* 86bbfe: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 86bc00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc02: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc04: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc09: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc0fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc11: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc14: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc1a: /* 86bc1a: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc1d: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc21: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc23: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc26: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc28: /* 86bc28: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc2b: sub esp, 0x148 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x148u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86bc31: mov edi, esp */
  edi = esp;
/* 86bc33: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bc38: lea esi, [ebp - 0x1b0] */
  esi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bc3e: lea edx, [ebp - 0x2f8] */
  edx = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc44: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bc46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bc48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bc49: call 0x6c31de */
  esp -= 4; W32(esp, 0x86bc4eu); SPILL(); f_6c31de(); if (g_unwind) return; RELOAD();
/* 86bc4e: mov eax, dword ptr [ebp - 0x1f8] */
  eax = R32((uint32_t)(ebp + 0xfffffe08u));
/* 86bc54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc56: je 0x86bc98 */
  if (zf) goto L_86bc98;
L_86bc58: /* 86bc58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86bc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86bc5b: lea eax, [ebp - 0x2f8] */
  eax = (uint32_t)(ebp + 0xfffffd08u);
/* 86bc61: call 0x86b060 */
  esp -= 4; W32(esp, 0x86bc66u); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86bc66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bc69: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bc6d: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bc72: mov esi, eax */
  esi = eax;
/* 86bc74: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bc7au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bc7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bc7c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bc7f: je 0x86bc8f */
  if (zf) goto L_86bc8f;
L_86bc81: /* 86bc81: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 86bc84: mov edx, dword ptr [ebx + edx*4 + 0x20] */
  edx = R32((uint32_t)(ebx + edx*4 + 0x20u));
/* 86bc88: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86bc8a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86bc8d: jmp 0x86bc91 */
  goto L_86bc91;
L_86bc8f: /* 86bc8f: xor eax, eax */
  eax = 0;
L_86bc91: /* 86bc91: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 86bc94: mov dword ptr [ebx + ecx*4 + 0x20], eax */
  W32((uint32_t)(ebx + ecx*4 + 0x20u), eax);
L_86bc98: /* 86bc98: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86bc9b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 86bc9e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86bca1: mov ecx, eax */
  ecx = eax;
/* 86bca3: jmp 0x86bbd6 */
  goto L_86bbd6;
L_86bca8: /* 86bca8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86bcab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86bcae: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 86bcb0: movzx ecx, byte ptr [ecx + 0x55] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x55u)));
/* 86bcb4: mov eax, 1 */
  eax = 0x1u;
/* 86bcb9: xor edx, edx */
  edx = 0;
/* 86bcbb: call 0x99cc70 */
  esp -= 4; W32(esp, 0x86bcc0u); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 86bcc0: mov ecx, dword ptr [ebx + 0x320] */
  ecx = R32((uint32_t)(ebx + 0x320u));
/* 86bcc6: mov esi, eax */
  esi = eax;
/* 86bcc8: mov edi, edx */
  edi = edx;
/* 86bcca: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bcd0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 86bcd2: mov ecx, edi */
  ecx = edi;
/* 86bcd4: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 86bcd6: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 86bcd8: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bcda: /* 86bcda: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcdc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86bcde: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bce3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bce9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bceb: je 0x86bcfd */
  if (zf) goto L_86bcfd;
L_86bced: /* 86bced: mov ecx, dword ptr [ebx + 0x31c] */
  ecx = R32((uint32_t)(ebx + 0x31cu));
/* 86bcf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bcf6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86bcf8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86bcfb: jmp 0x86bcff */
  goto L_86bcff;
L_86bcfd: /* 86bcfd: xor eax, eax */
  eax = 0;
L_86bcff: /* 86bcff: mov edx, dword ptr [ebx + 0x324] */
  edx = R32((uint32_t)(ebx + 0x324u));
/* 86bd05: mov dword ptr [ebx + 0x31c], eax */
  W32((uint32_t)(ebx + 0x31cu), eax);
/* 86bd0b: mov eax, dword ptr [ebx + 0x320] */
  eax = R32((uint32_t)(ebx + 0x320u));
/* 86bd11: or eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 86bd13: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 86bd15: mov dword ptr [ebx + 0x320], eax */
  W32((uint32_t)(ebx + 0x320u), eax);
/* 86bd1b: mov dword ptr [ebx + 0x324], edx */
  W32((uint32_t)(ebx + 0x324u), edx);
/* 86bd21: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bd26: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bd29: jne 0x86bd47 */
  if (!zf) goto L_86bd47;
L_86bd2b: /* 86bd2b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 86bd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bd2f: mov esi, ebx */
  esi = ebx;
/* 86bd31: call 0x868660 */
  esp -= 4; W32(esp, 0x86bd36u); SPILL(); f_868660(); if (g_unwind) return; RELOAD();
/* 86bd36: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bd39: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd40: jmp 0x86be40 */
  goto L_86be40;
L_86bd45: /* 86bd45: fstp st(0) */
  STI(0) = ST0; FPOP();
L_86bd47: /* 86bd47: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bd4e: jmp 0x86be40 */
  goto L_86be40;
L_86bd53: /* 86bd53: mov eax, dword ptr [edx + 0x3f4] */
  eax = R32((uint32_t)(edx + 0x3f4u));
/* 86bd59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd5b: je 0x86bd67 */
  if (zf) goto L_86bd67;
L_86bd5d: /* 86bd5d: mov eax, dword ptr [edx + 0x3f0] */
  eax = R32((uint32_t)(edx + 0x3f0u));
/* 86bd63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd65: jne 0x86bd7c */
  if (!zf) goto L_86bd7c;
L_86bd67: /* 86bd67: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bd6a: mov dword ptr [ecx + 0x3f4], 0 */
  W32((uint32_t)(ecx + 0x3f4u), 0x0u);
/* 86bd74: call 0x6ca088 */
  esp -= 4; W32(esp, 0x86bd79u); SPILL(); f_6ca088(); if (g_unwind) return; RELOAD();
/* 86bd79: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
L_86bd7c: /* 86bd7c: mov eax, dword ptr [edx + 0x3f4] */
  eax = R32((uint32_t)(edx + 0x3f4u));
/* 86bd82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd84: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bd8a: /* 86bd8a: mov eax, dword ptr [edx + 0x3f0] */
  eax = R32((uint32_t)(edx + 0x3f0u));
/* 86bd90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bd92: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bd98: /* 86bd98: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bd9a: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86bd9e: jge 0x86be40 */
  if ((sf == of)) goto L_86be40;
L_86bda4: /* 86bda4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86bda7: mov cl, byte ptr [eax + 0x150] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x150u))) & 0xffu);
/* 86bdad: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdaf: je 0x86be40 */
  if (zf) goto L_86be40;
L_86bdb5: /* 86bdb5: mov eax, dword ptr [ebx + 0x32c] */
  eax = R32((uint32_t)(ebx + 0x32cu));
/* 86bdbb: xor esi, esi */
  esi = 0;
/* 86bdbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bdc0: /* 86bdc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdc2: je 0x86bddb */
  if (zf) goto L_86bddb;
L_86bdc4: /* 86bdc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86bdc6: mov edi, dword ptr [ecx + 0x1c8] */
  edi = R32((uint32_t)(ecx + 0x1c8u));
/* 86bdcc: cmp edi, dword ptr [edx + 0x3bc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3bcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bdd2: jne 0x86bdd6 */
  if (!zf) goto L_86bdd6;
L_86bdd4: /* 86bdd4: mov esi, ecx */
  esi = ecx;
L_86bdd6: /* 86bdd6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 86bdd9: jmp 0x86bdc0 */
  goto L_86bdc0;
L_86bddb: /* 86bddb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bddd: jne 0x86be37 */
  if (!zf) goto L_86be37;
L_86bddf: /* 86bddf: push 0x1d4 */
  { uint32_t v = 0x1d4u; esp -= 4; W32(esp, v); }
/* 86bde4: call 0x6c242d */
  esp -= 4; W32(esp, 0x86bde9u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 86bde9: mov ecx, eax */
  ecx = eax;
/* 86bdeb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86bdee: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86bdf1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bdf3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 86bdf7: je 0x86be09 */
  if (zf) goto L_86be09;
L_86bdf9: /* 86bdf9: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86bdfc: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86bdfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bdff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86be00: call 0x6cc9dc */
  esp -= 4; W32(esp, 0x86be05u); SPILL(); f_6cc9dc(); if (g_unwind) return; RELOAD();
/* 86be05: mov esi, eax */
  esi = eax;
/* 86be07: jmp 0x86be0b */
  goto L_86be0b;
L_86be09: /* 86be09: xor esi, esi */
  esi = 0;
L_86be0b: /* 86be0b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86be0f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86be14: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 86be18: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86be1eu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86be1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be20: je 0x86be2f */
  if (zf) goto L_86be2f;
L_86be22: /* 86be22: mov ecx, dword ptr [ebx + 0x32c] */
  ecx = R32((uint32_t)(ebx + 0x32cu));
/* 86be28: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86be2a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86be2d: jmp 0x86be31 */
  goto L_86be31;
L_86be2f: /* 86be2f: xor eax, eax */
  eax = 0;
L_86be31: /* 86be31: mov dword ptr [ebx + 0x32c], eax */
  W32((uint32_t)(ebx + 0x32cu), eax);
L_86be37: /* 86be37: mov ecx, dword ptr [esi + 0x1d0] */
  ecx = R32((uint32_t)(esi + 0x1d0u));
/* 86be3d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
L_86be40: /* 86be40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86be43: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 86be46: mov edx, dword ptr [ebx + 0x328] */
  edx = R32((uint32_t)(ebx + 0x328u));
/* 86be4c: mov eax, ecx */
  eax = ecx;
/* 86be4e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 86be51: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 86be54: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86be57: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86be59: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86be5b: or byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(esi), r);
  }
L_86be5d: /* 86be5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_86be60: /* 86be60: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_86be63: /* 86be63: test byte ptr [edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86be67: je 0x86be74 */
  if (zf) goto L_86be74;
L_86be69: /* 86be69: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 86be6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86be6e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be74: /* 86be74: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86be77: movzx ecx, byte ptr [edx + esi + 0x54] */
  ecx = (uint32_t)(R8((uint32_t)(edx + esi + 0x54u)));
/* 86be7c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86be7e: cmp ecx, dword ptr [eax + 0x1cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be84: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be8a: /* 86be8a: cmp dword ptr [esi + 0x60], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86be8e: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86be94: /* 86be94: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86be97: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86be9a: test dword ptr [eax + 0x534], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bea4: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86beaa: /* 86beaa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86beaf: je 0x86c2c9 */
  if (zf) goto L_86c2c9;
L_86beb5: /* 86beb5: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86bebb: xor edi, edi */
  edi = 0;
/* 86bebd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86bec0: /* 86bec0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bec2: je 0x86bee0 */
  if (zf) goto L_86bee0;
L_86bec4: /* 86bec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86bec6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bec9: cmp dword ptr [eax + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86becc: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bed2: /* 86bed2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 86bed5: cmp edx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bed8: jne 0x86c28c */
  if (!zf) goto L_86c28c;
L_86bede: /* 86bede: mov edi, eax */
  edi = eax;
L_86bee0: /* 86bee0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bee2: jne 0x86c2be */
  if (!zf) goto L_86c2be;
L_86bee8: /* 86bee8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86beea: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 86beec: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86bef1: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86bef7u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86bef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bef9: je 0x86c294 */
  if (zf) goto L_86c294;
L_86beff: /* 86beff: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 86bf02: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf06: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86bf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86bf0b: mov ecx, eax */
  ecx = eax;
/* 86bf0d: call 0x6c50b5 */
  esp -= 4; W32(esp, 0x86bf12u); SPILL(); f_6c50b5(); if (g_unwind) return; RELOAD();
/* 86bf12: mov edi, eax */
  edi = eax;
/* 86bf14: jmp 0x86c296 */
  goto L_86c296;
L_86bf19: /* 86bf19: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 86bf20: jmp 0x86be60 */
  goto L_86be60;
L_86bf25: /* 86bf25: test eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf2a: je 0x86c26a */
  if (zf) goto L_86c26a;
L_86bf30: /* 86bf30: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86bf35: cmp dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf37: je 0x86bf4e */
  if (zf) goto L_86bf4e;
L_86bf39: /* 86bf39: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86bf3c: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 86bf3f: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 86bf45: test ch, 8 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf48: je 0x86be74 */
  if (zf) goto L_86be74;
L_86bf4e: /* 86bf4e: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 86bf51: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf53: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86bf56: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf5c: /* 86bf5c: mov eax, dword ptr [eax + 0x280] */
  eax = R32((uint32_t)(eax + 0x280u));
/* 86bf62: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf64: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf6a: /* 86bf6a: cmp dword ptr [eax + 0x54], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x54u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86bf6d: je 0x86be63 */
  if (zf) goto L_86be63;
L_86bf73: /* 86bf73: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 86bf76: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 86bf7c: mov edx, ecx */
  edx = ecx;
/* 86bf7e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 86bf81: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86bf84: mov ebx, 1 */
  ebx = 0x1u;
/* 86bf89: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 86bf8b: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86bf8e: test byte ptr [edx + eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86bf91: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bf94: jne 0x86be60 */
  if (!zf) goto L_86be60;
L_86bf9a: /* 86bf9a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86bf9d: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 86bfa3: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 86bfa6: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86bfa9: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 86bfac: mov esi, dword ptr [edx + 0x28] */
  esi = R32((uint32_t)(edx + 0x28u));
/* 86bfaf: imul ecx, ecx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x148u);
  ecx = (uint32_t)r;
  }
/* 86bfb5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86bfb7: mov ecx, 0x52 */
  ecx = 0x52u;
/* 86bfbc: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 86bfc2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86bfc4: mov ecx, eax */
  ecx = eax;
/* 86bfc6: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x86bfcbu); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 86bfcb: mov edx, dword ptr [ebp - 0x1a4] */
  edx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 86bfd1: mov ecx, dword ptr [ebp - 0x19c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 86bfd7: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86bfda: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 86bfdd: mov eax, dword ptr [ebp - 0x1a0] */
  eax = R32((uint32_t)(ebp + 0xfffffe60u));
/* 86bfe3: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86bfe6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86bfe9: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 86bfec: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 86bfef: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 86bff6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86bff9: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86bffc: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86bfff: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86c002: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c004: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86c006: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c008: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86c00b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c00d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86c010: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c012: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86c015: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c018: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86c01b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c01e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86c021: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c024: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86c027: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c02a: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86c02d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c02f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c031: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c033: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c035: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c037: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c03a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86c03d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c040: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86c043: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c046: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86c049: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c04c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86c04f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c051: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c053: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c055: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c057: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c059: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c05c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86c05f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c062: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86c065: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c068: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86c06b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c06e: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86c071: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c073: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c075: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c077: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c079: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c07b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c07d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86c07f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c081: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86c084: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86c087: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86c08a: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86c08d: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 86c090: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86c093: mov dword ptr [ebp - 0x1a0], ecx */
  W32((uint32_t)(ebp + 0xfffffe60u), ecx);
/* 86c099: mov dword ptr [ebp - 0x1a4], eax */
  W32((uint32_t)(ebp + 0xfffffe5cu), eax);
/* 86c09f: mov dword ptr [ebp - 0x19c], edx */
  W32((uint32_t)(ebp + 0xfffffe64u), edx);
/* 86c0a5: xor ecx, ecx */
  ecx = 0;
/* 86c0a7: jmp 0x86c0b0 */
  goto L_86c0b0;
L_86c0b0: /* 86c0b0: cmp ecx, dword ptr [ebp - 0xb0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff50u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c0b6: jge 0x86c195 */
  if ((sf == of)) goto L_86c195;
L_86c0bc: /* 86c0bc: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 86c0bf: fld dword ptr [ebp + eax*4 - 0x17c] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffe84u)); FPUSH(v); }
/* 86c0c6: mov edx, dword ptr [ebp + eax*4 - 0x180] */
  edx = R32((uint32_t)(ebp + eax*4 + 0xfffffe80u));
/* 86c0cd: lea eax, [ebp + eax*4 - 0x180] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffe80u);
/* 86c0d4: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 86c0d7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 86c0da: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 86c0dd: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 86c0e0: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 86c0e3: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 86c0ea: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 86c0ed: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c0f0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86c0f3: lea edi, [ebp - 0x54] */
  edi = (uint32_t)(ebp + 0xffffffacu);
/* 86c0f6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c0f8: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 86c0fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c0fc: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 86c0ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c101: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86c104: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86c106: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 86c109: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c10c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 86c10f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c112: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86c115: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c118: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 86c11b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86c11e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 86c121: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c123: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c125: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c127: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c129: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c12b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c12e: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 86c131: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c134: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86c137: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c13a: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 86c13d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86c140: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86c143: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c145: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c147: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c149: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c14b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c14d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c150: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86c153: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c156: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 86c159: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c15c: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 86c15f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86c162: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86c165: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c167: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86c169: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c16b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86c16d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c16f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86c171: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86c173: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c175: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 86c178: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 86c17b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 86c17e: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 86c181: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c183: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 86c186: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86c189: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 86c18c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 86c18f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c190: jmp 0x86c0b0 */
  goto L_86c0b0;
L_86c195: /* 86c195: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c197: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 86c19d: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86c1a2: fsub dword ptr [ebp - 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe88u)));
/* 86c1a8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 86c1ab: fsub dword ptr [ebp - 0x17c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe84u)));
/* 86c1b1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 86c1b3: fsub dword ptr [ebp - 0x180] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe80u)));
/* 86c1b9: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 86c1bf: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 86c1c1: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 86c1c7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 86c1c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c1cb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86c1cd: fmul dword ptr [ebp - 0x1a4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe5cu)));
/* 86c1d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 86c1d5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 86c1db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86c1dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86c1df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 86c1e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 86c1e4: jp 0x86c1f1 */
  if (pf) goto L_86c1f1;
L_86c1e6: /* 86c1e6: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* 86c1ec: call 0x6cc36f */
  esp -= 4; W32(esp, 0x86c1f1u); SPILL(); f_6cc36f(); if (g_unwind) return; RELOAD();
L_86c1f1: /* 86c1f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86c1f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86c1f4: lea eax, [ebp - 0x1b0] */
  eax = (uint32_t)(ebp + 0xfffffe50u);
/* 86c1fa: call 0x86b060 */
  esp -= 4; W32(esp, 0x86c1ffu); SPILL(); f_86b060(); if (g_unwind) return; RELOAD();
/* 86c1ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c202: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c204: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c206: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c20b: mov esi, eax */
  esi = eax;
/* 86c20d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c213u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c213: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c215: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86c218: je 0x86c234 */
  if (zf) goto L_86c234;
L_86c21a: /* 86c21a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86c21d: movzx edx, byte ptr [edx + ecx + 0x54] */
  edx = (uint32_t)(R8((uint32_t)(edx + ecx + 0x54u)));
/* 86c222: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86c225: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 86c228: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 86c22b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 86c22e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 86c230: mov edx, eax */
  edx = eax;
/* 86c232: jmp 0x86c236 */
  goto L_86c236;
L_86c234: /* 86c234: xor edx, edx */
  edx = 0;
L_86c236: /* 86c236: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86c239: movzx eax, byte ptr [eax + ecx + 0x54] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx + 0x54u)));
/* 86c23e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 86c241: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 86c244: mov dword ptr [ebx + eax*4], edx */
  W32((uint32_t)(ebx + eax*4), edx);
/* 86c247: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 86c24a: mov eax, dword ptr [ebx + 0x328] */
  eax = R32((uint32_t)(ebx + 0x328u));
/* 86c250: mov edx, ecx */
  edx = ecx;
/* 86c252: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 86c255: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 86c258: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 86c25a: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 86c25d: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 86c25f: shl dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 86c261: or al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 86c263: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 86c265: jmp 0x86be5d */
  goto L_86be5d;
L_86c26a: /* 86c26a: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c26c: je 0x86be74 */
  if (zf) goto L_86be74;
L_86c272: /* 86c272: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c275: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 86c278: mov eax, dword ptr [ecx + 0x534] */
  eax = R32((uint32_t)(ecx + 0x534u));
/* 86c27e: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c281: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c287: /* 86c287: jmp 0x86be74 */
  goto L_86be74;
L_86c28c: /* 86c28c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 86c28f: jmp 0x86bec0 */
  goto L_86bec0;
L_86c294: /* 86c294: xor edi, edi */
  edi = 0;
L_86c296: /* 86c296: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c298: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c29a: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c29f: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c2a5u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c2a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2a7: je 0x86c2b6 */
  if (zf) goto L_86c2b6;
L_86c2a9: /* 86c2a9: mov ecx, dword ptr [ebx + 0x35c] */
  ecx = R32((uint32_t)(ebx + 0x35cu));
/* 86c2af: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86c2b1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c2b4: jmp 0x86c2b8 */
  goto L_86c2b8;
L_86c2b6: /* 86c2b6: xor eax, eax */
  eax = 0;
L_86c2b8: /* 86c2b8: mov dword ptr [ebx + 0x35c], eax */
  W32((uint32_t)(ebx + 0x35cu), eax);
L_86c2be: /* 86c2be: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c2c2: mov ecx, edi */
  ecx = edi;
/* 86c2c4: call 0x6c7e37 */
  esp -= 4; W32(esp, 0x86c2c9u); SPILL(); f_6c7e37(); if (g_unwind) return; RELOAD();
L_86c2c9: /* 86c2c9: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 86c2cc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 86c2cf: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d4: je 0x86c2de */
  if (zf) goto L_86c2de;
L_86c2d6: /* 86c2d6: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2d8: jne 0x86b64c */
  if (!zf) goto L_86b64c;
L_86c2de: /* 86c2de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86c2e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2e2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2e8: /* 86c2e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86c2ea: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x86c2f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86c2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2f2: je 0x86c3bb */
  if (zf) goto L_86c3bb;
L_86c2f8: /* 86c2f8: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 86c2fb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c2fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86c300: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 86c303: mov dword ptr [ebp - 0x60], 1 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x1u);
/* 86c30a: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 86c30d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 86c310: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 86c313: je 0x86c33f */
  if (zf) goto L_86c33f;
L_86c315: /* 86c315: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86c318: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c31d: call 0x6c3170 */
  esp -= 4; W32(esp, 0x86c322u); SPILL(); f_6c3170(); if (g_unwind) return; RELOAD();
/* 86c322: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c325: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c328: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 86c32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c330: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c332: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 86c335: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c33au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c33a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c33d: jmp 0x86c346 */
  goto L_86c346;
L_86c33f: /* 86c33f: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
L_86c346: /* 86c346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c348: je 0x86c374 */
  if (zf) goto L_86c374;
L_86c34a: /* 86c34a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c34c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 86c34d: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 86c352: call 0x6c99e4 */
  esp -= 4; W32(esp, 0x86c357u); SPILL(); f_6c99e4(); if (g_unwind) return; RELOAD();
/* 86c357: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86c35a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c35d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 86c364: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c367: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 86c36a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x86c36fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 86c36f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86c372: jmp 0x86c37b */
  goto L_86c37b;
L_86c374: /* 86c374: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
L_86c37b: /* 86c37b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c37d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 86c37f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c384: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c38au); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c38a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c38c: je 0x86c3ae */
  if (zf) goto L_86c3ae;
L_86c38e: /* 86c38e: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 86c394: mov ecx, 7 */
  ecx = 0x7u;
/* 86c399: lea esi, [ebp - 0x60] */
  esi = (uint32_t)(ebp + 0xffffffa0u);
/* 86c39c: mov edi, eax */
  edi = eax;
/* 86c39e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 86c3a0: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 86c3a3: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3a9: jmp 0x86b64c */
  goto L_86b64c;
L_86c3ae: /* 86c3ae: xor eax, eax */
  eax = 0;
/* 86c3b0: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 86c3b6: jmp 0x86b64c */
  goto L_86b64c;
L_86c3bb: /* 86c3bb: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c3be: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 86c3c4: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c3c8: jne 0x86c427 */
  if (!zf) goto L_86c427;
L_86c3ca: /* 86c3ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3cc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 86c3ce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c3d3: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c3d9u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c3d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c3db: je 0x86c3ee */
  if (zf) goto L_86c3ee;
L_86c3dd: /* 86c3dd: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3e0: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86c3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c3e5: mov ecx, eax */
  ecx = eax;
/* 86c3e7: call 0x6c1924 */
  esp -= 4; W32(esp, 0x86c3ecu); SPILL(); f_6c1924(); if (g_unwind) return; RELOAD();
/* 86c3ec: jmp 0x86c3f0 */
  goto L_86c3f0;
L_86c3ee: /* 86c3ee: xor eax, eax */
  eax = 0;
L_86c3f0: /* 86c3f0: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 86c3f3: mov edx, dword ptr [ebx + 0x354] */
  edx = R32((uint32_t)(ebx + 0x354u));
/* 86c3f9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c3fb: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 86c3fe: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 86c400: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 86c405: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86c40bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86c40b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c40d: je 0x86c41f */
  if (zf) goto L_86c41f;
L_86c40f: /* 86c40f: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 86c415: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 86c418: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 86c41a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86c41d: jmp 0x86c421 */
  goto L_86c421;
L_86c41f: /* 86c41f: xor eax, eax */
  eax = 0;
L_86c421: /* 86c421: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
L_86c427: /* 86c427: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 86c429: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 86c42c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86c42f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c430: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86c433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c434: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 86c437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c438: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c43b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86c43c: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 86c43f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86c440: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 86c446: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 86c449: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86c44a: call 0x6c83fa */
  esp -= 4; W32(esp, 0x86c44fu); SPILL(); f_6c83fa(); if (g_unwind) return; RELOAD();
/* 86c44f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c452: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 86c455: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c458: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c45e: /* 86c45e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c463: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c466: je 0x86b64c */
  if (zf) goto L_86b64c;
L_86c46c: /* 86c46c: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c46f: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 86c475: add esi, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86c47b: xor edx, edx */
  edx = 0;
L_86c47d: /* 86c47d: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c480: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 86c483: jge 0x86b64c */
  if ((sf == of)) goto L_86b64c;
L_86c489: /* 86c489: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 86c48c: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 86c48f: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 86c492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c494: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 86c497: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c49d: /* 86c49d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 86c4a2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4a5: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4ab: /* 86c4ab: xor eax, eax */
  eax = 0;
/* 86c4ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_86c4b0: /* 86c4b0: cmp eax, dword ptr [esi + 0x9c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 86c4b6: jge 0x86c4cc */
  if ((sf == of)) goto L_86c4cc;
L_86c4b8: /* 86c4b8: mov edi, dword ptr [esi + 0x98] */
  edi = R32((uint32_t)(esi + 0x98u));
/* 86c4be: mov edi, dword ptr [edi + eax*4] */
  edi = R32((uint32_t)(edi + eax*4));
/* 86c4c1: cmp edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86c4c3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4c9: /* 86c4c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 86c4ca: jmp 0x86c4b0 */
  goto L_86c4b0;
L_86c4cc: /* 86c4cc: mov eax, 1 */
  eax = 0x1u;
/* 86c4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4d3: je 0x86c53f */
  if (zf) goto L_86c53f;
L_86c4d5: /* 86c4d5: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 86c4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86c4dd: jne 0x86c4ff */
  if (!zf) goto L_86c4ff;
L_86c4df: /* 86c4df: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 86c4e2: add edi, 0xfc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 86c4e8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c4ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c4ec: mov ecx, edi */
  ecx = edi;
/* 86c4ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c4f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c4f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86c4f7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c4f9: mov edx, dword ptr [edx + 0x68] */
  edx = R32((uint32_t)(edx + 0x68u));
/* 86c4fc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_86c4ff: /* 86c4ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86c501: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 86c507: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86c509: mov ecx, edi */
  ecx = edi;
/* 86c50b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x86c511u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 86c511: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 86c513: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 86c516: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 86c518: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 86c51b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 86c51e: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 86c521: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 86c524: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c525: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
/* 86c528: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 86c52b: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 86c531: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 86c535: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 86c539: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86c53c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 86c53d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_86c53f: /* 86c53f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 86c540: jmp 0x86c47d */
  goto L_86c47d;
}
