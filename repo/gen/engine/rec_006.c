#include "recomp.h"
#include "rec_mod.h"

void f_6f8a80(void) {
  LOAD_REGS();
L_6f8a80: /* 6f8a80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f8a81: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 6f8a87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8a88: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6f8a8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8a8d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6f8a91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8a92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8a93: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x6f8a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8a95: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 6f8a98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8a99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8a9a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x6f8a9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8a9c: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6f8a9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8aa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8aa1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x6f8aa3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8aa3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8aa6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f8aa7: mov eax, esi */
  eax = esi;
/* 6f8aa9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8aaa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f8aab: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8ac0(void) {
  LOAD_REGS();
L_6f8ac0: /* 6f8ac0: mov eax, ecx */
  eax = ecx;
/* 6f8ac2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8ae0(void) {
  LOAD_REGS();
L_6f8ae0: /* 6f8ae0: mov eax, ecx */
  eax = ecx;
/* 6f8ae2: mov dword ptr [eax], 0x9f7674 */
  W32((uint32_t)(eax), 0x9f7674u);
/* 6f8ae8: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8b00(void) {
  LOAD_REGS();
L_6f8b00: /* 6f8b00: mov eax, 0xfffffffe */
  eax = 0xfffffffeu;
/* 6f8b05: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8b20(void) {
  LOAD_REGS();
L_6f8b20: /* 6f8b20: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_6f8b40(void) {
  LOAD_REGS();
L_6f8b40: /* 6f8b40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8b60(void) {
  LOAD_REGS();
L_6f8b60: /* 6f8b60: mov dword ptr [ecx], 0x9f7674 */
  W32((uint32_t)(ecx), 0x9f7674u);
/* 6f8b66: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8b80(void) {
  LOAD_REGS();
L_6f8b80: /* 6f8b80: mov eax, ecx */
  eax = ecx;
/* 6f8b82: mov dword ptr [eax], 0x9f7674 */
  W32((uint32_t)(eax), 0x9f7674u);
/* 6f8b88: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8ba0(void) {
  LOAD_REGS();
L_6f8ba0: /* 6f8ba0: mov eax, ecx */
  eax = ecx;
/* 6f8ba2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8bc0(void) {
  LOAD_REGS();
L_6f8bc0: /* 6f8bc0: mov eax, ecx */
  eax = ecx;
/* 6f8bc2: mov dword ptr [eax], 0x9f7690 */
  W32((uint32_t)(eax), 0x9f7690u);
/* 6f8bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8be0(void) {
  LOAD_REGS();
L_6f8be0: /* 6f8be0: mov eax, 1 */
  eax = 0x1u;
/* 6f8be5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8c00(void) {
  LOAD_REGS();
L_6f8c00: /* 6f8c00: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f8c03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8c04: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 6f8c09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f8c0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f8c0d: mov esi, ecx */
  esi = ecx;
/* 6f8c0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f8c11: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 6f8c15: call 0x6ca3df */
  esp -= 4; W32(esp, 0x6f8c1au); SPILL(); f_6ca3df(); if (g_unwind) return; RELOAD();
/* 6f8c1a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f8c1c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6f8c1f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f8c21: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f8c24: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f8c27: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6f8c2a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6f8c2d: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6f8c30: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 6f8c38: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f8c3c: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 6f8c3e: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 6f8c46: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6f8c4a: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 6f8c52: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f8c56: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 6f8c59: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 6f8c5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8c5d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8c60: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8c90(void) {
  LOAD_REGS();
L_6f8c90: /* 6f8c90: mov eax, 0x1c */
  eax = 0x1cu;
/* 6f8c95: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8cb0(void) {
  LOAD_REGS();
L_6f8cb0: /* 6f8cb0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f8cb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8cb4: mov esi, ecx */
  esi = ecx;
/* 6f8cb6: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 6f8cba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8cbb: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6f8cbe: call 0x6c2cc5 */
  esp -= 4; W32(esp, 0x6f8cc3u); SPILL(); f_6c2cc5(); if (g_unwind) return; RELOAD();
/* 6f8cc3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f8cc5: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 6f8cc9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f8ccb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f8cce: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f8cd1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 6f8cd4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6f8cd7: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 6f8cda: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 6f8cdd: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 6f8ce1: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6f8ce4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 6f8ce6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f8ce8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 6f8ceb: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 6f8cee: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 6f8cf1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6f8cf4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8cf5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8cf8: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_6f8d20(void) {
  LOAD_REGS();
L_6f8d20: /* 6f8d20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f8d24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8d25: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 6f8d28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8d29: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 6f8d2b: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 6f8d2e: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f8d30: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 6f8d33: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f8d36: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f8d39: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 6f8d3c: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6f8d3f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6f8d41: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6f8d44: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6f8d46: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f8d49: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6f8d4c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6f8d4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f8d50: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6f8d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8d54: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8d70(void) {
  LOAD_REGS();
L_6f8d70: /* 6f8d70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f8d71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f8d72: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 6f8d76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8d77: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6f8d7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8d7e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6f8d82: lea ebx, [ebp + 4] */
  ebx = (uint32_t)(ebp + 0x4u);
/* 6f8d85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f8d86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8d87: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f8d89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8d89: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 6f8d8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8d8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8d8e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f8d90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8d90: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 6f8d93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f8d94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8d95: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f8d97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8d97: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 6f8d9a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8d9d: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 6f8da0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f8da1: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 6f8da4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f8da5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8da6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8da7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f8da9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8da9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8dac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8dad: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f8dafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8daf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8db2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8db3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f8db5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f8db5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8db8: mov eax, edi */
  eax = edi;
/* 6f8dba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f8dbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8dbc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f8dbd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f8dbe: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8de0(void) {
  LOAD_REGS();
L_6f8de0: /* 6f8de0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f8de4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f8de5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f8de6: call 0x6c8afd */
  esp -= 4; W32(esp, 0x6f8debu); SPILL(); f_6c8afd(); if (g_unwind) return; RELOAD();
/* 6f8deb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f8dee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8e10(void) {
  LOAD_REGS();
L_6f8e10: /* 6f8e10: mov eax, ecx */
  eax = ecx;
/* 6f8e12: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f8e16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8e17: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 6f8e1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8e1b: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 6f8e1d: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 6f8e20: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f8e22: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 6f8e25: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f8e28: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f8e2b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 6f8e2e: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6f8e31: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6f8e33: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 6f8e36: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6f8e38: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6f8e3b: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6f8e3e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f8e41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f8e42: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6f8e45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8e46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8e60(void) {
  LOAD_REGS();
L_6f8e60: /* 6f8e60: mov dword ptr [ecx], 0x9f7674 */
  W32((uint32_t)(ecx), 0x9f7674u);
/* 6f8e66: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8e80(void) {
  LOAD_REGS();
L_6f8e80: /* 6f8e80: mov eax, ecx */
  eax = ecx;
/* 6f8e82: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f8e86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8e87: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 6f8e8a: mov dword ptr [eax], 0x9f7690 */
  W32((uint32_t)(eax), 0x9f7690u);
/* 6f8e90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f8e91: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 6f8e93: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 6f8e96: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6f8e98: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 6f8e9b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6f8e9e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6f8ea1: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 6f8ea4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6f8ea7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6f8ea9: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 6f8eac: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6f8eae: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6f8eb1: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6f8eb4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f8eb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f8eb8: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6f8ebb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8ebc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8ed0(void) {
  LOAD_REGS();
L_6f8ed0: /* 6f8ed0: mov eax, 3 */
  eax = 0x3u;
/* 6f8ed5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8ef0(void) {
  LOAD_REGS();
L_6f8ef0: /* 6f8ef0: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f8ef3: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 6f8ef6: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 6f8ef9: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 6f8efc: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6f8eff: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6f8f01: lea eax, [eax + eax + 0x28] */
  eax = (uint32_t)(eax + eax + 0x28u);
/* 6f8f05: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8f20(void) {
  LOAD_REGS();
L_6f8f20: /* 6f8f20: mov eax, 4 */
  eax = 0x4u;
/* 6f8f25: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8f40(void) {
  LOAD_REGS();
L_6f8f40: /* 6f8f40: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 6f8f43: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 6f8f46: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6f8f49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6f8f4b: lea eax, [eax + eax + 0x28] */
  eax = (uint32_t)(eax + eax + 0x28u);
/* 6f8f4f: ret  */
  esp += 4; SPILL(); return;
}

void f_6f8f60(void) {
  LOAD_REGS();
L_6f8f60: /* 6f8f60: test byte ptr [esp + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f8f65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8f66: mov esi, ecx */
  esi = ecx;
/* 6f8f68: mov dword ptr [esi], 0x9f7674 */
  W32((uint32_t)(esi), 0x9f7674u);
/* 6f8f6e: je 0x6f8f7d */
  if (zf) goto L_6f8f7d;
L_6f8f70: /* 6f8f70: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f8f75: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f8f77: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f8f79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f8f7a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f8f7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f8f7d: /* 6f8f7d: mov eax, esi */
  eax = esi;
/* 6f8f7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f8f80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8fa0(void) {
  LOAD_REGS();
L_6f8fa0: /* 6f8fa0: mov eax, ecx */
  eax = ecx;
/* 6f8fa2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f8fa6: mov dl, byte ptr [ecx + 7] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x7u))) & 0xffu);
/* 6f8fa9: mov byte ptr [eax + 7], dl */
  W8((uint32_t)(eax + 0x7u), (edx & 0xffu));
/* 6f8fac: mov dl, byte ptr [ecx + 6] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x6u))) & 0xffu);
/* 6f8faf: mov byte ptr [eax + 6], dl */
  W8((uint32_t)(eax + 0x6u), (edx & 0xffu));
/* 6f8fb2: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 6f8fb5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6f8fb8: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 6f8fbb: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 6f8fbe: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 6f8fc2: mov word ptr [eax + 2], dx */
  W16((uint32_t)(eax + 0x2u), (edx & 0xffffu));
/* 6f8fc6: mov cx, word ptr [ecx + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 6f8fca: mov word ptr [eax + 4], cx */
  W16((uint32_t)(eax + 0x4u), (ecx & 0xffffu));
/* 6f8fce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f8ff0(void) {
  LOAD_REGS();
L_6f8ff0: /* 6f8ff0: mov eax, 0xce2cc8 */
  eax = 0xce2cc8u;
/* 6f8ff5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9010(void) {
  LOAD_REGS();
L_6f9010: /* 6f9010: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f9015: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f9017: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f901b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f901f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9021: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9023: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9024: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f9028: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f902a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f902b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f902c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f902d: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 6f9032: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f9038u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f9038: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f903b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9050(void) {
  LOAD_REGS();
L_6f9050: /* 6f9050: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f9054: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9070(void) {
  LOAD_REGS();
L_6f9070: /* 6f9070: mov eax, 0xce2798 */
  eax = 0xce2798u;
/* 6f9075: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9090(void) {
  LOAD_REGS();
L_6f9090: /* 6f9090: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f9095: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f9097: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f909b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f909f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f90a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f90a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f90a4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f90a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f90aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f90ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f90ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f90ad: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 6f90b2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f90b8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f90b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f90bb: ret  */
  esp += 4; SPILL(); return;
}

void f_6f90d0(void) {
  LOAD_REGS();
L_6f90d0: /* 6f90d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f90d4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f90f0(void) {
  LOAD_REGS();
L_6f90f0: /* 6f90f0: mov eax, 0xce2cc8 */
  eax = 0xce2cc8u;
/* 6f90f5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9110(void) {
  LOAD_REGS();
L_6f9110: /* 6f9110: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f9112: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f9116: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9118: mov esi, ecx */
  esi = ecx;
/* 6f911a: je 0x6f9121 */
  if (zf) goto L_6f9121;
L_6f911c: /* 6f911c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 6f911f: jmp 0x6f9123 */
  goto L_6f9123;
L_6f9121: /* 6f9121: xor eax, eax */
  eax = 0;
L_6f9123: /* 6f9123: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9124: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6f9127: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x6f912du); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 6f912d: mov dword ptr [esi], 0x9f401c */
  W32((uint32_t)(esi), 0x9f401cu);
/* 6f9133: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 6f9136: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 6f9139: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 6f913c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f913d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 6f9140: mov dword ptr [esi], 0x9f76ac */
  W32((uint32_t)(esi), 0x9f76acu);
/* 6f9146: mov eax, esi */
  eax = esi;
/* 6f9148: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9149: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9160(void) {
  LOAD_REGS();
L_6f9160: /* 6f9160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9161: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f9162: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6f9166: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9168: mov esi, ecx */
  esi = ecx;
/* 6f916a: je 0x6f9171 */
  if (zf) goto L_6f9171;
L_6f916c: /* 6f916c: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 6f916f: jmp 0x6f9173 */
  goto L_6f9173;
L_6f9171: /* 6f9171: xor eax, eax */
  eax = 0;
L_6f9173: /* 6f9173: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9174: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6f9177: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x6f917du); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f917d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 6f9180: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 6f9183: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 6f9186: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f9187: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 6f918a: mov eax, esi */
  eax = esi;
/* 6f918c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f918d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f91a0(void) {
  LOAD_REGS();
L_6f91a0: /* 6f91a0: mov eax, 0xce2268 */
  eax = 0xce2268u;
/* 6f91a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f91c0(void) {
  LOAD_REGS();
L_6f91c0: /* 6f91c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f91c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f91c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f91cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f91cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f91d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f91d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f91d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f91d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f91da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f91db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f91dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f91dd: push 0xce2268 */
  { uint32_t v = 0xce2268u; esp -= 4; W32(esp, v); }
/* 6f91e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f91e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f91e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f91eb: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9200(void) {
  LOAD_REGS();
L_6f9200: /* 6f9200: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f9204: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9220(void) {
  LOAD_REGS();
L_6f9220: /* 6f9220: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f9222: push 0x9c12f9 */
  { uint32_t v = 0x9c12f9u; esp -= 4; W32(esp, v); }
/* 6f9227: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f922d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f922e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f9235: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9236: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9237: mov esi, ecx */
  esi = ecx;
/* 6f9239: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f923d: mov dword ptr [esi], 0x9f76b8 */
  W32((uint32_t)(esi), 0x9f76b8u);
/* 6f9243: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f924b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f9251u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f9251: mov ecx, esi */
  ecx = esi;
/* 6f9253: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f925b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6f9261u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6f9261: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f9265: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9266: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f926d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9270: ret  */
  esp += 4; SPILL(); return;
}

void f_6f92a0(void) {
  LOAD_REGS();
L_6f92a0: /* 6f92a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f92a1: mov esi, ecx */
  esi = ecx;
/* 6f92a3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6f92a9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6f92a9: mov dword ptr [esi], 0x9f76b8 */
  W32((uint32_t)(esi), 0x9f76b8u);
/* 6f92af: mov eax, esi */
  eax = esi;
/* 6f92b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f92b2: ret  */
  esp += 4; SPILL(); return;
}

void f_6f92d0(void) {
  LOAD_REGS();
L_6f92d0: /* 6f92d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f92d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f92d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f92d6: mov esi, ecx */
  esi = ecx;
/* 6f92d8: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6f92deu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6f92de: mov dword ptr [esi], 0x9f76b8 */
  W32((uint32_t)(esi), 0x9f76b8u);
/* 6f92e4: mov eax, esi */
  eax = esi;
/* 6f92e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f92e7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9300(void) {
  LOAD_REGS();
L_6f9300: /* 6f9300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f9304: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9306: mov esi, ecx */
  esi = ecx;
/* 6f9308: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6f930eu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f930e: mov eax, esi */
  eax = esi;
/* 6f9310: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9311: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9330(void) {
  LOAD_REGS();
L_6f9330: /* 6f9330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9331: mov esi, ecx */
  esi = ecx;
/* 6f9333: call 0x6c5e93 */
  esp -= 4; W32(esp, 0x6f9338u); SPILL(); f_6c5e93(); if (g_unwind) return; RELOAD();
/* 6f9338: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f933d: je 0x6f934b */
  if (zf) goto L_6f934b;
L_6f933f: /* 6f933f: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6f9341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9342: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f9348u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f9348: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f934b: /* 6f934b: mov eax, esi */
  eax = esi;
/* 6f934d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f934e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9370(void) {
  LOAD_REGS();
L_6f9370: /* 6f9370: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f9371: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f9375: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9378: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9379: mov esi, ecx */
  esi = ecx;
/* 6f937b: je 0x6f93ad */
  if (zf) goto L_6f93ad;
L_6f937d: /* 6f937d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f9380: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f9381: push 0x6c5e93 */
  { uint32_t v = 0x6c5e93u; esp -= 4; W32(esp, v); }
/* 6f9386: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f9389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f938a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6f938c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f938d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f9392u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f9392: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9395: je 0x6f93a5 */
  if (zf) goto L_6f93a5;
L_6f9397: /* 6f9397: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f939d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f939f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f93a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f93a2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f93a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f93a5: /* 6f93a5: mov eax, edi */
  eax = edi;
/* 6f93a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f93a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f93a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f93aa: ret 4 */
  esp += 8; SPILL(); return;
L_6f93ad: /* 6f93ad: mov ecx, esi */
  ecx = esi;
/* 6f93af: call 0x6c5e93 */
  esp -= 4; W32(esp, 0x6f93b4u); SPILL(); f_6c5e93(); if (g_unwind) return; RELOAD();
/* 6f93b4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f93b7: je 0x6f93c5 */
  if (zf) goto L_6f93c5;
L_6f93b9: /* 6f93b9: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6f93bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f93bc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f93c2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f93c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f93c5: /* 6f93c5: mov eax, esi */
  eax = esi;
/* 6f93c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f93c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f93c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f93f0(void) {
  LOAD_REGS();
L_6f93f0: /* 6f93f0: mov eax, 0xce1d38 */
  eax = 0xce1d38u;
/* 6f93f5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9410(void) {
  LOAD_REGS();
L_6f9410: /* 6f9410: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f9415: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f9417: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f941b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f941f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9421: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9423: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9424: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f9428: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f942a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f942b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f942c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f942d: push 0xce1d38 */
  { uint32_t v = 0xce1d38u; esp -= 4; W32(esp, v); }
/* 6f9432: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f9438u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f9438: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f943b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9450(void) {
  LOAD_REGS();
L_6f9450: /* 6f9450: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f9454: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9470(void) {
  LOAD_REGS();
L_6f9470: /* 6f9470: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6f9474: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9476: je 0x6f947d */
  if (zf) goto L_6f947d;
L_6f9478: /* 6f9478: jmp 0x6ccb7b */
  SPILL(); f_6ccb7b(); return;
L_6f947d: /* 6f947d: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9490(void) {
  LOAD_REGS();
L_6f9490: /* 6f9490: mov eax, 0xcec2d8 */
  eax = 0xcec2d8u;
/* 6f9495: ret  */
  esp += 4; SPILL(); return;
}

void f_6f94b0(void) {
  LOAD_REGS();
L_6f94b0: /* 6f94b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f94b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f94b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f94bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f94bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f94c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f94c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f94c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f94c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f94ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f94cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f94cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f94cd: push 0xcec2d8 */
  { uint32_t v = 0xcec2d8u; esp -= 4; W32(esp, v); }
/* 6f94d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f94d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f94d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f94db: ret  */
  esp += 4; SPILL(); return;
}

void f_6f94f0(void) {
  LOAD_REGS();
L_6f94f0: /* 6f94f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f94f4: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9510(void) {
  LOAD_REGS();
L_6f9510: /* 6f9510: mov eax, 0xcebda8 */
  eax = 0xcebda8u;
/* 6f9515: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9530(void) {
  LOAD_REGS();
L_6f9530: /* 6f9530: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f9535: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f9537: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f953b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f953f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9541: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9543: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9544: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f9548: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f954a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f954b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f954c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f954d: push 0xcebda8 */
  { uint32_t v = 0xcebda8u; esp -= 4; W32(esp, v); }
/* 6f9552: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f9558u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f9558: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f955b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9570(void) {
  LOAD_REGS();
L_6f9570: /* 6f9570: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f9574: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9590(void) {
  LOAD_REGS();
L_6f9590: /* 6f9590: mov eax, 0xcec2d8 */
  eax = 0xcec2d8u;
/* 6f9595: ret  */
  esp += 4; SPILL(); return;
}

void f_6f95b0(void) {
  LOAD_REGS();
L_6f95b0: /* 6f95b0: mov eax, dword ptr [ecx + 0x280] */
  eax = R32((uint32_t)(ecx + 0x280u));
/* 6f95b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f95b8: je 0x6f95cc */
  if (zf) goto L_6f95cc;
L_6f95ba: /* 6f95ba: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f95bc: call dword ptr [eax + 0x174] */
  { uint32_t t = R32((uint32_t)(eax + 0x174u)); esp -= 4; W32(esp, 0x6f95c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f95c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f95c4: je 0x6f95cc */
  if (zf) goto L_6f95cc;
L_6f95c6: /* 6f95c6: mov eax, 1 */
  eax = 0x1u;
/* 6f95cb: ret  */
  esp += 4; SPILL(); return;
L_6f95cc: /* 6f95cc: xor eax, eax */
  eax = 0;
/* 6f95ce: ret  */
  esp += 4; SPILL(); return;
}

void f_6f95e0(void) {
  LOAD_REGS();
L_6f95e0: /* 6f95e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f95e1: mov esi, ecx */
  esi = ecx;
/* 6f95e3: mov eax, dword ptr [esi + 0x280] */
  eax = R32((uint32_t)(esi + 0x280u));
/* 6f95e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f95eb: je 0x6f9617 */
  if (zf) goto L_6f9617;
L_6f95ed: /* 6f95ed: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 6f95ef: call dword ptr [eax + 0x174] */
  { uint32_t t = R32((uint32_t)(eax + 0x174u)); esp -= 4; W32(esp, 0x6f95f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f95f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f95f7: je 0x6f9617 */
  if (zf) goto L_6f9617;
L_6f95f9: /* 6f95f9: test byte ptr [esi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9600: je 0x6f9617 */
  if (zf) goto L_6f9617;
L_6f9602: /* 6f9602: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 6f9604: mov ecx, esi */
  ecx = esi;
/* 6f9606: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x6f960cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f960c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f960e: jne 0x6f9617 */
  if (!zf) goto L_6f9617;
L_6f9610: /* 6f9610: mov eax, 1 */
  eax = 0x1u;
/* 6f9615: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9616: ret  */
  esp += 4; SPILL(); return;
L_6f9617: /* 6f9617: xor eax, eax */
  eax = 0;
/* 6f9619: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f961a: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9630(void) {
  LOAD_REGS();
L_6f9630: /* 6f9630: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 6f9633: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9635: je 0x6f9649 */
  if (zf) goto L_6f9649;
L_6f9637: /* 6f9637: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f9639: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x6f963fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f963f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9641: je 0x6f9649 */
  if (zf) goto L_6f9649;
L_6f9643: /* 6f9643: mov eax, 1 */
  eax = 0x1u;
/* 6f9648: ret  */
  esp += 4; SPILL(); return;
L_6f9649: /* 6f9649: xor eax, eax */
  eax = 0;
/* 6f964b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9660(void) {
  LOAD_REGS();
L_6f9660: /* 6f9660: mov eax, dword ptr [ecx + 0x280] */
  eax = R32((uint32_t)(ecx + 0x280u));
/* 6f9666: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9668: je 0x6f967c */
  if (zf) goto L_6f967c;
L_6f966a: /* 6f966a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6f966c: call dword ptr [eax + 0x17c] */
  { uint32_t t = R32((uint32_t)(eax + 0x17cu)); esp -= 4; W32(esp, 0x6f9672u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9672: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9674: je 0x6f967c */
  if (zf) goto L_6f967c;
L_6f9676: /* 6f9676: mov eax, 1 */
  eax = 0x1u;
/* 6f967b: ret  */
  esp += 4; SPILL(); return;
L_6f967c: /* 6f967c: xor eax, eax */
  eax = 0;
/* 6f967e: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9690(void) {
  LOAD_REGS();
L_6f9690: /* 6f9690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9691: mov esi, ecx */
  esi = ecx;
/* 6f9693: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f969a: je 0x6f96d2 */
  if (zf) goto L_6f96d2;
L_6f969c: /* 6f969c: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 6f969f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f96a1: je 0x6f96af */
  if (zf) goto L_6f96af;
L_6f96a3: /* 6f96a3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 6f96a5: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x6f96abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f96ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f96ad: jne 0x6f96cb */
  if (!zf) goto L_6f96cb;
L_6f96af: /* 6f96af: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 6f96b2: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 6f96b4: je 0x6f96cb */
  if (zf) goto L_6f96cb;
L_6f96b6: /* 6f96b6: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 6f96b8: jne 0x6f96d2 */
  if (!zf) goto L_6f96d2;
L_6f96ba: /* 6f96ba: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 6f96bf: mov ecx, esi */
  ecx = esi;
/* 6f96c1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x6f96c7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 6f96c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f96c9: jne 0x6f96d2 */
  if (!zf) goto L_6f96d2;
L_6f96cb: /* 6f96cb: mov eax, 1 */
  eax = 0x1u;
/* 6f96d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f96d1: ret  */
  esp += 4; SPILL(); return;
L_6f96d2: /* 6f96d2: xor eax, eax */
  eax = 0;
/* 6f96d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f96d5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9700(void) {
  LOAD_REGS();
L_6f9700: /* 6f9700: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9702: je 0x6f9713 */
  if (zf) goto L_6f9713;
L_6f9704: /* 6f9704: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
L_6f9708: /* 6f9708: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f970a: je 0x6f9718 */
  if (zf) goto L_6f9718;
L_6f970c: /* 6f970c: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* 6f970f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9711: jne 0x6f9708 */
  if (!zf) goto L_6f9708;
L_6f9713: /* 6f9713: xor eax, eax */
  eax = 0;
/* 6f9715: ret 4 */
  esp += 8; SPILL(); return;
L_6f9718: /* 6f9718: mov eax, 1 */
  eax = 0x1u;
/* 6f971d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9730(void) {
  LOAD_REGS();
L_6f9730: /* 6f9730: mov eax, ecx */
  eax = ecx;
/* 6f9732: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 6f9735: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9737: je 0x6f9749 */
  if (zf) goto L_6f9749;
L_6f9739: /* 6f9739: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_6f9740: /* 6f9740: mov eax, ecx */
  eax = ecx;
/* 6f9742: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 6f9745: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9747: jne 0x6f9740 */
  if (!zf) goto L_6f9740;
L_6f9749: /* 6f9749: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9760(void) {
  LOAD_REGS();
L_6f9760: /* 6f9760: mov eax, dword ptr [ecx + 0xc0] */
  eax = R32((uint32_t)(ecx + 0xc0u));
/* 6f9766: cmp eax, dword ptr [ecx + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f976c: je 0x6f977e */
  if (zf) goto L_6f977e;
L_6f976e: /* 6f976e: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6f9772: xor ecx, ecx */
  ecx = 0;
/* 6f9774: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f9776: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 6f9779: mov eax, ecx */
  eax = ecx;
/* 6f977b: ret 4 */
  esp += 8; SPILL(); return;
L_6f977e: /* 6f977e: mov eax, 1 */
  eax = 0x1u;
/* 6f9783: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f97a0(void) {
  LOAD_REGS();
L_6f97a0: /* 6f97a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f97a2: je 0x6f97b3 */
  if (zf) goto L_6f97b3;
L_6f97a4: /* 6f97a4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
L_6f97a8: /* 6f97a8: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f97aa: je 0x6f97b8 */
  if (zf) goto L_6f97b8;
L_6f97ac: /* 6f97ac: mov ecx, dword ptr [ecx + 0x5c] */
  ecx = R32((uint32_t)(ecx + 0x5cu));
/* 6f97af: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f97b1: jne 0x6f97a8 */
  if (!zf) goto L_6f97a8;
L_6f97b3: /* 6f97b3: xor eax, eax */
  eax = 0;
/* 6f97b5: ret 4 */
  esp += 8; SPILL(); return;
L_6f97b8: /* 6f97b8: mov eax, 1 */
  eax = 0x1u;
/* 6f97bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f97d0(void) {
  LOAD_REGS();
L_6f97d0: /* 6f97d0: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 6f97d6: ret  */
  esp += 4; SPILL(); return;
}

void f_6f97f0(void) {
  LOAD_REGS();
L_6f97f0: /* 6f97f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f97f1: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 6f97f6: mov esi, ecx */
  esi = ecx;
/* 6f97f8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x6f97feu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 6f97fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9800: je 0x6f9812 */
  if (zf) goto L_6f9812;
L_6f9802: /* 6f9802: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 6f9808: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f980a: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 6f9810: jne 0x6f9818 */
  if (!zf) goto L_6f9818;
L_6f9812: /* 6f9812: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
L_6f9818: /* 6f9818: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6f981a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f981e: mov edx, eax */
  edx = eax;
/* 6f9820: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6f9822: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6f9825: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6f9828: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6f982b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6f982e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f982f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9860(void) {
  LOAD_REGS();
L_6f9860: /* 6f9860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f9862: push 0x9c131b */
  { uint32_t v = 0x9c131bu; esp -= 4; W32(esp, v); }
/* 6f9867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f986d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f986e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f9875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9876: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9877: mov esi, ecx */
  esi = ecx;
/* 6f9879: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 6f987c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f987e: jne 0x6f98bc */
  if (!zf) goto L_6f98bc;
L_6f9880: /* 6f9880: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f9885: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f9887: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f9889: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 6f988e: push 0xec */
  { uint32_t v = 0xecu; esp -= 4; W32(esp, v); }
/* 6f9893: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x6f9895u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9895: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 6f9899: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f989b: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f98a3: je 0x6f98af */
  if (zf) goto L_6f98af;
L_6f98a5: /* 6f98a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f98a6: mov ecx, eax */
  ecx = eax;
/* 6f98a8: call 0x6c867f */
  esp -= 4; W32(esp, 0x6f98adu); SPILL(); f_6c867f(); if (g_unwind) return; RELOAD();
/* 6f98ad: jmp 0x6f98b1 */
  goto L_6f98b1;
L_6f98af: /* 6f98af: xor eax, eax */
  eax = 0;
L_6f98b1: /* 6f98b1: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f98b9: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
L_6f98bc: /* 6f98bc: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 6f98bf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 6f98c2: cmp ecx, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f98c5: je 0x6f98ce */
  if (zf) goto L_6f98ce;
L_6f98c7: /* 6f98c7: mov ecx, esi */
  ecx = esi;
/* 6f98c9: call 0x6c4af2 */
  esp -= 4; W32(esp, 0x6f98ceu); SPILL(); f_6c4af2(); if (g_unwind) return; RELOAD();
L_6f98ce: /* 6f98ce: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 6f98d1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f98d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f98d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f98dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f98e0: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9920(void) {
  LOAD_REGS();
L_6f9920: /* 6f9920: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f9922: push 0x9c133b */
  { uint32_t v = 0x9c133bu; esp -= 4; W32(esp, v); }
/* 6f9927: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f992d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f992e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f9935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9936: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9937: mov esi, ecx */
  esi = ecx;
/* 6f9939: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 6f993c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f993e: jne 0x6f9979 */
  if (!zf) goto L_6f9979;
L_6f9940: /* 6f9940: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6f9945: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f9947: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f9949: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 6f994e: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6f9950: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x6f9952u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9952: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 6f9956: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9958: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f9960: je 0x6f996c */
  if (zf) goto L_6f996c;
L_6f9962: /* 6f9962: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9963: mov ecx, eax */
  ecx = eax;
/* 6f9965: call 0x6c51f5 */
  esp -= 4; W32(esp, 0x6f996au); SPILL(); f_6c51f5(); if (g_unwind) return; RELOAD();
/* 6f996a: jmp 0x6f996e */
  goto L_6f996e;
L_6f996c: /* 6f996c: xor eax, eax */
  eax = 0;
L_6f996e: /* 6f996e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f9976: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
L_6f9979: /* 6f9979: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 6f997c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6f997f: cmp eax, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6f9982: je 0x6f9989 */
  if (zf) goto L_6f9989;
L_6f9984: /* 6f9984: call 0x6c9214 */
  esp -= 4; W32(esp, 0x6f9989u); SPILL(); f_6c9214(); if (g_unwind) return; RELOAD();
L_6f9989: /* 6f9989: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 6f998c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f9990: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9991: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f9998: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f999b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f99c0(void) {
  LOAD_REGS();
L_6f99c0: /* 6f99c0: mov eax, 0xb78580 */
  eax = 0xb78580u;
/* 6f99c5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f99e0(void) {
  LOAD_REGS();
L_6f99e0: /* 6f99e0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f99e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f99e7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f99eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f99ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f99f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f99f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f99f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f99f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f99fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f99fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f99fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f99fd: push 0xb78580 */
  { uint32_t v = 0xb78580u; esp -= 4; W32(esp, v); }
/* 6f9a02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f9a08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f9a08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9a0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9a20(void) {
  LOAD_REGS();
L_6f9a20: /* 6f9a20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f9a24: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9a40(void) {
  LOAD_REGS();
L_6f9a40: /* 6f9a40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6f9a42: push 0x9c1359 */
  { uint32_t v = 0x9c1359u; esp -= 4; W32(esp, v); }
/* 6f9a47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6f9a4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9a4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6f9a55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9a56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9a57: mov esi, ecx */
  esi = ecx;
/* 6f9a59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6f9a5d: mov dword ptr [esi], 0x9f7738 */
  W32((uint32_t)(esi), 0x9f7738u);
/* 6f9a63: mov dword ptr [esi + 0x28], 0x9f7734 */
  W32((uint32_t)(esi + 0x28u), 0x9f7734u);
/* 6f9a6a: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6f9a72: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6f9a78u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6f9a78: mov ecx, esi */
  ecx = esi;
/* 6f9a7a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6f9a82: call dword ptr [0xcfa2a0] */
  esp -= 4; W32(esp, 0x6f9a88u); SPILL(); f_4e152d(); if (g_unwind) return; /* Core!??1USubsystem@@UAE@XZ */ RELOAD();
/* 6f9a88: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6f9a8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9a8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6f9a94: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9a97: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9ac0(void) {
  LOAD_REGS();
L_6f9ac0: /* 6f9ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9ac1: mov esi, ecx */
  esi = ecx;
/* 6f9ac3: call dword ptr [0xcfa2a4] */
  esp -= 4; W32(esp, 0x6f9ac9u); SPILL(); f_4e22e3(); if (g_unwind) return; /* Core!??0USubsystem@@IAE@XZ */ RELOAD();
/* 6f9ac9: mov dword ptr [esi], 0x9f7738 */
  W32((uint32_t)(esi), 0x9f7738u);
/* 6f9acf: mov dword ptr [esi + 0x28], 0x9f7734 */
  W32((uint32_t)(esi + 0x28u), 0x9f7734u);
/* 6f9ad6: mov eax, esi */
  eax = esi;
/* 6f9ad8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9ad9: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9af0(void) {
  LOAD_REGS();
L_6f9af0: /* 6f9af0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6f9b10(void) {
  LOAD_REGS();
L_6f9b10: /* 6f9b10: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9b30(void) {
  LOAD_REGS();
L_6f9b30: /* 6f9b30: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9b50(void) {
  LOAD_REGS();
L_6f9b50: /* 6f9b50: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9b70(void) {
  LOAD_REGS();
L_6f9b70: /* 6f9b70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f9b74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9b75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9b76: mov esi, ecx */
  esi = ecx;
/* 6f9b78: call dword ptr [0xcfa2a8] */
  esp -= 4; W32(esp, 0x6f9b7eu); SPILL(); f_4e3887(); if (g_unwind) return; /* Core!??0USubsystem@@QAE@ABV0@@Z */ RELOAD();
/* 6f9b7e: mov dword ptr [esi], 0x9f7738 */
  W32((uint32_t)(esi), 0x9f7738u);
/* 6f9b84: mov dword ptr [esi + 0x28], 0x9f7734 */
  W32((uint32_t)(esi + 0x28u), 0x9f7734u);
/* 6f9b8b: mov eax, esi */
  eax = esi;
/* 6f9b8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9b8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9bb0(void) {
  LOAD_REGS();
L_6f9bb0: /* 6f9bb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f9bb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9bb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9bb6: mov esi, ecx */
  esi = ecx;
/* 6f9bb8: call dword ptr [0xcfa2ac] */
  esp -= 4; W32(esp, 0x6f9bbeu); SPILL(); f_4e3409(); if (g_unwind) return; /* Core!??4USubsystem@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6f9bbe: mov eax, esi */
  eax = esi;
/* 6f9bc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9bc1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9be0(void) {
  LOAD_REGS();
L_6f9be0: /* 6f9be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9be1: mov esi, ecx */
  esi = ecx;
/* 6f9be3: call 0x6c5e89 */
  esp -= 4; W32(esp, 0x6f9be8u); SPILL(); f_6c5e89(); if (g_unwind) return; RELOAD();
/* 6f9be8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9bed: je 0x6f9bfb */
  if (zf) goto L_6f9bfb;
L_6f9bef: /* 6f9bef: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6f9bf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9bf2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f9bf8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f9bf8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f9bfb: /* 6f9bfb: mov eax, esi */
  eax = esi;
/* 6f9bfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9bfe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9c20(void) {
  LOAD_REGS();
L_6f9c20: /* 6f9c20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f9c21: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6f9c25: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9c28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9c29: mov esi, ecx */
  esi = ecx;
/* 6f9c2b: je 0x6f9c5d */
  if (zf) goto L_6f9c5d;
L_6f9c2d: /* 6f9c2d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6f9c30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f9c31: push 0x6c5e89 */
  { uint32_t v = 0x6c5e89u; esp -= 4; W32(esp, v); }
/* 6f9c36: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6f9c39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9c3a: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6f9c3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9c3d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6f9c42u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6f9c42: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9c45: je 0x6f9c55 */
  if (zf) goto L_6f9c55;
L_6f9c47: /* 6f9c47: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6f9c4d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6f9c4f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6f9c51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f9c52: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6f9c55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6f9c55: /* 6f9c55: mov eax, edi */
  eax = edi;
/* 6f9c57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f9c58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9c59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f9c5a: ret 4 */
  esp += 8; SPILL(); return;
L_6f9c5d: /* 6f9c5d: mov ecx, esi */
  ecx = esi;
/* 6f9c5f: call 0x6c5e89 */
  esp -= 4; W32(esp, 0x6f9c64u); SPILL(); f_6c5e89(); if (g_unwind) return; RELOAD();
/* 6f9c64: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9c67: je 0x6f9c75 */
  if (zf) goto L_6f9c75;
L_6f9c69: /* 6f9c69: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6f9c6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9c6c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6f9c72u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6f9c72: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6f9c75: /* 6f9c75: mov eax, esi */
  eax = esi;
/* 6f9c77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9c78: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f9c79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9ca0(void) {
  LOAD_REGS();
L_6f9ca0: /* 6f9ca0: mov eax, 0xb78050 */
  eax = 0xb78050u;
/* 6f9ca5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9cc0(void) {
  LOAD_REGS();
L_6f9cc0: /* 6f9cc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f9cc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f9cc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f9ccb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f9ccf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9cd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9cd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9cd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f9cd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9cda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f9cdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9cdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9cdd: push 0xb78050 */
  { uint32_t v = 0xb78050u; esp -= 4; W32(esp, v); }
/* 6f9ce2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f9ce8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f9ce8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9ceb: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9d00(void) {
  LOAD_REGS();
L_6f9d00: /* 6f9d00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6f9d04: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9d20(void) {
  LOAD_REGS();
L_6f9d20: /* 6f9d20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9d21: mov esi, ecx */
  esi = ecx;
/* 6f9d23: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* 6f9d26: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 6f9d2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 6f9d2e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 6f9d31: jp 0x6f9d3e */
  if (pf) goto L_6f9d3e;
L_6f9d33: /* 6f9d33: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 6f9d36: call 0x6c96bf */
  esp -= 4; W32(esp, 0x6f9d3bu); SPILL(); f_6c96bf(); if (g_unwind) return; RELOAD();
/* 6f9d3b: fstp dword ptr [esi + 0x58] */
  WF32((uint32_t)(esi + 0x58u), ST0); FPOP();
L_6f9d3e: /* 6f9d3e: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* 6f9d41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9d42: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9d60(void) {
  LOAD_REGS();
L_6f9d60: /* 6f9d60: mov eax, ecx */
  eax = ecx;
/* 6f9d62: xor ecx, ecx */
  ecx = 0;
/* 6f9d64: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 6f9d67: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 6f9d6a: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9d80(void) {
  LOAD_REGS();
L_6f9d80: /* 6f9d80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6f9d84: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 6f9d85: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6f9d88: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9da0(void) {
  LOAD_REGS();
L_6f9da0: /* 6f9da0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9da1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6f9da5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f9da6: mov eax, ecx */
  eax = ecx;
/* 6f9da8: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6f9dad: mov edi, eax */
  edi = eax;
/* 6f9daf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6f9db1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f9db2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9db3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6f9dd0(void) {
  LOAD_REGS();
L_6f9dd0: /* 6f9dd0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6f9dd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f9dd4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f9dd5: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 6f9dd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6f9dda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f9ddb: mov ecx, ebp */
  ecx = ebp;
/* 6f9ddd: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x6f9de3u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 6f9de3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6f9de5: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6f9deb: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 6f9def: je 0x6f9e94 */
  if (zf) goto L_6f9e94;
L_6f9df5: /* 6f9df5: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 6f9df8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9df9: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 6f9dfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9dfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f9dfe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f9dff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9e01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e05: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9e07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e0b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9e0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e10: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 6f9e14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f9e15: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 6f9e19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9e1a: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 6f9e1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f9e1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e20: lea ebx, [edi + 0x18] */
  ebx = (uint32_t)(edi + 0x18u);
/* 6f9e23: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9e25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e29: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9e2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e2f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9e31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e34: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 6f9e37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9e38: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 6f9e3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f9e3c: lea ecx, [ebx + 3] */
  ecx = (uint32_t)(ebx + 0x3u);
/* 6f9e3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9e40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f9e41: lea edx, [ebx + 1] */
  edx = (uint32_t)(ebx + 0x1u);
/* 6f9e44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f9e45: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 6f9e48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f9e49: mov ebx, dword ptr [0xcfa1b8] */
  ebx = R32((uint32_t)(0xcfa1b8u));
/* 6f9e4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e50: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x6f9e52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e56: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x6f9e58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e5c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x6f9e5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e5e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e62: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x6f9e64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e64: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e68: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9e6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9e6e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9e70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9e70: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 6f9e74: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 6f9e78: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 6f9e7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e7f: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6f9e82: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 6f9e84: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 6f9e87: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 6f9e8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f9e8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9e8c: mov eax, ebp */
  eax = ebp;
/* 6f9e8e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f9e8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f9e90: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9e93: ret  */
  esp += 4; SPILL(); return;
L_6f9e94: /* 6f9e94: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 6f9e97: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f9e99: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6f9e9c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6f9e9f: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 6f9ea3: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 6f9ea6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9ea7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 6f9eab: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 6f9eae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f9eaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f9eb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6f9eb1: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 6f9eb5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9eb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9eb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9ebb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9ebdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9ebd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9ec1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9ec3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9ec3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9ec6: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 6f9eca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9ecb: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 6f9ecf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f9ed0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 6f9ed4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9ed6: lea ebx, [edi + 0x18] */
  ebx = (uint32_t)(edi + 0x18u);
/* 6f9ed9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9edbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9edb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9ede: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9edf: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9ee1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9ee1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9ee4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9ee5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9ee7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9ee7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9eea: lea edx, [edi + 0x20] */
  edx = (uint32_t)(edi + 0x20u);
/* 6f9eed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f9eee: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6f9ef1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6f9ef2: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 6f9ef8: lea ecx, [ebx + 3] */
  ecx = (uint32_t)(ebx + 0x3u);
/* 6f9efb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9efc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f9efd: lea edx, [ebx + 1] */
  edx = (uint32_t)(ebx + 0x1u);
/* 6f9f00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f9f01: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 6f9f04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6f9f05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9f06: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f9f08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9f08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9f0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9f0c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f9f0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9f0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9f11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9f12: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f9f14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9f14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9f17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9f18: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6f9f1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9f1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9f1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9f1e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9f20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9f20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9f23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9f24: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6f9f26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6f9f26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9f29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6f9f2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6f9f2b: mov eax, ebp */
  eax = ebp;
/* 6f9f2d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6f9f2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6f9f2f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9f32: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9fa0(void) {
  LOAD_REGS();
L_6f9fa0: /* 6f9fa0: mov eax, 0xce85b0 */
  eax = 0xce85b0u;
/* 6f9fa5: ret  */
  esp += 4; SPILL(); return;
}

void f_6f9fc0(void) {
  LOAD_REGS();
L_6f9fc0: /* 6f9fc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6f9fc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6f9fc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6f9fcb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6f9fcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9fd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9fd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9fd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6f9fd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6f9fda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6f9fdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6f9fdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6f9fdd: push 0xce85b0 */
  { uint32_t v = 0xce85b0u; esp -= 4; W32(esp, v); }
/* 6f9fe2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6f9fe8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6f9fe8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6f9feb: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa000(void) {
  LOAD_REGS();
L_6fa000: /* 6fa000: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fa004: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa020(void) {
  LOAD_REGS();
L_6fa020: /* 6fa020: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
/* 6fa023: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fa027: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 6fa028: imul eax, dword ptr [esp + 8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8u)));
  eax = (uint32_t)r;
  }
/* 6fa02d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fa02f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6fa050(void) {
  LOAD_REGS();
L_6fa050: /* 6fa050: mov eax, 0xce8ae0 */
  eax = 0xce8ae0u;
/* 6fa055: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa070(void) {
  LOAD_REGS();
L_6fa070: /* 6fa070: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6fa075: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fa077: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6fa07b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6fa07f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fa081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fa083: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa084: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6fa088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fa08a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fa08b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa08c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa08d: push 0xce8ae0 */
  { uint32_t v = 0xce8ae0u; esp -= 4; W32(esp, v); }
/* 6fa092: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6fa098u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6fa098: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fa09b: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa0b0(void) {
  LOAD_REGS();
L_6fa0b0: /* 6fa0b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fa0b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa0d0(void) {
  LOAD_REGS();
L_6fa0d0: /* 6fa0d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6fa0d2: push 0x9c1378 */
  { uint32_t v = 0x9c1378u; esp -= 4; W32(esp, v); }
/* 6fa0d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6fa0dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa0de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6fa0e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa0e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa0e7: mov esi, ecx */
  esi = ecx;
/* 6fa0e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6fa0ed: mov dword ptr [esi], 0x9f7810 */
  W32((uint32_t)(esi), 0x9f7810u);
/* 6fa0f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6fa0fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6fa101u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6fa101: mov ecx, esi */
  ecx = esi;
/* 6fa103: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6fa10b: call 0x6c41ec */
  esp -= 4; W32(esp, 0x6fa110u); SPILL(); f_6c41ec(); if (g_unwind) return; RELOAD();
/* 6fa110: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6fa114: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa115: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6fa11c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fa11f: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa140(void) {
  LOAD_REGS();
L_6fa140: /* 6fa140: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa141: mov esi, ecx */
  esi = ecx;
/* 6fa143: call 0x6cc93c */
  esp -= 4; W32(esp, 0x6fa148u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 6fa148: mov dword ptr [esi], 0x9f7810 */
  W32((uint32_t)(esi), 0x9f7810u);
/* 6fa14e: mov eax, esi */
  eax = esi;
/* 6fa150: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa151: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa170(void) {
  LOAD_REGS();
L_6fa170: /* 6fa170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa171: mov esi, ecx */
  esi = ecx;
/* 6fa173: call 0x6cc93c */
  esp -= 4; W32(esp, 0x6fa178u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 6fa178: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fa17c: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6fa17f: mov dword ptr [esi], 0x9f7810 */
  W32((uint32_t)(esi), 0x9f7810u);
/* 6fa185: mov eax, esi */
  eax = esi;
/* 6fa187: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa188: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa1a0(void) {
  LOAD_REGS();
L_6fa1a0: /* 6fa1a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa1a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa1a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fa1a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa1a7: mov esi, ecx */
  esi = ecx;
/* 6fa1a9: call 0x6c67fd */
  esp -= 4; W32(esp, 0x6fa1aeu); SPILL(); f_6c67fd(); if (g_unwind) return; RELOAD();
/* 6fa1ae: mov dword ptr [esi], 0x9f7810 */
  W32((uint32_t)(esi), 0x9f7810u);
/* 6fa1b4: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6fa1b7: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6fa1ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fa1bb: mov eax, esi */
  eax = esi;
/* 6fa1bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa1be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa1e0(void) {
  LOAD_REGS();
L_6fa1e0: /* 6fa1e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fa1e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fa1e2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6fa1e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa1e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa1e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fa1e9: mov ebx, ecx */
  ebx = ecx;
/* 6fa1eb: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6fa1f1u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6fa1f1: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 6fa1f4: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 6fa1f7: lea eax, [ebp + 0x44] */
  eax = (uint32_t)(ebp + 0x44u);
/* 6fa1fa: mov ecx, 7 */
  ecx = 0x7u;
/* 6fa1ff: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6fa201: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6fa203: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 6fa206: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6fa208: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6fa20b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6fa20e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 6fa211: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6fa214: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 6fa217: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fa218: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 6fa21b: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 6fa21e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa21f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fa220: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 6fa223: mov eax, ebx */
  eax = ebx;
/* 6fa225: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fa226: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa250(void) {
  LOAD_REGS();
L_6fa250: /* 6fa250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa251: mov esi, ecx */
  esi = ecx;
/* 6fa253: call 0x6c8300 */
  esp -= 4; W32(esp, 0x6fa258u); SPILL(); f_6c8300(); if (g_unwind) return; RELOAD();
/* 6fa258: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa25d: je 0x6fa26b */
  if (zf) goto L_6fa26b;
L_6fa25f: /* 6fa25f: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6fa261: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa262: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6fa268u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6fa268: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fa26b: /* 6fa26b: mov eax, esi */
  eax = esi;
/* 6fa26d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa26e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa290(void) {
  LOAD_REGS();
L_6fa290: /* 6fa290: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fa291: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fa295: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa298: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa299: mov esi, ecx */
  esi = ecx;
/* 6fa29b: je 0x6fa2cd */
  if (zf) goto L_6fa2cd;
L_6fa29d: /* 6fa29d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fa2a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa2a1: push 0x6c8300 */
  { uint32_t v = 0x6c8300u; esp -= 4; W32(esp, v); }
/* 6fa2a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fa2a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa2aa: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6fa2ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa2ad: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fa2b2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fa2b2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa2b5: je 0x6fa2c5 */
  if (zf) goto L_6fa2c5;
L_6fa2b7: /* 6fa2b7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fa2bd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fa2bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fa2c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa2c2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fa2c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fa2c5: /* 6fa2c5: mov eax, edi */
  eax = edi;
/* 6fa2c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fa2c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa2c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fa2ca: ret 4 */
  esp += 8; SPILL(); return;
L_6fa2cd: /* 6fa2cd: mov ecx, esi */
  ecx = esi;
/* 6fa2cf: call 0x6c8300 */
  esp -= 4; W32(esp, 0x6fa2d4u); SPILL(); f_6c8300(); if (g_unwind) return; RELOAD();
/* 6fa2d4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa2d7: je 0x6fa2e5 */
  if (zf) goto L_6fa2e5;
L_6fa2d9: /* 6fa2d9: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6fa2db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa2dc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6fa2e2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6fa2e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fa2e5: /* 6fa2e5: mov eax, esi */
  eax = esi;
/* 6fa2e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa2e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fa2e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa310(void) {
  LOAD_REGS();
L_6fa310: /* 6fa310: mov eax, 0xce9010 */
  eax = 0xce9010u;
/* 6fa315: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa330(void) {
  LOAD_REGS();
L_6fa330: /* 6fa330: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6fa335: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fa337: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6fa33b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6fa33f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fa341: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fa343: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa344: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6fa348: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fa34a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fa34b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa34c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa34d: push 0xce9010 */
  { uint32_t v = 0xce9010u; esp -= 4; W32(esp, v); }
/* 6fa352: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6fa358u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6fa358: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fa35b: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa370(void) {
  LOAD_REGS();
L_6fa370: /* 6fa370: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fa374: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa390(void) {
  LOAD_REGS();
L_6fa390: /* 6fa390: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fa394: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa396: je 0x6fa39d */
  if (zf) goto L_6fa39d;
L_6fa398: /* 6fa398: jmp 0x6cbb90 */
  SPILL(); f_6cbb90(); return;
L_6fa39d: /* 6fa39d: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa3b0(void) {
  LOAD_REGS();
L_6fa3b0: /* 6fa3b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa3b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa3b2: mov esi, ecx */
  esi = ecx;
/* 6fa3b4: mov eax, dword ptr [esi + 0x1278] */
  eax = R32((uint32_t)(esi + 0x1278u));
/* 6fa3ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa3bc: je 0x6fa417 */
  if (zf) goto L_6fa417;
L_6fa3be: /* 6fa3be: mov eax, dword ptr [esi + 0x129c] */
  eax = R32((uint32_t)(esi + 0x129cu));
/* 6fa3c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa3c6: jne 0x6fa41e */
  if (!zf) goto L_6fa41e;
L_6fa3c8: /* 6fa3c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa3c9: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 6fa3cd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6fa3d3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6fa3d3: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6fa3d8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fa3da: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fa3de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fa3e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fa3e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa3e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fa3e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fa3e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fa3e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa3e9: push 0xce8ae0 */
  { uint32_t v = 0xce8ae0u; esp -= 4; W32(esp, v); }
/* 6fa3ee: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6fa3f4u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6fa3f4: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fa3f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa3f9: je 0x6fa40c */
  if (zf) goto L_6fa40c;
L_6fa3fb: /* 6fa3fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa3fc: mov ecx, eax */
  ecx = eax;
/* 6fa3fe: call 0x6c61db */
  esp -= 4; W32(esp, 0x6fa403u); SPILL(); f_6c61db(); if (g_unwind) return; RELOAD();
/* 6fa403: mov dword ptr [esi + 0x129c], eax */
  W32((uint32_t)(esi + 0x129cu), eax);
/* 6fa409: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa40a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6fa40b: ret  */
  esp += 4; SPILL(); return;
L_6fa40c: /* 6fa40c: xor eax, eax */
  eax = 0;
/* 6fa40e: mov dword ptr [esi + 0x129c], eax */
  W32((uint32_t)(esi + 0x129cu), eax);
/* 6fa414: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa415: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6fa416: ret  */
  esp += 4; SPILL(); return;
L_6fa417: /* 6fa417: mov ecx, esi */
  ecx = esi;
/* 6fa419: call 0x6c7761 */
  esp -= 4; W32(esp, 0x6fa41eu); SPILL(); f_6c7761(); if (g_unwind) return; RELOAD();
L_6fa41e: /* 6fa41e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa41f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6fa420: ret  */
  esp += 4; SPILL(); return;
}

void f_6fa450(void) {
  LOAD_REGS();
L_6fa450: /* 6fa450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa451: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6fa455: add ecx, 0x12ac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x12acu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6fa45b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa45c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa45d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 6fa461: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x6fa467u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 6fa467: mov eax, esi */
  eax = esi;
/* 6fa469: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa46a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_6fa480(void) {
  LOAD_REGS();
L_6fa480: /* 6fa480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa481: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6fa485: add ecx, 0x12dc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x12dcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6fa48b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa48c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa48d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 6fa491: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x6fa497u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 6fa497: mov eax, esi */
  eax = esi;
/* 6fa499: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa49a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_6fa4b0(void) {
  LOAD_REGS();
L_6fa4b0: /* 6fa4b0: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6fa4b3: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_6fa4d0(void) {
  LOAD_REGS();
L_6fa4d0: /* 6fa4d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6fa4d2: push 0x9c139c */
  { uint32_t v = 0x9c139cu; esp -= 4; W32(esp, v); }
/* 6fa4d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6fa4dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa4de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6fa4e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa4e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa4e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa4e8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 6fa4ec: mov esi, ecx */
  esi = ecx;
/* 6fa4ee: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 6fa4f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa4f2: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6fa4f5: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 6fa4f9: mov dword ptr [esi], 0x9f78b8 */
  W32((uint32_t)(esi), 0x9f78b8u);
/* 6fa4ff: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x6fa505u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 6fa505: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 6fa508: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa509: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 6fa50c: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 6fa514: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x6fa51au); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 6fa51a: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 6fa51d: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 6fa520: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 6fa523: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 6fa526: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 6fa529: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 6fa52c: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 6fa52f: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 6fa532: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 6fa535: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6fa538: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6fa53b: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6fa53e: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 6fa541: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 6fa544: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6fa547: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6fa54a: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 6fa54d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fa54f: lea edx, [esi + 0x3c] */
  edx = (uint32_t)(esi + 0x3cu);
/* 6fa552: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6fa554: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fa557: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6fa55a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6fa55d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6fa560: lea edx, [edi + 0x48] */
  edx = (uint32_t)(edi + 0x48u);
/* 6fa563: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6fa565: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 6fa568: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6fa56a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6fa56d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6fa570: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6fa573: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6fa576: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6fa579: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6fa57c: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 6fa57f: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 6fa582: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 6fa585: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6fa588: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 6fa58b: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 6fa58e: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 6fa591: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 6fa594: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6fa598: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fa599: mov eax, esi */
  eax = esi;
/* 6fa59b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa59c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6fa5a3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fa5a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa5f0(void) {
  LOAD_REGS();
L_6fa5f0: /* 6fa5f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa5f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa5f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fa5f6: mov esi, ecx */
  esi = ecx;
/* 6fa5f8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 6fa5fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa5fc: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6fa5ff: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x6fa605u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6fa605: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 6fa608: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fa609: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 6fa60c: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x6fa612u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6fa612: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 6fa615: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 6fa618: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 6fa61b: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 6fa61e: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 6fa621: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 6fa624: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 6fa627: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 6fa62a: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 6fa62d: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6fa630: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6fa633: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6fa636: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 6fa639: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 6fa63c: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6fa63f: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6fa642: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 6fa645: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fa647: lea edx, [esi + 0x3c] */
  edx = (uint32_t)(esi + 0x3cu);
/* 6fa64a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6fa64c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fa64f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6fa652: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6fa655: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6fa658: lea edx, [edi + 0x48] */
  edx = (uint32_t)(edi + 0x48u);
/* 6fa65b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6fa65d: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 6fa660: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6fa662: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6fa665: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6fa668: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6fa66b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6fa66e: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6fa671: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6fa674: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 6fa677: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 6fa67a: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 6fa67d: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6fa680: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 6fa683: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 6fa686: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 6fa689: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fa68a: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 6fa68d: mov eax, esi */
  eax = esi;
/* 6fa68f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa690: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa6d0(void) {
  LOAD_REGS();
L_6fa6d0: /* 6fa6d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa6d1: mov esi, ecx */
  esi = ecx;
/* 6fa6d3: call 0x6cad53 */
  esp -= 4; W32(esp, 0x6fa6d8u); SPILL(); f_6cad53(); if (g_unwind) return; RELOAD();
/* 6fa6d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa6dd: je 0x6fa6ec */
  if (zf) goto L_6fa6ec;
L_6fa6df: /* 6fa6df: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fa6e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fa6e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fa6e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa6e9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fa6ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fa6ec: /* 6fa6ec: mov eax, esi */
  eax = esi;
/* 6fa6ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa6ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa710(void) {
  LOAD_REGS();
L_6fa710: /* 6fa710: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fa711: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fa715: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa718: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa719: mov esi, ecx */
  esi = ecx;
/* 6fa71b: je 0x6fa74d */
  if (zf) goto L_6fa74d;
L_6fa71d: /* 6fa71d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fa720: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa721: push 0x6cad53 */
  { uint32_t v = 0x6cad53u; esp -= 4; W32(esp, v); }
/* 6fa726: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fa729: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa72a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fa72c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa72d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fa732u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fa732: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa735: je 0x6fa745 */
  if (zf) goto L_6fa745;
L_6fa737: /* 6fa737: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fa73d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fa73f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fa741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa742: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fa745u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fa745: /* 6fa745: mov eax, edi */
  eax = edi;
/* 6fa747: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fa748: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa749: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fa74a: ret 4 */
  esp += 8; SPILL(); return;
L_6fa74d: /* 6fa74d: mov ecx, esi */
  ecx = esi;
/* 6fa74f: call 0x6cad53 */
  esp -= 4; W32(esp, 0x6fa754u); SPILL(); f_6cad53(); if (g_unwind) return; RELOAD();
/* 6fa754: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa757: je 0x6fa766 */
  if (zf) goto L_6fa766;
L_6fa759: /* 6fa759: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fa75e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fa760: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fa762: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa763: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fa766u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fa766: /* 6fa766: mov eax, esi */
  eax = esi;
/* 6fa768: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa769: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fa76a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa790(void) {
  LOAD_REGS();
L_6fa790: /* 6fa790: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fa794: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa796: mov esi, ecx */
  esi = ecx;
/* 6fa798: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6fa79du); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6fa79d: mov dword ptr [esi], 0x9f78d4 */
  W32((uint32_t)(esi), 0x9f78d4u);
/* 6fa7a3: mov eax, esi */
  eax = esi;
/* 6fa7a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa7a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa7c0(void) {
  LOAD_REGS();
L_6fa7c0: /* 6fa7c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fa7c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa7c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa7c6: mov esi, ecx */
  esi = ecx;
/* 6fa7c8: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fa7cdu); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fa7cd: mov eax, esi */
  eax = esi;
/* 6fa7cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa7d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa7f0(void) {
  LOAD_REGS();
L_6fa7f0: /* 6fa7f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa7f1: mov esi, ecx */
  esi = ecx;
/* 6fa7f3: call 0x6c9359 */
  esp -= 4; W32(esp, 0x6fa7f8u); SPILL(); f_6c9359(); if (g_unwind) return; RELOAD();
/* 6fa7f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa7fd: je 0x6fa80c */
  if (zf) goto L_6fa80c;
L_6fa7ff: /* 6fa7ff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fa804: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fa806: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fa808: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa809: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fa80cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fa80c: /* 6fa80c: mov eax, esi */
  eax = esi;
/* 6fa80e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa80f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa830(void) {
  LOAD_REGS();
L_6fa830: /* 6fa830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fa831: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fa835: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa838: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa839: mov esi, ecx */
  esi = ecx;
/* 6fa83b: je 0x6fa86d */
  if (zf) goto L_6fa86d;
L_6fa83d: /* 6fa83d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fa840: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa841: push 0x6c9359 */
  { uint32_t v = 0x6c9359u; esp -= 4; W32(esp, v); }
/* 6fa846: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fa849: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa84a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fa84c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa84d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fa852u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fa852: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa855: je 0x6fa865 */
  if (zf) goto L_6fa865;
L_6fa857: /* 6fa857: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fa85d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fa85f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fa861: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa862: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fa865u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fa865: /* 6fa865: mov eax, edi */
  eax = edi;
/* 6fa867: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fa868: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa869: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fa86a: ret 4 */
  esp += 8; SPILL(); return;
L_6fa86d: /* 6fa86d: mov ecx, esi */
  ecx = esi;
/* 6fa86f: call 0x6c9359 */
  esp -= 4; W32(esp, 0x6fa874u); SPILL(); f_6c9359(); if (g_unwind) return; RELOAD();
/* 6fa874: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa877: je 0x6fa886 */
  if (zf) goto L_6fa886;
L_6fa879: /* 6fa879: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fa87e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fa880: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fa882: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa883: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fa886u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fa886: /* 6fa886: mov eax, esi */
  eax = esi;
/* 6fa888: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa889: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fa88a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa8b0(void) {
  LOAD_REGS();
L_6fa8b0: /* 6fa8b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fa8b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa8b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa8b6: mov esi, ecx */
  esi = ecx;
/* 6fa8b8: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6fa8bdu); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6fa8bd: mov dword ptr [esi], 0x9f78f0 */
  W32((uint32_t)(esi), 0x9f78f0u);
/* 6fa8c3: mov eax, esi */
  eax = esi;
/* 6fa8c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa8c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa8e0(void) {
  LOAD_REGS();
L_6fa8e0: /* 6fa8e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fa8e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa8e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa8e6: mov esi, ecx */
  esi = ecx;
/* 6fa8e8: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fa8edu); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fa8ed: mov eax, esi */
  eax = esi;
/* 6fa8ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa8f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa910(void) {
  LOAD_REGS();
L_6fa910: /* 6fa910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa911: mov esi, ecx */
  esi = ecx;
/* 6fa913: call 0x6cbfe1 */
  esp -= 4; W32(esp, 0x6fa918u); SPILL(); f_6cbfe1(); if (g_unwind) return; RELOAD();
/* 6fa918: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa91d: je 0x6fa92c */
  if (zf) goto L_6fa92c;
L_6fa91f: /* 6fa91f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fa924: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fa926: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fa928: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa929: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fa92cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fa92c: /* 6fa92c: mov eax, esi */
  eax = esi;
/* 6fa92e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa92f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa950(void) {
  LOAD_REGS();
L_6fa950: /* 6fa950: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fa951: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fa955: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa958: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa959: mov esi, ecx */
  esi = ecx;
/* 6fa95b: je 0x6fa98d */
  if (zf) goto L_6fa98d;
L_6fa95d: /* 6fa95d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fa960: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa961: push 0x6cbfe1 */
  { uint32_t v = 0x6cbfe1u; esp -= 4; W32(esp, v); }
/* 6fa966: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fa969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa96a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fa96c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa96d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fa972u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fa972: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa975: je 0x6fa985 */
  if (zf) goto L_6fa985;
L_6fa977: /* 6fa977: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fa97d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fa97f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fa981: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fa982: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fa985u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fa985: /* 6fa985: mov eax, edi */
  eax = edi;
/* 6fa987: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fa988: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa989: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fa98a: ret 4 */
  esp += 8; SPILL(); return;
L_6fa98d: /* 6fa98d: mov ecx, esi */
  ecx = esi;
/* 6fa98f: call 0x6cbfe1 */
  esp -= 4; W32(esp, 0x6fa994u); SPILL(); f_6cbfe1(); if (g_unwind) return; RELOAD();
/* 6fa994: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fa997: je 0x6fa9a6 */
  if (zf) goto L_6fa9a6;
L_6fa999: /* 6fa999: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fa99e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fa9a0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fa9a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa9a3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fa9a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fa9a6: /* 6fa9a6: mov eax, esi */
  eax = esi;
/* 6fa9a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa9a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fa9aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fa9d0(void) {
  LOAD_REGS();
L_6fa9d0: /* 6fa9d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fa9d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fa9d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fa9d6: mov esi, ecx */
  esi = ecx;
/* 6fa9d8: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6fa9ddu); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6fa9dd: mov dword ptr [esi], 0x9f790c */
  W32((uint32_t)(esi), 0x9f790cu);
/* 6fa9e3: mov eax, esi */
  eax = esi;
/* 6fa9e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fa9e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6faa00(void) {
  LOAD_REGS();
L_6faa00: /* 6faa00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6faa04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faa05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6faa06: mov esi, ecx */
  esi = ecx;
/* 6faa08: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6faa0du); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6faa0d: mov eax, esi */
  eax = esi;
/* 6faa0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6faa10: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6faa30(void) {
  LOAD_REGS();
L_6faa30: /* 6faa30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faa31: mov esi, ecx */
  esi = ecx;
/* 6faa33: call 0x6c9728 */
  esp -= 4; W32(esp, 0x6faa38u); SPILL(); f_6c9728(); if (g_unwind) return; RELOAD();
/* 6faa38: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6faa3d: je 0x6faa4c */
  if (zf) goto L_6faa4c;
L_6faa3f: /* 6faa3f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6faa44: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6faa46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6faa48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faa49: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6faa4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6faa4c: /* 6faa4c: mov eax, esi */
  eax = esi;
/* 6faa4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6faa4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6faa70(void) {
  LOAD_REGS();
L_6faa70: /* 6faa70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6faa71: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6faa75: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6faa78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faa79: mov esi, ecx */
  esi = ecx;
/* 6faa7b: je 0x6faaad */
  if (zf) goto L_6faaad;
L_6faa7d: /* 6faa7d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6faa80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6faa81: push 0x6c9728 */
  { uint32_t v = 0x6c9728u; esp -= 4; W32(esp, v); }
/* 6faa86: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6faa89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6faa8a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6faa8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faa8d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6faa92u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6faa92: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6faa95: je 0x6faaa5 */
  if (zf) goto L_6faaa5;
L_6faa97: /* 6faa97: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6faa9d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6faa9f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6faaa1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6faaa2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6faaa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6faaa5: /* 6faaa5: mov eax, edi */
  eax = edi;
/* 6faaa7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6faaa8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6faaa9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6faaaa: ret 4 */
  esp += 8; SPILL(); return;
L_6faaad: /* 6faaad: mov ecx, esi */
  ecx = esi;
/* 6faaaf: call 0x6c9728 */
  esp -= 4; W32(esp, 0x6faab4u); SPILL(); f_6c9728(); if (g_unwind) return; RELOAD();
/* 6faab4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6faab7: je 0x6faac6 */
  if (zf) goto L_6faac6;
L_6faab9: /* 6faab9: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6faabe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6faac0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6faac2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faac3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6faac6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6faac6: /* 6faac6: mov eax, esi */
  eax = esi;
/* 6faac8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6faac9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6faaca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6faaf0(void) {
  LOAD_REGS();
L_6faaf0: /* 6faaf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6faaf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faaf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6faaf6: mov esi, ecx */
  esi = ecx;
/* 6faaf8: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6faafdu); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6faafd: mov dword ptr [esi], 0x9f7928 */
  W32((uint32_t)(esi), 0x9f7928u);
/* 6fab03: mov eax, esi */
  eax = esi;
/* 6fab05: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fab06: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fab20(void) {
  LOAD_REGS();
L_6fab20: /* 6fab20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fab24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fab25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fab26: mov esi, ecx */
  esi = ecx;
/* 6fab28: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fab2du); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fab2d: mov eax, esi */
  eax = esi;
/* 6fab2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fab30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fab50(void) {
  LOAD_REGS();
L_6fab50: /* 6fab50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fab51: mov esi, ecx */
  esi = ecx;
/* 6fab53: call 0x6c282e */
  esp -= 4; W32(esp, 0x6fab58u); SPILL(); f_6c282e(); if (g_unwind) return; RELOAD();
/* 6fab58: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fab5d: je 0x6fab6c */
  if (zf) goto L_6fab6c;
L_6fab5f: /* 6fab5f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fab64: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fab66: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fab68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fab69: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fab6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fab6c: /* 6fab6c: mov eax, esi */
  eax = esi;
/* 6fab6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fab6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fab90(void) {
  LOAD_REGS();
L_6fab90: /* 6fab90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fab91: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fab95: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fab98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fab99: mov esi, ecx */
  esi = ecx;
/* 6fab9b: je 0x6fabcd */
  if (zf) goto L_6fabcd;
L_6fab9d: /* 6fab9d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6faba0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6faba1: push 0x6c282e */
  { uint32_t v = 0x6c282eu; esp -= 4; W32(esp, v); }
/* 6faba6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6faba9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fabaa: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fabac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fabad: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fabb2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fabb2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fabb5: je 0x6fabc5 */
  if (zf) goto L_6fabc5;
L_6fabb7: /* 6fabb7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fabbd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fabbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fabc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fabc2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fabc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fabc5: /* 6fabc5: mov eax, edi */
  eax = edi;
/* 6fabc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fabc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fabc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fabca: ret 4 */
  esp += 8; SPILL(); return;
L_6fabcd: /* 6fabcd: mov ecx, esi */
  ecx = esi;
/* 6fabcf: call 0x6c282e */
  esp -= 4; W32(esp, 0x6fabd4u); SPILL(); f_6c282e(); if (g_unwind) return; RELOAD();
/* 6fabd4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fabd7: je 0x6fabe6 */
  if (zf) goto L_6fabe6;
L_6fabd9: /* 6fabd9: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fabde: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fabe0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fabe2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fabe3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fabe6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fabe6: /* 6fabe6: mov eax, esi */
  eax = esi;
/* 6fabe8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fabe9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fabea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fac10(void) {
  LOAD_REGS();
L_6fac10: /* 6fac10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fac14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fac15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fac16: mov esi, ecx */
  esi = ecx;
/* 6fac18: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6fac1du); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6fac1d: mov dword ptr [esi], 0x9f7944 */
  W32((uint32_t)(esi), 0x9f7944u);
/* 6fac23: mov eax, esi */
  eax = esi;
/* 6fac25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fac26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fac40(void) {
  LOAD_REGS();
L_6fac40: /* 6fac40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fac44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fac45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fac46: mov esi, ecx */
  esi = ecx;
/* 6fac48: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fac4du); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fac4d: mov eax, esi */
  eax = esi;
/* 6fac4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fac50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fac70(void) {
  LOAD_REGS();
L_6fac70: /* 6fac70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fac71: mov esi, ecx */
  esi = ecx;
/* 6fac73: call 0x6c4787 */
  esp -= 4; W32(esp, 0x6fac78u); SPILL(); f_6c4787(); if (g_unwind) return; RELOAD();
/* 6fac78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fac7d: je 0x6fac8c */
  if (zf) goto L_6fac8c;
L_6fac7f: /* 6fac7f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fac84: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fac86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fac88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fac89: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fac8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fac8c: /* 6fac8c: mov eax, esi */
  eax = esi;
/* 6fac8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fac8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6facb0(void) {
  LOAD_REGS();
L_6facb0: /* 6facb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6facb1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6facb5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6facb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6facb9: mov esi, ecx */
  esi = ecx;
/* 6facbb: je 0x6faced */
  if (zf) goto L_6faced;
L_6facbd: /* 6facbd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6facc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6facc1: push 0x6c4787 */
  { uint32_t v = 0x6c4787u; esp -= 4; W32(esp, v); }
/* 6facc6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6facc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6facca: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6faccc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faccd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6facd2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6facd2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6facd5: je 0x6face5 */
  if (zf) goto L_6face5;
L_6facd7: /* 6facd7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6facdd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6facdf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6face1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6face2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6face5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6face5: /* 6face5: mov eax, edi */
  eax = edi;
/* 6face7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6face8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6face9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6facea: ret 4 */
  esp += 8; SPILL(); return;
L_6faced: /* 6faced: mov ecx, esi */
  ecx = esi;
/* 6facef: call 0x6c4787 */
  esp -= 4; W32(esp, 0x6facf4u); SPILL(); f_6c4787(); if (g_unwind) return; RELOAD();
/* 6facf4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6facf7: je 0x6fad06 */
  if (zf) goto L_6fad06;
L_6facf9: /* 6facf9: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6facfe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fad00: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fad02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fad03: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fad06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fad06: /* 6fad06: mov eax, esi */
  eax = esi;
/* 6fad08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fad09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fad0a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fad30(void) {
  LOAD_REGS();
L_6fad30: /* 6fad30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fad34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fad35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fad36: mov esi, ecx */
  esi = ecx;
/* 6fad38: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6fad3du); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6fad3d: mov dword ptr [esi], 0x9f7960 */
  W32((uint32_t)(esi), 0x9f7960u);
/* 6fad43: mov eax, esi */
  eax = esi;
/* 6fad45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fad46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fad60(void) {
  LOAD_REGS();
L_6fad60: /* 6fad60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fad64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fad65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fad66: mov esi, ecx */
  esi = ecx;
/* 6fad68: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fad6du); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fad6d: mov eax, esi */
  eax = esi;
/* 6fad6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fad70: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fad90(void) {
  LOAD_REGS();
L_6fad90: /* 6fad90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fad91: mov esi, ecx */
  esi = ecx;
/* 6fad93: call 0x6c66ae */
  esp -= 4; W32(esp, 0x6fad98u); SPILL(); f_6c66ae(); if (g_unwind) return; RELOAD();
/* 6fad98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fad9d: je 0x6fadac */
  if (zf) goto L_6fadac;
L_6fad9f: /* 6fad9f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fada4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fada6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fada8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fada9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fadacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fadac: /* 6fadac: mov eax, esi */
  eax = esi;
/* 6fadae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fadaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fadd0(void) {
  LOAD_REGS();
L_6fadd0: /* 6fadd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fadd1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fadd5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fadd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fadd9: mov esi, ecx */
  esi = ecx;
/* 6faddb: je 0x6fae0d */
  if (zf) goto L_6fae0d;
L_6faddd: /* 6faddd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fade0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fade1: push 0x6c66ae */
  { uint32_t v = 0x6c66aeu; esp -= 4; W32(esp, v); }
/* 6fade6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fade9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fadea: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fadec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faded: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fadf2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fadf2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fadf5: je 0x6fae05 */
  if (zf) goto L_6fae05;
L_6fadf7: /* 6fadf7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fadfd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fadff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fae01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fae02: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fae05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fae05: /* 6fae05: mov eax, edi */
  eax = edi;
/* 6fae07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fae08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fae09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fae0a: ret 4 */
  esp += 8; SPILL(); return;
L_6fae0d: /* 6fae0d: mov ecx, esi */
  ecx = esi;
/* 6fae0f: call 0x6c66ae */
  esp -= 4; W32(esp, 0x6fae14u); SPILL(); f_6c66ae(); if (g_unwind) return; RELOAD();
/* 6fae14: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fae17: je 0x6fae26 */
  if (zf) goto L_6fae26;
L_6fae19: /* 6fae19: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fae1e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fae20: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fae22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fae23: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fae26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fae26: /* 6fae26: mov eax, esi */
  eax = esi;
/* 6fae28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fae29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fae2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fae50(void) {
  LOAD_REGS();
L_6fae50: /* 6fae50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fae54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fae55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fae56: mov esi, ecx */
  esi = ecx;
/* 6fae58: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6fae5du); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6fae5d: mov dword ptr [esi], 0x9f797c */
  W32((uint32_t)(esi), 0x9f797cu);
/* 6fae63: mov eax, esi */
  eax = esi;
/* 6fae65: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fae66: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fae80(void) {
  LOAD_REGS();
L_6fae80: /* 6fae80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fae84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fae85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fae86: mov esi, ecx */
  esi = ecx;
/* 6fae88: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fae8du); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fae8d: mov eax, esi */
  eax = esi;
/* 6fae8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fae90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6faeb0(void) {
  LOAD_REGS();
L_6faeb0: /* 6faeb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faeb1: mov esi, ecx */
  esi = ecx;
/* 6faeb3: call 0x6c2e3c */
  esp -= 4; W32(esp, 0x6faeb8u); SPILL(); f_6c2e3c(); if (g_unwind) return; RELOAD();
/* 6faeb8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6faebd: je 0x6faecc */
  if (zf) goto L_6faecc;
L_6faebf: /* 6faebf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6faec4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6faec6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6faec8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faec9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6faeccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6faecc: /* 6faecc: mov eax, esi */
  eax = esi;
/* 6faece: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6faecf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6faef0(void) {
  LOAD_REGS();
L_6faef0: /* 6faef0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6faef1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6faef5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6faef8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faef9: mov esi, ecx */
  esi = ecx;
/* 6faefb: je 0x6faf2d */
  if (zf) goto L_6faf2d;
L_6faefd: /* 6faefd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6faf00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6faf01: push 0x6c2e3c */
  { uint32_t v = 0x6c2e3cu; esp -= 4; W32(esp, v); }
/* 6faf06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6faf09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6faf0a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6faf0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faf0d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6faf12u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6faf12: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6faf15: je 0x6faf25 */
  if (zf) goto L_6faf25;
L_6faf17: /* 6faf17: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6faf1d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6faf1f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6faf21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6faf22: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6faf25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6faf25: /* 6faf25: mov eax, edi */
  eax = edi;
/* 6faf27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6faf28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6faf29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6faf2a: ret 4 */
  esp += 8; SPILL(); return;
L_6faf2d: /* 6faf2d: mov ecx, esi */
  ecx = esi;
/* 6faf2f: call 0x6c2e3c */
  esp -= 4; W32(esp, 0x6faf34u); SPILL(); f_6c2e3c(); if (g_unwind) return; RELOAD();
/* 6faf34: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6faf37: je 0x6faf46 */
  if (zf) goto L_6faf46;
L_6faf39: /* 6faf39: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6faf3e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6faf40: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6faf42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faf43: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6faf46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6faf46: /* 6faf46: mov eax, esi */
  eax = esi;
/* 6faf48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6faf49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6faf4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6faf70(void) {
  LOAD_REGS();
L_6faf70: /* 6faf70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6faf74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6faf75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6faf76: mov esi, ecx */
  esi = ecx;
/* 6faf78: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6faf7du); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6faf7d: mov dword ptr [esi], 0x9f7998 */
  W32((uint32_t)(esi), 0x9f7998u);
/* 6faf83: mov eax, esi */
  eax = esi;
/* 6faf85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6faf86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fafa0(void) {
  LOAD_REGS();
L_6fafa0: /* 6fafa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fafa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fafa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fafa6: mov esi, ecx */
  esi = ecx;
/* 6fafa8: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fafadu); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fafad: mov eax, esi */
  eax = esi;
/* 6fafaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fafb0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fafd0(void) {
  LOAD_REGS();
L_6fafd0: /* 6fafd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fafd1: mov esi, ecx */
  esi = ecx;
/* 6fafd3: call 0x6cae25 */
  esp -= 4; W32(esp, 0x6fafd8u); SPILL(); f_6cae25(); if (g_unwind) return; RELOAD();
/* 6fafd8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fafdd: je 0x6fafec */
  if (zf) goto L_6fafec;
L_6fafdf: /* 6fafdf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fafe4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fafe6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fafe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fafe9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fafecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fafec: /* 6fafec: mov eax, esi */
  eax = esi;
/* 6fafee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fafef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb010(void) {
  LOAD_REGS();
L_6fb010: /* 6fb010: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fb011: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fb015: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb018: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb019: mov esi, ecx */
  esi = ecx;
/* 6fb01b: je 0x6fb04d */
  if (zf) goto L_6fb04d;
L_6fb01d: /* 6fb01d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fb020: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb021: push 0x6cae25 */
  { uint32_t v = 0x6cae25u; esp -= 4; W32(esp, v); }
/* 6fb026: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fb029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb02a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fb02c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb02d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fb032u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fb032: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb035: je 0x6fb045 */
  if (zf) goto L_6fb045;
L_6fb037: /* 6fb037: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fb03d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fb03f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb041: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb042: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb045u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb045: /* 6fb045: mov eax, edi */
  eax = edi;
/* 6fb047: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fb048: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb049: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb04a: ret 4 */
  esp += 8; SPILL(); return;
L_6fb04d: /* 6fb04d: mov ecx, esi */
  ecx = esi;
/* 6fb04f: call 0x6cae25 */
  esp -= 4; W32(esp, 0x6fb054u); SPILL(); f_6cae25(); if (g_unwind) return; RELOAD();
/* 6fb054: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb057: je 0x6fb066 */
  if (zf) goto L_6fb066;
L_6fb059: /* 6fb059: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb05e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb060: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb062: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb063: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb066u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb066: /* 6fb066: mov eax, esi */
  eax = esi;
/* 6fb068: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb069: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb06a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb090(void) {
  LOAD_REGS();
L_6fb090: /* 6fb090: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fb094: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb096: mov esi, ecx */
  esi = ecx;
/* 6fb098: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6fb09du); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6fb09d: mov dword ptr [esi], 0x9f79b4 */
  W32((uint32_t)(esi), 0x9f79b4u);
/* 6fb0a3: mov eax, esi */
  eax = esi;
/* 6fb0a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb0a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb0c0(void) {
  LOAD_REGS();
L_6fb0c0: /* 6fb0c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fb0c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb0c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb0c6: mov esi, ecx */
  esi = ecx;
/* 6fb0c8: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fb0cdu); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fb0cd: mov eax, esi */
  eax = esi;
/* 6fb0cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb0d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb0f0(void) {
  LOAD_REGS();
L_6fb0f0: /* 6fb0f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb0f1: mov esi, ecx */
  esi = ecx;
/* 6fb0f3: call 0x6cbcbc */
  esp -= 4; W32(esp, 0x6fb0f8u); SPILL(); f_6cbcbc(); if (g_unwind) return; RELOAD();
/* 6fb0f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb0fd: je 0x6fb10c */
  if (zf) goto L_6fb10c;
L_6fb0ff: /* 6fb0ff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb104: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb106: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb108: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb109: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb10cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb10c: /* 6fb10c: mov eax, esi */
  eax = esi;
/* 6fb10e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb10f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb130(void) {
  LOAD_REGS();
L_6fb130: /* 6fb130: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fb131: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fb135: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb138: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb139: mov esi, ecx */
  esi = ecx;
/* 6fb13b: je 0x6fb16d */
  if (zf) goto L_6fb16d;
L_6fb13d: /* 6fb13d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fb140: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb141: push 0x6cbcbc */
  { uint32_t v = 0x6cbcbcu; esp -= 4; W32(esp, v); }
/* 6fb146: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fb149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb14a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fb14c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb14d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fb152u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fb152: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb155: je 0x6fb165 */
  if (zf) goto L_6fb165;
L_6fb157: /* 6fb157: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fb15d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fb15f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb161: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb162: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb165u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb165: /* 6fb165: mov eax, edi */
  eax = edi;
/* 6fb167: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fb168: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb169: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb16a: ret 4 */
  esp += 8; SPILL(); return;
L_6fb16d: /* 6fb16d: mov ecx, esi */
  ecx = esi;
/* 6fb16f: call 0x6cbcbc */
  esp -= 4; W32(esp, 0x6fb174u); SPILL(); f_6cbcbc(); if (g_unwind) return; RELOAD();
/* 6fb174: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb177: je 0x6fb186 */
  if (zf) goto L_6fb186;
L_6fb179: /* 6fb179: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb17e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb180: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb182: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb183: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb186u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb186: /* 6fb186: mov eax, esi */
  eax = esi;
/* 6fb188: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb189: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb18a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb1b0(void) {
  LOAD_REGS();
L_6fb1b0: /* 6fb1b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fb1b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb1b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb1b6: mov esi, ecx */
  esi = ecx;
/* 6fb1b8: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6fb1bdu); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6fb1bd: mov dword ptr [esi], 0x9f79d0 */
  W32((uint32_t)(esi), 0x9f79d0u);
/* 6fb1c3: mov eax, esi */
  eax = esi;
/* 6fb1c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb1c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb1e0(void) {
  LOAD_REGS();
L_6fb1e0: /* 6fb1e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fb1e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb1e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb1e6: mov esi, ecx */
  esi = ecx;
/* 6fb1e8: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fb1edu); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fb1ed: mov eax, esi */
  eax = esi;
/* 6fb1ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb1f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb210(void) {
  LOAD_REGS();
L_6fb210: /* 6fb210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb211: mov esi, ecx */
  esi = ecx;
/* 6fb213: call 0x6c515a */
  esp -= 4; W32(esp, 0x6fb218u); SPILL(); f_6c515a(); if (g_unwind) return; RELOAD();
/* 6fb218: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb21d: je 0x6fb22c */
  if (zf) goto L_6fb22c;
L_6fb21f: /* 6fb21f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb224: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb226: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb228: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb229: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb22cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb22c: /* 6fb22c: mov eax, esi */
  eax = esi;
/* 6fb22e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb22f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb250(void) {
  LOAD_REGS();
L_6fb250: /* 6fb250: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fb251: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fb255: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb258: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb259: mov esi, ecx */
  esi = ecx;
/* 6fb25b: je 0x6fb28d */
  if (zf) goto L_6fb28d;
L_6fb25d: /* 6fb25d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fb260: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb261: push 0x6c515a */
  { uint32_t v = 0x6c515au; esp -= 4; W32(esp, v); }
/* 6fb266: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fb269: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb26a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fb26c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb26d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fb272u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fb272: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb275: je 0x6fb285 */
  if (zf) goto L_6fb285;
L_6fb277: /* 6fb277: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fb27d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fb27f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb281: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb282: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb285u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb285: /* 6fb285: mov eax, edi */
  eax = edi;
/* 6fb287: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fb288: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb289: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb28a: ret 4 */
  esp += 8; SPILL(); return;
L_6fb28d: /* 6fb28d: mov ecx, esi */
  ecx = esi;
/* 6fb28f: call 0x6c515a */
  esp -= 4; W32(esp, 0x6fb294u); SPILL(); f_6c515a(); if (g_unwind) return; RELOAD();
/* 6fb294: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb297: je 0x6fb2a6 */
  if (zf) goto L_6fb2a6;
L_6fb299: /* 6fb299: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb29e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb2a0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb2a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb2a3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb2a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb2a6: /* 6fb2a6: mov eax, esi */
  eax = esi;
/* 6fb2a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb2a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb2aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb2d0(void) {
  LOAD_REGS();
L_6fb2d0: /* 6fb2d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fb2d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb2d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb2d6: mov esi, ecx */
  esi = ecx;
/* 6fb2d8: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6fb2ddu); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6fb2dd: mov dword ptr [esi], 0x9f79ec */
  W32((uint32_t)(esi), 0x9f79ecu);
/* 6fb2e3: mov eax, esi */
  eax = esi;
/* 6fb2e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb2e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb300(void) {
  LOAD_REGS();
L_6fb300: /* 6fb300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fb304: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb306: mov esi, ecx */
  esi = ecx;
/* 6fb308: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fb30du); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fb30d: mov eax, esi */
  eax = esi;
/* 6fb30f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb310: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb330(void) {
  LOAD_REGS();
L_6fb330: /* 6fb330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb331: mov esi, ecx */
  esi = ecx;
/* 6fb333: call 0x6caad3 */
  esp -= 4; W32(esp, 0x6fb338u); SPILL(); f_6caad3(); if (g_unwind) return; RELOAD();
/* 6fb338: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb33d: je 0x6fb34c */
  if (zf) goto L_6fb34c;
L_6fb33f: /* 6fb33f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb344: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb346: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb348: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb349: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb34cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb34c: /* 6fb34c: mov eax, esi */
  eax = esi;
/* 6fb34e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb34f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb370(void) {
  LOAD_REGS();
L_6fb370: /* 6fb370: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fb371: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fb375: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb378: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb379: mov esi, ecx */
  esi = ecx;
/* 6fb37b: je 0x6fb3ad */
  if (zf) goto L_6fb3ad;
L_6fb37d: /* 6fb37d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fb380: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb381: push 0x6caad3 */
  { uint32_t v = 0x6caad3u; esp -= 4; W32(esp, v); }
/* 6fb386: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fb389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb38a: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fb38c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb38d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fb392u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fb392: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb395: je 0x6fb3a5 */
  if (zf) goto L_6fb3a5;
L_6fb397: /* 6fb397: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fb39d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fb39f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb3a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb3a2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb3a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb3a5: /* 6fb3a5: mov eax, edi */
  eax = edi;
/* 6fb3a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fb3a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb3a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb3aa: ret 4 */
  esp += 8; SPILL(); return;
L_6fb3ad: /* 6fb3ad: mov ecx, esi */
  ecx = esi;
/* 6fb3af: call 0x6caad3 */
  esp -= 4; W32(esp, 0x6fb3b4u); SPILL(); f_6caad3(); if (g_unwind) return; RELOAD();
/* 6fb3b4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb3b7: je 0x6fb3c6 */
  if (zf) goto L_6fb3c6;
L_6fb3b9: /* 6fb3b9: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb3be: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb3c0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb3c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb3c3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb3c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb3c6: /* 6fb3c6: mov eax, esi */
  eax = esi;
/* 6fb3c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb3c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb3ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb3f0(void) {
  LOAD_REGS();
L_6fb3f0: /* 6fb3f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fb3f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb3f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb3f6: mov esi, ecx */
  esi = ecx;
/* 6fb3f8: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x6fb3fdu); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
/* 6fb3fd: mov dword ptr [esi], 0x9f7a08 */
  W32((uint32_t)(esi), 0x9f7a08u);
/* 6fb403: mov eax, esi */
  eax = esi;
/* 6fb405: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb406: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb420(void) {
  LOAD_REGS();
L_6fb420: /* 6fb420: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fb424: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb425: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb426: mov esi, ecx */
  esi = ecx;
/* 6fb428: call 0x6cbd43 */
  esp -= 4; W32(esp, 0x6fb42du); SPILL(); f_6cbd43(); if (g_unwind) return; RELOAD();
/* 6fb42d: mov eax, esi */
  eax = esi;
/* 6fb42f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb430: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb450(void) {
  LOAD_REGS();
L_6fb450: /* 6fb450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb451: mov esi, ecx */
  esi = ecx;
/* 6fb453: call 0x6c1e5b */
  esp -= 4; W32(esp, 0x6fb458u); SPILL(); f_6c1e5b(); if (g_unwind) return; RELOAD();
/* 6fb458: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb45d: je 0x6fb46c */
  if (zf) goto L_6fb46c;
L_6fb45f: /* 6fb45f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb464: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb466: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb469: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb46cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb46c: /* 6fb46c: mov eax, esi */
  eax = esi;
/* 6fb46e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb46f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb490(void) {
  LOAD_REGS();
L_6fb490: /* 6fb490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fb491: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fb495: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb498: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb499: mov esi, ecx */
  esi = ecx;
/* 6fb49b: je 0x6fb4cd */
  if (zf) goto L_6fb4cd;
L_6fb49d: /* 6fb49d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fb4a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb4a1: push 0x6c1e5b */
  { uint32_t v = 0x6c1e5bu; esp -= 4; W32(esp, v); }
/* 6fb4a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fb4a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb4aa: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fb4ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb4ad: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fb4b2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fb4b2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb4b5: je 0x6fb4c5 */
  if (zf) goto L_6fb4c5;
L_6fb4b7: /* 6fb4b7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fb4bd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fb4bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb4c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb4c2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb4c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb4c5: /* 6fb4c5: mov eax, edi */
  eax = edi;
/* 6fb4c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fb4c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb4c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb4ca: ret 4 */
  esp += 8; SPILL(); return;
L_6fb4cd: /* 6fb4cd: mov ecx, esi */
  ecx = esi;
/* 6fb4cf: call 0x6c1e5b */
  esp -= 4; W32(esp, 0x6fb4d4u); SPILL(); f_6c1e5b(); if (g_unwind) return; RELOAD();
/* 6fb4d4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb4d7: je 0x6fb4e6 */
  if (zf) goto L_6fb4e6;
L_6fb4d9: /* 6fb4d9: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb4de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb4e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb4e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb4e3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb4e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb4e6: /* 6fb4e6: mov eax, esi */
  eax = esi;
/* 6fb4e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb4e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb4ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb510(void) {
  LOAD_REGS();
L_6fb510: /* 6fb510: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fb513: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb515: je 0x6fb51e */
  if (zf) goto L_6fb51e;
L_6fb517: /* 6fb517: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6fb51a: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 6fb51d: ret  */
  esp += 4; SPILL(); return;
L_6fb51e: /* 6fb51e: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* 6fb521: ret  */
  esp += 4; SPILL(); return;
}

void f_6fb540(void) {
  LOAD_REGS();
L_6fb540: /* 6fb540: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fb543: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb545: je 0x6fb54e */
  if (zf) goto L_6fb54e;
L_6fb547: /* 6fb547: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6fb54a: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 6fb54d: ret  */
  esp += 4; SPILL(); return;
L_6fb54e: /* 6fb54e: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 6fb554: ret  */
  esp += 4; SPILL(); return;
}

void f_6fb570(void) {
  LOAD_REGS();
L_6fb570: /* 6fb570: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fb573: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb575: je 0x6fb57e */
  if (zf) goto L_6fb57e;
L_6fb577: /* 6fb577: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6fb57a: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* 6fb57d: ret  */
  esp += 4; SPILL(); return;
L_6fb57e: /* 6fb57e: mov eax, dword ptr [ecx + 0x84] */
  eax = R32((uint32_t)(ecx + 0x84u));
/* 6fb584: ret  */
  esp += 4; SPILL(); return;
}

void f_6fb5a0(void) {
  LOAD_REGS();
L_6fb5a0: /* 6fb5a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fb5a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb5a5: je 0x6fb5ae */
  if (zf) goto L_6fb5ae;
L_6fb5a7: /* 6fb5a7: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6fb5aa: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 6fb5ad: ret  */
  esp += 4; SPILL(); return;
L_6fb5ae: /* 6fb5ae: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 6fb5b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6fb5d0(void) {
  LOAD_REGS();
L_6fb5d0: /* 6fb5d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fb5d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb5d5: je 0x6fb5de */
  if (zf) goto L_6fb5de;
L_6fb5d7: /* 6fb5d7: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6fb5da: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 6fb5dd: ret  */
  esp += 4; SPILL(); return;
L_6fb5de: /* 6fb5de: mov eax, dword ptr [ecx + 0x8c] */
  eax = R32((uint32_t)(ecx + 0x8cu));
/* 6fb5e4: ret  */
  esp += 4; SPILL(); return;
}

void f_6fb600(void) {
  LOAD_REGS();
L_6fb600: /* 6fb600: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fb603: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb605: je 0x6fb614 */
  if (zf) goto L_6fb614;
L_6fb607: /* 6fb607: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6fb60a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fb60e: mov dword ptr [eax + 0x54], ecx */
  W32((uint32_t)(eax + 0x54u), ecx);
/* 6fb611: ret 4 */
  esp += 8; SPILL(); return;
L_6fb614: /* 6fb614: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fb618: mov dword ptr [ecx + 0x7c], edx */
  W32((uint32_t)(ecx + 0x7cu), edx);
/* 6fb61b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb630(void) {
  LOAD_REGS();
L_6fb630: /* 6fb630: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fb633: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb635: je 0x6fb644 */
  if (zf) goto L_6fb644;
L_6fb637: /* 6fb637: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6fb63a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fb63e: mov dword ptr [eax + 0x58], ecx */
  W32((uint32_t)(eax + 0x58u), ecx);
/* 6fb641: ret 4 */
  esp += 8; SPILL(); return;
L_6fb644: /* 6fb644: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fb648: mov dword ptr [ecx + 0x80], edx */
  W32((uint32_t)(ecx + 0x80u), edx);
/* 6fb64e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb670(void) {
  LOAD_REGS();
L_6fb670: /* 6fb670: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fb673: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb675: je 0x6fb684 */
  if (zf) goto L_6fb684;
L_6fb677: /* 6fb677: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6fb67a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fb67e: mov dword ptr [eax + 0x5c], ecx */
  W32((uint32_t)(eax + 0x5cu), ecx);
/* 6fb681: ret 4 */
  esp += 8; SPILL(); return;
L_6fb684: /* 6fb684: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fb688: mov dword ptr [ecx + 0x84], edx */
  W32((uint32_t)(ecx + 0x84u), edx);
/* 6fb68e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb6b0(void) {
  LOAD_REGS();
L_6fb6b0: /* 6fb6b0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fb6b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb6b5: je 0x6fb6c4 */
  if (zf) goto L_6fb6c4;
L_6fb6b7: /* 6fb6b7: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6fb6ba: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fb6be: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
/* 6fb6c1: ret 4 */
  esp += 8; SPILL(); return;
L_6fb6c4: /* 6fb6c4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fb6c8: mov dword ptr [ecx + 0x88], edx */
  W32((uint32_t)(ecx + 0x88u), edx);
/* 6fb6ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb6f0(void) {
  LOAD_REGS();
L_6fb6f0: /* 6fb6f0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fb6f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb6f5: je 0x6fb704 */
  if (zf) goto L_6fb704;
L_6fb6f7: /* 6fb6f7: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6fb6fa: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fb6fe: mov dword ptr [eax + 0x64], ecx */
  W32((uint32_t)(eax + 0x64u), ecx);
/* 6fb701: ret 4 */
  esp += 8; SPILL(); return;
L_6fb704: /* 6fb704: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fb708: mov dword ptr [ecx + 0x8c], edx */
  W32((uint32_t)(ecx + 0x8cu), edx);
/* 6fb70e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb730(void) {
  LOAD_REGS();
L_6fb730: /* 6fb730: mov eax, dword ptr [ecx + 0x78] */
  eax = R32((uint32_t)(ecx + 0x78u));
/* 6fb733: ret  */
  esp += 4; SPILL(); return;
}

void f_6fb750(void) {
  LOAD_REGS();
L_6fb750: /* 6fb750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb751: mov esi, ecx */
  esi = ecx;
/* 6fb753: call 0x6c5bcd */
  esp -= 4; W32(esp, 0x6fb758u); SPILL(); f_6c5bcd(); if (g_unwind) return; RELOAD();
/* 6fb758: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb75d: je 0x6fb76c */
  if (zf) goto L_6fb76c;
L_6fb75f: /* 6fb75f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb764: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb766: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb768: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb769: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb76cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb76c: /* 6fb76c: mov eax, esi */
  eax = esi;
/* 6fb76e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb76f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb790(void) {
  LOAD_REGS();
L_6fb790: /* 6fb790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fb791: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fb795: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb799: mov esi, ecx */
  esi = ecx;
/* 6fb79b: je 0x6fb7d0 */
  if (zf) goto L_6fb7d0;
L_6fb79d: /* 6fb79d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fb7a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb7a1: push 0x6c5bcd */
  { uint32_t v = 0x6c5bcdu; esp -= 4; W32(esp, v); }
/* 6fb7a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fb7a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb7aa: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* 6fb7af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb7b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fb7b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fb7b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb7b8: je 0x6fb7c8 */
  if (zf) goto L_6fb7c8;
L_6fb7ba: /* 6fb7ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fb7c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fb7c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb7c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb7c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb7c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb7c8: /* 6fb7c8: mov eax, edi */
  eax = edi;
/* 6fb7ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fb7cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb7cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb7cd: ret 4 */
  esp += 8; SPILL(); return;
L_6fb7d0: /* 6fb7d0: mov ecx, esi */
  ecx = esi;
/* 6fb7d2: call 0x6c5bcd */
  esp -= 4; W32(esp, 0x6fb7d7u); SPILL(); f_6c5bcd(); if (g_unwind) return; RELOAD();
/* 6fb7d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb7da: je 0x6fb7e9 */
  if (zf) goto L_6fb7e9;
L_6fb7dc: /* 6fb7dc: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fb7e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fb7e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fb7e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb7e6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fb7e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fb7e9: /* 6fb7e9: mov eax, esi */
  eax = esi;
/* 6fb7eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb7ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb7ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb810(void) {
  LOAD_REGS();
L_6fb810: /* 6fb810: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6fb813: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fb814: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 6fb818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb819: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6fb81f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb820: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 6fb824: lea eax, [ebx + 8] */
  eax = (uint32_t)(ebx + 0x8u);
/* 6fb827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb828: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 6fb82b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fb82c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fb82d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb82e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb830u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb830: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb834: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb836u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb836: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb83a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb83cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb83c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb83f: mov ecx, edi */
  ecx = edi;
/* 6fb841: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x6fb847u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 6fb847: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fb849: je 0x6fb885 */
  if (zf) goto L_6fb885;
L_6fb84b: /* 6fb84b: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 6fb84f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fb850: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 6fb854: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb855: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 6fb859: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fb85a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb85b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb85du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb85d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb861: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb863u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb863: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb866: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb867: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb869: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 6fb86d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 6fb871: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 6fb875: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb878: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 6fb87b: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 6fb87d: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 6fb880: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 6fb883: jmp 0x6fb8bd */
  goto L_6fb8bd;
L_6fb885: /* 6fb885: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 6fb888: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 6fb88a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 6fb88d: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 6fb890: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 6fb894: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 6fb898: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fb899: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 6fb89d: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 6fb8a1: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6fb8a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb8a6: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 6fb8aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fb8ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb8ac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb8aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb8ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb8b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb8b2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb8b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb8b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb8b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb8b8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb8bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb8ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fb8bd: /* 6fb8bd: mov ecx, edi */
  ecx = edi;
/* 6fb8bf: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x6fb8c5u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 6fb8c5: cmp eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fb8c8: jge 0x6fb8e0 */
  if ((sf == of)) goto L_6fb8e0;
L_6fb8ca: /* 6fb8ca: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 6fb8ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fb8cf: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 6fb8d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb8d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb8d5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb8d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb8d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb8da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb8db: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb8ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb8dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fb8e0: /* 6fb8e0: mov ecx, edi */
  ecx = edi;
/* 6fb8e2: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x6fb8e8u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 6fb8e8: cmp eax, 0x6f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6fb8eb: jne 0x6fb91f */
  if (!zf) goto L_6fb91f;
L_6fb8ed: /* 6fb8ed: mov esi, dword ptr [0xcfa1b8] */
  esi = R32((uint32_t)(0xcfa1b8u));
/* 6fb8f3: lea ecx, [esp + 0x23] */
  ecx = (uint32_t)(esp + 0x23u);
/* 6fb8f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fb8f8: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 6fb8fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fb8fd: lea eax, [esp + 0x29] */
  eax = (uint32_t)(esp + 0x29u);
/* 6fb901: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb902: lea ecx, [esp + 0x2e] */
  ecx = (uint32_t)(esp + 0x2eu);
/* 6fb906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fb907: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb908: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb90au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb90a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb90d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb90e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb910u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb910: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb913: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb914: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb916u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb916: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fb91a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fb91cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fb91c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fb91f: /* 6fb91f: mov eax, edi */
  eax = edi;
/* 6fb921: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fb922: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb923: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fb924: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fb927: ret  */
  esp += 4; SPILL(); return;
}

void f_6fb980(void) {
  LOAD_REGS();
L_6fb980: /* 6fb980: mov eax, ecx */
  eax = ecx;
/* 6fb982: ret  */
  esp += 4; SPILL(); return;
}

void f_6fb9a0(void) {
  LOAD_REGS();
L_6fb9a0: /* 6fb9a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fb9a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6fb9a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fb9a6: mov eax, ecx */
  eax = ecx;
/* 6fb9a8: mov ecx, 6 */
  ecx = 0x6u;
/* 6fb9ad: mov edi, eax */
  edi = eax;
/* 6fb9af: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6fb9b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fb9b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fb9b3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fb9d0(void) {
  LOAD_REGS();
L_6fb9d0: /* 6fb9d0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 6fb9d3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fb9d6: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fb9d9: ret  */
  esp += 4; SPILL(); return;
}

void f_6fb9f0(void) {
  LOAD_REGS();
L_6fb9f0: /* 6fb9f0: mov eax, 0x18 */
  eax = 0x18u;
/* 6fb9f5: ret  */
  esp += 4; SPILL(); return;
}

void f_6fba10(void) {
  LOAD_REGS();
L_6fba10: /* 6fba10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fba14: mov ecx, 1 */
  ecx = 0x1u;
/* 6fba19: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6fba1b: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 6fba22: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6fba25: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6fba28: mov eax, 2 */
  eax = 0x2u;
/* 6fba2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fba40(void) {
  LOAD_REGS();
L_6fba40: /* 6fba40: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 6fba43: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 6fba46: ret  */
  esp += 4; SPILL(); return;
}

void f_6fba60(void) {
  LOAD_REGS();
L_6fba60: /* 6fba60: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 6fba63: ret  */
  esp += 4; SPILL(); return;
}

void f_6fba80(void) {
  LOAD_REGS();
L_6fba80: /* 6fba80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fba84: mov dword ptr [eax], 4 */
  W32((uint32_t)(eax), 0x4u);
/* 6fba8a: mov dword ptr [eax + 4], 3 */
  W32((uint32_t)(eax + 0x4u), 0x3u);
/* 6fba91: mov eax, 1 */
  eax = 0x1u;
/* 6fba96: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fbab0(void) {
  LOAD_REGS();
L_6fbab0: /* 6fbab0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fbab4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fbab8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbab9: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6fbabf: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 6fbac2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbac4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbac5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbac7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbac7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbaca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbacb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbacdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbacd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbad0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbad1: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbaf0(void) {
  LOAD_REGS();
L_6fbaf0: /* 6fbaf0: mov eax, ecx */
  eax = ecx;
/* 6fbaf2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fbaf6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fbaf8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 6fbafa: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 6fbafd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6fbb00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fbb20(void) {
  LOAD_REGS();
L_6fbb20: /* 6fbb20: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 6fbb23: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fbb26: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbb40(void) {
  LOAD_REGS();
L_6fbb40: /* 6fbb40: mov eax, 8 */
  eax = 0x8u;
/* 6fbb45: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbb60(void) {
  LOAD_REGS();
L_6fbb60: /* 6fbb60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fbb64: mov dword ptr [eax], 2 */
  W32((uint32_t)(eax), 0x2u);
/* 6fbb6a: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 6fbb6d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6fbb70: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6fbb73: mov eax, 1 */
  eax = 0x1u;
/* 6fbb78: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fbb90(void) {
  LOAD_REGS();
L_6fbb90: /* 6fbb90: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 6fbb93: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 6fbb96: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbbb0(void) {
  LOAD_REGS();
L_6fbbb0: /* 6fbbb0: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 6fbbb3: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbbd0(void) {
  LOAD_REGS();
L_6fbbd0: /* 6fbbd0: mov eax, ecx */
  eax = ecx;
/* 6fbbd2: xor ecx, ecx */
  ecx = 0;
/* 6fbbd4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6fbbd6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6fbbd9: mov word ptr [eax + 0x10], cx */
  W16((uint32_t)(eax + 0x10u), (ecx & 0xffffu));
/* 6fbbdd: mov word ptr [eax + 0xe], cx */
  W16((uint32_t)(eax + 0xeu), (ecx & 0xffffu));
/* 6fbbe1: mov word ptr [eax + 8], cx */
  W16((uint32_t)(eax + 0x8u), (ecx & 0xffffu));
/* 6fbbe5: mov ecx, 0xffff */
  ecx = 0xffffu;
/* 6fbbea: mov word ptr [eax + 0xc], cx */
  W16((uint32_t)(eax + 0xcu), (ecx & 0xffffu));
/* 6fbbee: mov word ptr [eax + 0xa], cx */
  W16((uint32_t)(eax + 0xau), (ecx & 0xffffu));
/* 6fbbf2: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbc10(void) {
  LOAD_REGS();
L_6fbc10: /* 6fbc10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbc11: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6fbc15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fbc16: mov eax, ecx */
  eax = ecx;
/* 6fbc18: mov ecx, 5 */
  ecx = 0x5u;
/* 6fbc1d: mov edi, eax */
  edi = eax;
/* 6fbc1f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6fbc21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fbc22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbc23: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fbc40(void) {
  LOAD_REGS();
L_6fbc40: /* 6fbc40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fbc41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbc42: mov ebx, ecx */
  ebx = ecx;
/* 6fbc44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fbc45: mov esi, ebx */
  esi = ebx;
/* 6fbc47: mov edi, 3 */
  edi = 0x3u;
/* 6fbc4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_6fbc50: /* 6fbc50: mov ecx, esi */
  ecx = esi;
/* 6fbc52: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x6fbc58u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 6fbc58: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6fbc5b: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 6fbc5c: jne 0x6fbc50 */
  if (!zf) goto L_6fbc50;
L_6fbc5e: /* 6fbc5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fbc5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbc60: mov eax, ebx */
  eax = ebx;
/* 6fbc62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fbc63: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbc80(void) {
  LOAD_REGS();
L_6fbc80: /* 6fbc80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbc81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6fbc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fbc86: mov eax, ecx */
  eax = ecx;
/* 6fbc88: mov ecx, 0x41 */
  ecx = 0x41u;
/* 6fbc8d: mov edi, eax */
  edi = eax;
/* 6fbc8f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6fbc91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fbc92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbc93: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fbcb0(void) {
  LOAD_REGS();
L_6fbcb0: /* 6fbcb0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fbcb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbcb5: mov esi, dword ptr [0xcfa354] */
  esi = R32((uint32_t)(0xcfa354u));
/* 6fbcbb: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 6fbcbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbcbf: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 6fbcc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbcc3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6fbcc7: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 6fbcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbccc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbccd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbccfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbccf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbcd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbcd3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbcd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbcd5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbcd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbcd9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbcdbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbcdb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbcde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbcdf: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x6fbce5u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 6fbce5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbce8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbce9: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbd00(void) {
  LOAD_REGS();
L_6fbd00: /* 6fbd00: mov eax, ecx */
  eax = ecx;
/* 6fbd02: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fbd06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbd07: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6fbd09: mov edx, eax */
  edx = eax;
/* 6fbd0b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6fbd0d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6fbd10: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6fbd13: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 6fbd16: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 6fbd19: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6fbd1c: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 6fbd1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbd20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fbd40(void) {
  LOAD_REGS();
L_6fbd40: /* 6fbd40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fbd44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbd45: mov esi, dword ptr [0xcfa354] */
  esi = R32((uint32_t)(0xcfa354u));
/* 6fbd4b: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 6fbd4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbd4f: lea edx, [eax + 6] */
  edx = (uint32_t)(eax + 0x6u);
/* 6fbd52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbd53: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 6fbd56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbd57: lea edx, [eax + 2] */
  edx = (uint32_t)(eax + 0x2u);
/* 6fbd5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbd5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbd5c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 6fbd60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbd61: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbd63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbd63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbd66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbd67: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbd69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbd69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbd6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbd6d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbd6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbd6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbd72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbd73: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbd75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbd75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbd78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbd79: call dword ptr [0xcfa368] */
  esp -= 4; W32(esp, 0x6fbd7fu); SPILL(); f_4e3f12(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVCBox@@@Z */ RELOAD();
/* 6fbd7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbd82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbd83: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbdb0(void) {
  LOAD_REGS();
L_6fbdb0: /* 6fbdb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbdb1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6fbdb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fbdb6: mov eax, ecx */
  eax = ecx;
/* 6fbdb8: mov ecx, 5 */
  ecx = 0x5u;
/* 6fbdbd: mov edi, eax */
  edi = eax;
/* 6fbdbf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6fbdc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fbdc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbdc3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fbde0(void) {
  LOAD_REGS();
L_6fbde0: /* 6fbde0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fbde1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fbde2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbde3: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6fbde9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fbdea: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 6fbdee: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 6fbdf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbdf2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 6fbdf6: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 6fbdf9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbdfa: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 6fbdfd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbdfe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fbdff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe00: lea ebx, [edi + 0x10] */
  ebx = (uint32_t)(edi + 0x10u);
/* 6fbe03: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe05: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe09: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe0f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe15: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe1a: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 6fbe1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbe1e: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 6fbe21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbe22: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 6fbe25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbe26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fbe27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe28: lea ebp, [edi + 0x20] */
  ebp = (uint32_t)(edi + 0x20u);
/* 6fbe2b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe31: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe37: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe3d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe3f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe42: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 6fbe45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbe46: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 6fbe49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbe4a: lea edx, [ebp + 4] */
  edx = (uint32_t)(ebp + 0x4u);
/* 6fbe4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbe4e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fbe4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe50: lea ebx, [edi + 0x30] */
  ebx = (uint32_t)(edi + 0x30u);
/* 6fbe53: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe59: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe5f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe65: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe6a: lea ecx, [edi + 0x4c] */
  ecx = (uint32_t)(edi + 0x4cu);
/* 6fbe6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbe6e: lea edx, [edi + 0x48] */
  edx = (uint32_t)(edi + 0x48u);
/* 6fbe71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbe72: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 6fbe75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbe76: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6fbe79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fbe7a: lea edx, [ebx + 0xc] */
  edx = (uint32_t)(ebx + 0xcu);
/* 6fbe7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbe7e: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 6fbe81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fbe82: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 6fbe85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fbe86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fbe87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe88: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe8e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe94: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbe99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbe9a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbe9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbe9c: mov esi, dword ptr [0xcfa1f0] */
  esi = R32((uint32_t)(0xcfa1f0u));
/* 6fbea2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbea5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbea6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbea8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbea8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbeab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbeac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbeaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbeae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbeb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbeb2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbeb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbeb4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbeb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fbeb8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fbebau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fbeba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fbebd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fbebe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbebf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fbec0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fbec1: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbf10(void) {
  LOAD_REGS();
L_6fbf10: /* 6fbf10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fbf11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbf12: mov ebx, ecx */
  ebx = ecx;
/* 6fbf14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fbf15: lea esi, [ebx + 0x10] */
  esi = (uint32_t)(ebx + 0x10u);
/* 6fbf18: mov edi, 3 */
  edi = 0x3u;
/* 6fbf1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_6fbf20: /* 6fbf20: mov ecx, esi */
  ecx = esi;
/* 6fbf22: call dword ptr [0xcfa36c] */
  esp -= 4; W32(esp, 0x6fbf28u); SPILL(); f_4e159b(); if (g_unwind) return; /* Core!??0FPlane@@QAE@XZ */ RELOAD();
/* 6fbf28: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6fbf2b: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 6fbf2c: jne 0x6fbf20 */
  if (!zf) goto L_6fbf20;
L_6fbf2e: /* 6fbf2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fbf2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbf30: mov eax, ebx */
  eax = ebx;
/* 6fbf32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fbf33: ret  */
  esp += 4; SPILL(); return;
}

void f_6fbf50(void) {
  LOAD_REGS();
L_6fbf50: /* 6fbf50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fbf51: mov eax, ecx */
  eax = ecx;
/* 6fbf53: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6fbf57: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fbf58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fbf59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fbf5a: mov edx, ecx */
  edx = ecx;
/* 6fbf5c: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 6fbf5e: mov esi, eax */
  esi = eax;
/* 6fbf60: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6fbf62: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 6fbf65: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6fbf68: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6fbf6b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 6fbf6e: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 6fbf71: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 6fbf74: lea esi, [eax + 0x10] */
  esi = (uint32_t)(eax + 0x10u);
/* 6fbf77: mov edx, esi */
  edx = esi;
/* 6fbf79: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 6fbf7b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 6fbf7d: mov dword ptr [esp + 0x14], 3 */
  W32((uint32_t)(esp + 0x14u), 0x3u);
L_6fbf85: /* 6fbf85: mov edi, edx */
  edi = edx;
/* 6fbf87: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 6fbf89: mov ebx, esi */
  ebx = esi;
/* 6fbf8b: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 6fbf8d: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 6fbf90: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 6fbf93: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 6fbf96: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* 6fbf99: mov edi, dword ptr [edx + 0xc] */
  edi = R32((uint32_t)(edx + 0xcu));
/* 6fbf9c: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 6fbf9f: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6fbfa3: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6fbfa6: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 6fbfa9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 6fbfaa: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 6fbfae: jne 0x6fbf85 */
  if (!zf) goto L_6fbf85;
L_6fbfb0: /* 6fbfb0: lea edx, [ecx + 0x40] */
  edx = (uint32_t)(ecx + 0x40u);
/* 6fbfb3: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 6fbfb5: lea esi, [eax + 0x40] */
  esi = (uint32_t)(eax + 0x40u);
/* 6fbfb8: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 6fbfba: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 6fbfbd: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 6fbfc0: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6fbfc3: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 6fbfc6: mov edx, dword ptr [ecx + 0x4c] */
  edx = R32((uint32_t)(ecx + 0x4cu));
/* 6fbfc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fbfca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fbfcb: mov dword ptr [eax + 0x4c], edx */
  W32((uint32_t)(eax + 0x4cu), edx);
/* 6fbfce: mov ecx, dword ptr [ecx + 0x50] */
  ecx = R32((uint32_t)(ecx + 0x50u));
/* 6fbfd1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fbfd2: mov dword ptr [eax + 0x50], ecx */
  W32((uint32_t)(eax + 0x50u), ecx);
/* 6fbfd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fbfd6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc010(void) {
  LOAD_REGS();
L_6fc010: /* 6fc010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc011: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6fc015: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc016: mov eax, ecx */
  eax = ecx;
/* 6fc018: mov ecx, 0x15 */
  ecx = 0x15u;
/* 6fc01d: mov edi, eax */
  edi = eax;
/* 6fc01f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6fc021: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fc022: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc023: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc040(void) {
  LOAD_REGS();
L_6fc040: /* 6fc040: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fc044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc045: mov esi, dword ptr [0xcfa1f0] */
  esi = R32((uint32_t)(0xcfa1f0u));
/* 6fc04b: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 6fc04e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc04f: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 6fc052: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fc053: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 6fc056: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc057: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 6fc05a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fc05b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc05c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 6fc060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc061: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc063u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc063: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc066: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc067: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc069u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc069: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc06c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc06d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc06fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc06f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc072: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc073: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc075u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc075: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc079: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x6fc07eu); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 6fc07e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc081: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc082: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc0b0(void) {
  LOAD_REGS();
L_6fc0b0: /* 6fc0b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc0b1: mov esi, ecx */
  esi = ecx;
/* 6fc0b3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 6fc0b6: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x6fc0bcu); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 6fc0bc: mov eax, esi */
  eax = esi;
/* 6fc0be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc0bf: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc0d0(void) {
  LOAD_REGS();
L_6fc0d0: /* 6fc0d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc0d1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6fc0d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc0d6: mov eax, ecx */
  eax = ecx;
/* 6fc0d8: mov ecx, 0xb */
  ecx = 0xbu;
/* 6fc0dd: mov edi, eax */
  edi = eax;
/* 6fc0df: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6fc0e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fc0e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc0e3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc100(void) {
  LOAD_REGS();
L_6fc100: /* 6fc100: mov eax, ecx */
  eax = ecx;
/* 6fc102: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fc106: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6fc108: mov ecx, 1 */
  ecx = 0x1u;
/* 6fc10d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6fc110: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6fc113: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc130(void) {
  LOAD_REGS();
L_6fc130: /* 6fc130: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fc134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc135: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 6fc138: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc139: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6fc13d: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 6fc140: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fc141: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fc143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc144: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x6fc147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc147: mov esi, dword ptr [0xcfa1f0] */
  esi = R32((uint32_t)(0xcfa1f0u));
/* 6fc14d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc14e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc150u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc150: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc153: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc154: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc156u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc156: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc159: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc15a: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc170(void) {
  LOAD_REGS();
L_6fc170: /* 6fc170: mov eax, ecx */
  eax = ecx;
/* 6fc172: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fc176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc177: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6fc179: mov edx, eax */
  edx = eax;
/* 6fc17b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6fc17d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6fc180: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6fc183: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6fc186: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6fc189: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc18a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc1a0(void) {
  LOAD_REGS();
L_6fc1a0: /* 6fc1a0: mov eax, ecx */
  eax = ecx;
/* 6fc1a2: xor ecx, ecx */
  ecx = 0;
/* 6fc1a4: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 6fc1a7: mov word ptr [eax + 2], cx */
  W16((uint32_t)(eax + 0x2u), (ecx & 0xffffu));
/* 6fc1ab: mov word ptr [eax + 4], cx */
  W16((uint32_t)(eax + 0x4u), (ecx & 0xffffu));
/* 6fc1af: mov word ptr [eax + 6], cx */
  W16((uint32_t)(eax + 0x6u), (ecx & 0xffffu));
/* 6fc1b3: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc1d0(void) {
  LOAD_REGS();
L_6fc1d0: /* 6fc1d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fc1d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc1d5: mov esi, dword ptr [0xcfa354] */
  esi = R32((uint32_t)(0xcfa354u));
/* 6fc1db: lea ecx, [eax + 6] */
  ecx = (uint32_t)(eax + 0x6u);
/* 6fc1de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc1df: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 6fc1e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fc1e3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6fc1e7: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 6fc1ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc1eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc1ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fc1ed: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc1efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc1ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc1f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc1f3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc1f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc1f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc1f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc1f9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc1fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc1fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc1fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc1ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc201: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc204: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc205: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc220(void) {
  LOAD_REGS();
L_6fc220: /* 6fc220: xor eax, eax */
  eax = 0;
/* 6fc222: mov edx, 0xff7fffff */
  edx = 0xff7fffffu;
/* 6fc227: jmp 0x6fc230 */
  goto L_6fc230;
L_6fc230: /* 6fc230: mov dword ptr [ecx + eax*4], 0x7f7fffff */
  W32((uint32_t)(ecx + eax*4), 0x7f7fffffu);
/* 6fc237: mov dword ptr [ecx + eax*4 + 0xc], edx */
  W32((uint32_t)(ecx + eax*4 + 0xcu), edx);
/* 6fc23b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 6fc23c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fc23f: jl 0x6fc230 */
  if ((sf != of)) goto L_6fc230;
L_6fc241: /* 6fc241: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc229(void) {
  LOAD_REGS();
L_6fc229: /* 6fc229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_6fc230: /* 6fc230: mov dword ptr [ecx + eax*4], 0x7f7fffff */
  W32((uint32_t)(ecx + eax*4), 0x7f7fffffu);
/* 6fc237: mov dword ptr [ecx + eax*4 + 0xc], edx */
  W32((uint32_t)(ecx + eax*4 + 0xcu), edx);
/* 6fc23b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 6fc23c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fc23f: jl 0x6fc230 */
  if ((sf != of)) goto L_6fc230;
L_6fc241: /* 6fc241: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc260(void) {
  LOAD_REGS();
L_6fc260: /* 6fc260: mov eax, ecx */
  eax = ecx;
/* 6fc262: xor edx, edx */
  edx = 0;
/* 6fc264: mov ecx, 0xff7fffff */
  ecx = 0xff7fffffu;
/* 6fc269: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_6fc270: /* 6fc270: mov dword ptr [eax + edx*4], 0x7f7fffff */
  W32((uint32_t)(eax + edx*4), 0x7f7fffffu);
/* 6fc277: mov dword ptr [eax + edx*4 + 0xc], ecx */
  W32((uint32_t)(eax + edx*4 + 0xcu), ecx);
/* 6fc27b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 6fc27c: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fc27f: jl 0x6fc270 */
  if ((sf != of)) goto L_6fc270;
L_6fc281: /* 6fc281: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc2a0(void) {
  LOAD_REGS();
L_6fc2a0: /* 6fc2a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fc2a1: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 6fc2a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fc2a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc2a9: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 6fc2ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc2ae: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6fc2b2: mov ebp, 3 */
  ebp = 0x3u;
L_6fc2b7: /* 6fc2b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc2b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc2b9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x6fc2bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc2bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc2be: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6fc2c1: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 6fc2c2: jne 0x6fc2b7 */
  if (!zf) goto L_6fc2b7;
L_6fc2c4: /* 6fc2c4: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 6fc2c8: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6fc2cb: mov ebp, 3 */
  ebp = 0x3u;
L_6fc2d0: /* 6fc2d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc2d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc2d2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x6fc2d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc2d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc2d7: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6fc2da: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 6fc2db: jne 0x6fc2d0 */
  if (!zf) goto L_6fc2d0;
L_6fc2dd: /* 6fc2dd: mov eax, edi */
  eax = edi;
/* 6fc2df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fc2e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc2e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fc2e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fc2e3: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc310(void) {
  LOAD_REGS();
L_6fc310: /* 6fc310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc311: mov eax, ecx */
  eax = ecx;
/* 6fc313: xor ecx, ecx */
  ecx = 0;
/* 6fc315: mov esi, 0x7f7fffff */
  esi = 0x7f7fffffu;
/* 6fc31a: mov edx, 0xff7fffff */
  edx = 0xff7fffffu;
/* 6fc31f: nop  */
L_6fc320: /* 6fc320: mov dword ptr [eax + ecx*4 + 4], esi */
  W32((uint32_t)(eax + ecx*4 + 0x4u), esi);
/* 6fc324: mov dword ptr [eax + ecx*4 + 0x10], edx */
  W32((uint32_t)(eax + ecx*4 + 0x10u), edx);
/* 6fc328: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 6fc329: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fc32c: jl 0x6fc320 */
  if ((sf != of)) goto L_6fc320;
L_6fc32e: /* 6fc32e: mov ecx, 0xffff */
  ecx = 0xffffu;
/* 6fc333: mov word ptr [eax + 0x1c], cx */
  W16((uint32_t)(eax + 0x1cu), (ecx & 0xffffu));
/* 6fc337: mov word ptr [eax + 0x1e], cx */
  W16((uint32_t)(eax + 0x1eu), (ecx & 0xffffu));
/* 6fc33b: xor ecx, ecx */
  ecx = 0;
/* 6fc33d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_6fc340: /* 6fc340: mov dword ptr [eax + ecx*4 + 4], esi */
  W32((uint32_t)(eax + ecx*4 + 0x4u), esi);
/* 6fc344: mov dword ptr [eax + ecx*4 + 0x10], edx */
  W32((uint32_t)(eax + ecx*4 + 0x10u), edx);
/* 6fc348: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 6fc349: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fc34c: jl 0x6fc340 */
  if ((sf != of)) goto L_6fc340;
L_6fc34e: /* 6fc34e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc34f: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc360(void) {
  LOAD_REGS();
L_6fc360: /* 6fc360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc361: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6fc365: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc366: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fc36a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc36b: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 6fc36e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc36f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc370: call 0x6c4b4c */
  esp -= 4; W32(esp, 0x6fc375u); SPILL(); f_6c4b4c(); if (g_unwind) return; RELOAD();
/* 6fc375: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc378: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc379: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x6fc37fu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 6fc37f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 6fc381: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc384: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fc386: je 0x6fc38e */
  if (zf) goto L_6fc38e;
L_6fc388: /* 6fc388: lea ecx, [esi + 0x1e] */
  ecx = (uint32_t)(esi + 0x1eu);
/* 6fc38b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc38c: jmp 0x6fc392 */
  goto L_6fc392;
L_6fc38e: /* 6fc38e: lea edx, [esi + 0x1e] */
  edx = (uint32_t)(esi + 0x1eu);
/* 6fc391: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_6fc392: /* 6fc392: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6fc395: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc396: mov esi, dword ptr [0xcfa354] */
  esi = R32((uint32_t)(0xcfa354u));
/* 6fc39c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc39d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc39fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc39f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc3a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc3a3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6fc3a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fc3a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc3a8: mov eax, edi */
  eax = edi;
/* 6fc3aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fc3ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc3ac: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc3d0(void) {
  LOAD_REGS();
L_6fc3d0: /* 6fc3d0: mov eax, 0xce6f38 */
  eax = 0xce6f38u;
/* 6fc3d5: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc3f0(void) {
  LOAD_REGS();
L_6fc3f0: /* 6fc3f0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6fc3f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fc3f7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6fc3fb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6fc3ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc401: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc403: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc404: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6fc408: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc40a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fc40b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc40c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc40d: push 0xce6f38 */
  { uint32_t v = 0xce6f38u; esp -= 4; W32(esp, v); }
/* 6fc412: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6fc418u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6fc418: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc41b: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc430(void) {
  LOAD_REGS();
L_6fc430: /* 6fc430: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fc434: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc450(void) {
  LOAD_REGS();
L_6fc450: /* 6fc450: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fc454: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fc456: je 0x6fc45d */
  if (zf) goto L_6fc45d;
L_6fc458: /* 6fc458: jmp 0x6c1c3f */
  SPILL(); f_6c1c3f(); return;
L_6fc45d: /* 6fc45d: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc470(void) {
  LOAD_REGS();
L_6fc470: /* 6fc470: mov eax, 0xce7468 */
  eax = 0xce7468u;
/* 6fc475: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc490(void) {
  LOAD_REGS();
L_6fc490: /* 6fc490: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6fc495: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fc497: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6fc49b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6fc49f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc4a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc4a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc4a4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6fc4a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc4aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fc4ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc4ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc4ad: push 0xce7468 */
  { uint32_t v = 0xce7468u; esp -= 4; W32(esp, v); }
/* 6fc4b2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6fc4b8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6fc4b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc4bb: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc4d0(void) {
  LOAD_REGS();
L_6fc4d0: /* 6fc4d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fc4d4: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc4f0(void) {
  LOAD_REGS();
L_6fc4f0: /* 6fc4f0: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 6fc4f3: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc510(void) {
  LOAD_REGS();
L_6fc510: /* 6fc510: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 6fc513: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc530(void) {
  LOAD_REGS();
L_6fc530: /* 6fc530: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fc534: mov dword ptr [ecx + 0x60], eax */
  W32((uint32_t)(ecx + 0x60u), eax);
/* 6fc537: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc550(void) {
  LOAD_REGS();
L_6fc550: /* 6fc550: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
/* 6fc553: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc570(void) {
  LOAD_REGS();
L_6fc570: /* 6fc570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc571: mov esi, ecx */
  esi = ecx;
/* 6fc573: call 0x6cbfd7 */
  esp -= 4; W32(esp, 0x6fc578u); SPILL(); f_6cbfd7(); if (g_unwind) return; RELOAD();
/* 6fc578: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fc57d: je 0x6fc58c */
  if (zf) goto L_6fc58c;
L_6fc57f: /* 6fc57f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fc584: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fc586: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fc588: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc589: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fc58cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fc58c: /* 6fc58c: mov eax, esi */
  eax = esi;
/* 6fc58e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc58f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc5b0(void) {
  LOAD_REGS();
L_6fc5b0: /* 6fc5b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fc5b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fc5b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fc5b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc5b9: mov esi, ecx */
  esi = ecx;
/* 6fc5bb: je 0x6fc5ed */
  if (zf) goto L_6fc5ed;
L_6fc5bd: /* 6fc5bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fc5c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc5c1: push 0x6cbfd7 */
  { uint32_t v = 0x6cbfd7u; esp -= 4; W32(esp, v); }
/* 6fc5c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fc5c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc5ca: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 6fc5cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc5cd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fc5d2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fc5d2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fc5d5: je 0x6fc5e5 */
  if (zf) goto L_6fc5e5;
L_6fc5d7: /* 6fc5d7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fc5dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fc5df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fc5e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc5e2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fc5e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fc5e5: /* 6fc5e5: mov eax, edi */
  eax = edi;
/* 6fc5e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fc5e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc5e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fc5ea: ret 4 */
  esp += 8; SPILL(); return;
L_6fc5ed: /* 6fc5ed: mov ecx, esi */
  ecx = esi;
/* 6fc5ef: call 0x6cbfd7 */
  esp -= 4; W32(esp, 0x6fc5f4u); SPILL(); f_6cbfd7(); if (g_unwind) return; RELOAD();
/* 6fc5f4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fc5f7: je 0x6fc606 */
  if (zf) goto L_6fc606;
L_6fc5f9: /* 6fc5f9: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fc5fe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fc600: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fc602: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc603: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fc606u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fc606: /* 6fc606: mov eax, esi */
  eax = esi;
/* 6fc608: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc609: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fc60a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc630(void) {
  LOAD_REGS();
L_6fc630: /* 6fc630: mov eax, 0xb80740 */
  eax = 0xb80740u;
/* 6fc635: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc650(void) {
  LOAD_REGS();
L_6fc650: /* 6fc650: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6fc655: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fc657: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6fc65b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6fc65f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc661: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc663: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc664: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6fc668: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc66a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fc66b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc66c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc66d: push 0xb80740 */
  { uint32_t v = 0xb80740u; esp -= 4; W32(esp, v); }
/* 6fc672: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6fc678u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6fc678: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc67b: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc690(void) {
  LOAD_REGS();
L_6fc690: /* 6fc690: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fc694: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc6b0(void) {
  LOAD_REGS();
L_6fc6b0: /* 6fc6b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6fc6b2: push 0x9c13b8 */
  { uint32_t v = 0x9c13b8u; esp -= 4; W32(esp, v); }
/* 6fc6b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6fc6bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc6be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6fc6c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc6c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc6c7: mov esi, ecx */
  esi = ecx;
/* 6fc6c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6fc6cd: mov dword ptr [esi], 0x9f7a28 */
  W32((uint32_t)(esi), 0x9f7a28u);
/* 6fc6d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6fc6db: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6fc6e1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6fc6e1: mov ecx, esi */
  ecx = esi;
/* 6fc6e3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6fc6eb: call 0x6c41ec */
  esp -= 4; W32(esp, 0x6fc6f0u); SPILL(); f_6c41ec(); if (g_unwind) return; RELOAD();
/* 6fc6f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6fc6f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc6f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6fc6fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc6ff: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc720(void) {
  LOAD_REGS();
L_6fc720: /* 6fc720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc721: mov esi, ecx */
  esi = ecx;
/* 6fc723: call 0x6cc93c */
  esp -= 4; W32(esp, 0x6fc728u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 6fc728: mov dword ptr [esi], 0x9f7a28 */
  W32((uint32_t)(esi), 0x9f7a28u);
/* 6fc72e: mov eax, esi */
  eax = esi;
/* 6fc730: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc731: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc750(void) {
  LOAD_REGS();
L_6fc750: /* 6fc750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc751: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc752: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fc756: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc757: mov esi, ecx */
  esi = ecx;
/* 6fc759: call 0x6c67fd */
  esp -= 4; W32(esp, 0x6fc75eu); SPILL(); f_6c67fd(); if (g_unwind) return; RELOAD();
/* 6fc75e: mov dword ptr [esi], 0x9f7a28 */
  W32((uint32_t)(esi), 0x9f7a28u);
/* 6fc764: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 6fc767: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 6fc76a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fc76b: mov eax, esi */
  eax = esi;
/* 6fc76d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc76e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc790(void) {
  LOAD_REGS();
L_6fc790: /* 6fc790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fc791: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fc792: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6fc796: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc797: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc798: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fc799: mov ebx, ecx */
  ebx = ecx;
/* 6fc79b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6fc7a1u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6fc7a1: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 6fc7a4: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 6fc7a7: lea eax, [ebp + 0x44] */
  eax = (uint32_t)(ebp + 0x44u);
/* 6fc7aa: mov ecx, 7 */
  ecx = 0x7u;
/* 6fc7af: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6fc7b1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6fc7b3: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 6fc7b6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6fc7b8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6fc7bb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6fc7be: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 6fc7c1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6fc7c4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 6fc7c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fc7c8: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 6fc7cb: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 6fc7ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc7cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fc7d0: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 6fc7d3: mov eax, ebx */
  eax = ebx;
/* 6fc7d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fc7d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc800(void) {
  LOAD_REGS();
L_6fc800: /* 6fc800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc801: mov esi, ecx */
  esi = ecx;
/* 6fc803: call 0x6c592f */
  esp -= 4; W32(esp, 0x6fc808u); SPILL(); f_6c592f(); if (g_unwind) return; RELOAD();
/* 6fc808: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fc80d: je 0x6fc81b */
  if (zf) goto L_6fc81b;
L_6fc80f: /* 6fc80f: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6fc811: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc812: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6fc818u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6fc818: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fc81b: /* 6fc81b: mov eax, esi */
  eax = esi;
/* 6fc81d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc81e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc840(void) {
  LOAD_REGS();
L_6fc840: /* 6fc840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fc841: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6fc845: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fc848: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc849: mov esi, ecx */
  esi = ecx;
/* 6fc84b: je 0x6fc87d */
  if (zf) goto L_6fc87d;
L_6fc84d: /* 6fc84d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6fc850: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc851: push 0x6c592f */
  { uint32_t v = 0x6c592fu; esp -= 4; W32(esp, v); }
/* 6fc856: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6fc859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc85a: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6fc85c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc85d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6fc862u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6fc862: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fc865: je 0x6fc875 */
  if (zf) goto L_6fc875;
L_6fc867: /* 6fc867: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6fc86d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fc86f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fc871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fc872: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fc875u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fc875: /* 6fc875: mov eax, edi */
  eax = edi;
/* 6fc877: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fc878: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc879: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fc87a: ret 4 */
  esp += 8; SPILL(); return;
L_6fc87d: /* 6fc87d: mov ecx, esi */
  ecx = esi;
/* 6fc87f: call 0x6c592f */
  esp -= 4; W32(esp, 0x6fc884u); SPILL(); f_6c592f(); if (g_unwind) return; RELOAD();
/* 6fc884: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fc887: je 0x6fc895 */
  if (zf) goto L_6fc895;
L_6fc889: /* 6fc889: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6fc88b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc88c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6fc892u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6fc892: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fc895: /* 6fc895: mov eax, esi */
  eax = esi;
/* 6fc897: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc898: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fc899: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc8c0(void) {
  LOAD_REGS();
L_6fc8c0: /* 6fc8c0: mov eax, 0xb80210 */
  eax = 0xb80210u;
/* 6fc8c5: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc8e0(void) {
  LOAD_REGS();
L_6fc8e0: /* 6fc8e0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6fc8e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fc8e7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6fc8eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6fc8ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc8f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc8f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc8f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6fc8f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc8fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fc8fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc8fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fc8fd: push 0xb80210 */
  { uint32_t v = 0xb80210u; esp -= 4; W32(esp, v); }
/* 6fc902: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6fc908u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6fc908: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fc90b: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc920(void) {
  LOAD_REGS();
L_6fc920: /* 6fc920: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fc924: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc940(void) {
  LOAD_REGS();
L_6fc940: /* 6fc940: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fc944: xor eax, eax */
  eax = 0;
/* 6fc946: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6fc948: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 6fc94b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc960(void) {
  LOAD_REGS();
L_6fc960: /* 6fc960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc961: mov esi, ecx */
  esi = ecx;
/* 6fc963: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fc969u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fc969: mov eax, esi */
  eax = esi;
/* 6fc96b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc96c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc980(void) {
  LOAD_REGS();
L_6fc980: /* 6fc980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc981: mov esi, ecx */
  esi = ecx;
/* 6fc983: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fc989u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fc989: mov eax, esi */
  eax = esi;
/* 6fc98b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc98c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fc9a0(void) {
  LOAD_REGS();
L_6fc9a0: /* 6fc9a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fc9a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc9a5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fc9a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fc9a8: mov esi, ecx */
  esi = ecx;
/* 6fc9aa: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x6fc9b0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 6fc9b0: mov eax, esi */
  eax = esi;
/* 6fc9b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc9b3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fc9d0(void) {
  LOAD_REGS();
L_6fc9d0: /* 6fc9d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fc9d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fc9d3: mov esi, ecx */
  esi = ecx;
/* 6fc9d5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6fc9dbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6fc9db: mov eax, esi */
  eax = esi;
/* 6fc9dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fc9de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fca00(void) {
  LOAD_REGS();
L_6fca00: /* 6fca00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fca02: add eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fca06: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fca20(void) {
  LOAD_REGS();
L_6fca20: /* 6fca20: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fca22: add eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fca26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fca40(void) {
  LOAD_REGS();
L_6fca40: /* 6fca40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fca41: mov esi, ecx */
  esi = ecx;
/* 6fca43: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 6fca46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fca47: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fca4b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fca4d: jl 0x6fca67 */
  if ((sf != of)) goto L_6fca67;
L_6fca4f: /* 6fca4f: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 6fca54: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fca59: push 0xac3ba0 */
  { uint32_t v = 0xac3ba0u; esp -= 4; W32(esp, v); }
/* 6fca5e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x6fca64u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 6fca64: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fca67: /* 6fca67: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 6fca69: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 6fca6c: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 6fca6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fca6f: lea eax, [eax + ecx - 1] */
  eax = (uint32_t)(eax + ecx + 0xffffffffu);
/* 6fca73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fca74: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fca90(void) {
  LOAD_REGS();
L_6fca90: /* 6fca90: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6fca93: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fca97: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fca99: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 6fca9b: lea eax, [eax + ecx - 1] */
  eax = (uint32_t)(eax + ecx + 0xffffffffu);
/* 6fca9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcac0(void) {
  LOAD_REGS();
L_6fcac0: /* 6fcac0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fcac2: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x6fcac8u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 6fcac8: ret  */
  esp += 4; SPILL(); return;
}

void f_6fcae0(void) {
  LOAD_REGS();
L_6fcae0: /* 6fcae0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fcae4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcae5: mov esi, ecx */
  esi = ecx;
/* 6fcae7: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 6fcaed: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 6fcaf0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6fcaf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fcaf3: jle 0x6fcb13 */
  if ((zf || sf != of)) goto L_6fcb13;
L_6fcaf5: /* 6fcaf5: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fcaf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_6fcb00: /* 6fcb00: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6fcb02: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 6fcb04: mov cl, byte ptr [edx + ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + ecx))) & 0xffu);
/* 6fcb07: cmp cl, byte ptr [edi] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 6fcb09: je 0x6fcb1a */
  if (zf) goto L_6fcb1a;
L_6fcb0b: /* 6fcb0b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 6fcb0c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 6fcb0e: cmp edx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fcb11: jl 0x6fcb00 */
  if ((sf != of)) goto L_6fcb00;
L_6fcb13: /* 6fcb13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fcb14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcb15: xor eax, eax */
  eax = 0;
/* 6fcb17: ret 8 */
  esp += 12; SPILL(); return;
L_6fcb1a: /* 6fcb1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fcb1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcb1c: mov eax, 1 */
  eax = 0x1u;
/* 6fcb21: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6fcb50(void) {
  LOAD_REGS();
L_6fcb50: /* 6fcb50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcb51: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6fcb54: xor eax, eax */
  eax = 0;
/* 6fcb56: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6fcb58: jle 0x6fcb6c */
  if ((zf || sf != of)) goto L_6fcb6c;
L_6fcb5a: /* 6fcb5a: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6fcb5e: mov dl, byte ptr [edx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 6fcb60: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_6fcb62: /* 6fcb62: cmp byte ptr [ecx + eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 6fcb65: je 0x6fcb6f */
  if (zf) goto L_6fcb6f;
L_6fcb67: /* 6fcb67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 6fcb68: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fcb6a: jl 0x6fcb62 */
  if ((sf != of)) goto L_6fcb62;
L_6fcb6c: /* 6fcb6c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_6fcb6f: /* 6fcb6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcb70: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcb90(void) {
  LOAD_REGS();
L_6fcb90: /* 6fcb90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fcb94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fcb96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fcb97: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fcb9du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fcb9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcbb0(void) {
  LOAD_REGS();
L_6fcbb0: /* 6fcbb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fcbb4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fcbb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fcbb7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x6fcbbdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 6fcbbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcbd0(void) {
  LOAD_REGS();
L_6fcbd0: /* 6fcbd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fcbd4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fcbd8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fcbda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fcbdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fcbdc: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x6fcbe2u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 6fcbe2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6fcc00(void) {
  LOAD_REGS();
L_6fcc00: /* 6fcc00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6fcc04: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6fcc08: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fcc0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fcc0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fcc0c: call dword ptr [0xcfa38c] */
  esp -= 4; W32(esp, 0x6fcc12u); SPILL(); f_4e2f09(); if (g_unwind) return; /* Core!?InsertZeroed@FArray@@QAEXHHH@Z */ RELOAD();
/* 6fcc12: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6fcc30(void) {
  LOAD_REGS();
L_6fcc30: /* 6fcc30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fcc31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fcc32: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 6fcc38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcc39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fcc3a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6fcc3e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6fcc40: mov esi, ecx */
  esi = ecx;
/* 6fcc42: jge 0x6fcc58 */
  if ((sf == of)) goto L_6fcc58;
L_6fcc44: /* 6fcc44: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 6fcc49: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fcc4e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 6fcc53: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fcc55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fcc55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fcc58: /* 6fcc58: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fcc5b: jle 0x6fcc71 */
  if ((zf || sf != of)) goto L_6fcc71;
L_6fcc5d: /* 6fcc5d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 6fcc62: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fcc67: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 6fcc6c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fcc6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fcc6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fcc71: /* 6fcc71: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 6fcc75: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 6fcc78: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 6fcc7b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fcc7d: jle 0x6fcc93 */
  if ((zf || sf != of)) goto L_6fcc93;
L_6fcc7f: /* 6fcc7f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 6fcc84: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fcc89: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 6fcc8e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fcc90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fcc90: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fcc93: /* 6fcc93: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fcc95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fcc96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fcc97: mov ecx, esi */
  ecx = esi;
/* 6fcc99: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x6fcc9fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 6fcc9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fcca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcca1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fcca2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fcca3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6fccd0(void) {
  LOAD_REGS();
L_6fccd0: /* 6fccd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fccd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fccd5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fccd7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x6fccddu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 6fccdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fccf0(void) {
  LOAD_REGS();
L_6fccf0: /* 6fccf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fccf1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fccf3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fccf5: mov esi, ecx */
  esi = ecx;
/* 6fccf7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x6fccfdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 6fccfd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6fcd01: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 6fcd03: mov dl, byte ptr [edx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 6fcd05: mov byte ptr [eax + ecx], dl */
  W8((uint32_t)(eax + ecx), (edx & 0xffu));
/* 6fcd08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcd09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcd20(void) {
  LOAD_REGS();
L_6fcd20: /* 6fcd20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fcd24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fcd25: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fcd27: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x6fcd2du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 6fcd2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcd40(void) {
  LOAD_REGS();
L_6fcd40: /* 6fcd40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fcd41: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 6fcd45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcd46: mov esi, ecx */
  esi = ecx;
/* 6fcd48: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 6fcd4b: xor eax, eax */
  eax = 0;
/* 6fcd4d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6fcd4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fcd50: jle 0x6fcd60 */
  if ((zf || sf != of)) goto L_6fcd60;
L_6fcd52: /* 6fcd52: mov dl, byte ptr [ebx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 6fcd54: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
L_6fcd56: /* 6fcd56: cmp byte ptr [edi + eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 6fcd59: je 0x6fcd73 */
  if (zf) goto L_6fcd73;
L_6fcd5b: /* 6fcd5b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 6fcd5c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fcd5e: jl 0x6fcd56 */
  if ((sf != of)) goto L_6fcd56;
L_6fcd60: /* 6fcd60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fcd62: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fcd64: mov ecx, esi */
  ecx = esi;
/* 6fcd66: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x6fcd6cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 6fcd6c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 6fcd6e: mov dl, byte ptr [ebx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 6fcd70: mov byte ptr [eax + ecx], dl */
  W8((uint32_t)(eax + ecx), (edx & 0xffu));
L_6fcd73: /* 6fcd73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fcd74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcd75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fcd76: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcd90(void) {
  LOAD_REGS();
L_6fcd90: /* 6fcd90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fcd91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcd92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fcd93: mov edi, ecx */
  edi = ecx;
/* 6fcd95: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 6fcd98: xor esi, esi */
  esi = 0;
/* 6fcd9a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6fcd9c: jle 0x6fcdc0 */
  if ((zf || sf != of)) goto L_6fcdc0;
L_6fcd9e: /* 6fcd9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fcd9f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_6fcda3: /* 6fcda3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 6fcda5: mov cl, byte ptr [esi + eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + eax))) & 0xffu);
/* 6fcda8: cmp cl, byte ptr [ebx] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 6fcdaa: jne 0x6fcdb7 */
  if (!zf) goto L_6fcdb7;
L_6fcdac: /* 6fcdac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fcdae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcdaf: mov ecx, edi */
  ecx = edi;
/* 6fcdb1: call 0x6c97cd */
  esp -= 4; W32(esp, 0x6fcdb6u); SPILL(); f_6c97cd(); if (g_unwind) return; RELOAD();
/* 6fcdb6: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_6fcdb7: /* 6fcdb7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 6fcdba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 6fcdbb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fcdbd: jl 0x6fcda3 */
  if ((sf != of)) goto L_6fcda3;
L_6fcdbf: /* 6fcdbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_6fcdc0: /* 6fcdc0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 6fcdc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fcdc4: mov eax, ebp */
  eax = ebp;
/* 6fcdc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcdc7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 6fcdc9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fcdca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcde0(void) {
  LOAD_REGS();
L_6fcde0: /* 6fcde0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcde1: mov esi, ecx */
  esi = ecx;
/* 6fcde3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fcde9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fcde9: mov eax, esi */
  eax = esi;
/* 6fcdeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcdec: ret  */
  esp += 4; SPILL(); return;
}

void f_6fce00(void) {
  LOAD_REGS();
L_6fce00: /* 6fce00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fce02: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fce06: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fce09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fce20(void) {
  LOAD_REGS();
L_6fce20: /* 6fce20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fce21: mov esi, ecx */
  esi = ecx;
/* 6fce23: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fce29u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fce29: mov eax, esi */
  eax = esi;
/* 6fce2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fce2c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fce40(void) {
  LOAD_REGS();
L_6fce40: /* 6fce40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fce44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fce45: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 6fce47: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x6fce4du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 6fce4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fce60(void) {
  LOAD_REGS();
L_6fce60: /* 6fce60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fce61: mov esi, ecx */
  esi = ecx;
/* 6fce63: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fce69u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fce69: mov eax, esi */
  eax = esi;
/* 6fce6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fce6c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fce80(void) {
  LOAD_REGS();
L_6fce80: /* 6fce80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fce84: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fce86: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fce89: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fce8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcea0(void) {
  LOAD_REGS();
L_6fcea0: /* 6fcea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcea1: mov esi, ecx */
  esi = ecx;
/* 6fcea3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fcea9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fcea9: mov eax, esi */
  eax = esi;
/* 6fceab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fceac: ret  */
  esp += 4; SPILL(); return;
}

void f_6fcec0(void) {
  LOAD_REGS();
L_6fcec0: /* 6fcec0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fcec2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fcec6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fcec9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcee0(void) {
  LOAD_REGS();
L_6fcee0: /* 6fcee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcee1: mov esi, ecx */
  esi = ecx;
/* 6fcee3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fcee9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fcee9: mov eax, esi */
  eax = esi;
/* 6fceeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fceec: ret  */
  esp += 4; SPILL(); return;
}

void f_6fcf00(void) {
  LOAD_REGS();
L_6fcf00: /* 6fcf00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcf01: mov esi, ecx */
  esi = ecx;
/* 6fcf03: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fcf09u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fcf09: mov eax, esi */
  eax = esi;
/* 6fcf0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcf0c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fcf20(void) {
  LOAD_REGS();
L_6fcf20: /* 6fcf20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fcf24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fcf26: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 6fcf2c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fcf2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcf50(void) {
  LOAD_REGS();
L_6fcf50: /* 6fcf50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fcf54: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 6fcf59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fcf5a: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fcf60u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fcf60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcf80(void) {
  LOAD_REGS();
L_6fcf80: /* 6fcf80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcf81: mov esi, ecx */
  esi = ecx;
/* 6fcf83: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fcf89u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fcf89: mov eax, esi */
  eax = esi;
/* 6fcf8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcf8c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fcfa0(void) {
  LOAD_REGS();
L_6fcfa0: /* 6fcfa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fcfa4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fcfa6: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 6fcfa9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fcfab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fcfc0(void) {
  LOAD_REGS();
L_6fcfc0: /* 6fcfc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fcfc1: mov esi, ecx */
  esi = ecx;
/* 6fcfc3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fcfc9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fcfc9: mov eax, esi */
  eax = esi;
/* 6fcfcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fcfcc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fcfe0(void) {
  LOAD_REGS();
L_6fcfe0: /* 6fcfe0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fcfe2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fcfe6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fcfe9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd000(void) {
  LOAD_REGS();
L_6fd000: /* 6fd000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd001: mov esi, ecx */
  esi = ecx;
/* 6fd003: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd009u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd009: mov eax, esi */
  eax = esi;
/* 6fd00b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd00c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd020(void) {
  LOAD_REGS();
L_6fd020: /* 6fd020: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fd022: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fd026: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6fd029: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd040(void) {
  LOAD_REGS();
L_6fd040: /* 6fd040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd041: mov esi, ecx */
  esi = ecx;
/* 6fd043: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd049u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd049: mov eax, esi */
  eax = esi;
/* 6fd04b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd04c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd060(void) {
  LOAD_REGS();
L_6fd060: /* 6fd060: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fd064: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fd066: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fd069: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fd06c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd080(void) {
  LOAD_REGS();
L_6fd080: /* 6fd080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd081: mov esi, ecx */
  esi = ecx;
/* 6fd083: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd089u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd089: mov eax, esi */
  eax = esi;
/* 6fd08b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd08c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd0a0(void) {
  LOAD_REGS();
L_6fd0a0: /* 6fd0a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd0a1: mov esi, ecx */
  esi = ecx;
/* 6fd0a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd0a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd0a9: mov eax, esi */
  eax = esi;
/* 6fd0ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd0ac: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd0c0(void) {
  LOAD_REGS();
L_6fd0c0: /* 6fd0c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fd0c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fd0c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fd0c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd0e0(void) {
  LOAD_REGS();
L_6fd0e0: /* 6fd0e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd0e1: mov esi, ecx */
  esi = ecx;
/* 6fd0e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd0e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd0e9: mov eax, esi */
  eax = esi;
/* 6fd0eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd0ec: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd100(void) {
  LOAD_REGS();
L_6fd100: /* 6fd100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fd101: mov ebp, esp */
  ebp = esp;
/* 6fd103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6fd105: push 0x9c13d0 */
  { uint32_t v = 0x9c13d0u; esp -= 4; W32(esp, v); }
/* 6fd10a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6fd110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fd111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6fd118: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6fd11b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fd11c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd11d: mov esi, ecx */
  esi = ecx;
/* 6fd11f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 6fd122: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6fd124: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fd125: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 6fd128: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 6fd12f: jge 0x6fd146 */
  if ((sf == of)) goto L_6fd146;
L_6fd131: /* 6fd131: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fd133: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6fd136: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6fd138: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x6fd13eu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 6fd13e: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 6fd141: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 6fd143: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_6fd146: /* 6fd146: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 6fd149: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fd14a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd14b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6fd152: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fd153: mov esp, ebp */
  esp = ebp;
/* 6fd155: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fd156: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd157(void) {
  LOAD_REGS();
L_6fd157: /* 6fd157: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 6fd15a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 6fd15f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 6fd162: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fd163: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 6fd166: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6fd16bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_6fd16b(); return;
}

void f_6fd16b(void) {
  LOAD_REGS();
L_6fd16b: /* 6fd16b: push 0x9f7ad0 */
  { uint32_t v = 0x9f7ad0u; esp -= 4; W32(esp, v); }
/* 6fd170: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 6fd175: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x6fd17bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 6fd17b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fd17e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fd180: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fd182: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6fd187u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_6fd187: guest_badaddr(0x6fd187); return;
}

void f_6fd1c0(void) {
  LOAD_REGS();
L_6fd1c0: /* 6fd1c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fd1c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fd1c6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fd1c9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fd1cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd1e0(void) {
  LOAD_REGS();
L_6fd1e0: /* 6fd1e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd1e1: mov esi, ecx */
  esi = ecx;
/* 6fd1e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd1e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd1e9: mov eax, esi */
  eax = esi;
/* 6fd1eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd1ec: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd200(void) {
  LOAD_REGS();
L_6fd200: /* 6fd200: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fd204: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fd206: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fd209: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fd20c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd220(void) {
  LOAD_REGS();
L_6fd220: /* 6fd220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd221: mov esi, ecx */
  esi = ecx;
/* 6fd223: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd229u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd229: mov eax, esi */
  eax = esi;
/* 6fd22b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd22c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd240(void) {
  LOAD_REGS();
L_6fd240: /* 6fd240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd241: mov esi, ecx */
  esi = ecx;
/* 6fd243: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd249u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd249: mov eax, esi */
  eax = esi;
/* 6fd24b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd24c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd260(void) {
  LOAD_REGS();
L_6fd260: /* 6fd260: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fd262: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fd266: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fd269: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd280(void) {
  LOAD_REGS();
L_6fd280: /* 6fd280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd281: mov esi, ecx */
  esi = ecx;
/* 6fd283: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd289u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd289: mov eax, esi */
  eax = esi;
/* 6fd28b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd28c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd2a0(void) {
  LOAD_REGS();
L_6fd2a0: /* 6fd2a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd2a1: mov esi, ecx */
  esi = ecx;
/* 6fd2a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd2a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd2a9: mov eax, esi */
  eax = esi;
/* 6fd2ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd2ac: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd2c0(void) {
  LOAD_REGS();
L_6fd2c0: /* 6fd2c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd2c1: mov esi, ecx */
  esi = ecx;
/* 6fd2c3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd2c9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd2c9: mov eax, esi */
  eax = esi;
/* 6fd2cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd2cc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd2e0(void) {
  LOAD_REGS();
L_6fd2e0: /* 6fd2e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd2e1: mov esi, ecx */
  esi = ecx;
/* 6fd2e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd2e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd2e9: mov eax, esi */
  eax = esi;
/* 6fd2eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd2ec: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd300(void) {
  LOAD_REGS();
L_6fd300: /* 6fd300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd301: mov esi, ecx */
  esi = ecx;
/* 6fd303: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd309u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd309: mov eax, esi */
  eax = esi;
/* 6fd30b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd30c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd320(void) {
  LOAD_REGS();
L_6fd320: /* 6fd320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd321: mov esi, ecx */
  esi = ecx;
/* 6fd323: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd329u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd329: mov eax, esi */
  eax = esi;
/* 6fd32b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd32c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd340(void) {
  LOAD_REGS();
L_6fd340: /* 6fd340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd341: mov esi, ecx */
  esi = ecx;
/* 6fd343: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd349u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd349: mov eax, esi */
  eax = esi;
/* 6fd34b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd34c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd360(void) {
  LOAD_REGS();
L_6fd360: /* 6fd360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd361: mov esi, ecx */
  esi = ecx;
/* 6fd363: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd369u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd369: mov eax, esi */
  eax = esi;
/* 6fd36b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd36c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd380(void) {
  LOAD_REGS();
L_6fd380: /* 6fd380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd381: mov esi, ecx */
  esi = ecx;
/* 6fd383: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd389u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd389: mov eax, esi */
  eax = esi;
/* 6fd38b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd38c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd3a0(void) {
  LOAD_REGS();
L_6fd3a0: /* 6fd3a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd3a1: mov esi, ecx */
  esi = ecx;
/* 6fd3a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd3a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd3a9: mov eax, esi */
  eax = esi;
/* 6fd3ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd3ac: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd3c0(void) {
  LOAD_REGS();
L_6fd3c0: /* 6fd3c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd3c1: mov esi, ecx */
  esi = ecx;
/* 6fd3c3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd3c9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd3c9: mov eax, esi */
  eax = esi;
/* 6fd3cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd3cc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd3e0(void) {
  LOAD_REGS();
L_6fd3e0: /* 6fd3e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd3e1: mov esi, ecx */
  esi = ecx;
/* 6fd3e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd3e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd3e9: mov eax, esi */
  eax = esi;
/* 6fd3eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd3ec: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd400(void) {
  LOAD_REGS();
L_6fd400: /* 6fd400: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fd402: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fd406: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fd409: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd420(void) {
  LOAD_REGS();
L_6fd420: /* 6fd420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd421: mov esi, ecx */
  esi = ecx;
/* 6fd423: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd429u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd429: mov eax, esi */
  eax = esi;
/* 6fd42b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd42c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd440(void) {
  LOAD_REGS();
L_6fd440: /* 6fd440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd441: mov esi, ecx */
  esi = ecx;
/* 6fd443: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd449u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd449: mov eax, esi */
  eax = esi;
/* 6fd44b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd44c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd460(void) {
  LOAD_REGS();
L_6fd460: /* 6fd460: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fd462: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fd466: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fd469: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd480(void) {
  LOAD_REGS();
L_6fd480: /* 6fd480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd481: mov esi, ecx */
  esi = ecx;
/* 6fd483: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd489u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd489: mov eax, esi */
  eax = esi;
/* 6fd48b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd48c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd4a0(void) {
  LOAD_REGS();
L_6fd4a0: /* 6fd4a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd4a1: mov esi, ecx */
  esi = ecx;
/* 6fd4a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd4a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd4a9: mov eax, esi */
  eax = esi;
/* 6fd4ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd4ac: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd4c0(void) {
  LOAD_REGS();
L_6fd4c0: /* 6fd4c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd4c1: mov esi, ecx */
  esi = ecx;
/* 6fd4c3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd4c9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd4c9: mov eax, esi */
  eax = esi;
/* 6fd4cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd4cc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd4e0(void) {
  LOAD_REGS();
L_6fd4e0: /* 6fd4e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd4e1: mov esi, ecx */
  esi = ecx;
/* 6fd4e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd4e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd4e9: mov eax, esi */
  eax = esi;
/* 6fd4eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd4ec: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd500(void) {
  LOAD_REGS();
L_6fd500: /* 6fd500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd501: mov esi, ecx */
  esi = ecx;
/* 6fd503: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd509u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd509: mov eax, esi */
  eax = esi;
/* 6fd50b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd50c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd520(void) {
  LOAD_REGS();
L_6fd520: /* 6fd520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd521: mov esi, ecx */
  esi = ecx;
/* 6fd523: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd529u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd529: mov eax, esi */
  eax = esi;
/* 6fd52b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd52c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd540(void) {
  LOAD_REGS();
L_6fd540: /* 6fd540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd541: mov esi, ecx */
  esi = ecx;
/* 6fd543: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd549u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd549: mov eax, esi */
  eax = esi;
/* 6fd54b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd54c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd560(void) {
  LOAD_REGS();
L_6fd560: /* 6fd560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd561: mov esi, ecx */
  esi = ecx;
/* 6fd563: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd569u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd569: mov eax, esi */
  eax = esi;
/* 6fd56b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd56c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd580(void) {
  LOAD_REGS();
L_6fd580: /* 6fd580: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fd584: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fd586: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fd589: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fd58b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd5a0(void) {
  LOAD_REGS();
L_6fd5a0: /* 6fd5a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd5a1: mov esi, ecx */
  esi = ecx;
/* 6fd5a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd5a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd5a9: mov eax, esi */
  eax = esi;
/* 6fd5ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd5ac: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd5c0(void) {
  LOAD_REGS();
L_6fd5c0: /* 6fd5c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd5c1: mov esi, ecx */
  esi = ecx;
/* 6fd5c3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd5c9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd5c9: mov eax, esi */
  eax = esi;
/* 6fd5cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd5cc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd5e0(void) {
  LOAD_REGS();
L_6fd5e0: /* 6fd5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd5e1: mov esi, ecx */
  esi = ecx;
/* 6fd5e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd5e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd5e9: mov eax, esi */
  eax = esi;
/* 6fd5eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd5ec: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd600(void) {
  LOAD_REGS();
L_6fd600: /* 6fd600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd601: mov esi, ecx */
  esi = ecx;
/* 6fd603: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd609u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd609: mov eax, esi */
  eax = esi;
/* 6fd60b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd60c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd620(void) {
  LOAD_REGS();
L_6fd620: /* 6fd620: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd621: mov esi, ecx */
  esi = ecx;
/* 6fd623: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd629u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd629: mov eax, esi */
  eax = esi;
/* 6fd62b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd62c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd640(void) {
  LOAD_REGS();
L_6fd640: /* 6fd640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd641: mov esi, ecx */
  esi = ecx;
/* 6fd643: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd649u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd649: mov eax, esi */
  eax = esi;
/* 6fd64b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd64c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd660(void) {
  LOAD_REGS();
L_6fd660: /* 6fd660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd661: mov esi, ecx */
  esi = ecx;
/* 6fd663: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd669u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd669: mov eax, esi */
  eax = esi;
/* 6fd66b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd66c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd680(void) {
  LOAD_REGS();
L_6fd680: /* 6fd680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd681: mov esi, ecx */
  esi = ecx;
/* 6fd683: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd689u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd689: mov eax, esi */
  eax = esi;
/* 6fd68b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd68c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd6a0(void) {
  LOAD_REGS();
L_6fd6a0: /* 6fd6a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd6a1: mov esi, ecx */
  esi = ecx;
/* 6fd6a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd6a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd6a9: mov eax, esi */
  eax = esi;
/* 6fd6ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd6ac: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd6c0(void) {
  LOAD_REGS();
L_6fd6c0: /* 6fd6c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fd6c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fd6c6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fd6c9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fd6cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd6e0(void) {
  LOAD_REGS();
L_6fd6e0: /* 6fd6e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd6e1: mov esi, ecx */
  esi = ecx;
/* 6fd6e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd6e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd6e9: mov eax, esi */
  eax = esi;
/* 6fd6eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd6ec: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd700(void) {
  LOAD_REGS();
L_6fd700: /* 6fd700: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fd702: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fd706: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fd709: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd720(void) {
  LOAD_REGS();
L_6fd720: /* 6fd720: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fd722: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fd726: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fd729: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd740(void) {
  LOAD_REGS();
L_6fd740: /* 6fd740: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fd744: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fd745: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 6fd747: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x6fd74du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 6fd74d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd760(void) {
  LOAD_REGS();
L_6fd760: /* 6fd760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd761: mov esi, ecx */
  esi = ecx;
/* 6fd763: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd769u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd769: mov eax, esi */
  eax = esi;
/* 6fd76b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd76c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd780(void) {
  LOAD_REGS();
L_6fd780: /* 6fd780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd781: mov esi, ecx */
  esi = ecx;
/* 6fd783: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd789u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd789: mov eax, esi */
  eax = esi;
/* 6fd78b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd78c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd7a0(void) {
  LOAD_REGS();
L_6fd7a0: /* 6fd7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd7a1: mov esi, ecx */
  esi = ecx;
/* 6fd7a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd7a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd7a9: mov eax, esi */
  eax = esi;
/* 6fd7ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd7ac: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd7c0(void) {
  LOAD_REGS();
L_6fd7c0: /* 6fd7c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd7c1: mov esi, ecx */
  esi = ecx;
/* 6fd7c3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd7c9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd7c9: mov eax, esi */
  eax = esi;
/* 6fd7cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd7cc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd7e0(void) {
  LOAD_REGS();
L_6fd7e0: /* 6fd7e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd7e1: mov esi, ecx */
  esi = ecx;
/* 6fd7e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd7e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd7e9: mov eax, esi */
  eax = esi;
/* 6fd7eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd7ec: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd800(void) {
  LOAD_REGS();
L_6fd800: /* 6fd800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd801: mov esi, ecx */
  esi = ecx;
/* 6fd803: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd809u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd809: mov eax, esi */
  eax = esi;
/* 6fd80b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd80c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd820(void) {
  LOAD_REGS();
L_6fd820: /* 6fd820: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd821: mov esi, ecx */
  esi = ecx;
/* 6fd823: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd829u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd829: mov eax, esi */
  eax = esi;
/* 6fd82b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd82c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd840(void) {
  LOAD_REGS();
L_6fd840: /* 6fd840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd841: mov esi, ecx */
  esi = ecx;
/* 6fd843: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd849u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd849: mov eax, esi */
  eax = esi;
/* 6fd84b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd84c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd860(void) {
  LOAD_REGS();
L_6fd860: /* 6fd860: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd861: mov esi, ecx */
  esi = ecx;
/* 6fd863: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fd869u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fd869: mov eax, esi */
  eax = esi;
/* 6fd86b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd86c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd880(void) {
  LOAD_REGS();
L_6fd880: /* 6fd880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fd884: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd885: mov esi, ecx */
  esi = ecx;
/* 6fd887: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fd888: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6fd88b: call dword ptr [0xcfa39c] */
  esp -= 4; W32(esp, 0x6fd891u); SPILL(); f_4e1082(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@H@Z */ RELOAD();
/* 6fd891: xor eax, eax */
  eax = 0;
/* 6fd893: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 6fd896: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 6fd899: mov dword ptr [esi], 0x9f76ac */
  W32((uint32_t)(esi), 0x9f76acu);
/* 6fd89f: mov eax, esi */
  eax = esi;
/* 6fd8a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd8a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fd8c0(void) {
  LOAD_REGS();
L_6fd8c0: /* 6fd8c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fd8c1: mov ebp, esp */
  ebp = esp;
/* 6fd8c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6fd8c5: push 0x9c1408 */
  { uint32_t v = 0x9c1408u; esp -= 4; W32(esp, v); }
/* 6fd8ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6fd8d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fd8d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6fd8d8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6fd8db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fd8dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd8dd: mov esi, ecx */
  esi = ecx;
/* 6fd8df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fd8e0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 6fd8e3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 6fd8e6: mov dword ptr [esi], 0x9f76ac */
  W32((uint32_t)(esi), 0x9f76acu);
/* 6fd8ec: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 6fd8ef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6fd8f1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 6fd8f8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 6fd8fc: je 0x6fd904 */
  if (zf) goto L_6fd904;
L_6fd8fe: /* 6fd8fe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fd900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd901: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x6fd904u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fd904: /* 6fd904: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6fd907: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 6fd90e: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x6fd914u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 6fd914: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 6fd917: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fd918: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd919: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6fd920: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fd921: mov esp, ebp */
  esp = ebp;
/* 6fd923: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fd924: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd925(void) {
  LOAD_REGS();
L_6fd925: /* 6fd925: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 6fd928: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 6fd92d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 6fd930: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fd931: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 6fd934: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6fd939u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_6fd939(); return;
}

void f_6fd939(void) {
  LOAD_REGS();
L_6fd939: /* 6fd939: push 0x9f7b00 */
  { uint32_t v = 0x9f7b00u; esp -= 4; W32(esp, v); }
/* 6fd93e: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 6fd943: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x6fd949u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 6fd949: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fd94c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fd94e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fd950: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6fd955u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_6fd955: guest_badaddr(0x6fd955); return;
}

void f_6fd990(void) {
  LOAD_REGS();
L_6fd990: /* 6fd990: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fd991: mov ebp, esp */
  ebp = esp;
/* 6fd993: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6fd995: push 0x9c1420 */
  { uint32_t v = 0x9c1420u; esp -= 4; W32(esp, v); }
/* 6fd99a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6fd9a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fd9a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6fd9a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6fd9ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fd9ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fd9ad: mov esi, ecx */
  esi = ecx;
/* 6fd9af: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 6fd9b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6fd9b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fd9b5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 6fd9b8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 6fd9bf: jge 0x6fd9d4 */
  if ((sf == of)) goto L_6fd9d4;
L_6fd9c1: /* 6fd9c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fd9c3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6fd9c6: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x6fd9ccu); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 6fd9cc: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 6fd9cf: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 6fd9d1: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
L_6fd9d4: /* 6fd9d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 6fd9d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fd9d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fd9d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6fd9e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fd9e1: mov esp, ebp */
  esp = ebp;
/* 6fd9e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fd9e4: ret  */
  esp += 4; SPILL(); return;
}

void f_6fd9e5(void) {
  LOAD_REGS();
L_6fd9e5: /* 6fd9e5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 6fd9e8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 6fd9ed: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 6fd9f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fd9f1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 6fd9f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6fd9f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_6fd9f9(); return;
}

void f_6fd9f9(void) {
  LOAD_REGS();
L_6fd9f9: /* 6fd9f9: push 0x9f7b3c */
  { uint32_t v = 0x9f7b3cu; esp -= 4; W32(esp, v); }
/* 6fd9fe: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 6fda03: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x6fda09u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 6fda09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fda0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fda0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fda10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6fda15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_6fda15: guest_badaddr(0x6fda15); return;
}

void f_6fda50(void) {
  LOAD_REGS();
L_6fda50: /* 6fda50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fda51: mov esi, ecx */
  esi = ecx;
/* 6fda53: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fda59u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fda59: mov eax, esi */
  eax = esi;
/* 6fda5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fda5c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fda70(void) {
  LOAD_REGS();
L_6fda70: /* 6fda70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fda71: mov esi, ecx */
  esi = ecx;
/* 6fda73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fda79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fda79: mov eax, esi */
  eax = esi;
/* 6fda7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fda7c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fda90(void) {
  LOAD_REGS();
L_6fda90: /* 6fda90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fda91: mov esi, ecx */
  esi = ecx;
/* 6fda93: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fda99u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fda99: mov eax, esi */
  eax = esi;
/* 6fda9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fda9c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdab0(void) {
  LOAD_REGS();
L_6fdab0: /* 6fdab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdab1: mov esi, ecx */
  esi = ecx;
/* 6fdab3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdab9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdab9: mov eax, esi */
  eax = esi;
/* 6fdabb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdabc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdad0(void) {
  LOAD_REGS();
L_6fdad0: /* 6fdad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdad1: mov esi, ecx */
  esi = ecx;
/* 6fdad3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdad9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdad9: mov eax, esi */
  eax = esi;
/* 6fdadb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdadc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdaf0(void) {
  LOAD_REGS();
L_6fdaf0: /* 6fdaf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdaf1: mov esi, ecx */
  esi = ecx;
/* 6fdaf3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdaf9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdaf9: mov eax, esi */
  eax = esi;
/* 6fdafb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdafc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdb10(void) {
  LOAD_REGS();
L_6fdb10: /* 6fdb10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdb11: mov esi, ecx */
  esi = ecx;
/* 6fdb13: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdb19u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdb19: mov eax, esi */
  eax = esi;
/* 6fdb1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdb1c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdb30(void) {
  LOAD_REGS();
L_6fdb30: /* 6fdb30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdb31: mov esi, ecx */
  esi = ecx;
/* 6fdb33: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdb39u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdb39: mov eax, esi */
  eax = esi;
/* 6fdb3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdb3c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdb50(void) {
  LOAD_REGS();
L_6fdb50: /* 6fdb50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdb51: mov esi, ecx */
  esi = ecx;
/* 6fdb53: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdb59u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdb59: mov eax, esi */
  eax = esi;
/* 6fdb5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdb5c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdb70(void) {
  LOAD_REGS();
L_6fdb70: /* 6fdb70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdb71: mov esi, ecx */
  esi = ecx;
/* 6fdb73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdb79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdb79: mov eax, esi */
  eax = esi;
/* 6fdb7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdb7c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdb90(void) {
  LOAD_REGS();
L_6fdb90: /* 6fdb90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdb91: mov esi, ecx */
  esi = ecx;
/* 6fdb93: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdb99u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdb99: mov eax, esi */
  eax = esi;
/* 6fdb9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdb9c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdbb0(void) {
  LOAD_REGS();
L_6fdbb0: /* 6fdbb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fdbb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fdbb6: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 6fdbb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fdbbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fdbd0(void) {
  LOAD_REGS();
L_6fdbd0: /* 6fdbd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdbd1: mov esi, ecx */
  esi = ecx;
/* 6fdbd3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdbd9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdbd9: mov eax, esi */
  eax = esi;
/* 6fdbdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdbdc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdbf0(void) {
  LOAD_REGS();
L_6fdbf0: /* 6fdbf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fdbf4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fdbf6: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 6fdbf9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fdbfb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fdc10(void) {
  LOAD_REGS();
L_6fdc10: /* 6fdc10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdc11: mov esi, ecx */
  esi = ecx;
/* 6fdc13: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdc19u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdc19: mov eax, esi */
  eax = esi;
/* 6fdc1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdc1c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdc30(void) {
  LOAD_REGS();
L_6fdc30: /* 6fdc30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fdc34: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fdc36: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 6fdc39: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fdc3c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fdc50(void) {
  LOAD_REGS();
L_6fdc50: /* 6fdc50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdc51: mov esi, ecx */
  esi = ecx;
/* 6fdc53: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdc59u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdc59: mov eax, esi */
  eax = esi;
/* 6fdc5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdc5c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdc70(void) {
  LOAD_REGS();
L_6fdc70: /* 6fdc70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdc71: mov esi, ecx */
  esi = ecx;
/* 6fdc73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdc79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdc79: mov eax, esi */
  eax = esi;
/* 6fdc7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdc7c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdc90(void) {
  LOAD_REGS();
L_6fdc90: /* 6fdc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdc91: mov esi, ecx */
  esi = ecx;
/* 6fdc93: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdc99u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdc99: mov eax, esi */
  eax = esi;
/* 6fdc9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdc9c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdcb0(void) {
  LOAD_REGS();
L_6fdcb0: /* 6fdcb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fdcb4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fdcb6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fdcb9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fdcbc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fdcd0(void) {
  LOAD_REGS();
L_6fdcd0: /* 6fdcd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdcd1: mov esi, ecx */
  esi = ecx;
/* 6fdcd3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdcd9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdcd9: mov eax, esi */
  eax = esi;
/* 6fdcdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdcdc: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdcf0(void) {
  LOAD_REGS();
L_6fdcf0: /* 6fdcf0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fdcf2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fdcf6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6fdcf9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fdd10(void) {
  LOAD_REGS();
L_6fdd10: /* 6fdd10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdd11: mov esi, ecx */
  esi = ecx;
/* 6fdd13: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdd19u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdd19: mov eax, esi */
  eax = esi;
/* 6fdd1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdd1c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdd30(void) {
  LOAD_REGS();
L_6fdd30: /* 6fdd30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fdd34: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fdd36: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fdd39: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fdd3c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fdd50(void) {
  LOAD_REGS();
L_6fdd50: /* 6fdd50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdd51: mov esi, ecx */
  esi = ecx;
/* 6fdd53: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x6fdd59u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 6fdd59: mov eax, esi */
  eax = esi;
/* 6fdd5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdd5c: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdd70(void) {
  LOAD_REGS();
L_6fdd70: /* 6fdd70: mov eax, ecx */
  eax = ecx;
/* 6fdd72: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdd90(void) {
  LOAD_REGS();
L_6fdd90: /* 6fdd90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdd91: mov esi, ecx */
  esi = ecx;
/* 6fdd93: call 0x6c29a5 */
  esp -= 4; W32(esp, 0x6fdd98u); SPILL(); f_6c29a5(); if (g_unwind) return; RELOAD();
/* 6fdd98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fdd9d: je 0x6fddac */
  if (zf) goto L_6fddac;
L_6fdd9f: /* 6fdd9f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fdda4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fdda6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fdda8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdda9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fddacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fddac: /* 6fddac: mov eax, esi */
  eax = esi;
/* 6fddae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fddaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fddd0(void) {
  LOAD_REGS();
L_6fddd0: /* 6fddd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fddd1: mov esi, ecx */
  esi = ecx;
/* 6fddd3: call 0x6cc509 */
  esp -= 4; W32(esp, 0x6fddd8u); SPILL(); f_6cc509(); if (g_unwind) return; RELOAD();
/* 6fddd8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fdddd: je 0x6fddec */
  if (zf) goto L_6fddec;
L_6fdddf: /* 6fdddf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fdde4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fdde6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fdde8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdde9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fddecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fddec: /* 6fddec: mov eax, esi */
  eax = esi;
/* 6fddee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fddef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fde10(void) {
  LOAD_REGS();
L_6fde10: /* 6fde10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fde11: mov esi, ecx */
  esi = ecx;
/* 6fde13: call 0x6c7abd */
  esp -= 4; W32(esp, 0x6fde18u); SPILL(); f_6c7abd(); if (g_unwind) return; RELOAD();
/* 6fde18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6fde1d: je 0x6fde2c */
  if (zf) goto L_6fde2c;
L_6fde1f: /* 6fde1f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 6fde24: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6fde26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fde28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fde29: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6fde2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6fde2c: /* 6fde2c: mov eax, esi */
  eax = esi;
/* 6fde2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fde2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fde50(void) {
  LOAD_REGS();
L_6fde50: /* 6fde50: mov eax, ecx */
  eax = ecx;
/* 6fde52: ret  */
  esp += 4; SPILL(); return;
}

void f_6fde70(void) {
  LOAD_REGS();
L_6fde70: /* 6fde70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6fde72: push 0x9c1439 */
  { uint32_t v = 0x9c1439u; esp -= 4; W32(esp, v); }
/* 6fde77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6fde7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fde7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6fde85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6fde86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fde87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fde88: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 6fde8c: mov esi, ecx */
  esi = ecx;
/* 6fde8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fde8f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 6fde93: call dword ptr [0xcfa320] */
  esp -= 4; W32(esp, 0x6fde99u); SPILL(); f_4e3945(); if (g_unwind) return; /* Core!??0FInterpCurve@@QAE@ABV0@@Z */ RELOAD();
/* 6fde99: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 6fde9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fde9d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6fdea0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 6fdea8: call dword ptr [0xcfa320] */
  esp -= 4; W32(esp, 0x6fdeaeu); SPILL(); f_4e3945(); if (g_unwind) return; /* Core!??0FInterpCurve@@QAE@ABV0@@Z */ RELOAD();
/* 6fdeae: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 6fdeb1: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 6fdeb4: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 6fdeb7: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 6fdeba: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 6fdebd: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 6fdec0: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 6fdec3: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 6fdec6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6fdeca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fdecb: mov eax, esi */
  eax = esi;
/* 6fdecd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdece: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6fded5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6fded8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fdf00(void) {
  LOAD_REGS();
L_6fdf00: /* 6fdf00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdf01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fdf02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fdf06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fdf07: mov esi, ecx */
  esi = ecx;
/* 6fdf09: call dword ptr [0xcfa324] */
  esp -= 4; W32(esp, 0x6fdf0fu); SPILL(); f_4e3ca1(); if (g_unwind) return; /* Core!??4FInterpCurve@@QAEXABV0@@Z */ RELOAD();
/* 6fdf0f: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 6fdf12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fdf13: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6fdf16: call dword ptr [0xcfa324] */
  esp -= 4; W32(esp, 0x6fdf1cu); SPILL(); f_4e3ca1(); if (g_unwind) return; /* Core!??4FInterpCurve@@QAEXABV0@@Z */ RELOAD();
/* 6fdf1c: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 6fdf1f: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 6fdf22: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 6fdf25: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 6fdf28: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 6fdf2b: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 6fdf2e: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 6fdf31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fdf32: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 6fdf35: mov eax, esi */
  eax = esi;
/* 6fdf37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdf38: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fdf50(void) {
  LOAD_REGS();
L_6fdf50: /* 6fdf50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdf51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fdf52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fdf56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fdf57: mov esi, ecx */
  esi = ecx;
/* 6fdf59: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x6fdf5fu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 6fdf5f: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 6fdf62: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 6fdf65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fdf66: mov eax, esi */
  eax = esi;
/* 6fdf68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdf69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fdf80(void) {
  LOAD_REGS();
L_6fdf80: /* 6fdf80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdf81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fdf82: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fdf86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fdf87: mov esi, ecx */
  esi = ecx;
/* 6fdf89: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x6fdf8fu); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6fdf8f: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 6fdf92: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 6fdf95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fdf96: mov eax, esi */
  eax = esi;
/* 6fdf98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fdf99: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fdfb0(void) {
  LOAD_REGS();
L_6fdfb0: /* 6fdfb0: mov eax, ecx */
  eax = ecx;
/* 6fdfb2: ret  */
  esp += 4; SPILL(); return;
}

void f_6fdfd0(void) {
  LOAD_REGS();
L_6fdfd0: /* 6fdfd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fdfd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fdfd2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fdfd6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 6fdfd8: mov esi, ecx */
  esi = ecx;
/* 6fdfda: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 6fdfdc: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 6fdfdf: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 6fdfe2: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 6fdfe5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fdfe6: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 6fdfe9: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x6fdfefu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 6fdfef: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 6fdff2: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 6fdff5: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 6fdff8: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 6fdffb: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 6fdffe: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 6fe001: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 6fe004: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 6fe007: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fe008: mov eax, esi */
  eax = esi;
/* 6fe00a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe00b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe020(void) {
  LOAD_REGS();
L_6fe020: /* 6fe020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fe021: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fe022: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6fe026: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 6fe028: mov esi, ecx */
  esi = ecx;
/* 6fe02a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 6fe02c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 6fe02f: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 6fe032: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 6fe035: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6fe036: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 6fe039: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x6fe03fu); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6fe03f: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 6fe042: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 6fe045: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 6fe048: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 6fe04b: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 6fe04e: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 6fe051: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 6fe054: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 6fe057: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fe058: mov eax, esi */
  eax = esi;
/* 6fe05a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe05b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe070(void) {
  LOAD_REGS();
L_6fe070: /* 6fe070: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe074: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe076: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fe079: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fe07c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe090(void) {
  LOAD_REGS();
L_6fe090: /* 6fe090: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe094: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe096: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fe099: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fe09c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe0b0(void) {
  LOAD_REGS();
L_6fe0b0: /* 6fe0b0: mov eax, 1 */
  eax = 0x1u;
/* 6fe0b5: ret  */
  esp += 4; SPILL(); return;
}

void f_6fe0d0(void) {
  LOAD_REGS();
L_6fe0d0: /* 6fe0d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fe0d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fe0d3: mov esi, ecx */
  esi = ecx;
/* 6fe0d5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6fe0dbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6fe0db: mov eax, esi */
  eax = esi;
/* 6fe0dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe0de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe100(void) {
  LOAD_REGS();
L_6fe100: /* 6fe100: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe102: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe106: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe109: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe120(void) {
  LOAD_REGS();
L_6fe120: /* 6fe120: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe122: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe126: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe129: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe140(void) {
  LOAD_REGS();
L_6fe140: /* 6fe140: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe144: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 6fe146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe147: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fe14du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fe14d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe160(void) {
  LOAD_REGS();
L_6fe160: /* 6fe160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fe161: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fe162: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 6fe168: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fe169: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fe16a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6fe16e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6fe170: mov esi, ecx */
  esi = ecx;
/* 6fe172: jge 0x6fe188 */
  if ((sf == of)) goto L_6fe188;
L_6fe174: /* 6fe174: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 6fe179: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fe17e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 6fe183: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fe185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fe185: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fe188: /* 6fe188: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fe18b: jle 0x6fe1a1 */
  if ((zf || sf != of)) goto L_6fe1a1;
L_6fe18d: /* 6fe18d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 6fe192: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fe197: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 6fe19c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fe19eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fe19e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fe1a1: /* 6fe1a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 6fe1a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 6fe1a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 6fe1ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fe1ad: jle 0x6fe1c3 */
  if ((zf || sf != of)) goto L_6fe1c3;
L_6fe1af: /* 6fe1af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 6fe1b4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fe1b9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 6fe1be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fe1c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fe1c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fe1c3: /* 6fe1c3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 6fe1c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fe1c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fe1c7: mov ecx, esi */
  ecx = esi;
/* 6fe1c9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x6fe1cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 6fe1cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fe1d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe1d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fe1d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fe1d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6fe200(void) {
  LOAD_REGS();
L_6fe200: /* 6fe200: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe202: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe206: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe209: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe220(void) {
  LOAD_REGS();
L_6fe220: /* 6fe220: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe222: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe226: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe229: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe240(void) {
  LOAD_REGS();
L_6fe240: /* 6fe240: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fe241: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fe242: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 6fe248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fe249: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fe24a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6fe24e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6fe250: mov esi, ecx */
  esi = ecx;
/* 6fe252: jge 0x6fe268 */
  if ((sf == of)) goto L_6fe268;
L_6fe254: /* 6fe254: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 6fe259: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fe25e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 6fe263: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fe265u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fe265: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fe268: /* 6fe268: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fe26b: jle 0x6fe281 */
  if ((zf || sf != of)) goto L_6fe281;
L_6fe26d: /* 6fe26d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 6fe272: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fe277: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 6fe27c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fe27eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fe27e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fe281: /* 6fe281: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 6fe285: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 6fe288: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 6fe28b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fe28d: jle 0x6fe2a3 */
  if ((zf || sf != of)) goto L_6fe2a3;
L_6fe28f: /* 6fe28f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 6fe294: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fe299: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 6fe29e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fe2a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fe2a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fe2a3: /* 6fe2a3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 6fe2a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fe2a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fe2a7: mov ecx, esi */
  ecx = esi;
/* 6fe2a9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x6fe2afu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 6fe2af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fe2b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe2b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fe2b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fe2b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6fe2e0(void) {
  LOAD_REGS();
L_6fe2e0: /* 6fe2e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe2e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe2e6: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 6fe2e9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe2eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe300(void) {
  LOAD_REGS();
L_6fe300: /* 6fe300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe304: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe306: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 6fe309: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe30b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe320(void) {
  LOAD_REGS();
L_6fe320: /* 6fe320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe324: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fe325: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 6fe327: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe328: mov esi, ecx */
  esi = ecx;
/* 6fe32a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x6fe330u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 6fe330: mov eax, esi */
  eax = esi;
/* 6fe332: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe333: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe350(void) {
  LOAD_REGS();
L_6fe350: /* 6fe350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fe351: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fe353: mov esi, ecx */
  esi = ecx;
/* 6fe355: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6fe35bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6fe35b: mov eax, esi */
  eax = esi;
/* 6fe35d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe35e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe380(void) {
  LOAD_REGS();
L_6fe380: /* 6fe380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe384: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe386: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fe389: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fe38c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe3a0(void) {
  LOAD_REGS();
L_6fe3a0: /* 6fe3a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe3a4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 6fe3a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe3a7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fe3adu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fe3ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe3c0(void) {
  LOAD_REGS();
L_6fe3c0: /* 6fe3c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe3c4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 6fe3c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe3c7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x6fe3cdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 6fe3cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe3e0(void) {
  LOAD_REGS();
L_6fe3e0: /* 6fe3e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe3e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe3e6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe3e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe400(void) {
  LOAD_REGS();
L_6fe400: /* 6fe400: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fe401: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6fe402: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 6fe408: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fe409: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fe40a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6fe40e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6fe410: mov esi, ecx */
  esi = ecx;
/* 6fe412: jge 0x6fe428 */
  if ((sf == of)) goto L_6fe428;
L_6fe414: /* 6fe414: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 6fe419: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fe41e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 6fe423: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fe425u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fe425: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fe428: /* 6fe428: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fe42b: jle 0x6fe441 */
  if ((zf || sf != of)) goto L_6fe441;
L_6fe42d: /* 6fe42d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 6fe432: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fe437: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 6fe43c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fe43eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fe43e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fe441: /* 6fe441: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 6fe445: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 6fe448: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 6fe44b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6fe44d: jle 0x6fe463 */
  if ((zf || sf != of)) goto L_6fe463;
L_6fe44f: /* 6fe44f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 6fe454: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 6fe459: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 6fe45e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x6fe460u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6fe460: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6fe463: /* 6fe463: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 6fe465: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6fe466: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6fe467: mov ecx, esi */
  ecx = esi;
/* 6fe469: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x6fe46fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 6fe46f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6fe470: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe471: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6fe472: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6fe473: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6fe4a0(void) {
  LOAD_REGS();
L_6fe4a0: /* 6fe4a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe4a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe4a5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 6fe4a7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x6fe4adu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 6fe4ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe4c0(void) {
  LOAD_REGS();
L_6fe4c0: /* 6fe4c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fe4c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fe4c3: mov esi, ecx */
  esi = ecx;
/* 6fe4c5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6fe4cbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6fe4cb: mov eax, esi */
  eax = esi;
/* 6fe4cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe4ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe4f0(void) {
  LOAD_REGS();
L_6fe4f0: /* 6fe4f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe4f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe4f6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe4f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe510(void) {
  LOAD_REGS();
L_6fe510: /* 6fe510: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe512: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe516: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe519: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe530(void) {
  LOAD_REGS();
L_6fe530: /* 6fe530: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe534: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe536: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fe539: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fe53c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe550(void) {
  LOAD_REGS();
L_6fe550: /* 6fe550: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe554: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe556: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fe559: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fe55c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe570(void) {
  LOAD_REGS();
L_6fe570: /* 6fe570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe574: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe576: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 6fe579: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe57b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe590(void) {
  LOAD_REGS();
L_6fe590: /* 6fe590: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe594: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe596: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 6fe599: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe59b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe5b0(void) {
  LOAD_REGS();
L_6fe5b0: /* 6fe5b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fe5b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fe5b3: mov esi, ecx */
  esi = ecx;
/* 6fe5b5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6fe5bbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6fe5bb: mov eax, esi */
  eax = esi;
/* 6fe5bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe5be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe5e0(void) {
  LOAD_REGS();
L_6fe5e0: /* 6fe5e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe5e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe5e6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe5e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe600(void) {
  LOAD_REGS();
L_6fe600: /* 6fe600: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe602: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe606: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe609: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe620(void) {
  LOAD_REGS();
L_6fe620: /* 6fe620: jmp 0x6c9246 */
  SPILL(); f_6c9246(); return;
}

void f_6fe640(void) {
  LOAD_REGS();
L_6fe640: /* 6fe640: ret  */
  esp += 4; SPILL(); return;
}

void f_6fe660(void) {
  LOAD_REGS();
L_6fe660: /* 6fe660: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe664: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fe665: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 6fe66a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe66b: mov esi, ecx */
  esi = ecx;
/* 6fe66d: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x6fe673u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 6fe673: mov eax, esi */
  eax = esi;
/* 6fe675: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fe676: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe690(void) {
  LOAD_REGS();
L_6fe690: /* 6fe690: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe694: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe696: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 6fe69c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe69e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe6c0(void) {
  LOAD_REGS();
L_6fe6c0: /* 6fe6c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe6c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe6c6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 6fe6c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe6cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe6e0(void) {
  LOAD_REGS();
L_6fe6e0: /* 6fe6e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe6e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe6e6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 6fe6e9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe6eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe700(void) {
  LOAD_REGS();
L_6fe700: /* 6fe700: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe704: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe706: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fe709: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe70b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe720(void) {
  LOAD_REGS();
L_6fe720: /* 6fe720: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe724: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe726: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fe729: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe72b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe740(void) {
  LOAD_REGS();
L_6fe740: /* 6fe740: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe744: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe746: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 6fe749: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe74b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe760(void) {
  LOAD_REGS();
L_6fe760: /* 6fe760: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe764: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6fe766: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe767: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fe76du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fe76d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe780(void) {
  LOAD_REGS();
L_6fe780: /* 6fe780: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe782: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe786: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe789: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe7a0(void) {
  LOAD_REGS();
L_6fe7a0: /* 6fe7a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe7a4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 6fe7a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe7a7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fe7adu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fe7ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe7c0(void) {
  LOAD_REGS();
L_6fe7c0: /* 6fe7c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe7c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe7c6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6fe7c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe7e0(void) {
  LOAD_REGS();
L_6fe7e0: /* 6fe7e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe7e4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 6fe7e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe7e7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fe7edu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fe7ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe800(void) {
  LOAD_REGS();
L_6fe800: /* 6fe800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe804: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe806: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fe809: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fe80c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe820(void) {
  LOAD_REGS();
L_6fe820: /* 6fe820: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe824: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6fe826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe827: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fe82du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fe82d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe840(void) {
  LOAD_REGS();
L_6fe840: /* 6fe840: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe844: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe846: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fe849: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe84b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe860(void) {
  LOAD_REGS();
L_6fe860: /* 6fe860: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe864: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe866: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fe869: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe86b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe880(void) {
  LOAD_REGS();
L_6fe880: /* 6fe880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe884: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe886: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fe889: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe88b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe8a0(void) {
  LOAD_REGS();
L_6fe8a0: /* 6fe8a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe8a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe8a6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fe8a9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe8ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe8c0(void) {
  LOAD_REGS();
L_6fe8c0: /* 6fe8c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fe8c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fe8c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fe8c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe8e0(void) {
  LOAD_REGS();
L_6fe8e0: /* 6fe8e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe8e4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 6fe8e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe8e7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x6fe8edu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 6fe8ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe900(void) {
  LOAD_REGS();
L_6fe900: /* 6fe900: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe904: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe906: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 6fe909: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe90b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe920(void) {
  LOAD_REGS();
L_6fe920: /* 6fe920: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe924: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fe926: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 6fe929: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fe92b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe940(void) {
  LOAD_REGS();
L_6fe940: /* 6fe940: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe944: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 6fe946: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fe947: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x6fe94du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 6fe94d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe960(void) {
  LOAD_REGS();
L_6fe960: /* 6fe960: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe964: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe966: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fe969: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fe96c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe980(void) {
  LOAD_REGS();
L_6fe980: /* 6fe980: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe984: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe986: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fe989: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fe98c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe9a0(void) {
  LOAD_REGS();
L_6fe9a0: /* 6fe9a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe9a4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe9a6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fe9a9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fe9ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe9c0(void) {
  LOAD_REGS();
L_6fe9c0: /* 6fe9c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe9c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe9c6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fe9c9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fe9cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fe9e0(void) {
  LOAD_REGS();
L_6fe9e0: /* 6fe9e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fe9e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fe9e6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fe9e9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fe9ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fea00(void) {
  LOAD_REGS();
L_6fea00: /* 6fea00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fea02: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fea06: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fea09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fea20(void) {
  LOAD_REGS();
L_6fea20: /* 6fea20: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fea22: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fea26: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fea29: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fea40(void) {
  LOAD_REGS();
L_6fea40: /* 6fea40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fea42: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fea46: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6fea49: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fea60(void) {
  LOAD_REGS();
L_6fea60: /* 6fea60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fea64: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fea66: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fea69: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fea6c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fea80(void) {
  LOAD_REGS();
L_6fea80: /* 6fea80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fea84: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 6fea86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fea87: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fea8du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fea8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6feaa0(void) {
  LOAD_REGS();
L_6feaa0: /* 6feaa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6feaa4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6feaa6: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 6feaa9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6feaab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6feac0(void) {
  LOAD_REGS();
L_6feac0: /* 6feac0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6feac4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6feac6: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 6feac9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6feacb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6feae0(void) {
  LOAD_REGS();
L_6feae0: /* 6feae0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6feae4: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 6feae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6feae7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6feaedu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6feaed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6feb00(void) {
  LOAD_REGS();
L_6feb00: /* 6feb00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6feb04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6feb05: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 6feb07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6feb08: mov esi, ecx */
  esi = ecx;
/* 6feb0a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x6feb10u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 6feb10: mov eax, esi */
  eax = esi;
/* 6feb12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6feb13: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6feb30(void) {
  LOAD_REGS();
L_6feb30: /* 6feb30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6feb31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6feb33: mov esi, ecx */
  esi = ecx;
/* 6feb35: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6feb3bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6feb3b: mov eax, esi */
  eax = esi;
/* 6feb3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6feb3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6feb60(void) {
  LOAD_REGS();
L_6feb60: /* 6feb60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6feb62: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6feb66: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6feb69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6feb80(void) {
  LOAD_REGS();
L_6feb80: /* 6feb80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6feb84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6feb85: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 6feb87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6feb88: mov esi, ecx */
  esi = ecx;
/* 6feb8a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x6feb90u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 6feb90: mov eax, esi */
  eax = esi;
/* 6feb92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6feb93: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6febb0(void) {
  LOAD_REGS();
L_6febb0: /* 6febb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6febb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6febb6: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 6febb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6febbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6febd0(void) {
  LOAD_REGS();
L_6febd0: /* 6febd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6febd4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6febd6: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 6febd9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6febdb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6febf0(void) {
  LOAD_REGS();
L_6febf0: /* 6febf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6febf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6febf5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 6febf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6febf8: mov esi, ecx */
  esi = ecx;
/* 6febfa: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x6fec00u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 6fec00: mov eax, esi */
  eax = esi;
/* 6fec02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fec03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fec20(void) {
  LOAD_REGS();
L_6fec20: /* 6fec20: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fec22: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fec26: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6fec29: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fec40(void) {
  LOAD_REGS();
L_6fec40: /* 6fec40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fec42: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fec46: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6fec49: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fec60(void) {
  LOAD_REGS();
L_6fec60: /* 6fec60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fec64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fec65: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 6fec67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fec68: mov esi, ecx */
  esi = ecx;
/* 6fec6a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x6fec70u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 6fec70: mov eax, esi */
  eax = esi;
/* 6fec72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fec73: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fec90(void) {
  LOAD_REGS();
L_6fec90: /* 6fec90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fec94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fec96: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fec99: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fec9b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fecb0(void) {
  LOAD_REGS();
L_6fecb0: /* 6fecb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fecb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fecb6: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fecb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fecbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fecd0(void) {
  LOAD_REGS();
L_6fecd0: /* 6fecd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fecd4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fecd6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fecd9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fecdc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fecf0(void) {
  LOAD_REGS();
L_6fecf0: /* 6fecf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fecf4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fecf6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6fecf9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fecfc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fed10(void) {
  LOAD_REGS();
L_6fed10: /* 6fed10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fed14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fed16: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 6fed19: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fed1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fed30(void) {
  LOAD_REGS();
L_6fed30: /* 6fed30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fed34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fed36: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 6fed39: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fed3b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fed50(void) {
  LOAD_REGS();
L_6fed50: /* 6fed50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fed54: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fed56: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 6fed59: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fed5b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fed70(void) {
  LOAD_REGS();
L_6fed70: /* 6fed70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fed74: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fed76: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 6fed79: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fed7b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fed90(void) {
  LOAD_REGS();
L_6fed90: /* 6fed90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fed94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fed96: imul eax, eax, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xa4u);
  eax = (uint32_t)r;
  }
/* 6fed9c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fed9e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fedc0(void) {
  LOAD_REGS();
L_6fedc0: /* 6fedc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fedc4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fedc6: imul eax, eax, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xa4u);
  eax = (uint32_t)r;
  }
/* 6fedcc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fedce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fedf0(void) {
  LOAD_REGS();
L_6fedf0: /* 6fedf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fedf4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fedf6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fedf9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fedfc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fee10(void) {
  LOAD_REGS();
L_6fee10: /* 6fee10: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fee12: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fee16: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fee19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fee30(void) {
  LOAD_REGS();
L_6fee30: /* 6fee30: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6fee32: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6fee36: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6fee39: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fee50(void) {
  LOAD_REGS();
L_6fee50: /* 6fee50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fee51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fee53: mov esi, ecx */
  esi = ecx;
/* 6fee55: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6fee5bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6fee5b: mov eax, esi */
  eax = esi;
/* 6fee5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fee5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fee80(void) {
  LOAD_REGS();
L_6fee80: /* 6fee80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fee84: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fee86: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fee89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fee8b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6feea0(void) {
  LOAD_REGS();
L_6feea0: /* 6feea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6feea4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6feea6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6feea9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6feeab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6feec0(void) {
  LOAD_REGS();
L_6feec0: /* 6feec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6feec4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6feec6: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* 6feec9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6feecb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6feee0(void) {
  LOAD_REGS();
L_6feee0: /* 6feee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6feee4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6feee6: imul eax, eax, 0x44 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x44u);
  eax = (uint32_t)r;
  }
/* 6feee9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6feeeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fef00(void) {
  LOAD_REGS();
L_6fef00: /* 6fef00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fef04: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6fef06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fef07: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fef0du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fef0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fef20(void) {
  LOAD_REGS();
L_6fef20: /* 6fef20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fef24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fef26: imul eax, eax, 0x4c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x4cu);
  eax = (uint32_t)r;
  }
/* 6fef29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fef2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fef40(void) {
  LOAD_REGS();
L_6fef40: /* 6fef40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fef44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fef46: imul eax, eax, 0x4c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x4cu);
  eax = (uint32_t)r;
  }
/* 6fef49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fef4b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fef60(void) {
  LOAD_REGS();
L_6fef60: /* 6fef60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fef64: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6fef66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fef67: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fef6du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fef6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fef80(void) {
  LOAD_REGS();
L_6fef80: /* 6fef80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fef84: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fef86: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 6fef89: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fef8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fefa0(void) {
  LOAD_REGS();
L_6fefa0: /* 6fefa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fefa4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fefa6: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 6fefa9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fefac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fefc0(void) {
  LOAD_REGS();
L_6fefc0: /* 6fefc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fefc4: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 6fefc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6fefc7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6fefcdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6fefcd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fefe0(void) {
  LOAD_REGS();
L_6fefe0: /* 6fefe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fefe4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fefe6: imul eax, eax, 0x58 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x58u);
  eax = (uint32_t)r;
  }
/* 6fefe9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fefeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff000(void) {
  LOAD_REGS();
L_6ff000: /* 6ff000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff004: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ff006: imul eax, eax, 0x58 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x58u);
  eax = (uint32_t)r;
  }
/* 6ff009: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ff00b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff020(void) {
  LOAD_REGS();
L_6ff020: /* 6ff020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff024: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 6ff026: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ff027: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6ff02du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6ff02d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff040(void) {
  LOAD_REGS();
L_6ff040: /* 6ff040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff041: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff043: mov esi, ecx */
  esi = ecx;
/* 6ff045: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff04bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff04b: mov eax, esi */
  eax = esi;
/* 6ff04d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff04e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff070(void) {
  LOAD_REGS();
L_6ff070: /* 6ff070: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff072: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff076: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6ff079: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff090(void) {
  LOAD_REGS();
L_6ff090: /* 6ff090: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff092: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff096: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6ff099: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff0b0(void) {
  LOAD_REGS();
L_6ff0b0: /* 6ff0b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff0b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff0b3: mov esi, ecx */
  esi = ecx;
/* 6ff0b5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff0bbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff0bb: mov eax, esi */
  eax = esi;
/* 6ff0bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff0be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff0e0(void) {
  LOAD_REGS();
L_6ff0e0: /* 6ff0e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff0e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff0e6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6ff0e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff100(void) {
  LOAD_REGS();
L_6ff100: /* 6ff100: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff102: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff106: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6ff109: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff120(void) {
  LOAD_REGS();
L_6ff120: /* 6ff120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff121: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff123: mov esi, ecx */
  esi = ecx;
/* 6ff125: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff12bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff12b: mov eax, esi */
  eax = esi;
/* 6ff12d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff12e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff150(void) {
  LOAD_REGS();
L_6ff150: /* 6ff150: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff152: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff156: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff159: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff170(void) {
  LOAD_REGS();
L_6ff170: /* 6ff170: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff172: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff176: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff179: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff190(void) {
  LOAD_REGS();
L_6ff190: /* 6ff190: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff191: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff193: mov esi, ecx */
  esi = ecx;
/* 6ff195: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff19bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff19b: mov eax, esi */
  eax = esi;
/* 6ff19d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff19e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff1c0(void) {
  LOAD_REGS();
L_6ff1c0: /* 6ff1c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff1c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff1c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff1c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff1e0(void) {
  LOAD_REGS();
L_6ff1e0: /* 6ff1e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff1e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff1e3: mov esi, ecx */
  esi = ecx;
/* 6ff1e5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff1ebu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff1eb: mov eax, esi */
  eax = esi;
/* 6ff1ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff1ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff210(void) {
  LOAD_REGS();
L_6ff210: /* 6ff210: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff214: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ff216: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ff219: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ff21b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff230(void) {
  LOAD_REGS();
L_6ff230: /* 6ff230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff234: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ff236: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ff239: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ff23b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff250(void) {
  LOAD_REGS();
L_6ff250: /* 6ff250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff251: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff253: mov esi, ecx */
  esi = ecx;
/* 6ff255: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff25bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff25b: mov eax, esi */
  eax = esi;
/* 6ff25d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff25e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff280(void) {
  LOAD_REGS();
L_6ff280: /* 6ff280: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff284: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ff286: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 6ff289: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6ff28c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff2a0(void) {
  LOAD_REGS();
L_6ff2a0: /* 6ff2a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff2a4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ff2a6: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 6ff2a9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6ff2ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff2c0(void) {
  LOAD_REGS();
L_6ff2c0: /* 6ff2c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff2c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ff2c6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6ff2c9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6ff2cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff2e0(void) {
  LOAD_REGS();
L_6ff2e0: /* 6ff2e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff2e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ff2e6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6ff2e9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6ff2ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff300(void) {
  LOAD_REGS();
L_6ff300: /* 6ff300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff304: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 6ff306: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ff307: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6ff30du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6ff30d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff320(void) {
  LOAD_REGS();
L_6ff320: /* 6ff320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff324: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ff326: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 6ff329: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ff32b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff340(void) {
  LOAD_REGS();
L_6ff340: /* 6ff340: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff344: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ff346: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 6ff349: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ff34b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff360(void) {
  LOAD_REGS();
L_6ff360: /* 6ff360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff364: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6ff366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ff367: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x6ff36du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 6ff36d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff380(void) {
  LOAD_REGS();
L_6ff380: /* 6ff380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff383: mov esi, ecx */
  esi = ecx;
/* 6ff385: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff38bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff38b: mov eax, esi */
  eax = esi;
/* 6ff38d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff38e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff3b0(void) {
  LOAD_REGS();
L_6ff3b0: /* 6ff3b0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff3b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff3b6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff3b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff3d0(void) {
  LOAD_REGS();
L_6ff3d0: /* 6ff3d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff3d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff3d6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff3d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff3f0(void) {
  LOAD_REGS();
L_6ff3f0: /* 6ff3f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff3f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff3f3: mov esi, ecx */
  esi = ecx;
/* 6ff3f5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff3fbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff3fb: mov eax, esi */
  eax = esi;
/* 6ff3fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff3fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff420(void) {
  LOAD_REGS();
L_6ff420: /* 6ff420: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff422: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff426: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff429: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff440(void) {
  LOAD_REGS();
L_6ff440: /* 6ff440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff441: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff443: mov esi, ecx */
  esi = ecx;
/* 6ff445: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff44bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff44b: mov eax, esi */
  eax = esi;
/* 6ff44d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff44e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff470(void) {
  LOAD_REGS();
L_6ff470: /* 6ff470: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff472: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff476: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff479: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff490(void) {
  LOAD_REGS();
L_6ff490: /* 6ff490: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff492: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff496: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff499: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff4b0(void) {
  LOAD_REGS();
L_6ff4b0: /* 6ff4b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff4b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff4b3: mov esi, ecx */
  esi = ecx;
/* 6ff4b5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff4bbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff4bb: mov eax, esi */
  eax = esi;
/* 6ff4bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff4be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff4e0(void) {
  LOAD_REGS();
L_6ff4e0: /* 6ff4e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff4e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff4e6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff4e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff500(void) {
  LOAD_REGS();
L_6ff500: /* 6ff500: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff502: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff506: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff509: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff520(void) {
  LOAD_REGS();
L_6ff520: /* 6ff520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff521: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff523: mov esi, ecx */
  esi = ecx;
/* 6ff525: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff52bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff52b: mov eax, esi */
  eax = esi;
/* 6ff52d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff52e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff550(void) {
  LOAD_REGS();
L_6ff550: /* 6ff550: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff552: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff556: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff559: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff570(void) {
  LOAD_REGS();
L_6ff570: /* 6ff570: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff572: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff576: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff579: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff590(void) {
  LOAD_REGS();
L_6ff590: /* 6ff590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff591: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff593: mov esi, ecx */
  esi = ecx;
/* 6ff595: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff59bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff59b: mov eax, esi */
  eax = esi;
/* 6ff59d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff59e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff5c0(void) {
  LOAD_REGS();
L_6ff5c0: /* 6ff5c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff5c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff5c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff5c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff5e0(void) {
  LOAD_REGS();
L_6ff5e0: /* 6ff5e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff5e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff5e6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff5e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff600(void) {
  LOAD_REGS();
L_6ff600: /* 6ff600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff601: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff603: mov esi, ecx */
  esi = ecx;
/* 6ff605: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff60bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff60b: mov eax, esi */
  eax = esi;
/* 6ff60d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff60e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff630(void) {
  LOAD_REGS();
L_6ff630: /* 6ff630: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff634: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ff636: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6ff639: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6ff63c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff650(void) {
  LOAD_REGS();
L_6ff650: /* 6ff650: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ff654: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ff656: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6ff659: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6ff65c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff670(void) {
  LOAD_REGS();
L_6ff670: /* 6ff670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff671: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff673: mov esi, ecx */
  esi = ecx;
/* 6ff675: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff67bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff67b: mov eax, esi */
  eax = esi;
/* 6ff67d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff67e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff6a0(void) {
  LOAD_REGS();
L_6ff6a0: /* 6ff6a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff6a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff6a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff6a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff6c0(void) {
  LOAD_REGS();
L_6ff6c0: /* 6ff6c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff6c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff6c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff6c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff6e0(void) {
  LOAD_REGS();
L_6ff6e0: /* 6ff6e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff6e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff6e3: mov esi, ecx */
  esi = ecx;
/* 6ff6e5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff6ebu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff6eb: mov eax, esi */
  eax = esi;
/* 6ff6ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff6ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff710(void) {
  LOAD_REGS();
L_6ff710: /* 6ff710: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff712: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff716: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff719: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff730(void) {
  LOAD_REGS();
L_6ff730: /* 6ff730: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff732: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff736: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff739: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff750(void) {
  LOAD_REGS();
L_6ff750: /* 6ff750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff751: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff753: mov esi, ecx */
  esi = ecx;
/* 6ff755: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff75bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff75b: mov eax, esi */
  eax = esi;
/* 6ff75d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff75e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff780(void) {
  LOAD_REGS();
L_6ff780: /* 6ff780: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff782: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff786: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff789: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff7a0(void) {
  LOAD_REGS();
L_6ff7a0: /* 6ff7a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff7a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff7a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff7a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff7c0(void) {
  LOAD_REGS();
L_6ff7c0: /* 6ff7c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff7c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff7c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff7c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff7e0(void) {
  LOAD_REGS();
L_6ff7e0: /* 6ff7e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff7e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff7e6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff7e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff800(void) {
  LOAD_REGS();
L_6ff800: /* 6ff800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff801: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff803: mov esi, ecx */
  esi = ecx;
/* 6ff805: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff80bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff80b: mov eax, esi */
  eax = esi;
/* 6ff80d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff80e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff830(void) {
  LOAD_REGS();
L_6ff830: /* 6ff830: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff832: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff836: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff839: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff850(void) {
  LOAD_REGS();
L_6ff850: /* 6ff850: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff852: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff856: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff859: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff870(void) {
  LOAD_REGS();
L_6ff870: /* 6ff870: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff873: mov esi, ecx */
  esi = ecx;
/* 6ff875: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff87bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff87b: mov eax, esi */
  eax = esi;
/* 6ff87d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff87e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff8a0(void) {
  LOAD_REGS();
L_6ff8a0: /* 6ff8a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff8a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff8a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff8a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff8c0(void) {
  LOAD_REGS();
L_6ff8c0: /* 6ff8c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff8c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff8c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff8c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff8e0(void) {
  LOAD_REGS();
L_6ff8e0: /* 6ff8e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff8e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff8e3: mov esi, ecx */
  esi = ecx;
/* 6ff8e5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff8ebu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff8eb: mov eax, esi */
  eax = esi;
/* 6ff8ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff8ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff910(void) {
  LOAD_REGS();
L_6ff910: /* 6ff910: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff912: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff916: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff919: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff930(void) {
  LOAD_REGS();
L_6ff930: /* 6ff930: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff932: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff936: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff939: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff950(void) {
  LOAD_REGS();
L_6ff950: /* 6ff950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff951: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff953: mov esi, ecx */
  esi = ecx;
/* 6ff955: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff95bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff95b: mov eax, esi */
  eax = esi;
/* 6ff95d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff95e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff980(void) {
  LOAD_REGS();
L_6ff980: /* 6ff980: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff982: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff986: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff989: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff9a0(void) {
  LOAD_REGS();
L_6ff9a0: /* 6ff9a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff9a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff9a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 6ff9a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff9c0(void) {
  LOAD_REGS();
L_6ff9c0: /* 6ff9c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ff9c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ff9c3: mov esi, ecx */
  esi = ecx;
/* 6ff9c5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ff9cbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ff9cb: mov eax, esi */
  eax = esi;
/* 6ff9cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ff9ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ff9f0(void) {
  LOAD_REGS();
L_6ff9f0: /* 6ff9f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ff9f2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ff9f6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6ff9f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffa10(void) {
  LOAD_REGS();
L_6ffa10: /* 6ffa10: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ffa12: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ffa16: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6ffa19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffa30(void) {
  LOAD_REGS();
L_6ffa30: /* 6ffa30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffa31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffa33: mov esi, ecx */
  esi = ecx;
/* 6ffa35: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffa3bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffa3b: mov eax, esi */
  eax = esi;
/* 6ffa3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffa3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffa60(void) {
  LOAD_REGS();
L_6ffa60: /* 6ffa60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffa64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffa66: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffa69: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffa6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffa80(void) {
  LOAD_REGS();
L_6ffa80: /* 6ffa80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffa84: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffa86: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffa89: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffa8b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffaa0(void) {
  LOAD_REGS();
L_6ffaa0: /* 6ffaa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffaa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffaa3: mov esi, ecx */
  esi = ecx;
/* 6ffaa5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffaabu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffaab: mov eax, esi */
  eax = esi;
/* 6ffaad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffaae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffad0(void) {
  LOAD_REGS();
L_6ffad0: /* 6ffad0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ffad2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ffad6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6ffad9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffaf0(void) {
  LOAD_REGS();
L_6ffaf0: /* 6ffaf0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ffaf2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ffaf6: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 6ffaf9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffb10(void) {
  LOAD_REGS();
L_6ffb10: /* 6ffb10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffb11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffb13: mov esi, ecx */
  esi = ecx;
/* 6ffb15: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffb1bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffb1b: mov eax, esi */
  eax = esi;
/* 6ffb1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffb1e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffb40(void) {
  LOAD_REGS();
L_6ffb40: /* 6ffb40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffb44: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ffb46: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6ffb49: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6ffb4c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffb60(void) {
  LOAD_REGS();
L_6ffb60: /* 6ffb60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffb64: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ffb66: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6ffb69: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6ffb6c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffb80(void) {
  LOAD_REGS();
L_6ffb80: /* 6ffb80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffb81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffb83: mov esi, ecx */
  esi = ecx;
/* 6ffb85: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffb8bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffb8b: mov eax, esi */
  eax = esi;
/* 6ffb8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffb8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffbb0(void) {
  LOAD_REGS();
L_6ffbb0: /* 6ffbb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffbb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffbb6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffbb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffbbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffbd0(void) {
  LOAD_REGS();
L_6ffbd0: /* 6ffbd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffbd4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffbd6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffbd9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffbdb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffbf0(void) {
  LOAD_REGS();
L_6ffbf0: /* 6ffbf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffbf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffbf3: mov esi, ecx */
  esi = ecx;
/* 6ffbf5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffbfbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffbfb: mov eax, esi */
  eax = esi;
/* 6ffbfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffbfe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffc20(void) {
  LOAD_REGS();
L_6ffc20: /* 6ffc20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffc24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffc26: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 6ffc2c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffc2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffc50(void) {
  LOAD_REGS();
L_6ffc50: /* 6ffc50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffc54: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffc56: imul eax, eax, 0xc8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xc8u);
  eax = (uint32_t)r;
  }
/* 6ffc5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffc5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffc80(void) {
  LOAD_REGS();
L_6ffc80: /* 6ffc80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffc81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffc83: mov esi, ecx */
  esi = ecx;
/* 6ffc85: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffc8bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffc8b: mov eax, esi */
  eax = esi;
/* 6ffc8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffc8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffcb0(void) {
  LOAD_REGS();
L_6ffcb0: /* 6ffcb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffcb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffcb6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 6ffcb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffcbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffcd0(void) {
  LOAD_REGS();
L_6ffcd0: /* 6ffcd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffcd4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffcd6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 6ffcd9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffcdb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffcf0(void) {
  LOAD_REGS();
L_6ffcf0: /* 6ffcf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffcf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffcf3: mov esi, ecx */
  esi = ecx;
/* 6ffcf5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffcfbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffcfb: mov eax, esi */
  eax = esi;
/* 6ffcfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffcfe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffd20(void) {
  LOAD_REGS();
L_6ffd20: /* 6ffd20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffd24: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ffd26: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6ffd29: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6ffd2c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffd40(void) {
  LOAD_REGS();
L_6ffd40: /* 6ffd40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffd44: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ffd46: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6ffd49: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6ffd4c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffd60(void) {
  LOAD_REGS();
L_6ffd60: /* 6ffd60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffd61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffd63: mov esi, ecx */
  esi = ecx;
/* 6ffd65: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffd6bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffd6b: mov eax, esi */
  eax = esi;
/* 6ffd6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffd6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffd90(void) {
  LOAD_REGS();
L_6ffd90: /* 6ffd90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffd94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffd96: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffd99: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffd9b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffdb0(void) {
  LOAD_REGS();
L_6ffdb0: /* 6ffdb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffdb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffdb6: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffdb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffdbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffdd0(void) {
  LOAD_REGS();
L_6ffdd0: /* 6ffdd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffdd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffdd3: mov esi, ecx */
  esi = ecx;
/* 6ffdd5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffddbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffddb: mov eax, esi */
  eax = esi;
/* 6ffddd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffdde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffe00(void) {
  LOAD_REGS();
L_6ffe00: /* 6ffe00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffe04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffe06: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffe09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffe0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffe20(void) {
  LOAD_REGS();
L_6ffe20: /* 6ffe20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffe24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffe26: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffe29: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffe2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffe40(void) {
  LOAD_REGS();
L_6ffe40: /* 6ffe40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffe41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffe43: mov esi, ecx */
  esi = ecx;
/* 6ffe45: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffe4bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffe4b: mov eax, esi */
  eax = esi;
/* 6ffe4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffe4e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffe70(void) {
  LOAD_REGS();
L_6ffe70: /* 6ffe70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffe74: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffe76: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffe79: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffe7b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffe90(void) {
  LOAD_REGS();
L_6ffe90: /* 6ffe90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffe94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffe96: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffe99: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffe9b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffeb0(void) {
  LOAD_REGS();
L_6ffeb0: /* 6ffeb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ffeb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ffeb3: mov esi, ecx */
  esi = ecx;
/* 6ffeb5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6ffebbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6ffebb: mov eax, esi */
  eax = esi;
/* 6ffebd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ffebe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ffee0(void) {
  LOAD_REGS();
L_6ffee0: /* 6ffee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6ffee4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ffee6: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6ffee9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6ffeeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fff00(void) {
  LOAD_REGS();
L_6fff00: /* 6fff00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fff04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6fff06: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6fff09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6fff0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fff20(void) {
  LOAD_REGS();
L_6fff20: /* 6fff20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fff21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fff23: mov esi, ecx */
  esi = ecx;
/* 6fff25: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6fff2bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6fff2b: mov eax, esi */
  eax = esi;
/* 6fff2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fff2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fff50(void) {
  LOAD_REGS();
L_6fff50: /* 6fff50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fff54: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fff56: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 6fff59: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fff5c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fff70(void) {
  LOAD_REGS();
L_6fff70: /* 6fff70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fff74: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fff76: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 6fff79: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 6fff7c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fff90(void) {
  LOAD_REGS();
L_6fff90: /* 6fff90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6fff91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6fff93: mov esi, ecx */
  esi = ecx;
/* 6fff95: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x6fff9bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 6fff9b: mov eax, esi */
  eax = esi;
/* 6fff9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6fff9e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fffc0(void) {
  LOAD_REGS();
L_6fffc0: /* 6fffc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fffc4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fffc6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fffc9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fffcc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6fffe0(void) {
  LOAD_REGS();
L_6fffe0: /* 6fffe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6fffe4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6fffe6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6fffe9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 6fffec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700000(void) {
  LOAD_REGS();
L_700000: /* 700000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 700001: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 700003: mov esi, ecx */
  esi = ecx;
/* 700005: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x70000bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 70000b: mov eax, esi */
  eax = esi;
/* 70000d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70000e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700030(void) {
  LOAD_REGS();
L_700030: /* 700030: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700032: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700036: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700039: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700050(void) {
  LOAD_REGS();
L_700050: /* 700050: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700052: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700056: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700059: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700070(void) {
  LOAD_REGS();
L_700070: /* 700070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 700071: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 700073: mov esi, ecx */
  esi = ecx;
/* 700075: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x70007bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 70007b: mov eax, esi */
  eax = esi;
/* 70007d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70007e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700073(void) {
  LOAD_REGS();
L_700073: /* 700073: mov esi, ecx */
  esi = ecx;
/* 700075: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x70007bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 70007b: mov eax, esi */
  eax = esi;
/* 70007d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70007e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700075(void) {
  LOAD_REGS();
L_700075: /* 700075: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x70007bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 70007b: mov eax, esi */
  eax = esi;
/* 70007d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70007e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7000a0(void) {
  LOAD_REGS();
L_7000a0: /* 7000a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7000a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7000a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 7000a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7000c0(void) {
  LOAD_REGS();
L_7000c0: /* 7000c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7000c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7000c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 7000c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7000e0(void) {
  LOAD_REGS();
L_7000e0: /* 7000e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7000e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7000e6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7000e9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7000ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700100(void) {
  LOAD_REGS();
L_700100: /* 700100: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700104: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700106: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 700109: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70010c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700120(void) {
  LOAD_REGS();
L_700120: /* 700120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 700121: mov esi, ecx */
  esi = ecx;
/* 700123: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x700129u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 700129: mov eax, esi */
  eax = esi;
/* 70012b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70012c: ret  */
  esp += 4; SPILL(); return;
}

void f_700140(void) {
  LOAD_REGS();
L_700140: /* 700140: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700144: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700146: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 700149: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 70014c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700160(void) {
  LOAD_REGS();
L_700160: /* 700160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700164: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700166: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 700169: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 70016c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700180(void) {
  LOAD_REGS();
L_700180: /* 700180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 700184: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 700186: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 700189: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70018c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7001a0(void) {
  LOAD_REGS();
L_7001a0: /* 7001a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7001a4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7001a6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7001a9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7001ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7001c0(void) {
  LOAD_REGS();
L_7001c0: /* 7001c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7001c4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7001c6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7001c9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7001cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7001e0(void) {
  LOAD_REGS();
L_7001e0: /* 7001e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7001e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7001e6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7001e9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7001ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700200(void) {
  LOAD_REGS();
L_700200: /* 700200: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700202: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700206: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700209: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700220(void) {
  LOAD_REGS();
L_700220: /* 700220: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700222: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700226: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700229: ret 4 */
  esp += 8; SPILL(); return;
}

void f_700240(void) {
  LOAD_REGS();
L_700240: /* 700240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 700241: mov esi, ecx */
  esi = ecx;
/* 700243: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x700249u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 700249: mov eax, esi */
  eax = esi;
/* 70024b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70024c: ret  */
  esp += 4; SPILL(); return;
}

void f_700260(void) {
  LOAD_REGS();
L_700260: /* 700260: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 700261: mov esi, ecx */
  esi = ecx;
/* 700263: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x700269u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 700269: mov eax, esi */
  eax = esi;
/* 70026b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70026c: ret  */
  esp += 4; SPILL(); return;
}

void f_700280(void) {
  LOAD_REGS();
L_700280: /* 700280: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 700282: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 700286: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 700289: ret 4 */
  esp += 8; SPILL(); return;
}
