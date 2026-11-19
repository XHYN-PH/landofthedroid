#include "recomp.h"
#include "rec_mod.h"

void f_d8eaea(void) {
  LOAD_REGS();
L_d8eaea: /* d8eaea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8eaed: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8eaf2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8eaf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8eaf6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8eaf9: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8eafeu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8eafe(); return;
}

void f_d8eafe(void) {
  LOAD_REGS();
L_d8eafe: /* d8eafe: push 0xdc0c18 */
  { uint32_t v = 0xdc0c18u; esp -= 4; W32(esp, v); }
/* d8eb03: push 0xde2088 */
  { uint32_t v = 0xde2088u; esp -= 4; W32(esp, v); }
/* d8eb08: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8eb0eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8eb0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8eb11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8eb13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8eb15: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8eb1au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8eb1a: guest_badaddr(0xd8eb1a); return;
}

void f_d8eb60(void) {
  LOAD_REGS();
L_d8eb60: /* d8eb60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8eb61: mov ebp, esp */
  ebp = esp;
/* d8eb63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8eb65: push 0xdb91e0 */
  { uint32_t v = 0xdb91e0u; esp -= 4; W32(esp, v); }
/* d8eb6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8eb70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8eb71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8eb78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8eb7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8eb7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8eb7d: mov esi, ecx */
  esi = ecx;
/* d8eb7f: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8eb85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8eb87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8eb88: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8eb8b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8eb92: jg 0xd8ebac */
  if ((!zf && sf == of)) goto L_d8ebac;
L_d8eb94: /* d8eb94: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d8eb99: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8eb9e: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d8eba3: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8eba9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8eba9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8ebac: /* d8ebac: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8ebb2: mov ecx, dword ptr [esi + 0x2ec] */
  ecx = R32((uint32_t)(esi + 0x2ecu));
/* d8ebb8: mov ecx, dword ptr [ecx + eax*4 - 4] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* d8ebbc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8ebbe: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0xd8ebc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8ebc4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8ebc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8ebc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8ebc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8ebd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8ebd1: mov esp, ebp */
  esp = ebp;
/* d8ebd3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8ebd4: ret  */
  esp += 4; SPILL(); return;
}

void f_d8ebd5(void) {
  LOAD_REGS();
L_d8ebd5: /* d8ebd5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8ebd8: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8ebdd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8ebe0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ebe1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8ebe4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8ebe9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8ebe9(); return;
}

void f_d8ebe9(void) {
  LOAD_REGS();
L_d8ebe9: /* d8ebe9: push 0xdc0c4c */
  { uint32_t v = 0xdc0c4cu; esp -= 4; W32(esp, v); }
/* d8ebee: push 0xde2098 */
  { uint32_t v = 0xde2098u; esp -= 4; W32(esp, v); }
/* d8ebf3: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8ebf9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8ebf9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8ebfc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ebfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ec00: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8ec05u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8ec05: guest_badaddr(0xd8ec05); return;
}

void f_d8ec40(void) {
  LOAD_REGS();
L_d8ec40: /* d8ec40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8ec41: mov ebp, esp */
  ebp = esp;
/* d8ec43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8ec45: push 0xdb91f0 */
  { uint32_t v = 0xdb91f0u; esp -= 4; W32(esp, v); }
/* d8ec4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8ec50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ec51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8ec58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8ec5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ec5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ec5d: mov esi, ecx */
  esi = ecx;
/* d8ec5f: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8ec65: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8ec67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ec68: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8ec6b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8ec72: jg 0xd8ec8c */
  if ((!zf && sf == of)) goto L_d8ec8c;
L_d8ec74: /* d8ec74: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d8ec79: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8ec7e: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d8ec83: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8ec89u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8ec89: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8ec8c: /* d8ec8c: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8ec92: mov ecx, dword ptr [esi + 0x2ec] */
  ecx = R32((uint32_t)(esi + 0x2ecu));
/* d8ec98: mov ecx, dword ptr [ecx + eax*4 - 4] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* d8ec9c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8ec9e: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0xd8eca4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8eca4: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8eca9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d8ecac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ecad: mov dword ptr [ebp - 0x14], 0xde20a0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0xde20a0u);
/* d8ecb4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8ecb9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8ecb9(); return;
}

void f_d8ecb9(void) {
  LOAD_REGS();
L_d8ecb9: /* d8ecb9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d8ecbc: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8ecc1: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* d8ecc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ecc5: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* d8ecc8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8eccdu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8eccd(); return;
}

void f_d8eccd(void) {
  LOAD_REGS();
L_d8eccd: /* d8eccd: push 0xdc0c88 */
  { uint32_t v = 0xdc0c88u; esp -= 4; W32(esp, v); }
/* d8ecd2: push 0xde20b0 */
  { uint32_t v = 0xde20b0u; esp -= 4; W32(esp, v); }
/* d8ecd7: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8ecddu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8ecdd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8ece0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ece2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ece4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8ece9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8ece9: guest_badaddr(0xd8ece9); return;
}

void f_d8ed20(void) {
  LOAD_REGS();
L_d8ed20: /* d8ed20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ed21: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8ed23: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8ed25: mov esi, ecx */
  esi = ecx;
/* d8ed27: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd8ed2du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d8ed2d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8ed31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d8ed33: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* d8ed35: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d8ed38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8ed39: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8ed50(void) {
  LOAD_REGS();
L_d8ed50: /* d8ed50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ed51: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8ed52: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* d8ed58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ed59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ed5a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d8ed5e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8ed60: mov esi, ecx */
  esi = ecx;
/* d8ed62: jge 0xd8ed78 */
  if ((sf == of)) goto L_d8ed78;
L_d8ed64: /* d8ed64: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* d8ed69: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8ed6e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* d8ed73: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd8ed75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8ed75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8ed78: /* d8ed78: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8ed7b: jle 0xd8ed91 */
  if ((zf || sf != of)) goto L_d8ed91;
L_d8ed7d: /* d8ed7d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d8ed82: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8ed87: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d8ed8c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd8ed8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8ed8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8ed91: /* d8ed91: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* d8ed95: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8ed98: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* d8ed9b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8ed9d: jle 0xd8edb3 */
  if ((zf || sf != of)) goto L_d8edb3;
L_d8ed9f: /* d8ed9f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d8eda4: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8eda9: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d8edae: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd8edb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8edb0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8edb3: /* d8edb3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8edb5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8edb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8edb7: mov ecx, esi */
  ecx = esi;
/* d8edb9: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd8edbfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d8edbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8edc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8edc1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8edc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8edc3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8edf0(void) {
  LOAD_REGS();
L_d8edf0: /* d8edf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8edf1: mov ebp, esp */
  ebp = esp;
/* d8edf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8edf5: push 0xdb9200 */
  { uint32_t v = 0xdb9200u; esp -= 4; W32(esp, v); }
/* d8edfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8ee00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ee01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8ee08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8ee0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ee0c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d8ee0f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ee11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ee12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ee13: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8ee16: mov edi, ecx */
  edi = ecx;
/* d8ee18: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8ee1f: jne 0xd8ee39 */
  if (!zf) goto L_d8ee39;
L_d8ee21: /* d8ee21: push 0x9d */
  { uint32_t v = 0x9du; esp -= 4; W32(esp, v); }
/* d8ee26: push 0xde2054 */
  { uint32_t v = 0xde2054u; esp -= 4; W32(esp, v); }
/* d8ee2b: push 0xde2060 */
  { uint32_t v = 0xde2060u; esp -= 4; W32(esp, v); }
/* d8ee30: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8ee36u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8ee36: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8ee39: /* d8ee39: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8ee3b: lea esi, [edi + 0x2ec] */
  esi = (uint32_t)(edi + 0x2ecu);
/* d8ee41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8ee43: mov ecx, esi */
  ecx = esi;
/* d8ee45: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd8ee4bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d8ee4b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d8ee4d: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* d8ee50: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d8ee53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ee55: je 0xd8ee61 */
  if (zf) goto L_d8ee61;
L_d8ee57: /* d8ee57: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d8ee59: mov ecx, edi */
  ecx = edi;
/* d8ee5b: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0xd8ee61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8ee61: /* d8ee61: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8ee64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8ee66: jg 0xd8ee80 */
  if ((!zf && sf == of)) goto L_d8ee80;
L_d8ee68: /* d8ee68: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d8ee6d: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8ee72: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d8ee77: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8ee7du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8ee7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8ee80: /* d8ee80: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8ee83: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d8ee85: mov ecx, dword ptr [ecx + eax*4 - 4] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* d8ee89: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8ee8b: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0xd8ee91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8ee91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ee93: jne 0xd8ee9f */
  if (!zf) goto L_d8ee9f;
L_d8ee95: /* d8ee95: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d8ee97: mov ecx, edi */
  ecx = edi;
/* d8ee99: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0xd8ee9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8ee9f: /* d8ee9f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8eea2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8eea3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8eea4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8eeab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8eeac: mov esp, ebp */
  esp = ebp;
/* d8eeae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8eeaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8eeb2(void) {
  LOAD_REGS();
L_d8eeb2: /* d8eeb2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8eeb5: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8eeba: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8eebd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8eebe: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8eec1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8eec6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8eec6(); return;
}

void f_d8eec6(void) {
  LOAD_REGS();
L_d8eec6: /* d8eec6: push 0xdc0cac */
  { uint32_t v = 0xdc0cacu; esp -= 4; W32(esp, v); }
/* d8eecb: push 0xde2068 */
  { uint32_t v = 0xde2068u; esp -= 4; W32(esp, v); }
/* d8eed0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8eed6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8eed6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8eed9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8eedb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8eedd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8eee2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8eee2: guest_badaddr(0xd8eee2); return;
}

void f_d8ef30(void) {
  LOAD_REGS();
L_d8ef30: /* d8ef30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ef31: mov esi, ecx */
  esi = ecx;
/* d8ef33: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8ef36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8ef38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ef39: jg 0xd8ef53 */
  if ((!zf && sf == of)) goto L_d8ef53;
L_d8ef3b: /* d8ef3b: push 0x1a3 */
  { uint32_t v = 0x1a3u; esp -= 4; W32(esp, v); }
/* d8ef40: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8ef45: push 0xde2124 */
  { uint32_t v = 0xde2124u; esp -= 4; W32(esp, v); }
/* d8ef4a: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8ef50u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8ef50: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8ef53: /* d8ef53: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8ef56: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d8ef58: mov edi, dword ptr [ecx + eax*4 - 4] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* d8ef5c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8ef5e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* d8ef5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ef60: mov ecx, esi */
  ecx = esi;
/* d8ef62: call 0xd81dbb */
  esp -= 4; W32(esp, 0xd8ef67u); SPILL(); f_d81dbb(); if (g_unwind) return; RELOAD();
/* d8ef67: mov eax, edi */
  eax = edi;
/* d8ef69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8ef6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8ef6b: ret  */
  esp += 4; SPILL(); return;
}

void f_d8ef80(void) {
  LOAD_REGS();
L_d8ef80: /* d8ef80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8ef81: mov ebp, esp */
  ebp = esp;
/* d8ef83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8ef85: push 0xdb9210 */
  { uint32_t v = 0xdb9210u; esp -= 4; W32(esp, v); }
/* d8ef8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8ef90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ef91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8ef98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8ef9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ef9c: mov ebx, ecx */
  ebx = ecx;
/* d8ef9e: mov eax, dword ptr [ebx + 0x2f0] */
  eax = R32((uint32_t)(ebx + 0x2f0u));
/* d8efa4: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8efa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8efa8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8efa9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8efac: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8efb3: jle 0xd8f058 */
  if ((zf || sf != of)) goto L_d8f058;
L_d8efb9: /* d8efb9: mov ecx, dword ptr [ebx + 0x2ec] */
  ecx = R32((uint32_t)(ebx + 0x2ecu));
/* d8efbf: mov ecx, dword ptr [ecx + eax*4 - 8] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0xfffffff8u));
/* d8efc3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8efc5: lea esi, [ebx + 0x2ec] */
  esi = (uint32_t)(ebx + 0x2ecu);
/* d8efcb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8efcd: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xd8efd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8efd0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8efd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8efd5: jg 0xd8efef */
  if ((!zf && sf == of)) goto L_d8efef;
L_d8efd7: /* d8efd7: push 0x1a3 */
  { uint32_t v = 0x1a3u; esp -= 4; W32(esp, v); }
/* d8efdc: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8efe1: push 0xde2124 */
  { uint32_t v = 0xde2124u; esp -= 4; W32(esp, v); }
/* d8efe6: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8efecu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8efec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8efef: /* d8efef: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8eff2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d8eff4: mov edi, dword ptr [ecx + eax*4 - 4] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* d8eff8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8effa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* d8effb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8effc: mov ecx, esi */
  ecx = esi;
/* d8effe: call 0xd81dbb */
  esp -= 4; W32(esp, 0xd8f003u); SPILL(); f_d81dbb(); if (g_unwind) return; RELOAD();
/* d8f003: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f005: je 0xd8f010 */
  if (zf) goto L_d8f010;
L_d8f007: /* d8f007: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d8f009: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8f00b: mov ecx, edi */
  ecx = edi;
/* d8f00d: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xd8f010u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8f010: /* d8f010: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d8f012: mov ecx, ebx */
  ecx = ebx;
/* d8f014: call dword ptr [eax + 0xf4] */
  { uint32_t t = R32((uint32_t)(eax + 0xf4u)); esp -= 4; W32(esp, 0xd8f01au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8f01a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8f01d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8f01f: jg 0xd8f039 */
  if ((!zf && sf == of)) goto L_d8f039;
L_d8f021: /* d8f021: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d8f026: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8f02b: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d8f030: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8f036u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8f036: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8f039: /* d8f039: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8f03c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d8f03e: mov ecx, dword ptr [edx + ecx*4 - 4] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0xfffffffcu));
/* d8f042: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8f044: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0xd8f04au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8f04a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f04c: jne 0xd8f058 */
  if (!zf) goto L_d8f058;
L_d8f04e: /* d8f04e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d8f050: mov ecx, ebx */
  ecx = ebx;
/* d8f052: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xd8f058u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8f058: /* d8f058: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f05b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f05c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f05d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f064: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f065: mov esp, ebp */
  esp = ebp;
/* d8f067: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f068: ret  */
  esp += 4; SPILL(); return;
}

void f_d8f069(void) {
  LOAD_REGS();
L_d8f069: /* d8f069: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8f06c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8f071: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8f074: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8f075: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8f078: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f07du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8f07d(); return;
}

void f_d8f07d(void) {
  LOAD_REGS();
L_d8f07d: /* d8f07d: push 0xdc0ce8 */
  { uint32_t v = 0xdc0ce8u; esp -= 4; W32(esp, v); }
/* d8f082: push 0xde2080 */
  { uint32_t v = 0xde2080u; esp -= 4; W32(esp, v); }
/* d8f087: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8f08du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8f08d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8f090: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f092: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f094: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f099u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8f099: guest_badaddr(0xd8f099); return;
}

void f_d8f0f0(void) {
  LOAD_REGS();
L_d8f0f0: /* d8f0f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8f0f1: mov ebp, esp */
  ebp = esp;
/* d8f0f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8f0f5: push 0xdb9220 */
  { uint32_t v = 0xdb9220u; esp -= 4; W32(esp, v); }
/* d8f0fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8f100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f101: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8f108: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8f10b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8f10e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f10f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f110: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f111: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8f114: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f115: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8f118: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8f11f: call 0xd81d34 */
  esp -= 4; W32(esp, 0xd8f124u); SPILL(); f_d81d34(); if (g_unwind) return; RELOAD();
/* d8f124: mov esi, eax */
  esi = eax;
/* d8f126: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f128: jne 0xd8f13f */
  if (!zf) goto L_d8f13f;
L_d8f12a: /* d8f12a: push 0x19 */
  { uint32_t v = 0x19u; esp -= 4; W32(esp, v); }
/* d8f12c: push 0xde2138 */
  { uint32_t v = 0xde2138u; esp -= 4; W32(esp, v); }
/* d8f131: push 0xde2148 */
  { uint32_t v = 0xde2148u; esp -= 4; W32(esp, v); }
/* d8f136: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8f13cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8f13c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8f13f: /* d8f13f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f142: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f143: mov eax, esi */
  eax = esi;
/* d8f145: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f146: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f14d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f14e: mov esp, ebp */
  esp = ebp;
/* d8f150: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f151: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8f154(void) {
  LOAD_REGS();
L_d8f154: /* d8f154: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8f157: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8f15c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8f15f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8f160: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8f163: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f168u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8f168(); return;
}

void f_d8f168(void) {
  LOAD_REGS();
L_d8f168: /* d8f168: push 0xdc0d1c */
  { uint32_t v = 0xdc0d1cu; esp -= 4; W32(esp, v); }
/* d8f16d: push 0xde2150 */
  { uint32_t v = 0xde2150u; esp -= 4; W32(esp, v); }
/* d8f172: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8f178u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8f178: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8f17b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f17d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f17f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f184u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8f184: guest_badaddr(0xd8f184); return;
}

void f_d8f1c0(void) {
  LOAD_REGS();
L_d8f1c0: /* d8f1c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d8f1c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f1c6: mov eax, dword ptr [0xde5180] */
  eax = R32((uint32_t)(0xde5180u));
/* d8f1cb: jne 0xd8f1d2 */
  if (!zf) goto L_d8f1d2;
L_d8f1cd: /* d8f1cd: mov eax, dword ptr [0xde5150] */
  eax = R32((uint32_t)(0xde5150u));
L_d8f1d2: /* d8f1d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8f1f0(void) {
  LOAD_REGS();
L_d8f1f0: /* d8f1f0: xor eax, eax */
  eax = 0;
/* d8f1f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8f210(void) {
  LOAD_REGS();
L_d8f210: /* d8f210: xor eax, eax */
  eax = 0;
/* d8f212: ret  */
  esp += 4; SPILL(); return;
}

void f_d8f230(void) {
  LOAD_REGS();
L_d8f230: /* d8f230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8f231: mov ebp, esp */
  ebp = esp;
/* d8f233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8f235: push 0xdb9230 */
  { uint32_t v = 0xdb9230u; esp -= 4; W32(esp, v); }
/* d8f23a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8f240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8f248: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8f24b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f24c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f24d: mov esi, ecx */
  esi = ecx;
/* d8f24f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d8f252: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f253: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8f256: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f257: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8f25a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8f261: call 0xd81375 */
  esp -= 4; W32(esp, 0xd8f266u); SPILL(); f_d81375(); if (g_unwind) return; RELOAD();
/* d8f266: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d8f269: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d8f26c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f26d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f26e: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8f271: call 0xd811ef */
  esp -= 4; W32(esp, 0xd8f276u); SPILL(); f_d811ef(); if (g_unwind) return; RELOAD();
/* d8f276: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f279: mov eax, edi */
  eax = edi;
/* d8f27b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f27c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f27d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f284: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f285: mov esp, ebp */
  esp = ebp;
/* d8f287: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f288: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8f28b(void) {
  LOAD_REGS();
L_d8f28b: /* d8f28b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8f28e: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8f293: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8f296: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8f297: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8f29a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f29fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8f29f(); return;
}

void f_d8f29f(void) {
  LOAD_REGS();
L_d8f29f: /* d8f29f: push 0xdc0d64 */
  { uint32_t v = 0xdc0d64u; esp -= 4; W32(esp, v); }
/* d8f2a4: push 0xde2180 */
  { uint32_t v = 0xde2180u; esp -= 4; W32(esp, v); }
/* d8f2a9: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8f2afu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8f2af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8f2b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f2b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f2b6: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f2bbu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8f2bb: guest_badaddr(0xd8f2bb); return;
}

void f_d8f2f0(void) {
  LOAD_REGS();
L_d8f2f0: /* d8f2f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8f2f1: mov ebp, esp */
  ebp = esp;
/* d8f2f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8f2f5: push 0xdb9240 */
  { uint32_t v = 0xdb9240u; esp -= 4; W32(esp, v); }
/* d8f2fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8f300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f301: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8f308: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8f30b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f30c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f30d: mov esi, ecx */
  esi = ecx;
/* d8f30f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d8f312: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f314: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f315: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8f318: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8f31f: je 0xd8f338 */
  if (zf) goto L_d8f338;
L_d8f321: /* d8f321: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d8f324: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8f326: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd8f32cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8f32c: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* d8f32f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8f331: je 0xd8f338 */
  if (zf) goto L_d8f338;
L_d8f333: /* d8f333: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8f335: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd8f338u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8f338: /* d8f338: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f33b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f33c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f33d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f344: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f345: mov esp, ebp */
  esp = ebp;
/* d8f347: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f348: ret  */
  esp += 4; SPILL(); return;
}

void f_d8f349(void) {
  LOAD_REGS();
L_d8f349: /* d8f349: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8f34c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8f351: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8f354: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8f355: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8f358: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f35du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8f35d(); return;
}

void f_d8f35d(void) {
  LOAD_REGS();
L_d8f35d: /* d8f35d: push 0xdc0d94 */
  { uint32_t v = 0xdc0d94u; esp -= 4; W32(esp, v); }
/* d8f362: push 0xde2190 */
  { uint32_t v = 0xde2190u; esp -= 4; W32(esp, v); }
/* d8f367: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8f36du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8f36d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8f370: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f372: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f374: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f379u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8f379: guest_badaddr(0xd8f379); return;
}

void f_d8f3b0(void) {
  LOAD_REGS();
L_d8f3b0: /* d8f3b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8f3b1: mov ebp, esp */
  ebp = esp;
/* d8f3b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8f3b5: push 0xdb9250 */
  { uint32_t v = 0xdb9250u; esp -= 4; W32(esp, v); }
/* d8f3ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8f3c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f3c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8f3c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8f3cb: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* d8f3ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f3d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f3d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f3d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f3d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8f3d6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8f3dd: je 0xd8f3e4 */
  if (zf) goto L_d8f3e4;
L_d8f3df: /* d8f3df: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8f3e1: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0xd8f3e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8f3e4: /* d8f3e4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f3e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f3e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f3e9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f3f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f3f1: mov esp, ebp */
  esp = ebp;
/* d8f3f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f3f4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8f3f7(void) {
  LOAD_REGS();
L_d8f3f7: /* d8f3f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8f3fa: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8f3ff: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8f402: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8f403: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8f406: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f40bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8f40b(); return;
}

void f_d8f40b(void) {
  LOAD_REGS();
L_d8f40b: /* d8f40b: push 0xdc0dd4 */
  { uint32_t v = 0xdc0dd4u; esp -= 4; W32(esp, v); }
/* d8f410: push 0xde21a8 */
  { uint32_t v = 0xde21a8u; esp -= 4; W32(esp, v); }
/* d8f415: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8f41bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8f41b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8f41e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f420: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f422: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f427u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8f427: guest_badaddr(0xd8f427); return;
}

void f_d8f450(void) {
  LOAD_REGS();
L_d8f450: /* d8f450: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8f470(void) {
  LOAD_REGS();
L_d8f470: /* d8f470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8f471: mov ebp, esp */
  ebp = esp;
/* d8f473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8f475: push 0xdb9260 */
  { uint32_t v = 0xdb9260u; esp -= 4; W32(esp, v); }
/* d8f47a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8f480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8f488: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8f48b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f48c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f48d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f48e: mov edi, ecx */
  edi = ecx;
/* d8f490: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* d8f493: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8f496: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8f49d: xor ebx, ebx */
  ebx = 0;
/* d8f49f: nop  */
L_d8f4a0: /* d8f4a0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* d8f4a3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8f4a5: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd8f4abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8f4ab: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8f4ad: je 0xd8f4b5 */
  if (zf) goto L_d8f4b5;
L_d8f4af: /* d8f4af: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* d8f4b2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d8f4b3: jmp 0xd8f4a0 */
  goto L_d8f4a0;
L_d8f4b5: /* d8f4b5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f4b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f4b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f4ba: mov eax, ebx */
  eax = ebx;
/* d8f4bc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f4c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f4c4: mov esp, ebp */
  esp = ebp;
/* d8f4c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f4c7: ret  */
  esp += 4; SPILL(); return;
}

void f_d8f4c8(void) {
  LOAD_REGS();
L_d8f4c8: /* d8f4c8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8f4cb: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8f4d0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8f4d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8f4d4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8f4d7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f4dcu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8f4dc(); return;
}

void f_d8f4dc(void) {
  LOAD_REGS();
L_d8f4dc: /* d8f4dc: push 0xdc0e20 */
  { uint32_t v = 0xdc0e20u; esp -= 4; W32(esp, v); }
/* d8f4e1: push 0xde21b8 */
  { uint32_t v = 0xde21b8u; esp -= 4; W32(esp, v); }
/* d8f4e6: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8f4ecu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8f4ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8f4ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f4f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f4f3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f4f8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8f4f8: guest_badaddr(0xd8f4f8); return;
}

void f_d8f530(void) {
  LOAD_REGS();
L_d8f530: /* d8f530: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* d8f533: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* d8f536: xor ecx, ecx */
  ecx = 0;
/* d8f538: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f53a: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d8f53d: lea ecx, [ecx*4 + 8] */
  ecx = (uint32_t)(ecx*4 + 0x8u);
/* d8f544: mov eax, ecx */
  eax = ecx;
/* d8f546: ret  */
  esp += 4; SPILL(); return;
}

void f_d8f560(void) {
  LOAD_REGS();
L_d8f560: /* d8f560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8f561: mov ebp, esp */
  ebp = esp;
/* d8f563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8f565: push 0xdb9270 */
  { uint32_t v = 0xdb9270u; esp -= 4; W32(esp, v); }
/* d8f56a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8f570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8f578: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8f57b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8f57e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f582: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f583: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8f586: mov esi, ecx */
  esi = ecx;
/* d8f588: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8f58f: je 0xd8f5a9 */
  if (zf) goto L_d8f5a9;
L_d8f591: /* d8f591: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d8f594: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* d8f597: xor ecx, ecx */
  ecx = 0;
/* d8f599: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f59b: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d8f59e: lea ecx, [ecx*4 + 0x10] */
  ecx = (uint32_t)(ecx*4 + 0x10u);
/* d8f5a5: mov edi, ecx */
  edi = ecx;
/* d8f5a7: jmp 0xd8f5ab */
  goto L_d8f5ab;
L_d8f5a9: /* d8f5a9: xor edi, edi */
  edi = 0;
L_d8f5ab: /* d8f5ab: mov ecx, esi */
  ecx = esi;
/* d8f5ad: call 0xd81136 */
  esp -= 4; W32(esp, 0xd8f5b2u); SPILL(); f_d81136(); if (g_unwind) return; RELOAD();
/* d8f5b2: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d8f5b5: mov esi, dword ptr [edx + 0x40] */
  esi = R32((uint32_t)(edx + 0x40u));
/* d8f5b8: xor ecx, ecx */
  ecx = 0;
/* d8f5ba: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f5bc: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d8f5bf: lea ecx, [ecx*4 + 8] */
  ecx = (uint32_t)(ecx*4 + 0x8u);
/* d8f5c6: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* d8f5c9: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8f5cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f5cc: mov eax, ecx */
  eax = ecx;
/* d8f5ce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f5d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f5d2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f5d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f5da: mov esp, ebp */
  esp = ebp;
/* d8f5dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f5dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8f5e0(void) {
  LOAD_REGS();
L_d8f5e0: /* d8f5e0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8f5e3: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8f5e8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d8f5eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f5ec: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d8f5ef: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f5f4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8f5f4(); return;
}

void f_d8f5f4(void) {
  LOAD_REGS();
L_d8f5f4: /* d8f5f4: push 0xdc0e54 */
  { uint32_t v = 0xdc0e54u; esp -= 4; W32(esp, v); }
/* d8f5f9: push 0xde21c0 */
  { uint32_t v = 0xde21c0u; esp -= 4; W32(esp, v); }
/* d8f5fe: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8f604u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8f604: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8f607: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f609: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f60b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f610u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8f610: guest_badaddr(0xd8f610); return;
}

void f_d8f650(void) {
  LOAD_REGS();
L_d8f650: /* d8f650: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* d8f653: ret  */
  esp += 4; SPILL(); return;
}

void f_d8f670(void) {
  LOAD_REGS();
L_d8f670: /* d8f670: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d8f674: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* d8f677: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8f690(void) {
  LOAD_REGS();
L_d8f690: /* d8f690: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f691: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f692: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d8f696: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d8f69a: xor eax, eax */
  eax = 0;
/* d8f69c: mov ebx, ecx */
  ebx = ecx;
/* d8f69e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d8f6a1: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* d8f6a4: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d8f6a6: mov ecx, ebx */
  ecx = ebx;
/* d8f6a8: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* d8f6aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f6ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f6ac: ret  */
  esp += 4; SPILL(); return;
}

void f_d8f6c0(void) {
  LOAD_REGS();
L_d8f6c0: /* d8f6c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8f6c1: mov ebp, esp */
  ebp = esp;
/* d8f6c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8f6c5: push 0xdb9280 */
  { uint32_t v = 0xdb9280u; esp -= 4; W32(esp, v); }
/* d8f6ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8f6d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f6d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8f6d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8f6db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f6dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f6dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f6de: mov esi, ecx */
  esi = ecx;
/* d8f6e0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d8f6e3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8f6e5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8f6e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f6ea: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8f6f1: call dword ptr [eax + 0xf4] */
  { uint32_t t = R32((uint32_t)(eax + 0xf4u)); esp -= 4; W32(esp, 0xd8f6f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8f6f7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d8f6fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f6fb: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8f6fe: call 0xd81375 */
  esp -= 4; W32(esp, 0xd8f703u); SPILL(); f_d81375(); if (g_unwind) return; RELOAD();
/* d8f703: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d8f706: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8f709: mov edi, eax */
  edi = eax;
/* d8f70b: call 0xd82400 */
  esp -= 4; W32(esp, 0xd8f710u); SPILL(); f_d82400(); if (g_unwind) return; RELOAD();
/* d8f710: mov ebx, eax */
  ebx = eax;
L_d8f712: /* d8f712: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* d8f715: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8f717: jge 0xd8f74b */
  if ((sf == of)) goto L_d8f74b;
L_d8f719: /* d8f719: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d8f71c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f71d: call 0xd81474 */
  esp -= 4; W32(esp, 0xd8f722u); SPILL(); f_d81474(); if (g_unwind) return; RELOAD();
/* d8f722: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
L_d8f725: /* d8f725: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f727: je 0xd8f74b */
  if (zf) goto L_d8f74b;
L_d8f729: /* d8f729: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8f72b: je 0xd8f732 */
  if (zf) goto L_d8f732;
L_d8f72d: /* d8f72d: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d8f730: jmp 0xd8f725 */
  goto L_d8f725;
L_d8f732: /* d8f732: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* d8f735: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8f736: mov dword ptr [eax + 0x14], 0 */
  W32((uint32_t)(eax + 0x14u), 0x0u);
/* d8f73d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d8f740: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8f743: call 0xd81573 */
  esp -= 4; W32(esp, 0xd8f748u); SPILL(); f_d81573(); if (g_unwind) return; RELOAD();
/* d8f748: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* d8f749: jmp 0xd8f712 */
  goto L_d8f712;
L_d8f74b: /* d8f74b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d8f74e: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* d8f755: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8f757: call dword ptr [edx + 0xf0] */
  { uint32_t t = R32((uint32_t)(edx + 0xf0u)); esp -= 4; W32(esp, 0xd8f75du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8f75d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f760: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f761: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f762: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f769: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f76a: mov esp, ebp */
  esp = ebp;
/* d8f76c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f76d: ret  */
  esp += 4; SPILL(); return;
}

void f_d8f76e(void) {
  LOAD_REGS();
L_d8f76e: /* d8f76e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8f771: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8f776: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8f779: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8f77a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8f77d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f782u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8f782(); return;
}

void f_d8f782(void) {
  LOAD_REGS();
L_d8f782: /* d8f782: push 0xdc0e94 */
  { uint32_t v = 0xdc0e94u; esp -= 4; W32(esp, v); }
/* d8f787: push 0xde2208 */
  { uint32_t v = 0xde2208u; esp -= 4; W32(esp, v); }
/* d8f78c: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8f792u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8f792: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8f795: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f797: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f799: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f79eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8f79e: guest_badaddr(0xd8f79e); return;
}

void f_d8f7e0(void) {
  LOAD_REGS();
L_d8f7e0: /* d8f7e0: ret  */
  esp += 4; SPILL(); return;
}

void f_d8f800(void) {
  LOAD_REGS();
L_d8f800: /* d8f800: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d8f803: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f805: je 0xd8f80c */
  if (zf) goto L_d8f80c;
L_d8f807: /* d8f807: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8f809: jmp dword ptr [eax + 0x64] */
  { uint32_t t = R32((uint32_t)(eax + 0x64u)); SPILL(); call_ind(t); return; }
L_d8f80c: /* d8f80c: xor eax, eax */
  eax = 0;
/* d8f80e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8f830(void) {
  LOAD_REGS();
L_d8f830: /* d8f830: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8f832: jmp dword ptr [eax + 0x60] */
  { uint32_t t = R32((uint32_t)(eax + 0x60u)); SPILL(); call_ind(t); return; }
}

void f_d8f850(void) {
  LOAD_REGS();
L_d8f850: /* d8f850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8f851: mov ebp, esp */
  ebp = esp;
/* d8f853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8f855: push 0xdb9290 */
  { uint32_t v = 0xdb9290u; esp -= 4; W32(esp, v); }
/* d8f85a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8f860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8f868: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8f86b: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d8f86e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f870: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f871: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f872: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f873: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8f876: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8f87d: je 0xd8f8cf */
  if (zf) goto L_d8f8cf;
L_d8f87f: /* d8f87f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d8f882: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8f884: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8f885: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8f888: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8f889: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd8f88cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8f88c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f88f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f896: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f897: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f898: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f899: mov esp, ebp */
  esp = ebp;
/* d8f89b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f89c: ret 8 */
  esp += 12; SPILL(); return;
L_d8f8cf: /* d8f8cf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f8d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f8d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f8d4: xor eax, eax */
  eax = 0;
/* d8f8d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f8dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f8de: mov esp, ebp */
  esp = ebp;
/* d8f8e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f8e1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8f89f(void) {
  LOAD_REGS();
L_d8f89f: /* d8f89f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8f8a2: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8f8a7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8f8aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8f8ab: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8f8ae: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f8b3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8f8b3(); return;
}

void f_d8f8b3(void) {
  LOAD_REGS();
L_d8f8b3: /* d8f8b3: push 0xdc0ec4 */
  { uint32_t v = 0xdc0ec4u; esp -= 4; W32(esp, v); }
/* d8f8b8: push 0xde2228 */
  { uint32_t v = 0xde2228u; esp -= 4; W32(esp, v); }
/* d8f8bd: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8f8c3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8f8c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8f8c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f8c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f8ca: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f8cfu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8f8cf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f8d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f8d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f8d4: xor eax, eax */
  eax = 0;
/* d8f8d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f8dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f8de: mov esp, ebp */
  esp = ebp;
/* d8f8e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f8e1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8f920(void) {
  LOAD_REGS();
L_d8f920: /* d8f920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8f921: mov ebp, esp */
  ebp = esp;
/* d8f923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8f925: push 0xdb92a0 */
  { uint32_t v = 0xdb92a0u; esp -= 4; W32(esp, v); }
/* d8f92a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8f930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8f938: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8f93b: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d8f93e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f940: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f941: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f942: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f943: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8f946: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8f94d: je 0xd8f954 */
  if (zf) goto L_d8f954;
L_d8f94f: /* d8f94f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8f951: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0xd8f954u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8f954: /* d8f954: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f957: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8f958: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8f959: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8f960: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8f961: mov esp, ebp */
  esp = ebp;
/* d8f963: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8f964: ret  */
  esp += 4; SPILL(); return;
}

void f_d8f965(void) {
  LOAD_REGS();
L_d8f965: /* d8f965: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8f968: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8f96d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8f970: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8f971: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8f974: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f979u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8f979(); return;
}

void f_d8f979(void) {
  LOAD_REGS();
L_d8f979: /* d8f979: push 0xdc0f04 */
  { uint32_t v = 0xdc0f04u; esp -= 4; W32(esp, v); }
/* d8f97e: push 0xde2230 */
  { uint32_t v = 0xde2230u; esp -= 4; W32(esp, v); }
/* d8f983: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8f989u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8f989: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8f98c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f98e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8f990: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8f995u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8f995: guest_badaddr(0xd8f995); return;
}

void f_d8f9c0(void) {
  LOAD_REGS();
L_d8f9c0: /* d8f9c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8f9c1: mov ebp, esp */
  ebp = esp;
/* d8f9c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8f9c5: push 0xdb92b0 */
  { uint32_t v = 0xdb92b0u; esp -= 4; W32(esp, v); }
/* d8f9ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8f9d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8f9d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8f9d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8f9db: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d8f9de: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8f9e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8f9e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8f9e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8f9e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8f9e6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8f9ed: je 0xd8f9fc */
  if (zf) goto L_d8f9fc;
L_d8f9ef: /* d8f9ef: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d8f9f2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8f9f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8f9f5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8f9f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8f9f9: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xd8f9fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8f9fc: /* d8f9fc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8f9ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8fa00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8fa01: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8fa08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8fa09: mov esp, ebp */
  esp = ebp;
/* d8fa0b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8fa0c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8fa0f(void) {
  LOAD_REGS();
L_d8fa0f: /* d8fa0f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8fa12: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8fa17: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8fa1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8fa1b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8fa1e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8fa23u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8fa23(); return;
}

void f_d8fa23(void) {
  LOAD_REGS();
L_d8fa23: /* d8fa23: push 0xdc0f40 */
  { uint32_t v = 0xdc0f40u; esp -= 4; W32(esp, v); }
/* d8fa28: push 0xde2238 */
  { uint32_t v = 0xde2238u; esp -= 4; W32(esp, v); }
/* d8fa2d: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8fa33u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8fa33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8fa36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fa38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fa3a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8fa3fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8fa3f: guest_badaddr(0xd8fa3f); return;
}

void f_d8fa60(void) {
  LOAD_REGS();
L_d8fa60: /* d8fa60: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d8fa65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d8fa67: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d8fa6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8fa6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8fa6e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d8fa72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8fa73: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd8fa75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8fa75: ret  */
  esp += 4; SPILL(); return;
}

void f_d8fa90(void) {
  LOAD_REGS();
L_d8fa90: /* d8fa90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8fa91: mov ebp, esp */
  ebp = esp;
/* d8fa93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8fa95: push 0xdb92c0 */
  { uint32_t v = 0xdb92c0u; esp -= 4; W32(esp, v); }
/* d8fa9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8faa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8faa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8faa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8faab: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d8faae: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8fab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8fab1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8fab2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8fab3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8fab6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8fabd: je 0xd8fac8 */
  if (zf) goto L_d8fac8;
L_d8fabf: /* d8fabf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8fac2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8fac4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8fac5: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0xd8fac8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8fac8: /* d8fac8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8facb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8facc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8facd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8fad4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8fad5: mov esp, ebp */
  esp = ebp;
/* d8fad7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8fad8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8fadb(void) {
  LOAD_REGS();
L_d8fadb: /* d8fadb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8fade: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8fae3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8fae6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8fae7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8faea: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8faefu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8faef(); return;
}

void f_d8faef(void) {
  LOAD_REGS();
L_d8faef: /* d8faef: push 0xdc0f78 */
  { uint32_t v = 0xdc0f78u; esp -= 4; W32(esp, v); }
/* d8faf4: push 0xde2240 */
  { uint32_t v = 0xde2240u; esp -= 4; W32(esp, v); }
/* d8faf9: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8faffu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8faff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8fb02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fb04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fb06: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8fb0bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8fb0b: guest_badaddr(0xd8fb0b); return;
}

void f_d8fb30(void) {
  LOAD_REGS();
L_d8fb30: /* d8fb30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8fb31: mov ebp, esp */
  ebp = esp;
/* d8fb33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8fb35: push 0xdb92d0 */
  { uint32_t v = 0xdb92d0u; esp -= 4; W32(esp, v); }
/* d8fb3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8fb40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8fb41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8fb48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8fb4b: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d8fb4e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8fb50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8fb51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8fb52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8fb53: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8fb56: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8fb5d: je 0xd8fbab */
  if (zf) goto L_d8fbab;
L_d8fb5f: /* d8fb5f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8fb62: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8fb64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8fb65: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0xd8fb68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8fb68: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8fb6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8fb72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8fb73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8fb74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8fb75: mov esp, ebp */
  esp = ebp;
/* d8fb77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8fb78: ret 4 */
  esp += 8; SPILL(); return;
L_d8fbab: /* d8fbab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8fbae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8fbaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8fbb0: xor eax, eax */
  eax = 0;
/* d8fbb2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8fbb9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8fbba: mov esp, ebp */
  esp = ebp;
/* d8fbbc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8fbbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8fb7b(void) {
  LOAD_REGS();
L_d8fb7b: /* d8fb7b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8fb7e: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8fb83: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8fb86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8fb87: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8fb8a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8fb8fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8fb8f(); return;
}

void f_d8fb8f(void) {
  LOAD_REGS();
L_d8fb8f: /* d8fb8f: push 0xdc0fac */
  { uint32_t v = 0xdc0facu; esp -= 4; W32(esp, v); }
/* d8fb94: push 0xde2248 */
  { uint32_t v = 0xde2248u; esp -= 4; W32(esp, v); }
/* d8fb99: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8fb9fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8fb9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8fba2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fba4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fba6: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8fbabu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8fbab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8fbae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8fbaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8fbb0: xor eax, eax */
  eax = 0;
/* d8fbb2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8fbb9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8fbba: mov esp, ebp */
  esp = ebp;
/* d8fbbc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8fbbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8fbf0(void) {
  LOAD_REGS();
L_d8fbf0: /* d8fbf0: ret  */
  esp += 4; SPILL(); return;
}

void f_d8fc10(void) {
  LOAD_REGS();
L_d8fc10: /* d8fc10: ret  */
  esp += 4; SPILL(); return;
}

void f_d8fc30(void) {
  LOAD_REGS();
L_d8fc30: /* d8fc30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8fc50(void) {
  LOAD_REGS();
L_d8fc50: /* d8fc50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8fc51: mov ebp, esp */
  ebp = esp;
/* d8fc53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8fc55: push 0xdb92e0 */
  { uint32_t v = 0xdb92e0u; esp -= 4; W32(esp, v); }
/* d8fc5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8fc60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8fc61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8fc68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8fc6b: cmp dword ptr [ebp + 0xc], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8fc6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8fc70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8fc71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8fc72: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8fc75: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8fc7c: jne 0xd8fc8e */
  if (!zf) goto L_d8fc8e;
L_d8fc7e: /* d8fc7e: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* d8fc81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8fc83: je 0xd8fc8e */
  if (zf) goto L_d8fc8e;
L_d8fc85: /* d8fc85: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* d8fc88: add ecx, -4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8fc8b: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0xd8fc8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8fc8e: /* d8fc8e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8fc91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8fc92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8fc93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8fc9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8fc9b: mov esp, ebp */
  esp = ebp;
/* d8fc9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8fc9e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8fca1(void) {
  LOAD_REGS();
L_d8fca1: /* d8fca1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8fca4: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8fca9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8fcac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8fcad: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8fcb0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8fcb5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8fcb5(); return;
}

void f_d8fcb5(void) {
  LOAD_REGS();
L_d8fcb5: /* d8fcb5: push 0xdc0fe4 */
  { uint32_t v = 0xdc0fe4u; esp -= 4; W32(esp, v); }
/* d8fcba: push 0xde2250 */
  { uint32_t v = 0xde2250u; esp -= 4; W32(esp, v); }
/* d8fcbf: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8fcc5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8fcc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8fcc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fcca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fccc: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8fcd1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8fcd1: guest_badaddr(0xd8fcd1); return;
}

void f_d8fd10(void) {
  LOAD_REGS();
L_d8fd10: /* d8fd10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8fd11: mov ebp, esp */
  ebp = esp;
/* d8fd13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8fd15: push 0xdb92f0 */
  { uint32_t v = 0xdb92f0u; esp -= 4; W32(esp, v); }
/* d8fd1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8fd20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8fd21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8fd28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8fd2b: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d8fd2e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8fd30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8fd31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8fd32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8fd33: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8fd36: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8fd3d: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xd8fd43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8fd43: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8fd46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8fd47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8fd48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8fd4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8fd50: mov esp, ebp */
  esp = ebp;
/* d8fd52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8fd53: ret  */
  esp += 4; SPILL(); return;
}

void f_d8fd54(void) {
  LOAD_REGS();
L_d8fd54: /* d8fd54: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8fd57: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8fd5c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8fd5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8fd60: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8fd63: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8fd68u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8fd68(); return;
}

void f_d8fd68(void) {
  LOAD_REGS();
L_d8fd68: /* d8fd68: push 0xdc1018 */
  { uint32_t v = 0xdc1018u; esp -= 4; W32(esp, v); }
/* d8fd6d: push 0xde2260 */
  { uint32_t v = 0xde2260u; esp -= 4; W32(esp, v); }
/* d8fd72: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8fd78u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8fd78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8fd7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fd7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fd7f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8fd84u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8fd84: guest_badaddr(0xd8fd84); return;
}

void f_d8fdb0(void) {
  LOAD_REGS();
L_d8fdb0: /* d8fdb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8fdb2: push 0xdb9312 */
  { uint32_t v = 0xdb9312u; esp -= 4; W32(esp, v); }
/* d8fdb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8fdbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8fdbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8fdc5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8fdc8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8fdca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8fdcb: mov esi, edx */
  esi = edx;
/* d8fdcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8fdce: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d8fdd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8fdd3: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd8fdd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8fdd9: mov edi, eax */
  edi = eax;
/* d8fddb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d8fddd: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d8fde1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8fde2: mov ecx, esi */
  ecx = esi;
/* d8fde4: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* d8fdec: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd8fdf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8fdf2: mov esi, eax */
  esi = eax;
/* d8fdf4: mov ecx, edi */
  ecx = edi;
/* d8fdf6: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* d8fdfb: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8fe01u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8fe01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8fe02: mov ecx, esi */
  ecx = esi;
/* d8fe04: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8fe0au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8fe0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8fe0b: call dword ptr [0xde8938] */
  esp -= 4; W32(esp, 0xd8fe11u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* d8fe11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8fe14: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d8fe18: mov esi, eax */
  esi = eax;
/* d8fe1a: mov byte ptr [esp + 0x28], 0 */
  W8((uint32_t)(esp + 0x28u), 0x0u);
/* d8fe1f: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8fe25u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d8fe25: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d8fe29: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* d8fe31: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8fe37u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d8fe37: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* d8fe3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8fe3c: mov eax, esi */
  eax = esi;
/* d8fe3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8fe3f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8fe46: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8fe49: ret  */
  esp += 4; SPILL(); return;
}

void f_d8fe80(void) {
  LOAD_REGS();
L_d8fe80: /* d8fe80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8fe81: mov ebp, esp */
  ebp = esp;
/* d8fe83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8fe85: push 0xdb9330 */
  { uint32_t v = 0xdb9330u; esp -= 4; W32(esp, v); }
/* d8fe8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8fe90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8fe91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8fe98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8fe9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8fe9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8fe9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8fe9e: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8fea1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8fea4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8feab: call dword ptr [0xde893c] */
  esp -= 4; W32(esp, 0xd8feb1u); SPILL(); f_4e4548(); if (g_unwind) return; /* Core!?GetIndex@FName@@QBEHXZ */ RELOAD();
/* d8feb1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8feb4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d8feb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8feb6: add eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* d8feb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8feba: adc edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* d8febd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8fec4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8fec5: mov esp, ebp */
  esp = ebp;
/* d8fec7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8fec8: ret  */
  esp += 4; SPILL(); return;
}

void f_d8fec9(void) {
  LOAD_REGS();
L_d8fec9: /* d8fec9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8fecc: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8fed1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8fed4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8fed5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8fed8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8feddu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8fedd(); return;
}

void f_d8fedd(void) {
  LOAD_REGS();
L_d8fedd: /* d8fedd: push 0xdc1058 */
  { uint32_t v = 0xdc1058u; esp -= 4; W32(esp, v); }
/* d8fee2: push 0xde2270 */
  { uint32_t v = 0xde2270u; esp -= 4; W32(esp, v); }
/* d8fee7: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8feedu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8feed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8fef0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fef2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8fef4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8fef9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8fef9: guest_badaddr(0xd8fef9); return;
}

void f_d8ff20(void) {
  LOAD_REGS();
L_d8ff20: /* d8ff20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8ff21: mov ebp, esp */
  ebp = esp;
/* d8ff23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8ff25: push 0xdb9340 */
  { uint32_t v = 0xdb9340u; esp -= 4; W32(esp, v); }
/* d8ff2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8ff30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ff31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8ff38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8ff3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ff3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ff3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ff3e: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* d8ff45: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8ff48: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8ff4b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8ff52: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd8ff58u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d8ff58: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d8ff5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ff5c: mov ecx, esi */
  ecx = esi;
/* d8ff5e: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd8ff64u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d8ff64: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8ff67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8ff68: mov eax, esi */
  eax = esi;
/* d8ff6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8ff6b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8ff72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8ff73: mov esp, ebp */
  esp = ebp;
/* d8ff75: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8ff76: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8ff79(void) {
  LOAD_REGS();
L_d8ff79: /* d8ff79: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8ff7c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8ff81: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8ff84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ff85: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8ff88: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8ff8du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8ff8d(); return;
}

void f_d8ff8d(void) {
  LOAD_REGS();
L_d8ff8d: /* d8ff8d: push 0xdc108c */
  { uint32_t v = 0xdc108cu; esp -= 4; W32(esp, v); }
/* d8ff92: push 0xde2278 */
  { uint32_t v = 0xde2278u; esp -= 4; W32(esp, v); }
/* d8ff97: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8ff9du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8ff9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8ffa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ffa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ffa4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8ffa9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8ffa9: guest_badaddr(0xd8ffa9); return;
}

void f_d8ffe0(void) {
  LOAD_REGS();
L_d8ffe0: /* d8ffe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8ffe1: mov ebp, esp */
  ebp = esp;
/* d8ffe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8ffe5: push 0xdb9350 */
  { uint32_t v = 0xdb9350u; esp -= 4; W32(esp, v); }
/* d8ffea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8fff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8fff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8fff8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8fffb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8fffe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ffff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d90000: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d90001: mov esi, ecx */
  esi = ecx;
/* d90003: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* d90006: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d90008: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9000b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9000c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d90013: call dword ptr [eax + 0x64] */
  { uint32_t t = R32((uint32_t)(eax + 0x64u)); esp -= 4; W32(esp, 0xd90016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90016: mov ecx, eax */
  ecx = eax;
/* d90018: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* d9001b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9001c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9001e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d90021: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90022: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90029: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9002a: mov esp, ebp */
  esp = ebp;
/* d9002c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9002d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d90030(void) {
  LOAD_REGS();
L_d90030: /* d90030: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d90033: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d90038: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9003b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9003c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9003f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90044u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d90044(); return;
}

void f_d90044(void) {
  LOAD_REGS();
L_d90044: /* d90044: push 0xdc10cc */
  { uint32_t v = 0xdc10ccu; esp -= 4; W32(esp, v); }
/* d90049: push 0xde22a0 */
  { uint32_t v = 0xde22a0u; esp -= 4; W32(esp, v); }
/* d9004e: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd90054u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d90054: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d90057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90059: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9005b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90060u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d90060: guest_badaddr(0xd90060); return;
}

void f_d900a0(void) {
  LOAD_REGS();
L_d900a0: /* d900a0: xor eax, eax */
  eax = 0;
/* d900a2: ret  */
  esp += 4; SPILL(); return;
}

void f_d900c0(void) {
  LOAD_REGS();
L_d900c0: /* d900c0: xor eax, eax */
  eax = 0;
/* d900c2: ret  */
  esp += 4; SPILL(); return;
}

void f_d900e0(void) {
  LOAD_REGS();
L_d900e0: /* d900e0: xor eax, eax */
  eax = 0;
/* d900e2: ret  */
  esp += 4; SPILL(); return;
}

void f_d90100(void) {
  LOAD_REGS();
L_d90100: /* d90100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d90101: mov ebp, esp */
  ebp = esp;
/* d90103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d90105: push 0xdb9360 */
  { uint32_t v = 0xdb9360u; esp -= 4; W32(esp, v); }
/* d9010a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d90110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d90118: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9011b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9011c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9011d: mov esi, ecx */
  esi = ecx;
/* d9011f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d90122: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90124: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d90125: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d90128: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d90129: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9012a: mov ecx, esi */
  ecx = esi;
/* d9012c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d90133: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0xd90136u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90136: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d90138: mov ecx, esi */
  ecx = esi;
/* d9013a: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xd90140u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90140: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90142: mov ecx, esi */
  ecx = esi;
/* d90144: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd90147u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90147: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9014a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9014b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9014c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90153: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d90154: mov esp, ebp */
  esp = ebp;
/* d90156: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d90157: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9015a(void) {
  LOAD_REGS();
L_d9015a: /* d9015a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9015d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d90162: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d90165: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d90166: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d90169: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9016eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9016e(); return;
}

void f_d9016e(void) {
  LOAD_REGS();
L_d9016e: /* d9016e: push 0xdc1104 */
  { uint32_t v = 0xdc1104u; esp -= 4; W32(esp, v); }
/* d90173: push 0xde2304 */
  { uint32_t v = 0xde2304u; esp -= 4; W32(esp, v); }
/* d90178: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9017eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9017e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d90181: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90183: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90185: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9018au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9018a: guest_badaddr(0xd9018a); return;
}

void f_d901c0(void) {
  LOAD_REGS();
L_d901c0: /* d901c0: mov eax, 0x10 */
  eax = 0x10u;
/* d901c5: ret  */
  esp += 4; SPILL(); return;
}

void f_d901e0(void) {
  LOAD_REGS();
L_d901e0: /* d901e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d901e1: mov ebp, esp */
  ebp = esp;
/* d901e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d901e5: push 0xdb9370 */
  { uint32_t v = 0xdb9370u; esp -= 4; W32(esp, v); }
/* d901ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d901f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d901f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d901f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d901fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d901fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d901fd: mov esi, ecx */
  esi = ecx;
/* d901ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90201: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d90202: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d90205: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9020c: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0xd90212u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90212: mov ecx, esi */
  ecx = esi;
/* d90214: call 0xd81b36 */
  esp -= 4; W32(esp, 0xd90219u); SPILL(); f_d81b36(); if (g_unwind) return; RELOAD();
/* d90219: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9021c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9021d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9021e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90225: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d90226: mov esp, ebp */
  esp = ebp;
/* d90228: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d90229: ret  */
  esp += 4; SPILL(); return;
}

void f_d9022a(void) {
  LOAD_REGS();
L_d9022a: /* d9022a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9022d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d90232: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d90235: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d90236: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d90239: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9023eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9023e(); return;
}

void f_d9023e(void) {
  LOAD_REGS();
L_d9023e: /* d9023e: push 0xdc1140 */
  { uint32_t v = 0xdc1140u; esp -= 4; W32(esp, v); }
/* d90243: push 0xde2338 */
  { uint32_t v = 0xde2338u; esp -= 4; W32(esp, v); }
/* d90248: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9024eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9024e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d90251: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90253: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90255: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9025au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9025a: guest_badaddr(0xd9025a); return;
}

void f_d90280(void) {
  LOAD_REGS();
L_d90280: /* d90280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d90281: mov ebp, esp */
  ebp = esp;
/* d90283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d90285: push 0xdb9380 */
  { uint32_t v = 0xdb9380u; esp -= 4; W32(esp, v); }
/* d9028a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d90290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90291: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d90298: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9029b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9029d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9029e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9029f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d902a0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d902a3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d902aa: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xd902b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d902b0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d902b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d902b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d902b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d902bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d902bd: mov esp, ebp */
  esp = ebp;
/* d902bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d902c0: ret  */
  esp += 4; SPILL(); return;
}

void f_d902c1(void) {
  LOAD_REGS();
L_d902c1: /* d902c1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d902c4: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d902c9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d902cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d902cd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d902d0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd902d5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d902d5(); return;
}

void f_d902d5(void) {
  LOAD_REGS();
L_d902d5: /* d902d5: push 0xdc1190 */
  { uint32_t v = 0xdc1190u; esp -= 4; W32(esp, v); }
/* d902da: push 0xde256c */
  { uint32_t v = 0xde256cu; esp -= 4; W32(esp, v); }
/* d902df: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd902e5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d902e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d902e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d902ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d902ec: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd902f1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d902f1: guest_badaddr(0xd902f1); return;
}

void f_d90320(void) {
  LOAD_REGS();
L_d90320: /* d90320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d90321: mov ebp, esp */
  ebp = esp;
/* d90323: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d90325: push 0xdb9390 */
  { uint32_t v = 0xdb9390u; esp -= 4; W32(esp, v); }
/* d9032a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d90330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90331: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d90338: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9033b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9033c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9033d: mov esi, ecx */
  esi = ecx;
/* d9033f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90341: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d90342: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d90345: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9034c: mov dword ptr [esi + 0x58], 1 */
  W32((uint32_t)(esi + 0x58u), 0x1u);
/* d90353: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0xd90359u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90359: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9035b: mov ecx, esi */
  ecx = esi;
/* d9035d: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0xd90363u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90363: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90365: mov ecx, esi */
  ecx = esi;
/* d90367: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd9036au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9036a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9036d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9036e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9036f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90376: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d90377: mov esp, ebp */
  esp = ebp;
/* d90379: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9037a: ret  */
  esp += 4; SPILL(); return;
}

void f_d9037b(void) {
  LOAD_REGS();
L_d9037b: /* d9037b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9037e: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d90383: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d90386: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d90387: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9038a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9038fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9038f(); return;
}

void f_d9038f(void) {
  LOAD_REGS();
L_d9038f: /* d9038f: push 0xdc11f0 */
  { uint32_t v = 0xdc11f0u; esp -= 4; W32(esp, v); }
/* d90394: push 0xde2574 */
  { uint32_t v = 0xde2574u; esp -= 4; W32(esp, v); }
/* d90399: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9039fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9039f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d903a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d903a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d903a6: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd903abu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d903ab: guest_badaddr(0xd903ab); return;
}

void f_d903e0(void) {
  LOAD_REGS();
L_d903e0: /* d903e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d903e1: mov ebp, esp */
  ebp = esp;
/* d903e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d903e5: push 0xdb93a0 */
  { uint32_t v = 0xdb93a0u; esp -= 4; W32(esp, v); }
/* d903ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d903f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d903f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d903f8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d903fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d903fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d903fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d903fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d90401: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d90404: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* d90407: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d90409: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9040b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9040c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d90413: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd90416u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90416: mov esi, eax */
  esi = eax;
/* d90418: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9041a: je 0xd904a2 */
  if (zf) goto L_d904a2;
L_d90420: /* d90420: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d90423: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* d90426: call dword ptr [0xde894c] */
  esp -= 4; W32(esp, 0xd9042cu); SPILL(); f_4e2ab3(); if (g_unwind) return; /* Core!?GetSize@UProperty@@QBEHXZ */ RELOAD();
/* d9042c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9042f: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* d90432: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90433: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d90435: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d90436: mov ecx, esi */
  ecx = esi;
/* d90438: call dword ptr [0xde8948] */
  esp -= 4; W32(esp, 0xd9043eu); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* d9043e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d90441: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* d90444: call dword ptr [0xde894c] */
  esp -= 4; W32(esp, 0xd9044au); SPILL(); f_4e2ab3(); if (g_unwind) return; /* Core!?GetSize@UProperty@@QBEHXZ */ RELOAD();
/* d9044a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9044d: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* d90450: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d90453: call dword ptr [0xde894c] */
  esp -= 4; W32(esp, 0xd90459u); SPILL(); f_4e2ab3(); if (g_unwind) return; /* Core!?GetSize@UProperty@@QBEHXZ */ RELOAD();
/* d90459: mov ecx, esi */
  ecx = esi;
/* d9045b: mov edi, eax */
  edi = eax;
/* d9045d: call dword ptr [0xde8944] */
  esp -= 4; W32(esp, 0xd90463u); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* d90463: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d90466: mov ecx, dword ptr [edx + 0x44] */
  ecx = R32((uint32_t)(edx + 0x44u));
/* d90469: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* d9046c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9046e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* d90471: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d90474: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* d90477: xor eax, eax */
  eax = 0;
/* d90479: mov ebx, ecx */
  ebx = ecx;
/* d9047b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d9047e: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* d90481: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d90483: mov ecx, ebx */
  ecx = ebx;
/* d90485: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* d90487: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9048a: mov esi, dword ptr [edx + 0xc] */
  esi = R32((uint32_t)(edx + 0xcu));
/* d9048d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9048f: mov ecx, esi */
  ecx = esi;
/* d90491: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0xd90494u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90494: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d90496: mov ecx, esi */
  ecx = esi;
/* d90498: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd9049bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9049b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9049d: mov ecx, esi */
  ecx = esi;
/* d9049f: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0xd904a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d904a2: /* d904a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d904a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d904a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d904a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d904ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d904af: mov esp, ebp */
  esp = ebp;
/* d904b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d904b2: ret  */
  esp += 4; SPILL(); return;
}

void f_d904b3(void) {
  LOAD_REGS();
L_d904b3: /* d904b3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d904b6: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d904bb: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* d904be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d904bf: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* d904c2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd904c7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d904c7(); return;
}

void f_d904c7(void) {
  LOAD_REGS();
L_d904c7: /* d904c7: push 0xdc1244 */
  { uint32_t v = 0xdc1244u; esp -= 4; W32(esp, v); }
/* d904cc: push 0xde25d0 */
  { uint32_t v = 0xde25d0u; esp -= 4; W32(esp, v); }
/* d904d1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd904d7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d904d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d904da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d904dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d904de: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd904e3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d904e3: guest_badaddr(0xd904e3); return;
}

void f_d90540(void) {
  LOAD_REGS();
L_d90540: /* d90540: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d90541: mov ebp, esp */
  ebp = esp;
/* d90543: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d90545: push 0xdb93b0 */
  { uint32_t v = 0xdb93b0u; esp -= 4; W32(esp, v); }
/* d9054a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d90550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90551: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d90558: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9055b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9055c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9055d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9055e: mov esi, ecx */
  esi = ecx;
/* d90560: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* d90563: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90565: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d90568: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9056a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9056b: mov ecx, esi */
  ecx = esi;
/* d9056d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d90574: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd90577u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90577: mov ebx, eax */
  ebx = eax;
/* d90579: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9057b: je 0xd905b3 */
  if (zf) goto L_d905b3;
L_d9057d: /* d9057d: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* d90580: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* d90583: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d90585: mov esi, dword ptr [esi + 0x44] */
  esi = R32((uint32_t)(esi + 0x44u));
/* d90588: mov ecx, edi */
  ecx = edi;
/* d9058a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d9058d: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0xd90590u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90590: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d90593: call dword ptr [0xde894c] */
  esp -= 4; W32(esp, 0xd90599u); SPILL(); f_4e2ab3(); if (g_unwind) return; /* Core!?GetSize@UProperty@@QBEHXZ */ RELOAD();
/* d90599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9059a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9059c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9059d: mov ecx, ebx */
  ecx = ebx;
/* d9059f: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd905a5u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d905a5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d905a7: mov ecx, edi */
  ecx = edi;
/* d905a9: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd905acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d905ac: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d905ae: mov ecx, edi */
  ecx = edi;
/* d905b0: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0xd905b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d905b3: /* d905b3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d905b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d905b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d905b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d905bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d905c0: mov esp, ebp */
  esp = ebp;
/* d905c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d905c3: ret  */
  esp += 4; SPILL(); return;
}

void f_d905c4(void) {
  LOAD_REGS();
L_d905c4: /* d905c4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d905c7: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d905cc: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* d905cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d905d0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* d905d3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd905d8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d905d8(); return;
}

void f_d905d8(void) {
  LOAD_REGS();
L_d905d8: /* d905d8: push 0xdc128c */
  { uint32_t v = 0xdc128cu; esp -= 4; W32(esp, v); }
/* d905dd: push 0xde25d8 */
  { uint32_t v = 0xde25d8u; esp -= 4; W32(esp, v); }
/* d905e2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd905e8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d905e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d905eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d905ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d905ef: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd905f4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d905f4: guest_badaddr(0xd905f4); return;
}

void f_d90630(void) {
  LOAD_REGS();
L_d90630: /* d90630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d90631: mov ebp, esp */
  ebp = esp;
/* d90633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d90635: push 0xdb93c0 */
  { uint32_t v = 0xdb93c0u; esp -= 4; W32(esp, v); }
/* d9063a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d90640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d90648: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9064b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9064c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9064d: mov esi, ecx */
  esi = ecx;
/* d9064f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d90652: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d90655: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d90657: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d90658: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9065b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d90662: je 0xd9066f */
  if (zf) goto L_d9066f;
L_d90664: /* d90664: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d90666: push 0xde2664 */
  { uint32_t v = 0xde2664u; esp -= 4; W32(esp, v); }
/* d9066b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9066c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9066fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9066f: /* d9066f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90671: mov ecx, esi */
  ecx = esi;
/* d90673: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0xd90676u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90676: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d90678: mov ecx, esi */
  ecx = esi;
/* d9067a: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xd9067du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9067d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d90680: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d90681: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90682: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90689: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9068a: mov esp, ebp */
  esp = ebp;
/* d9068c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9068d: ret  */
  esp += 4; SPILL(); return;
}

void f_d9068e(void) {
  LOAD_REGS();
L_d9068e: /* d9068e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d90691: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d90696: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d90699: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9069a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9069d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd906a2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d906a2(); return;
}

void f_d906a2(void) {
  LOAD_REGS();
L_d906a2: /* d906a2: push 0xdc12d8 */
  { uint32_t v = 0xdc12d8u; esp -= 4; W32(esp, v); }
/* d906a7: push 0xde2678 */
  { uint32_t v = 0xde2678u; esp -= 4; W32(esp, v); }
/* d906ac: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd906b2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d906b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d906b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d906b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d906b9: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd906beu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d906be: guest_badaddr(0xd906be); return;
}

void f_d906f0(void) {
  LOAD_REGS();
L_d906f0: /* d906f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d906f1: mov ebp, esp */
  ebp = esp;
/* d906f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d906f5: push 0xdb93d0 */
  { uint32_t v = 0xdb93d0u; esp -= 4; W32(esp, v); }
/* d906fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d90700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d90708: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9070b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9070c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9070d: mov esi, ecx */
  esi = ecx;
/* d9070f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d90712: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d90715: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d90717: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d90718: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9071b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d90722: je 0xd9072f */
  if (zf) goto L_d9072f;
L_d90724: /* d90724: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d90726: push 0xde2680 */
  { uint32_t v = 0xde2680u; esp -= 4; W32(esp, v); }
/* d9072b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9072c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9072fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9072f: /* d9072f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90731: mov ecx, esi */
  ecx = esi;
/* d90733: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0xd90736u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90736: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d90738: mov ecx, esi */
  ecx = esi;
/* d9073a: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xd9073du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9073d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d90740: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d90741: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90742: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90749: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9074a: mov esp, ebp */
  esp = ebp;
/* d9074c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9074d: ret  */
  esp += 4; SPILL(); return;
}

void f_d9074e(void) {
  LOAD_REGS();
L_d9074e: /* d9074e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d90751: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d90756: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d90759: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9075a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9075d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90762u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d90762(); return;
}

void f_d90762(void) {
  LOAD_REGS();
L_d90762: /* d90762: push 0xdc1328 */
  { uint32_t v = 0xdc1328u; esp -= 4; W32(esp, v); }
/* d90767: push 0xde2694 */
  { uint32_t v = 0xde2694u; esp -= 4; W32(esp, v); }
/* d9076c: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd90772u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d90772: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d90775: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90777: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90779: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9077eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9077e: guest_badaddr(0xd9077e); return;
}

void f_d907b0(void) {
  LOAD_REGS();
L_d907b0: /* d907b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d907b1: mov ebp, esp */
  ebp = esp;
/* d907b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d907b5: push 0xdb93e0 */
  { uint32_t v = 0xdb93e0u; esp -= 4; W32(esp, v); }
/* d907ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d907c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d907c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d907c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d907cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d907cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d907cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d907ce: mov esi, ecx */
  esi = ecx;
/* d907d0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d907d2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d907d5: push 0xde269c */
  { uint32_t v = 0xde269cu; esp -= 4; W32(esp, v); }
/* d907da: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d907e1: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0xd907e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d907e7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d907e9: mov ecx, esi */
  ecx = esi;
/* d907eb: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xd907eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d907ee: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* d907f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d907f3: je 0xd90803 */
  if (zf) goto L_d90803;
L_d907f5: /* d907f5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d907f7: mov ecx, esi */
  ecx = esi;
/* d907f9: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0xd907fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d907fc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d907fe: mov ecx, esi */
  ecx = esi;
/* d90800: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd90803u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d90803: /* d90803: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d90806: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d90807: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90808: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9080f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d90810: mov esp, ebp */
  esp = ebp;
/* d90812: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d90813: ret  */
  esp += 4; SPILL(); return;
}

void f_d90814(void) {
  LOAD_REGS();
L_d90814: /* d90814: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d90817: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9081c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9081f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d90820: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d90823: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90828u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d90828(); return;
}

void f_d90828(void) {
  LOAD_REGS();
L_d90828: /* d90828: push 0xdc136c */
  { uint32_t v = 0xdc136cu; esp -= 4; W32(esp, v); }
/* d9082d: push 0xde26a8 */
  { uint32_t v = 0xde26a8u; esp -= 4; W32(esp, v); }
/* d90832: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd90838u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d90838: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9083b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9083d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9083f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90844u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d90844: guest_badaddr(0xd90844); return;
}

void f_d90880(void) {
  LOAD_REGS();
L_d90880: /* d90880: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d90881: mov ebp, esp */
  ebp = esp;
/* d90883: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d90885: push 0xdb93f0 */
  { uint32_t v = 0xdb93f0u; esp -= 4; W32(esp, v); }
/* d9088a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d90890: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90891: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d90898: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9089b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9089c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9089d: mov esi, ecx */
  esi = ecx;
/* d9089f: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d908a2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d908a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d908a5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d908a8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d908af: je 0xd908f6 */
  if (zf) goto L_d908f6;
L_d908b1: /* d908b1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d908b3: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0xd908b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d908b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d908bb: jl 0xd908f6 */
  if ((sf != of)) goto L_d908f6;
L_d908bd: /* d908bd: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d908c0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d908c2: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd908c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d908c8: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d908cb: mov ebx, eax */
  ebx = eax;
/* d908cd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d908cf: call dword ptr [eax + 0xf0] */
  { uint32_t t = R32((uint32_t)(eax + 0xf0u)); esp -= 4; W32(esp, 0xd908d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d908d5: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d908d8: mov edi, eax */
  edi = eax;
/* d908da: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d908dc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d908df: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* d908e2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d908e3: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0xd908e3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* d908e5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d908e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d908e9: call dword ptr [eax + 0xf8] */
  { uint32_t t = R32((uint32_t)(eax + 0xf8u)); esp -= 4; W32(esp, 0xd908efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d908ef: mov dword ptr [esi + 0x58], 1 */
  W32((uint32_t)(esi + 0x58u), 0x1u);
L_d908f6: /* d908f6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d908f8: mov ecx, esi */
  ecx = esi;
/* d908fa: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xd90900u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90900: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90902: mov ecx, esi */
  ecx = esi;
/* d90904: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xd9090au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9090a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9090c: mov ecx, esi */
  ecx = esi;
/* d9090e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xd90911u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90911: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d90914: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d90915: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90916: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9091d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9091e: mov esp, ebp */
  esp = ebp;
/* d90920: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d90921: ret  */
  esp += 4; SPILL(); return;
}

void f_d90922(void) {
  LOAD_REGS();
L_d90922: /* d90922: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d90925: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9092a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d9092d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9092e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d90931: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90936u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d90936(); return;
}

void f_d90936(void) {
  LOAD_REGS();
L_d90936: /* d90936: push 0xdc13b4 */
  { uint32_t v = 0xdc13b4u; esp -= 4; W32(esp, v); }
/* d9093b: push 0xde26b0 */
  { uint32_t v = 0xde26b0u; esp -= 4; W32(esp, v); }
/* d90940: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd90946u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d90946: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d90949: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9094b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9094d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90952u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d90952: guest_badaddr(0xd90952); return;
}

void f_d909a0(void) {
  LOAD_REGS();
L_d909a0: /* d909a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d909a1: mov ebp, esp */
  ebp = esp;
/* d909a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d909a5: push 0xdb9412 */
  { uint32_t v = 0xdb9412u; esp -= 4; W32(esp, v); }
/* d909aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d909b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d909b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d909b8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d909bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d909bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d909bd: mov esi, ecx */
  esi = ecx;
/* d909bf: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d909c2: xor ebx, ebx */
  ebx = 0;
/* d909c4: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d909c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d909c7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d909ca: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d909cd: je 0xd90a28 */
  if (zf) goto L_d90a28;
L_d909cf: /* d909cf: call 0xd82293 */
  esp -= 4; W32(esp, 0xd909d4u); SPILL(); f_d82293(); if (g_unwind) return; RELOAD();
/* d909d4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d909d6: je 0xd90a72 */
  if (zf) goto L_d90a72;
L_d909dc: /* d909dc: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d909df: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d909e1: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* d909e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d909e5: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd909e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d909e8: mov ecx, eax */
  ecx = eax;
/* d909ea: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d909ee: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd909f4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d909f4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d909f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d909f7: mov ecx, esi */
  ecx = esi;
/* d909f9: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xd909ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d909ff: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d90a02: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d90a05: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd90a0bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d90a0b: cmp dword ptr [esi + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d90a0e: je 0xd90a72 */
  if (zf) goto L_d90a72;
L_d90a10: /* d90a10: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90a12: mov ecx, esi */
  ecx = esi;
/* d90a14: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0xd90a17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90a17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d90a1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90a21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d90a22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90a23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d90a24: mov esp, ebp */
  esp = ebp;
/* d90a26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d90a27: ret  */
  esp += 4; SPILL(); return;
L_d90a28: /* d90a28: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d90a2b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d90a2d: je 0xd90a72 */
  if (zf) goto L_d90a72;
L_d90a2f: /* d90a2f: cmp dword ptr [esi + 0x58], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d90a32: je 0xd90a6f */
  if (zf) goto L_d90a6f;
L_d90a34: /* d90a34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d90a36: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd90a3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90a3c: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d90a3f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d90a41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90a42: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d90a45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90a46: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd90a4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90a4c: mov ecx, eax */
  ecx = eax;
/* d90a4e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d90a52: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd90a58u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d90a58: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d90a5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90a5b: mov ecx, esi */
  ecx = esi;
/* d90a5d: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xd90a63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90a63: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d90a66: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d90a69: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd90a6fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d90a6f: /* d90a6f: mov dword ptr [esi + 0x58], ebx */
  W32((uint32_t)(esi + 0x58u), ebx);
L_d90a72: /* d90a72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d90a75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d90a76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90a77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90a7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d90a7f: mov esp, ebp */
  esp = ebp;
/* d90a81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d90a82: ret  */
  esp += 4; SPILL(); return;
}

void f_d90a83(void) {
  LOAD_REGS();
L_d90a83: /* d90a83: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d90a86: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d90a8b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d90a8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d90a8f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d90a92: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90a97u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d90a97(); return;
}

void f_d90a97(void) {
  LOAD_REGS();
L_d90a97: /* d90a97: push 0xdc13ec */
  { uint32_t v = 0xdc13ecu; esp -= 4; W32(esp, v); }
/* d90a9c: push 0xde26b8 */
  { uint32_t v = 0xde26b8u; esp -= 4; W32(esp, v); }
/* d90aa1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd90aa7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d90aa7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d90aaa: xor ebx, ebx */
  ebx = 0;
/* d90aac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d90aad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d90aae: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90ab3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d90ab3: guest_badaddr(0xd90ab3); return;
}

void f_d90b10(void) {
  LOAD_REGS();
L_d90b10: /* d90b10: fld dword ptr [0xdc1460] */
  { double v = F32((uint32_t)(0xdc1460u)); FPUSH(v); }
/* d90b16: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d90b19: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* d90b1d: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* d90b21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90b23: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d90b26: jp 0xd90b2e */
  if (pf) goto L_d90b2e;
L_d90b28: /* d90b28: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* d90b2c: jmp 0xd90b32 */
  goto L_d90b32;
L_d90b2e: /* d90b2e: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
L_d90b32: /* d90b32: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* d90b36: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* d90b38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90b3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d90b3c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d90b3f: jp 0xd90b47 */
  if (pf) goto L_d90b47;
L_d90b41: /* d90b41: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* d90b45: jmp 0xd90b60 */
  goto L_d90b60;
L_d90b47: /* d90b47: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* d90b4b: fcomp dword ptr [esp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x30u)));
  FPOP();
/* d90b4f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90b51: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d90b54: jp 0xd90b5c */
  if (pf) goto L_d90b5c;
L_d90b56: /* d90b56: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* d90b5a: jmp 0xd90b60 */
  goto L_d90b60;
L_d90b5c: /* d90b5c: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
L_d90b60: /* d90b60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d90b61: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd90b66u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d90b66: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* d90b6a: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* d90b6e: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* d90b70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90b72: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d90b75: jne 0xd90b7d */
  if (!zf) goto L_d90b7d;
L_d90b77: /* d90b77: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* d90b7b: jmp 0xd90b81 */
  goto L_d90b81;
L_d90b7d: /* d90b7d: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
L_d90b81: /* d90b81: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* d90b85: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* d90b87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90b89: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d90b8b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d90b8e: jne 0xd90b96 */
  if (!zf) goto L_d90b96;
L_d90b90: /* d90b90: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* d90b94: jmp 0xd90baf */
  goto L_d90baf;
L_d90b96: /* d90b96: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* d90b9a: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* d90b9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90ba0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d90ba3: jne 0xd90bab */
  if (!zf) goto L_d90bab;
L_d90ba5: /* d90ba5: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* d90ba9: jmp 0xd90baf */
  goto L_d90baf;
L_d90bab: /* d90bab: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
L_d90baf: /* d90baf: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd90bb4u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d90bb4: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* d90bb7: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* d90bbb: movzx edx, bl */
  edx = (uint32_t)((ebx & 0xffu));
/* d90bbe: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* d90bc2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* d90bc6: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d90bc8: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* d90bcc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d90bcd: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* d90bd1: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* d90bd5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* d90bd7: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* d90bdb: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* d90bdf: fld dword ptr [0xdc145c] */
  { double v = F32((uint32_t)(0xdc145cu)); FPUSH(v); }
/* d90be5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* d90be7: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* d90beb: jne 0xd90c04 */
  if (!zf) goto L_d90c04;
L_d90bed: /* d90bed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d90bef: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d90bf7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d90bf9: fld dword ptr [0xdc1460] */
  { double v = F32((uint32_t)(0xdc1460u)); FPUSH(v); }
/* d90bff: jmp 0xd90ce7 */
  goto L_d90ce7;
L_d90c04: /* d90c04: fld dword ptr [0xdc1458] */
  { double v = F32((uint32_t)(0xdc1458u)); FPUSH(v); }
/* d90c0a: fdiv dword ptr [esp + 4] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x4u)));
/* d90c0e: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* d90c12: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* d90c16: fmul st(1) */
  ST0 = ST0 * STI(1);
/* d90c18: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* d90c1c: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* d90c20: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* d90c24: fmul st(1) */
  ST0 = ST0 * STI(1);
/* d90c26: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* d90c2a: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* d90c2e: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* d90c32: fmul st(1) */
  ST0 = ST0 * STI(1);
/* d90c34: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* d90c38: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d90c3a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* d90c3e: fcomp dword ptr [0xdc1454] */
  fpu_com(ST0, F32((uint32_t)(0xdc1454u)));
  FPOP();
/* d90c44: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90c46: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d90c49: jp 0xd90c53 */
  if (pf) goto L_d90c53;
L_d90c4b: /* d90c4b: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* d90c4f: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* d90c51: jmp 0xd90c5f */
  goto L_d90c5f;
L_d90c53: /* d90c53: fld dword ptr [0xdc1450] */
  { double v = F32((uint32_t)(0xdc1450u)); FPUSH(v); }
/* d90c59: fsub st(1) */
  ST0 = ST0 - STI(1);
/* d90c5b: fdivr dword ptr [esp + 4] */
  ST0 = (F32((uint32_t)(esp + 0x4u))) / ST0;
L_d90c5f: /* d90c5f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* d90c63: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d90c65: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* d90c69: fcomp dword ptr [esp] */
  fpu_com(ST0, F32((uint32_t)(esp)));
  FPOP();
/* d90c6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90c6f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d90c72: jp 0xd90c8a */
  if (pf) goto L_d90c8a;
L_d90c74: /* d90c74: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d90c76: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* d90c7a: fadd dword ptr [0xdc144c] */
  ST0 = ST0 + (F32((uint32_t)(0xdc144cu)));
/* d90c80: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* d90c84: fmul dword ptr [0xdc1448] */
  ST0 = ST0 * (F32((uint32_t)(0xdc1448u)));
L_d90c8a: /* d90c8a: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* d90c8e: fcomp dword ptr [esp] */
  fpu_com(ST0, F32((uint32_t)(esp)));
  FPOP();
/* d90c92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90c94: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d90c97: jp 0xd90caf */
  if (pf) goto L_d90caf;
L_d90c99: /* d90c99: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d90c9b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* d90c9f: fadd dword ptr [0xdc1444] */
  ST0 = ST0 + (F32((uint32_t)(0xdc1444u)));
/* d90ca5: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* d90ca9: fmul dword ptr [0xdc1448] */
  ST0 = ST0 * (F32((uint32_t)(0xdc1448u)));
L_d90caf: /* d90caf: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* d90cb3: fcomp dword ptr [esp] */
  fpu_com(ST0, F32((uint32_t)(esp)));
  FPOP();
/* d90cb7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90cb9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d90cbc: jp 0xd90cd4 */
  if (pf) goto L_d90cd4;
L_d90cbe: /* d90cbe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d90cc0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* d90cc4: fadd dword ptr [0xdc1440] */
  ST0 = ST0 + (F32((uint32_t)(0xdc1440u)));
/* d90cca: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* d90cce: fmul dword ptr [0xdc1448] */
  ST0 = ST0 * (F32((uint32_t)(0xdc1448u)));
L_d90cd4: /* d90cd4: fcom dword ptr [0xdc143c] */
  fpu_com(ST0, F32((uint32_t)(0xdc143cu)));
/* d90cda: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d90cdc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d90cdf: jne 0xd90ce7 */
  if (!zf) goto L_d90ce7;
L_d90ce1: /* d90ce1: fsub dword ptr [0xdc143c] */
  ST0 = ST0 - (F32((uint32_t)(0xdc143cu)));
L_d90ce7: /* d90ce7: fmul dword ptr [0xdc1438] */
  ST0 = ST0 * (F32((uint32_t)(0xdc1438u)));
/* d90ced: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d90cf1: mov ecx, eax */
  ecx = eax;
/* d90cf3: fmul dword ptr [0xdc1434] */
  ST0 = ST0 * (F32((uint32_t)(0xdc1434u)));
/* d90cf9: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* d90cfd: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d90d01: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* d90d05: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d90d07: fmul dword ptr [0xdc1434] */
  ST0 = ST0 * (F32((uint32_t)(0xdc1434u)));
/* d90d0d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* d90d11: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d90d15: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* d90d19: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* d90d1c: fmul dword ptr [0xdc1434] */
  ST0 = ST0 * (F32((uint32_t)(0xdc1434u)));
/* d90d22: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* d90d26: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* d90d2a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* d90d2d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d90d30: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d90dd0(void) {
  LOAD_REGS();
L_d90dd0: /* d90dd0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d90dd3: mov edx, dword ptr [0xde8950] */
  edx = R32((uint32_t)(0xde8950u));
/* d90dd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d90dda: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* d90ddd: xor ecx, ecx */
  ecx = 0;
/* d90ddf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d90de1: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* d90de4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90de5: mov eax, ecx */
  eax = ecx;
/* d90de7: ret  */
  esp += 4; SPILL(); return;
}

void f_d90e00(void) {
  LOAD_REGS();
L_d90e00: /* d90e00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d90e01: mov ebp, esp */
  ebp = esp;
/* d90e03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d90e05: push 0xdb9430 */
  { uint32_t v = 0xdb9430u; esp -= 4; W32(esp, v); }
/* d90e0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d90e10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90e11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d90e18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d90e1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d90e1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d90e1d: mov esi, ecx */
  esi = ecx;
/* d90e1f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d90e22: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d90e25: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d90e27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d90e28: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d90e2b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d90e32: je 0xd90e3f */
  if (zf) goto L_d90e3f;
L_d90e34: /* d90e34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d90e36: push 0xde284c */
  { uint32_t v = 0xde284cu; esp -= 4; W32(esp, v); }
/* d90e3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90e3c: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd90e3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d90e3f: /* d90e3f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d90e41: mov ecx, esi */
  ecx = esi;
/* d90e43: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd90e46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d90e46: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d90e49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d90e4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90e4b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90e52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d90e53: mov esp, ebp */
  esp = ebp;
/* d90e55: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d90e56: ret  */
  esp += 4; SPILL(); return;
}

void f_d90e57(void) {
  LOAD_REGS();
L_d90e57: /* d90e57: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d90e5a: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d90e5f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d90e62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d90e63: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d90e66: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90e6bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d90e6b(); return;
}

void f_d90e6b(void) {
  LOAD_REGS();
L_d90e6b: /* d90e6b: push 0xdc1464 */
  { uint32_t v = 0xdc1464u; esp -= 4; W32(esp, v); }
/* d90e70: push 0xde2860 */
  { uint32_t v = 0xde2860u; esp -= 4; W32(esp, v); }
/* d90e75: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd90e7bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d90e7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d90e7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90e80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90e82: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90e87u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d90e87: guest_badaddr(0xd90e87); return;
}

void f_d90ec0(void) {
  LOAD_REGS();
L_d90ec0: /* d90ec0: mov eax, 0x14 */
  eax = 0x14u;
/* d90ec5: ret  */
  esp += 4; SPILL(); return;
}

void f_d90ee0(void) {
  LOAD_REGS();
L_d90ee0: /* d90ee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d90ee1: mov ebp, esp */
  ebp = esp;
/* d90ee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d90ee5: push 0xdb9440 */
  { uint32_t v = 0xdb9440u; esp -= 4; W32(esp, v); }
/* d90eea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d90ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90ef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d90ef8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d90efb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d90efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d90efd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d90efe: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d90f01: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d90f04: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d90f0b: call dword ptr [0xde893c] */
  esp -= 4; W32(esp, 0xd90f11u); SPILL(); f_4e4548(); if (g_unwind) return; /* Core!?GetIndex@FName@@QBEHXZ */ RELOAD();
/* d90f11: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d90f14: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d90f15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d90f16: add eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* d90f19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90f1a: adc edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* d90f1d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90f24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d90f25: mov esp, ebp */
  esp = ebp;
/* d90f27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d90f28: ret  */
  esp += 4; SPILL(); return;
}

void f_d90f29(void) {
  LOAD_REGS();
L_d90f29: /* d90f29: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d90f2c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d90f31: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d90f34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d90f35: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d90f38: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90f3du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d90f3d(); return;
}

void f_d90f3d(void) {
  LOAD_REGS();
L_d90f3d: /* d90f3d: push 0xdc14b0 */
  { uint32_t v = 0xdc14b0u; esp -= 4; W32(esp, v); }
/* d90f42: push 0xde28d0 */
  { uint32_t v = 0xde28d0u; esp -= 4; W32(esp, v); }
/* d90f47: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd90f4du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d90f4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d90f50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90f52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d90f54: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90f59u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d90f59: guest_badaddr(0xd90f59); return;
}

void f_d90f80(void) {
  LOAD_REGS();
L_d90f80: /* d90f80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d90f81: mov ebp, esp */
  ebp = esp;
/* d90f83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d90f85: push 0xdb9450 */
  { uint32_t v = 0xdb9450u; esp -= 4; W32(esp, v); }
/* d90f8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d90f90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90f91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d90f98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d90f9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d90f9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d90f9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d90f9e: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* d90fa5: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d90fa8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d90fab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d90fb2: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd90fb8u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d90fb8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d90fbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d90fbc: mov ecx, esi */
  ecx = esi;
/* d90fbe: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd90fc4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d90fc4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d90fc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d90fc8: mov eax, esi */
  eax = esi;
/* d90fca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d90fcb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d90fd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d90fd3: mov esp, ebp */
  esp = ebp;
/* d90fd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d90fd6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d90fd9(void) {
  LOAD_REGS();
L_d90fd9: /* d90fd9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d90fdc: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d90fe1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d90fe4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d90fe5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d90fe8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd90fedu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d90fed(); return;
}

void f_d90fed(void) {
  LOAD_REGS();
L_d90fed: /* d90fed: push 0xdc14e4 */
  { uint32_t v = 0xdc14e4u; esp -= 4; W32(esp, v); }
/* d90ff2: push 0xde28d8 */
  { uint32_t v = 0xde28d8u; esp -= 4; W32(esp, v); }
/* d90ff7: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd90ffdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d90ffd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91000: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91002: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91004: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91009u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d91009: guest_badaddr(0xd91009); return;
}

void f_d91040(void) {
  LOAD_REGS();
L_d91040: /* d91040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d91041: mov ebp, esp */
  ebp = esp;
/* d91043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d91045: push 0xdb9460 */
  { uint32_t v = 0xdb9460u; esp -= 4; W32(esp, v); }
/* d9104a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d91050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d91058: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9105b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9105c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9105d: mov esi, ecx */
  esi = ecx;
/* d9105f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91060: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* d91063: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d91066: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9106d: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd91073u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d91073: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d91076: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d91078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91079: call dword ptr [edx + 0x100] */
  { uint32_t t = R32((uint32_t)(edx + 0x100u)); esp -= 4; W32(esp, 0xd9107fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9107f: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d91082: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d91084: xor ebx, ebx */
  ebx = 0;
/* d91086: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d91088: setl bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* d9108b: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* d9108c: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* d9108e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9108f: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xd91095u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d91095: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91098: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91099: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9109a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d910a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d910a2: mov esp, ebp */
  esp = ebp;
/* d910a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d910a5: ret  */
  esp += 4; SPILL(); return;
}

void f_d910a6(void) {
  LOAD_REGS();
L_d910a6: /* d910a6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d910a9: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d910ae: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d910b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d910b2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d910b5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd910bau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d910ba(); return;
}

void f_d910ba(void) {
  LOAD_REGS();
L_d910ba: /* d910ba: push 0xdc1520 */
  { uint32_t v = 0xdc1520u; esp -= 4; W32(esp, v); }
/* d910bf: push 0xde2930 */
  { uint32_t v = 0xde2930u; esp -= 4; W32(esp, v); }
/* d910c4: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd910cau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d910ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d910cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d910cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d910d1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd910d6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d910d6: guest_badaddr(0xd910d6); return;
}

void f_d91110(void) {
  LOAD_REGS();
L_d91110: /* d91110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d91111: mov ebp, esp */
  ebp = esp;
/* d91113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d91115: push 0xdb9479 */
  { uint32_t v = 0xdb9479u; esp -= 4; W32(esp, v); }
/* d9111a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d91120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d91128: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9112b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9112c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9112d: mov esi, ecx */
  esi = ecx;
/* d9112f: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d91132: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d91134: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91135: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d91138: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9113f: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0xd91145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d91145: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d91148: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9114a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9114b: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d9114e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9114f: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd91155u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d91155: lea edi, [esi + 0x48] */
  edi = (uint32_t)(esi + 0x48u);
/* d91158: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91159: mov ecx, edi */
  ecx = edi;
/* d9115b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9115f: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd91165u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d91165: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d91168: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9116c: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd91172u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d91172: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91173: mov ecx, 0xde4f60 */
  ecx = 0xde4f60u;
/* d91178: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd9117eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d9117e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d91180: mov ecx, esi */
  ecx = esi;
/* d91182: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xd91185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d91185: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91188: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91189: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9118a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d91191: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91192: mov esp, ebp */
  esp = ebp;
/* d91194: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91195: ret  */
  esp += 4; SPILL(); return;
}

void f_d91196(void) {
  LOAD_REGS();
L_d91196: /* d91196: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d91199: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9119e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d911a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d911a2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d911a5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd911aau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d911aa(); return;
}

void f_d911aa(void) {
  LOAD_REGS();
L_d911aa: /* d911aa: push 0xdc1580 */
  { uint32_t v = 0xdc1580u; esp -= 4; W32(esp, v); }
/* d911af: push 0xde2938 */
  { uint32_t v = 0xde2938u; esp -= 4; W32(esp, v); }
/* d911b4: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd911bau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d911ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d911bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d911bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d911c1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd911c6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d911c6: guest_badaddr(0xd911c6); return;
}

void f_d91200(void) {
  LOAD_REGS();
L_d91200: /* d91200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d91201: mov ebp, esp */
  ebp = esp;
/* d91203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d91205: push 0xdb9490 */
  { uint32_t v = 0xdb9490u; esp -= 4; W32(esp, v); }
/* d9120a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d91210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d91218: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9121b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9121c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9121d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d91220: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91221: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d91224: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* d9122b: push 0xde4f50 */
  { uint32_t v = 0xde4f50u; esp -= 4; W32(esp, v); }
/* d91230: mov ecx, esi */
  ecx = esi;
/* d91232: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d91239: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd9123fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d9123f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91242: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91243: mov eax, esi */
  eax = esi;
/* d91245: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91246: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9124d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9124e: mov esp, ebp */
  esp = ebp;
/* d91250: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91251: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d91254(void) {
  LOAD_REGS();
L_d91254: /* d91254: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d91257: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9125c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9125f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d91260: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d91263: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91268u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d91268(); return;
}

void f_d91268(void) {
  LOAD_REGS();
L_d91268: /* d91268: push 0xdc15d8 */
  { uint32_t v = 0xdc15d8u; esp -= 4; W32(esp, v); }
/* d9126d: push 0xde29a0 */
  { uint32_t v = 0xde29a0u; esp -= 4; W32(esp, v); }
/* d91272: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd91278u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d91278: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9127b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9127d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9127f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91284u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d91284: guest_badaddr(0xd91284); return;
}

void f_d912c0(void) {
  LOAD_REGS();
L_d912c0: /* d912c0: mov eax, ecx */
  eax = ecx;
/* d912c2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d912c3: add eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* d912c6: adc edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* d912c9: ret  */
  esp += 4; SPILL(); return;
}

void f_d912e0(void) {
  LOAD_REGS();
L_d912e0: /* d912e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d912e1: mov ebp, esp */
  ebp = esp;
/* d912e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d912e5: push 0xdb94a0 */
  { uint32_t v = 0xdb94a0u; esp -= 4; W32(esp, v); }
/* d912ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d912f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d912f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d912f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d912fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d912fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d912fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d912fe: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d91301: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d91304: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91305: mov esi, ecx */
  esi = ecx;
/* d91307: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9130e: call 0xd825f4 */
  esp -= 4; W32(esp, 0xd91313u); SPILL(); f_d825f4(); if (g_unwind) return; RELOAD();
/* d91313: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d91315: mov ecx, esi */
  ecx = esi;
/* d91317: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd9131du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9131d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9131f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91320: mov ecx, eax */
  ecx = eax;
/* d91322: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xd91325u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d91325: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91328: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91329: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9132a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d91331: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91332: mov esp, ebp */
  esp = ebp;
/* d91334: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91335: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d91338(void) {
  LOAD_REGS();
L_d91338: /* d91338: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9133b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d91340: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d91343: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d91344: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d91347: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9134cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9134c(); return;
}

void f_d9134c(void) {
  LOAD_REGS();
L_d9134c: /* d9134c: push 0xdc1618 */
  { uint32_t v = 0xdc1618u; esp -= 4; W32(esp, v); }
/* d91351: push 0xde29b0 */
  { uint32_t v = 0xde29b0u; esp -= 4; W32(esp, v); }
/* d91356: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9135cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9135c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9135f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91361: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91363: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91368u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d91368: guest_badaddr(0xd91368); return;
}

void f_d913a0(void) {
  LOAD_REGS();
L_d913a0: /* d913a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d913a1: mov ebp, esp */
  ebp = esp;
/* d913a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d913a5: push 0xdb94b0 */
  { uint32_t v = 0xdb94b0u; esp -= 4; W32(esp, v); }
/* d913aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d913b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d913b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d913b8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d913bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d913bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d913bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d913be: mov esi, ecx */
  esi = ecx;
/* d913c0: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* d913c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d913c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d913c7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d913ce: call dword ptr [0xde8f5c] */
  esp -= 4; W32(esp, 0xd913d4u); SPILL(); call_ind(R32(0xde8f5cu)); if (g_unwind) return; /* USER32!IsWindow */ RELOAD();
/* d913d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d913d6: je 0xd91454 */
  if (zf) goto L_d91454;
L_d913d8: /* d913d8: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* d913db: mov ecx, edi */
  ecx = edi;
/* d913dd: call 0xd82400 */
  esp -= 4; W32(esp, 0xd913e2u); SPILL(); f_d82400(); if (g_unwind) return; RELOAD();
/* d913e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d913e4: je 0xd91454 */
  if (zf) goto L_d91454;
L_d913e6: /* d913e6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* d913e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d913ea: mov ecx, esi */
  ecx = esi;
/* d913ec: call 0xd81f14 */
  esp -= 4; W32(esp, 0xd913f1u); SPILL(); f_d81f14(); if (g_unwind) return; RELOAD();
/* d913f1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d913f4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* d913f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d913f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d913f9: mov ecx, edi */
  ecx = edi;
/* d913fb: call 0xd8240f */
  esp -= 4; W32(esp, 0xd91400u); SPILL(); f_d8240f(); if (g_unwind) return; RELOAD();
/* d91400: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d91402: jle 0xd91454 */
  if ((zf || sf != of)) goto L_d91454;
L_d91404: /* d91404: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91405: mov ecx, esi */
  ecx = esi;
/* d91407: call 0xd81474 */
  esp -= 4; W32(esp, 0xd9140cu); SPILL(); f_d81474(); if (g_unwind) return; RELOAD();
/* d9140c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9140e: mov ecx, eax */
  ecx = eax;
/* d91410: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0xd91413u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d91413: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91416: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9141d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9141e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9141f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91420: mov esp, ebp */
  esp = ebp;
/* d91422: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91423: ret  */
  esp += 4; SPILL(); return;
L_d91454: /* d91454: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91457: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91458: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91459: xor eax, eax */
  eax = 0;
/* d9145b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d91462: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91463: mov esp, ebp */
  esp = ebp;
/* d91465: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91466: ret  */
  esp += 4; SPILL(); return;
}

void f_d91424(void) {
  LOAD_REGS();
L_d91424: /* d91424: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d91427: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9142c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9142f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d91430: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d91433: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91438u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d91438(); return;
}

void f_d91438(void) {
  LOAD_REGS();
L_d91438: /* d91438: push 0xdc1650 */
  { uint32_t v = 0xdc1650u; esp -= 4; W32(esp, v); }
/* d9143d: push 0xde29c0 */
  { uint32_t v = 0xde29c0u; esp -= 4; W32(esp, v); }
/* d91442: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd91448u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d91448: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9144b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9144d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9144f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91454u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d91454: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91457: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91458: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91459: xor eax, eax */
  eax = 0;
/* d9145b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d91462: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91463: mov esp, ebp */
  esp = ebp;
/* d91465: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91466: ret  */
  esp += 4; SPILL(); return;
}

void f_d914b0(void) {
  LOAD_REGS();
L_d914b0: /* d914b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d914b1: mov ebp, esp */
  ebp = esp;
/* d914b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d914b5: push 0xdb94c9 */
  { uint32_t v = 0xdb94c9u; esp -= 4; W32(esp, v); }
/* d914ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d914c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d914c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d914c8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d914cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d914cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d914cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d914ce: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d914d1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d914d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d914d6: mov esi, ecx */
  esi = ecx;
/* d914d8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d914df: jne 0xd914ef */
  if (!zf) goto L_d914ef;
L_d914e1: /* d914e1: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d914e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d914e6: je 0xd914ed */
  if (zf) goto L_d914ed;
L_d914e8: /* d914e8: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* d914eb: jmp 0xd914ef */
  goto L_d914ef;
L_d914ed: /* d914ed: xor edi, edi */
  edi = 0;
L_d914ef: /* d914ef: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d914f1: mov ecx, esi */
  ecx = esi;
/* d914f3: call dword ptr [eax + 0xe8] */
  { uint32_t t = R32((uint32_t)(eax + 0xe8u)); esp -= 4; W32(esp, 0xd914f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d914f9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d914fb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d914fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d914ff: mov ecx, eax */
  ecx = eax;
/* d91501: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xd91507u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d91507: mov ecx, eax */
  ecx = eax;
/* d91509: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9150d: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd91513u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d91513: mov edx, dword ptr [0xde5034] */
  edx = R32((uint32_t)(0xde5034u));
/* d91519: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9151a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9151c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9151d: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* d91522: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* d91527: push 0x80000000 */
  { uint32_t v = 0x80000000u; esp -= 4; W32(esp, v); }
/* d9152c: push 0x80000000 */
  { uint32_t v = 0x80000000u; esp -= 4; W32(esp, v); }
/* d91531: push 0xce0000 */
  { uint32_t v = 0xce0000u; esp -= 4; W32(esp, v); }
/* d91536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91537: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d9153c: mov ecx, esi */
  ecx = esi;
/* d9153e: call 0xd81852 */
  esp -= 4; W32(esp, 0xd91543u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d91543: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d91546: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9154a: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd91550u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d91550: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91552: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91554: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d91556: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91558: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9155a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9155c: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d9155f: call 0xd815fa */
  esp -= 4; W32(esp, 0xd91564u); SPILL(); f_d815fa(); if (g_unwind) return; RELOAD();
/* d91564: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91567: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91568: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91569: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d91570: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91571: mov esp, ebp */
  esp = ebp;
/* d91573: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91574: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d91577(void) {
  LOAD_REGS();
L_d91577: /* d91577: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9157a: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9157f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d91582: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d91583: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d91586: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9158bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9158b(); return;
}

void f_d9158b(void) {
  LOAD_REGS();
L_d9158b: /* d9158b: push 0xdc168c */
  { uint32_t v = 0xdc168cu; esp -= 4; W32(esp, v); }
/* d91590: push 0xde29f4 */
  { uint32_t v = 0xde29f4u; esp -= 4; W32(esp, v); }
/* d91595: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9159bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9159b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9159e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d915a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d915a2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd915a7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d915a7: guest_badaddr(0xd915a7); return;
}

void f_d915f0(void) {
  LOAD_REGS();
L_d915f0: /* d915f0: mov ecx, dword ptr [ecx + 0xd0] */
  ecx = R32((uint32_t)(ecx + 0xd0u));
/* d915f6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d915f8: je 0xd915ff */
  if (zf) goto L_d915ff;
L_d915fa: /* d915fa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d915fc: jmp dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); SPILL(); call_ind(t); return; }
L_d915ff: /* d915ff: ret  */
  esp += 4; SPILL(); return;
}

void f_d91610(void) {
  LOAD_REGS();
L_d91610: /* d91610: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d91612: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d91614: call dword ptr [eax + 0xf4] */
  { uint32_t t = R32((uint32_t)(eax + 0xf4u)); esp -= 4; W32(esp, 0xd9161au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9161a: ret  */
  esp += 4; SPILL(); return;
}

void f_d91630(void) {
  LOAD_REGS();
L_d91630: /* d91630: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d91634: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d91638: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9163a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9163b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0xd9163eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9163e: ret  */
  esp += 4; SPILL(); return;
}

void f_d91650(void) {
  LOAD_REGS();
L_d91650: /* d91650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d91651: mov ebp, esp */
  ebp = esp;
/* d91653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d91655: push 0xdb94e0 */
  { uint32_t v = 0xdb94e0u; esp -= 4; W32(esp, v); }
/* d9165a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d91660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d91668: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9166b: mov eax, dword ptr [ecx + 0x94] */
  eax = R32((uint32_t)(ecx + 0x94u));
/* d91671: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91673: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d91674: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91675: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91676: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d91679: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d91680: je 0xd91691 */
  if (zf) goto L_d91691;
L_d91682: /* d91682: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d91685: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d91686: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d91689: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* d9168c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9168e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9168f: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd91691u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d91691: /* d91691: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91694: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91695: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91696: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9169d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9169e: mov esp, ebp */
  esp = ebp;
/* d916a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d916a1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d916a4(void) {
  LOAD_REGS();
L_d916a4: /* d916a4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d916a7: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d916ac: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d916af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d916b0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d916b3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd916b8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d916b8(); return;
}

void f_d916b8(void) {
  LOAD_REGS();
L_d916b8: /* d916b8: push 0xdc16c8 */
  { uint32_t v = 0xdc16c8u; esp -= 4; W32(esp, v); }
/* d916bd: push 0xde2a24 */
  { uint32_t v = 0xde2a24u; esp -= 4; W32(esp, v); }
/* d916c2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd916c8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d916c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d916cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d916cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d916cf: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd916d4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d916d4: guest_badaddr(0xd916d4); return;
}

void f_d91710(void) {
  LOAD_REGS();
L_d91710: /* d91710: mov eax, dword ptr [ecx + 0xf4] */
  eax = R32((uint32_t)(ecx + 0xf4u));
/* d91716: ret  */
  esp += 4; SPILL(); return;
}

void f_d91730(void) {
  LOAD_REGS();
L_d91730: /* d91730: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d91731: mov ebp, esp */
  ebp = esp;
/* d91733: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d91735: push 0xdb94f0 */
  { uint32_t v = 0xdb94f0u; esp -= 4; W32(esp, v); }
/* d9173a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d91740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91741: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d91748: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9174b: mov ecx, dword ptr [ecx + 0xd0] */
  ecx = R32((uint32_t)(ecx + 0xd0u));
/* d91751: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91753: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d91754: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91755: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91756: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d91759: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d91760: je 0xd9176e */
  if (zf) goto L_d9176e;
L_d91762: /* d91762: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d91765: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d91767: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d91768: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0xd9176eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9176e: /* d9176e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91771: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91772: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91773: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9177a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9177b: mov esp, ebp */
  esp = ebp;
/* d9177d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9177e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d91781(void) {
  LOAD_REGS();
L_d91781: /* d91781: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d91784: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d91789: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9178c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9178d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d91790: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91795u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d91795(); return;
}

void f_d91795(void) {
  LOAD_REGS();
L_d91795: /* d91795: push 0xdc1700 */
  { uint32_t v = 0xdc1700u; esp -= 4; W32(esp, v); }
/* d9179a: push 0xde2a7c */
  { uint32_t v = 0xde2a7cu; esp -= 4; W32(esp, v); }
/* d9179f: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd917a5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d917a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d917a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d917aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d917ac: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd917b1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d917b1: guest_badaddr(0xd917b1); return;
}

void f_d917f0(void) {
  LOAD_REGS();
L_d917f0: /* d917f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d917f1: mov ebp, esp */
  ebp = esp;
/* d917f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d917f5: push 0xdb9500 */
  { uint32_t v = 0xdb9500u; esp -= 4; W32(esp, v); }
/* d917fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d91800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d91808: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9180b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9180c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9180d: mov esi, ecx */
  esi = ecx;
/* d9180f: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* d91815: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91817: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91818: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9181b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d91822: je 0xd9182b */
  if (zf) goto L_d9182b;
L_d91824: /* d91824: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d91826: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91828: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xd9182bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9182b: /* d9182b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d9182e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91830: mov dword ptr [esi + 0xd0], 0 */
  W32((uint32_t)(esi + 0xd0u), 0x0u);
/* d9183a: je 0xd9185f */
  if (zf) goto L_d9185f;
L_d9183c: /* d9183c: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* d9183f: mov ecx, edi */
  ecx = edi;
/* d91841: call 0xd82400 */
  esp -= 4; W32(esp, 0xd91846u); SPILL(); f_d82400(); if (g_unwind) return; RELOAD();
/* d91846: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d91848: jle 0xd9185f */
  if ((zf || sf != of)) goto L_d9185f;
L_d9184a: /* d9184a: mov ecx, edi */
  ecx = edi;
/* d9184c: call 0xd828dd */
  esp -= 4; W32(esp, 0xd91851u); SPILL(); f_d828dd(); if (g_unwind) return; RELOAD();
/* d91851: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91852: mov ecx, esi */
  ecx = esi;
/* d91854: call 0xd81474 */
  esp -= 4; W32(esp, 0xd91859u); SPILL(); f_d81474(); if (g_unwind) return; RELOAD();
/* d91859: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
L_d9185f: /* d9185f: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* d91865: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91867: je 0xd9186e */
  if (zf) goto L_d9186e;
L_d91869: /* d91869: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9186b: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd9186eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9186e: /* d9186e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91871: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91872: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91873: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9187a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9187b: mov esp, ebp */
  esp = ebp;
/* d9187d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9187e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d91881(void) {
  LOAD_REGS();
L_d91881: /* d91881: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d91884: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d91889: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9188c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9188d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d91890: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91895u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d91895(); return;
}

void f_d91895(void) {
  LOAD_REGS();
L_d91895: /* d91895: push 0xdc1734 */
  { uint32_t v = 0xdc1734u; esp -= 4; W32(esp, v); }
/* d9189a: push 0xde2a84 */
  { uint32_t v = 0xde2a84u; esp -= 4; W32(esp, v); }
/* d9189f: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd918a5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d918a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d918a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d918aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d918ac: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd918b1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d918b1: guest_badaddr(0xd918b1); return;
}

void f_d91900(void) {
  LOAD_REGS();
L_d91900: /* d91900: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d91904: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d91908: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9190a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9190b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0xd9190eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9190e: ret  */
  esp += 4; SPILL(); return;
}

void f_d91920(void) {
  LOAD_REGS();
L_d91920: /* d91920: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d91921: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91922: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91923: mov edi, ecx */
  edi = ecx;
/* d91925: lea ebx, [edi + 0x44] */
  ebx = (uint32_t)(edi + 0x44u);
/* d91928: mov ecx, ebx */
  ecx = ebx;
/* d9192a: xor esi, esi */
  esi = 0;
/* d9192c: call 0xd82400 */
  esp -= 4; W32(esp, 0xd91931u); SPILL(); f_d82400(); if (g_unwind) return; RELOAD();
/* d91931: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d91933: jle 0xd9195e */
  if ((zf || sf != of)) goto L_d9195e;
L_d91935: /* d91935: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91936: mov ecx, edi */
  ecx = edi;
/* d91938: call 0xd81474 */
  esp -= 4; W32(esp, 0xd9193du); SPILL(); f_d81474(); if (g_unwind) return; RELOAD();
/* d9193d: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* d91940: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91942: je 0xd91952 */
  if (zf) goto L_d91952;
L_d91944: /* d91944: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* d91947: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91949: jne 0xd91952 */
  if (!zf) goto L_d91952;
L_d9194b: /* d9194b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d9194d: mov ecx, eax */
  ecx = eax;
/* d9194f: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd91952u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d91952: /* d91952: mov ecx, ebx */
  ecx = ebx;
/* d91954: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d91955: call 0xd82400 */
  esp -= 4; W32(esp, 0xd9195au); SPILL(); f_d82400(); if (g_unwind) return; RELOAD();
/* d9195a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9195c: jl 0xd91935 */
  if ((sf != of)) goto L_d91935;
L_d9195e: /* d9195e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9195f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91960: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91961: ret  */
  esp += 4; SPILL(); return;
}

void f_d91990(void) {
  LOAD_REGS();
L_d91990: /* d91990: mov ecx, dword ptr [ecx + 0x48] */
  ecx = R32((uint32_t)(ecx + 0x48u));
/* d91993: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d91997: mov eax, ecx */
  eax = ecx;
/* d91999: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9199b: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d9199d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d9199f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d919a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d919a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d919c0(void) {
  LOAD_REGS();
L_d919c0: /* d919c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d919c1: mov ebp, esp */
  ebp = esp;
/* d919c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d919c5: push 0xdb9510 */
  { uint32_t v = 0xdb9510u; esp -= 4; W32(esp, v); }
/* d919ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d919d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d919d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d919d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d919db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d919dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d919dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d919e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d919e1: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d919e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d919e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d919e8: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* d919ef: mov ecx, esi */
  ecx = esi;
/* d919f1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d919f8: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xd919feu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* d919fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91a01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91a02: mov eax, esi */
  eax = esi;
/* d91a04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91a05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d91a0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91a0d: mov esp, ebp */
  esp = ebp;
/* d91a0f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91a10: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d91a13(void) {
  LOAD_REGS();
L_d91a13: /* d91a13: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d91a16: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d91a1b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d91a1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d91a1f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d91a22: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91a27u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d91a27(); return;
}

void f_d91a27(void) {
  LOAD_REGS();
L_d91a27: /* d91a27: push 0xdc1774 */
  { uint32_t v = 0xdc1774u; esp -= 4; W32(esp, v); }
/* d91a2c: push 0xde2abc */
  { uint32_t v = 0xde2abcu; esp -= 4; W32(esp, v); }
/* d91a31: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd91a37u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d91a37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91a3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91a3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91a3e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91a43u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d91a43: guest_badaddr(0xd91a43); return;
}

void f_d91a80(void) {
  LOAD_REGS();
L_d91a80: /* d91a80: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* d91a83: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d91a84: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* d91a87: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* d91a8a: ret  */
  esp += 4; SPILL(); return;
}

void f_d91aa0(void) {
  LOAD_REGS();
L_d91aa0: /* d91aa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d91aa4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d91ac0(void) {
  LOAD_REGS();
L_d91ac0: /* d91ac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d91ac1: mov ebp, esp */
  ebp = esp;
/* d91ac3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d91ac5: push 0xdb9553 */
  { uint32_t v = 0xdb9553u; esp -= 4; W32(esp, v); }
/* d91aca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d91ad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91ad1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d91ad8: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d91adb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d91adc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91add: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91ade: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* d91ae5: mov ebx, 1 */
  ebx = 0x1u;
/* d91aea: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d91aed: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d91af0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d91af3: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd91af9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d91af9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* d91afc: mov ecx, esi */
  ecx = esi;
/* d91afe: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d91b02: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd91b08u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d91b08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91b0a: je 0xd91b78 */
  if (zf) goto L_d91b78;
L_d91b0c: /* d91b0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d91b10: /* d91b10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d91b11: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* d91b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91b15: mov ecx, esi */
  ecx = esi;
/* d91b17: call dword ptr [0xde895c] */
  esp -= 4; W32(esp, 0xd91b1du); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* d91b1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91b1e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d91b21: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* d91b25: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd91b2bu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d91b2b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d91b2e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d91b32: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd91b38u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d91b38: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* d91b3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d91b3e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d91b41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d91b42: mov ecx, esi */
  ecx = esi;
/* d91b44: call dword ptr [0xde8958] */
  esp -= 4; W32(esp, 0xd91b4au); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* d91b4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91b4b: mov ecx, esi */
  ecx = esi;
/* d91b4d: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* d91b51: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd91b57u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d91b57: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d91b5a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d91b5e: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd91b64u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d91b64: push 0xde2e40 */
  { uint32_t v = 0xde2e40u; esp -= 4; W32(esp, v); }
/* d91b69: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d91b6c: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd91b72u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d91b72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91b74: jne 0xd91b10 */
  if (!zf) goto L_d91b10;
L_d91b76: /* d91b76: jmp 0xd91b86 */
  goto L_d91b86;
L_d91b78: /* d91b78: push 0xde4f58 */
  { uint32_t v = 0xde4f58u; esp -= 4; W32(esp, v); }
/* d91b7d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d91b80: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xd91b86u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_d91b86: /* d91b86: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d91b89: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* d91b8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d91b8d: mov ecx, esi */
  ecx = esi;
/* d91b8f: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xd91b95u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* d91b95: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d91b98: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d91b9a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d91b9d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d91ba0: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d91ba3: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd91ba9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d91ba9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91bac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91bad: mov eax, esi */
  eax = esi;
/* d91baf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91bb0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d91bb7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91bb8: mov esp, ebp */
  esp = ebp;
/* d91bba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91bbb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d91bbe(void) {
  LOAD_REGS();
L_d91bbe: /* d91bbe: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d91bc1: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d91bc6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d91bc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d91bca: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d91bcd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91bd2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d91bd2(); return;
}

void f_d91bd2(void) {
  LOAD_REGS();
L_d91bd2: /* d91bd2: push 0xdc17bc */
  { uint32_t v = 0xdc17bcu; esp -= 4; W32(esp, v); }
/* d91bd7: push 0xde2e44 */
  { uint32_t v = 0xde2e44u; esp -= 4; W32(esp, v); }
/* d91bdc: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd91be2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d91be2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91be5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91be7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91be9: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91beeu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d91bee: guest_badaddr(0xd91bee); return;
}

void f_d91c40(void) {
  LOAD_REGS();
L_d91c40: /* d91c40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d91c42: push 0xdb9582 */
  { uint32_t v = 0xdb9582u; esp -= 4; W32(esp, v); }
/* d91c47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d91c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91c4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d91c55: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d91c58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91c59: xor esi, esi */
  esi = 0;
/* d91c5b: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* d91c5f: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* d91c63: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d91c67: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd91c6du); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d91c6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d91c6f: jle 0xd91d2e */
  if ((zf || sf != of)) goto L_d91d2e;
L_d91c75: /* d91c75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91c76: mov edi, dword ptr [0xde896c] */
  edi = R32((uint32_t)(0xde896cu));
/* d91c7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d91c80: /* d91c80: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d91c82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91c83: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* d91c87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91c88: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* d91c8c: call dword ptr [0xde8958] */
  esp -= 4; W32(esp, 0xd91c92u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* d91c92: push 0xde2e4c */
  { uint32_t v = 0xde2e4cu; esp -= 4; W32(esp, v); }
/* d91c97: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d91c9b: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* d91ca0: call dword ptr [0xde8968] */
  esp -= 4; W32(esp, 0xd91ca6u); SPILL(); f_4e2fb3(); if (g_unwind) return; /* Core!??PFString@@QBEHPBG@Z */ RELOAD();
/* d91ca6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91ca8: je 0xd91ce7 */
  if (zf) goto L_d91ce7;
L_d91caa: /* d91caa: push 0xde2e50 */
  { uint32_t v = 0xde2e50u; esp -= 4; W32(esp, v); }
/* d91caf: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d91cb3: call dword ptr [0xde8964] */
  esp -= 4; W32(esp, 0xd91cb9u); SPILL(); f_4e1190(); if (g_unwind) return; /* Core!??NFString@@QBEHPBG@Z */ RELOAD();
/* d91cb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91cbb: je 0xd91ce7 */
  if (zf) goto L_d91ce7;
L_d91cbd: /* d91cbd: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d91cc1: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd91cc7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d91cc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91cc8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd91ccau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d91cca: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* d91cce: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* d91cd2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91cd5: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* d91cd9: fmul dword ptr [0xdc17f4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc17f4u)));
/* d91cdf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* d91ce1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* d91ce5: jmp 0xd91cfa */
  goto L_d91cfa;
L_d91ce7: /* d91ce7: push 0xde2e54 */
  { uint32_t v = 0xde2e54u; esp -= 4; W32(esp, v); }
/* d91cec: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d91cf0: call dword ptr [0xde8960] */
  esp -= 4; W32(esp, 0xd91cf6u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* d91cf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91cf8: jne 0xd91d1e */
  if (!zf) goto L_d91d1e;
L_d91cfa: /* d91cfa: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d91cfe: mov byte ptr [esp + 0x24], 0 */
  W8((uint32_t)(esp + 0x24u), 0x0u);
/* d91d03: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd91d09u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d91d09: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d91d0d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d91d0e: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd91d14u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d91d14: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d91d16: jl 0xd91c80 */
  if ((sf != of)) goto L_d91c80;
L_d91d1c: /* d91d1c: jmp 0xd91d2d */
  goto L_d91d2d;
L_d91d1e: /* d91d1e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d91d22: mov byte ptr [esp + 0x24], 0 */
  W8((uint32_t)(esp + 0x24u), 0x0u);
/* d91d27: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd91d2du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d91d2d: /* d91d2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_d91d2e: /* d91d2e: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* d91d32: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* d91d3a: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd91d40u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d91d40: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* d91d44: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d91d48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91d49: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d91d50: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91d53: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d91db0(void) {
  LOAD_REGS();
L_d91db0: /* d91db0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d91db1: mov ebp, esp */
  ebp = esp;
/* d91db3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d91db5: push 0xdb95a0 */
  { uint32_t v = 0xdb95a0u; esp -= 4; W32(esp, v); }
/* d91dba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d91dc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91dc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d91dc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d91dcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d91dcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91dcd: mov esi, ecx */
  esi = ecx;
/* d91dcf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91dd0: lea edi, [esi + 0x3c] */
  edi = (uint32_t)(esi + 0x3cu);
/* d91dd3: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* d91dda: mov ecx, edi */
  ecx = edi;
/* d91ddc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d91ddf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d91de6: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd91decu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d91dec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91dee: je 0xd91e11 */
  if (zf) goto L_d91e11;
L_d91df0: /* d91df0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d91df3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91df4: mov ecx, esi */
  ecx = esi;
/* d91df6: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xd91dfcu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_d91dfc: /* d91dfc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91dff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91e00: mov eax, esi */
  eax = esi;
/* d91e02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91e03: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d91e0a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91e0b: mov esp, ebp */
  esp = ebp;
/* d91e0d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91e0e: ret 4 */
  esp += 8; SPILL(); return;
L_d91e11: /* d91e11: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d91e14: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91e16: jne 0xd91e3a */
  if (!zf) goto L_d91e3a;
L_d91e18: /* d91e18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d91e19: push 0xde2e58 */
  { uint32_t v = 0xde2e58u; esp -= 4; W32(esp, v); }
/* d91e1e: push 0xde2e68 */
  { uint32_t v = 0xde2e68u; esp -= 4; W32(esp, v); }
/* d91e23: call dword ptr [0xde8918] */
  esp -= 4; W32(esp, 0xd91e29u); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* d91e29: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d91e2c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91e2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91e30: mov ecx, esi */
  ecx = esi;
/* d91e32: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd91e38u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d91e38: jmp 0xd91dfc */
  goto L_d91dfc;
L_d91e3a: /* d91e3a: mov esi, dword ptr [esi + 0x5c] */
  esi = R32((uint32_t)(esi + 0x5cu));
/* d91e3d: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd91e43u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d91e43: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d91e46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91e48: jne 0xd91e70 */
  if (!zf) goto L_d91e70;
L_d91e4a: /* d91e4a: push 0xde2e74 */
  { uint32_t v = 0xde2e74u; esp -= 4; W32(esp, v); }
/* d91e4f: push 0xde2e84 */
  { uint32_t v = 0xde2e84u; esp -= 4; W32(esp, v); }
/* d91e54: mov esi, eax */
  esi = eax;
/* d91e56: call dword ptr [0xde8918] */
  esp -= 4; W32(esp, 0xd91e5cu); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* d91e5c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91e60: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d91e63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91e64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91e65: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd91e6bu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d91e6b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91e6e: jmp 0xd91dfc */
  goto L_d91dfc;
L_d91e70: /* d91e70: push 0xde2e90 */
  { uint32_t v = 0xde2e90u; esp -= 4; W32(esp, v); }
/* d91e75: push 0xde2ea0 */
  { uint32_t v = 0xde2ea0u; esp -= 4; W32(esp, v); }
/* d91e7a: mov edi, eax */
  edi = eax;
/* d91e7c: call dword ptr [0xde8918] */
  esp -= 4; W32(esp, 0xd91e82u); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* d91e82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91e86: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d91e89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91e8c: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd91e92u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d91e92: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91e95: jmp 0xd91dfc */
  goto L_d91dfc;
}

void f_d91e9a(void) {
  LOAD_REGS();
L_d91e9a: /* d91e9a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d91e9d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d91ea2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d91ea5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d91ea6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d91ea9: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91eaeu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d91eae(); return;
}

void f_d91eae(void) {
  LOAD_REGS();
L_d91eae: /* d91eae: push 0xdc17f8 */
  { uint32_t v = 0xdc17f8u; esp -= 4; W32(esp, v); }
/* d91eb3: push 0xde2eac */
  { uint32_t v = 0xde2eacu; esp -= 4; W32(esp, v); }
/* d91eb8: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd91ebeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d91ebe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d91ec1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91ec3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91ec5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd91ecau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d91eca: guest_badaddr(0xd91eca); return;
}

void f_d91f20(void) {
  LOAD_REGS();
L_d91f20: /* d91f20: lea eax, [ecx + 0xfc] */
  eax = (uint32_t)(ecx + 0xfcu);
/* d91f26: ret  */
  esp += 4; SPILL(); return;
}

void f_d91f40(void) {
  LOAD_REGS();
L_d91f40: /* d91f40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d91f44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91f45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91f46: mov esi, ecx */
  esi = ecx;
/* d91f48: call 0xd8135c */
  esp -= 4; W32(esp, 0xd91f4du); SPILL(); f_d8135c(); if (g_unwind) return; RELOAD();
/* d91f4d: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* d91f50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d91f52: je 0xd91f62 */
  if (zf) goto L_d91f62;
L_d91f54: /* d91f54: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d91f57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91f58: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* d91f5c: jmp dword ptr [0xde8f40] */
  SPILL(); call_ind(R32(0xde8f40u)); return; /* USER32!BringWindowToTop */
L_d91f62: /* d91f62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91f63: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d91f80(void) {
  LOAD_REGS();
L_d91f80: /* d91f80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d91f84: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d91fa0(void) {
  LOAD_REGS();
L_d91fa0: /* d91fa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d91fa1: mov ebp, esp */
  ebp = esp;
/* d91fa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d91fa5: push 0xdb95b0 */
  { uint32_t v = 0xdb95b0u; esp -= 4; W32(esp, v); }
/* d91faa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d91fb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91fb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d91fb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d91fbb: mov ecx, dword ptr [ecx + 0x4c] */
  ecx = R32((uint32_t)(ecx + 0x4cu));
/* d91fbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d91fbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d91fc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d91fc1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d91fc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d91fc6: add ecx, 0x4e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d91fcc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d91fd3: call dword ptr [0xde8c28] */
  esp -= 4; W32(esp, 0xd91fd9u); SPILL(); f_6cc324(); if (g_unwind) return; /* Engine!??R?$TArray@E@@QAEAAEH@Z */ RELOAD();
/* d91fd9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d91fdc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d91fde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d91fdf: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0xd91fe2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d91fe2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d91fe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d91fe6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d91fe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d91fee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d91fef: mov esp, ebp */
  esp = ebp;
/* d91ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d91ff2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d91ff5(void) {
  LOAD_REGS();
L_d91ff5: /* d91ff5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d91ff8: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d91ffd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d92000: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d92001: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d92004: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd92009u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d92009(); return;
}

void f_d92009(void) {
  LOAD_REGS();
L_d92009: /* d92009: push 0xdc1834 */
  { uint32_t v = 0xdc1834u; esp -= 4; W32(esp, v); }
/* d9200e: push 0xde2ef8 */
  { uint32_t v = 0xde2ef8u; esp -= 4; W32(esp, v); }
/* d92013: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd92019u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d92019: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9201c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9201e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d92020: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd92025u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d92025: guest_badaddr(0xd92025); return;
}

void f_d92060(void) {
  LOAD_REGS();
L_d92060: /* d92060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d92061: mov ebp, esp */
  ebp = esp;
/* d92063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d92065: push 0xdb95c0 */
  { uint32_t v = 0xdb95c0u; esp -= 4; W32(esp, v); }
/* d9206a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d92070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d92078: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9207b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9207c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9207d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9207e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d92081: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d92084: mov esi, ecx */
  esi = ecx;
/* d92086: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d92088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9208a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9208b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d92092: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd92095u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d92095: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* d92098: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9209a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9209c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9209d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d920a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d920a1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0xd920a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d920a7: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d920aa: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* d920ac: call dword ptr [0xde8974] */
  esp -= 4; W32(esp, 0xd920b2u); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
/* d920b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d920b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d920b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d920b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d920be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d920bf: mov esp, ebp */
  esp = ebp;
/* d920c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d920c2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d920c5(void) {
  LOAD_REGS();
L_d920c5: /* d920c5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d920c8: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d920cd: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d920d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d920d1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d920d4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd920d9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d920d9(); return;
}

void f_d920d9(void) {
  LOAD_REGS();
L_d920d9: /* d920d9: push 0xdc187c */
  { uint32_t v = 0xdc187cu; esp -= 4; W32(esp, v); }
/* d920de: push 0xde2f00 */
  { uint32_t v = 0xde2f00u; esp -= 4; W32(esp, v); }
/* d920e3: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd920e9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d920e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d920ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d920ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d920f0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd920f5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d920f5: guest_badaddr(0xd920f5); return;
}

void f_d92130(void) {
  LOAD_REGS();
L_d92130: /* d92130: lea eax, [ecx + 0xfc] */
  eax = (uint32_t)(ecx + 0xfcu);
/* d92136: ret  */
  esp += 4; SPILL(); return;
}

void f_d92150(void) {
  LOAD_REGS();
L_d92150: /* d92150: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d92154: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92170(void) {
  LOAD_REGS();
L_d92170: /* d92170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d92171: mov ebp, esp */
  ebp = esp;
/* d92173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d92175: push 0xdb95d0 */
  { uint32_t v = 0xdb95d0u; esp -= 4; W32(esp, v); }
/* d9217a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d92180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d92188: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9218b: mov ecx, dword ptr [ecx + 0x60] */
  ecx = R32((uint32_t)(ecx + 0x60u));
/* d9218e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9218f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92190: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92191: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d92194: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d92196: add ecx, 0x4e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4e8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9219c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d921a3: call dword ptr [0xde8c28] */
  esp -= 4; W32(esp, 0xd921a9u); SPILL(); f_6cc324(); if (g_unwind) return; /* Engine!??R?$TArray@E@@QAEAAEH@Z */ RELOAD();
/* d921a9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d921ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d921ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d921af: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0xd921b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d921b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d921b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d921b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d921b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d921be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d921bf: mov esp, ebp */
  esp = ebp;
/* d921c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d921c2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d921c5(void) {
  LOAD_REGS();
L_d921c5: /* d921c5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d921c8: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d921cd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d921d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d921d1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d921d4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd921d9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d921d9(); return;
}

void f_d921d9(void) {
  LOAD_REGS();
L_d921d9: /* d921d9: push 0xdc18bc */
  { uint32_t v = 0xdc18bcu; esp -= 4; W32(esp, v); }
/* d921de: push 0xde2f34 */
  { uint32_t v = 0xde2f34u; esp -= 4; W32(esp, v); }
/* d921e3: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd921e9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d921e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d921ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d921ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d921f0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd921f5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d921f5: guest_badaddr(0xd921f5); return;
}

void f_d92230(void) {
  LOAD_REGS();
L_d92230: /* d92230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d92231: mov ebp, esp */
  ebp = esp;
/* d92233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d92235: push 0xdb95e9 */
  { uint32_t v = 0xdb95e9u; esp -= 4; W32(esp, v); }
/* d9223a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d92240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d92248: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9224b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9224c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9224d: mov esi, ecx */
  esi = ecx;
/* d9224f: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* d92252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92254: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92255: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d92258: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9225f: jne 0xd922f0 */
  if (!zf) goto L_d922f0;
L_d92265: /* d92265: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* d92268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9226a: jne 0xd922f0 */
  if (!zf) goto L_d922f0;
L_d92270: /* d92270: lea edi, [esi + 0x50] */
  edi = (uint32_t)(esi + 0x50u);
/* d92273: mov ecx, edi */
  ecx = edi;
/* d92275: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9227bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9227b: mov ebx, eax */
  ebx = eax;
/* d9227d: call dword ptr [0xde8980] */
  esp -= 4; W32(esp, 0xd92283u); SPILL(); f_4e39b3(); if (g_unwind) return; /* Core!?StaticClass@UObject@@SAPAVUClass@@XZ */ RELOAD();
/* d92283: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d92285: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d92287: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d92289: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9228a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9228c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9228d: call dword ptr [0xde897c] */
  esp -= 4; W32(esp, 0xd92293u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* d92293: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d92296: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92298: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* d9229b: jne 0xd922f0 */
  if (!zf) goto L_d922f0;
L_d9229d: /* d9229d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9229e: push 0xde2ffc */
  { uint32_t v = 0xde2ffcu; esp -= 4; W32(esp, v); }
/* d922a3: mov ebx, 1 */
  ebx = 0x1u;
/* d922a8: push 0xde300c */
  { uint32_t v = 0xde300cu; esp -= 4; W32(esp, v); }
/* d922ad: mov dword ptr [esi + 0x64], ebx */
  W32((uint32_t)(esi + 0x64u), ebx);
/* d922b0: call dword ptr [0xde8978] */
  esp -= 4; W32(esp, 0xd922b6u); SPILL(); f_4e2702(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBDPBG1@Z */ RELOAD();
/* d922b6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d922b8: mov ecx, esp */
  ecx = esp;
/* d922ba: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d922bc: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* d922bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d922c0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* d922c3: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* d922c6: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d922c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d922ca: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* d922cd: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd922d3u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d922d3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d922d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d922d7: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* d922da: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d922dd: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd922e3u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d922e3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d922e6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d922ea: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd922f0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d922f0: /* d922f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d922f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d922f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d922f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d922fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d922fd: mov esp, ebp */
  esp = ebp;
/* d922ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d92300: ret  */
  esp += 4; SPILL(); return;
}

void f_d92301(void) {
  LOAD_REGS();
L_d92301: /* d92301: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d92304: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d92309: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d9230c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9230d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d92310: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd92315u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d92315(); return;
}

void f_d92315(void) {
  LOAD_REGS();
L_d92315: /* d92315: push 0xdc1908 */
  { uint32_t v = 0xdc1908u; esp -= 4; W32(esp, v); }
/* d9231a: push 0xde3020 */
  { uint32_t v = 0xde3020u; esp -= 4; W32(esp, v); }
/* d9231f: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd92325u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d92325: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d92328: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9232a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9232c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd92331u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d92331: guest_badaddr(0xd92331); return;
}

void f_d92390(void) {
  LOAD_REGS();
L_d92390: /* d92390: mov eax, ecx */
  eax = ecx;
/* d92392: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d92393: add eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* d92396: adc edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* d92399: ret  */
  esp += 4; SPILL(); return;
}

void f_d923b0(void) {
  LOAD_REGS();
L_d923b0: /* d923b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d923b1: mov ebp, esp */
  ebp = esp;
/* d923b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d923b5: push 0xdb9600 */
  { uint32_t v = 0xdb9600u; esp -= 4; W32(esp, v); }
/* d923ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d923c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d923c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d923c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d923cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d923cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d923cd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d923d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d923d1: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d923d4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d923d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d923d8: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* d923df: mov ecx, esi */
  ecx = esi;
/* d923e1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d923e8: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xd923eeu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* d923ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d923f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d923f2: mov eax, esi */
  eax = esi;
/* d923f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d923f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d923fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d923fd: mov esp, ebp */
  esp = ebp;
/* d923ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d92400: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92403(void) {
  LOAD_REGS();
L_d92403: /* d92403: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d92406: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9240b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9240e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9240f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d92412: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd92417u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d92417(); return;
}

void f_d92417(void) {
  LOAD_REGS();
L_d92417: /* d92417: push 0xdc1958 */
  { uint32_t v = 0xdc1958u; esp -= 4; W32(esp, v); }
/* d9241c: push 0xde3038 */
  { uint32_t v = 0xde3038u; esp -= 4; W32(esp, v); }
/* d92421: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd92427u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d92427: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9242a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9242c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9242e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd92433u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d92433: guest_badaddr(0xd92433); return;
}

void f_d92470(void) {
  LOAD_REGS();
L_d92470: /* d92470: lea eax, [ecx + 0xfc] */
  eax = (uint32_t)(ecx + 0xfcu);
/* d92476: ret  */
  esp += 4; SPILL(); return;
}

void f_d92490(void) {
  LOAD_REGS();
L_d92490: /* d92490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92491: mov esi, ecx */
  esi = ecx;
/* d92493: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd92499u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d92499: mov eax, esi */
  eax = esi;
/* d9249b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9249c: ret  */
  esp += 4; SPILL(); return;
}

void f_d924b0(void) {
  LOAD_REGS();
L_d924b0: /* d924b0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d924b4: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* d924b8: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* d924bb: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* d924bf: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* d924c2: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* d924c6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* d924c8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d924cc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* d924ce: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* d924d1: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* d924d4: ret  */
  esp += 4; SPILL(); return;
}

void f_d924f0(void) {
  LOAD_REGS();
L_d924f0: /* d924f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d924f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d924f6: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* d924f9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d924fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92510(void) {
  LOAD_REGS();
L_d92510: /* d92510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92511: mov esi, ecx */
  esi = ecx;
/* d92513: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd92519u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d92519: mov eax, esi */
  eax = esi;
/* d9251b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9251c: ret  */
  esp += 4; SPILL(); return;
}

void f_d92530(void) {
  LOAD_REGS();
L_d92530: /* d92530: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d92534: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d92536: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* d92539: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9253b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92550(void) {
  LOAD_REGS();
L_d92550: /* d92550: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d92553: ret  */
  esp += 4; SPILL(); return;
}

void f_d92570(void) {
  LOAD_REGS();
L_d92570: /* d92570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92571: mov esi, ecx */
  esi = ecx;
/* d92573: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d92576: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92577: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d9257b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9257d: jl 0xd92597 */
  if ((sf != of)) goto L_d92597;
L_d9257f: /* d9257f: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d92584: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d92589: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d9258e: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd92594u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d92594: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d92597: /* d92597: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d9259a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d9259c: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d9259e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9259f: lea eax, [ecx + eax*4 - 4] */
  eax = (uint32_t)(ecx + eax*4 + 0xfffffffcu);
/* d925a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d925a4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d925c0(void) {
  LOAD_REGS();
L_d925c0: /* d925c0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d925c3: xor eax, eax */
  eax = 0;
/* d925c5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d925c7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d925ca: ret  */
  esp += 4; SPILL(); return;
}

void f_d925e0(void) {
  LOAD_REGS();
L_d925e0: /* d925e0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d925e3: ret  */
  esp += 4; SPILL(); return;
}

void f_d92600(void) {
  LOAD_REGS();
L_d92600: /* d92600: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d92604: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d92606: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92607: call dword ptr [0xde8984] */
  esp -= 4; W32(esp, 0xd9260du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* d9260d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92620(void) {
  LOAD_REGS();
L_d92620: /* d92620: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d92622: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d92626: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* d92629: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92640(void) {
  LOAD_REGS();
L_d92640: /* d92640: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d92644: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d92646: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92647: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9264du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9264d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92660(void) {
  LOAD_REGS();
L_d92660: /* d92660: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d92664: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d92666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92667: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9266du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9266d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92680(void) {
  LOAD_REGS();
L_d92680: /* d92680: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d92684: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d92686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92687: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9268du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9268d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d926a0(void) {
  LOAD_REGS();
L_d926a0: /* d926a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d926a4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* d926a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d926a7: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd926adu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d926ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d926c0(void) {
  LOAD_REGS();
L_d926c0: /* d926c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d926c1: mov esi, ecx */
  esi = ecx;
/* d926c3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d926c6: je 0xd9270b */
  if (zf) goto L_d9270b;
L_d926c8: /* d926c8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d926cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d926cd: je 0xd926f3 */
  if (zf) goto L_d926f3;
L_d926cf: /* d926cf: nop  */
L_d926d0: /* d926d0: call dword ptr [0xde898c] */
  esp -= 4; W32(esp, 0xd926d6u); SPILL(); f_4e2e8c(); if (g_unwind) return; /* Core!?StaticClass@UState@@SAPAVUClass@@XZ */ RELOAD();
/* d926d6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d926d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d926da: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd926e0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d926e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d926e2: jne 0xd9270b */
  if (!zf) goto L_d9270b;
L_d926e4: /* d926e4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d926e7: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* d926ea: mov eax, ecx */
  eax = ecx;
/* d926ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d926ee: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* d926f1: jne 0xd926d0 */
  if (!zf) goto L_d926d0;
L_d926f3: /* d926f3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d926f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d926f7: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xd926fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d926fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d926fc: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* d926fe: je 0xd92706 */
  if (zf) goto L_d92706;
L_d92700: /* d92700: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d92703: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_d92706: /* d92706: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d92709: jne 0xd926c8 */
  if (!zf) goto L_d926c8;
L_d9270b: /* d9270b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9270c: ret  */
  esp += 4; SPILL(); return;
}

void f_d92730(void) {
  LOAD_REGS();
L_d92730: /* d92730: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92731: mov esi, ecx */
  esi = ecx;
/* d92733: call dword ptr [0xde8990] */
  esp -= 4; W32(esp, 0xd92739u); SPILL(); f_4e3ad5(); if (g_unwind) return; /* Core!??1FPreferencesInfo@@QAE@XZ */ RELOAD();
/* d92739: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9273e: je 0xd9274d */
  if (zf) goto L_d9274d;
L_d92740: /* d92740: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d92745: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d92747: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d92749: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9274a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9274du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9274d: /* d9274d: mov eax, esi */
  eax = esi;
/* d9274f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92750: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92770(void) {
  LOAD_REGS();
L_d92770: /* d92770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92771: mov esi, ecx */
  esi = ecx;
/* d92773: call dword ptr [0xde8994] */
  esp -= 4; W32(esp, 0xd92779u); SPILL(); f_4e3d00(); if (g_unwind) return; /* Core!??1FRegistryObjectInfo@@QAE@XZ */ RELOAD();
/* d92779: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9277e: je 0xd9278d */
  if (zf) goto L_d9278d;
L_d92780: /* d92780: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d92785: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d92787: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d92789: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9278a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9278du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9278d: /* d9278d: mov eax, esi */
  eax = esi;
/* d9278f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92790: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d927b0(void) {
  LOAD_REGS();
L_d927b0: /* d927b0: mov eax, 1 */
  eax = 0x1u;
/* d927b5: ret  */
  esp += 4; SPILL(); return;
}

void f_d927d0(void) {
  LOAD_REGS();
L_d927d0: /* d927d0: mov eax, 1 */
  eax = 0x1u;
/* d927d5: ret  */
  esp += 4; SPILL(); return;
}

void f_d927f0(void) {
  LOAD_REGS();
L_d927f0: /* d927f0: mov eax, 1 */
  eax = 0x1u;
/* d927f5: ret  */
  esp += 4; SPILL(); return;
}

void f_d92810(void) {
  LOAD_REGS();
L_d92810: /* d92810: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d92814: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d92818: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d9281a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9281b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* d9281d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d9281f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* d92821: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92822: ret  */
  esp += 4; SPILL(); return;
}

void f_d92840(void) {
  LOAD_REGS();
L_d92840: /* d92840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92841: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d92845: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92847: je 0xd92860 */
  if (zf) goto L_d92860;
L_d92849: /* d92849: call dword ptr [0xde8998] */
  esp -= 4; W32(esp, 0xd9284fu); SPILL(); f_4e202c(); if (g_unwind) return; /* Core!?StaticClass@UClassProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9284f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92850: mov ecx, esi */
  ecx = esi;
/* d92852: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd92858u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d92858: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9285a: je 0xd92860 */
  if (zf) goto L_d92860;
L_d9285c: /* d9285c: mov eax, esi */
  eax = esi;
/* d9285e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9285f: ret  */
  esp += 4; SPILL(); return;
L_d92860: /* d92860: xor eax, eax */
  eax = 0;
/* d92862: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92863: ret  */
  esp += 4; SPILL(); return;
}

void f_d92880(void) {
  LOAD_REGS();
L_d92880: /* d92880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92881: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d92885: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92887: je 0xd928a0 */
  if (zf) goto L_d928a0;
L_d92889: /* d92889: call dword ptr [0xde899c] */
  esp -= 4; W32(esp, 0xd9288fu); SPILL(); f_4e2e6e(); if (g_unwind) return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9288f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92890: mov ecx, esi */
  ecx = esi;
/* d92892: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd92898u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d92898: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9289a: je 0xd928a0 */
  if (zf) goto L_d928a0;
L_d9289c: /* d9289c: mov eax, esi */
  eax = esi;
/* d9289e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9289f: ret  */
  esp += 4; SPILL(); return;
L_d928a0: /* d928a0: xor eax, eax */
  eax = 0;
/* d928a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d928a3: ret  */
  esp += 4; SPILL(); return;
}

void f_d928c0(void) {
  LOAD_REGS();
L_d928c0: /* d928c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d928c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d928c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d928c7: je 0xd928e0 */
  if (zf) goto L_d928e0;
L_d928c9: /* d928c9: call dword ptr [0xde89a0] */
  esp -= 4; W32(esp, 0xd928cfu); SPILL(); f_4e2c0c(); if (g_unwind) return; /* Core!?StaticClass@UIntProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d928cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d928d0: mov ecx, esi */
  ecx = esi;
/* d928d2: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd928d8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d928d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d928da: je 0xd928e0 */
  if (zf) goto L_d928e0;
L_d928dc: /* d928dc: mov eax, esi */
  eax = esi;
/* d928de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d928df: ret  */
  esp += 4; SPILL(); return;
L_d928e0: /* d928e0: xor eax, eax */
  eax = 0;
/* d928e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d928e3: ret  */
  esp += 4; SPILL(); return;
}

void f_d92900(void) {
  LOAD_REGS();
L_d92900: /* d92900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92901: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d92905: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92907: je 0xd92920 */
  if (zf) goto L_d92920;
L_d92909: /* d92909: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd9290fu); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d9290f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92910: mov ecx, esi */
  ecx = esi;
/* d92912: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd92918u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d92918: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9291a: je 0xd92920 */
  if (zf) goto L_d92920;
L_d9291c: /* d9291c: mov eax, esi */
  eax = esi;
/* d9291e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9291f: ret  */
  esp += 4; SPILL(); return;
L_d92920: /* d92920: xor eax, eax */
  eax = 0;
/* d92922: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92923: ret  */
  esp += 4; SPILL(); return;
}

void f_d92940(void) {
  LOAD_REGS();
L_d92940: /* d92940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92941: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d92945: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92947: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92948: je 0xd9296a */
  if (zf) goto L_d9296a;
L_d9294a: /* d9294a: call dword ptr [0xde8998] */
  esp -= 4; W32(esp, 0xd92950u); SPILL(); f_4e202c(); if (g_unwind) return; /* Core!?StaticClass@UClassProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d92950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92951: mov ecx, esi */
  ecx = esi;
/* d92953: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd92959u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d92959: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9295b: jne 0xd92995 */
  if (!zf) goto L_d92995;
L_d9295d: /* d9295d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9295e: mov ecx, esi */
  ecx = esi;
/* d92960: call dword ptr [0xde89b0] */
  esp -= 4; W32(esp, 0xd92966u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* d92966: mov edi, eax */
  edi = eax;
/* d92968: jmp 0xd9296f */
  goto L_d9296f;
L_d9296a: /* d9296a: mov edi, 0xde3134 */
  edi = 0xde3134u;
L_d9296f: /* d9296f: call dword ptr [0xde8998] */
  esp -= 4; W32(esp, 0xd92975u); SPILL(); f_4e202c(); if (g_unwind) return; /* Core!?StaticClass@UClassProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d92975: mov ecx, eax */
  ecx = eax;
/* d92977: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd9297du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d9297d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9297e: mov eax, dword ptr [0xde89ac] */
  eax = R32((uint32_t)(0xde89acu));
/* d92983: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d92985: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92986: push 0xde3140 */
  { uint32_t v = 0xde3140u; esp -= 4; W32(esp, v); }
/* d9298b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9298c: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xd92992u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* d92992: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d92995: /* d92995: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d92996: mov eax, esi */
  eax = esi;
/* d92998: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92999: ret  */
  esp += 4; SPILL(); return;
}

void f_d929c0(void) {
  LOAD_REGS();
L_d929c0: /* d929c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d929c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d929c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d929c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d929c8: je 0xd929ea */
  if (zf) goto L_d929ea;
L_d929ca: /* d929ca: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd929d0u); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d929d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d929d1: mov ecx, esi */
  ecx = esi;
/* d929d3: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd929d9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d929d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d929db: jne 0xd92a15 */
  if (!zf) goto L_d92a15;
L_d929dd: /* d929dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d929de: mov ecx, esi */
  ecx = esi;
/* d929e0: call dword ptr [0xde89b0] */
  esp -= 4; W32(esp, 0xd929e6u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* d929e6: mov edi, eax */
  edi = eax;
/* d929e8: jmp 0xd929ef */
  goto L_d929ef;
L_d929ea: /* d929ea: mov edi, 0xde3170 */
  edi = 0xde3170u;
L_d929ef: /* d929ef: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd929f5u); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d929f5: mov ecx, eax */
  ecx = eax;
/* d929f7: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd929fdu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d929fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d929fe: mov eax, dword ptr [0xde89ac] */
  eax = R32((uint32_t)(0xde89acu));
/* d92a03: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d92a05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92a06: push 0xde317c */
  { uint32_t v = 0xde317cu; esp -= 4; W32(esp, v); }
/* d92a0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d92a0c: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xd92a12u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* d92a12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d92a15: /* d92a15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d92a16: mov eax, esi */
  eax = esi;
/* d92a18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92a19: ret  */
  esp += 4; SPILL(); return;
}

void f_d92a40(void) {
  LOAD_REGS();
L_d92a40: /* d92a40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92a41: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d92a45: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92a47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92a48: je 0xd92a6a */
  if (zf) goto L_d92a6a;
L_d92a4a: /* d92a4a: call dword ptr [0xde89b8] */
  esp -= 4; W32(esp, 0xd92a50u); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d92a50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92a51: mov ecx, esi */
  ecx = esi;
/* d92a53: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd92a59u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d92a59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92a5b: jne 0xd92a95 */
  if (!zf) goto L_d92a95;
L_d92a5d: /* d92a5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92a5e: mov ecx, esi */
  ecx = esi;
/* d92a60: call dword ptr [0xde89b0] */
  esp -= 4; W32(esp, 0xd92a66u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* d92a66: mov edi, eax */
  edi = eax;
/* d92a68: jmp 0xd92a6f */
  goto L_d92a6f;
L_d92a6a: /* d92a6a: mov edi, 0xde31ac */
  edi = 0xde31acu;
L_d92a6f: /* d92a6f: call dword ptr [0xde89b8] */
  esp -= 4; W32(esp, 0xd92a75u); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d92a75: mov ecx, eax */
  ecx = eax;
/* d92a77: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd92a7du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d92a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92a7e: mov eax, dword ptr [0xde89ac] */
  eax = R32((uint32_t)(0xde89acu));
/* d92a83: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d92a85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92a86: push 0xde31b8 */
  { uint32_t v = 0xde31b8u; esp -= 4; W32(esp, v); }
/* d92a8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d92a8c: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xd92a92u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* d92a92: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d92a95: /* d92a95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d92a96: mov eax, esi */
  eax = esi;
/* d92a98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92a99: ret  */
  esp += 4; SPILL(); return;
}

void f_d92ac0(void) {
  LOAD_REGS();
L_d92ac0: /* d92ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92ac1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d92ac5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92ac7: je 0xd92ae0 */
  if (zf) goto L_d92ae0;
L_d92ac9: /* d92ac9: call dword ptr [0xde89bc] */
  esp -= 4; W32(esp, 0xd92acfu); SPILL(); f_4e1ae1(); if (g_unwind) return; /* Core!?StaticClass@UBoolProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d92acf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92ad0: mov ecx, esi */
  ecx = esi;
/* d92ad2: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd92ad8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d92ad8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92ada: je 0xd92ae0 */
  if (zf) goto L_d92ae0;
L_d92adc: /* d92adc: mov eax, esi */
  eax = esi;
/* d92ade: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92adf: ret  */
  esp += 4; SPILL(); return;
L_d92ae0: /* d92ae0: xor eax, eax */
  eax = 0;
/* d92ae2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92ae3: ret  */
  esp += 4; SPILL(); return;
}

void f_d92b00(void) {
  LOAD_REGS();
L_d92b00: /* d92b00: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d92b04: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d92b08: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d92b0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92b0b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* d92b0d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d92b0f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* d92b11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92b12: ret  */
  esp += 4; SPILL(); return;
}

void f_d92b30(void) {
  LOAD_REGS();
L_d92b30: /* d92b30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d92b34: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* d92b3a: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* d92b41: ret  */
  esp += 4; SPILL(); return;
}

void f_d92b60(void) {
  LOAD_REGS();
L_d92b60: /* d92b60: mov eax, ecx */
  eax = ecx;
/* d92b62: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d92b66: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d92b68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92b69: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d92b6b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d92b6d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d92b70: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d92b72: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d92b75: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d92b77: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* d92b7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92b7b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92b90(void) {
  LOAD_REGS();
L_d92b90: /* d92b90: mov eax, ecx */
  eax = ecx;
/* d92b92: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d92b96: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d92b98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92b99: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d92b9b: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d92b9d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d92ba0: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d92ba2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d92ba5: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d92ba7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* d92baa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92bab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92bc0(void) {
  LOAD_REGS();
L_d92bc0: /* d92bc0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d92bc2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d92bc6: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d92bc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92bca: add edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d92bcc: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* d92bcf: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d92bd3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d92bd5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d92bd7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d92bda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92bdb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d92bf0(void) {
  LOAD_REGS();
L_d92bf0: /* d92bf0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d92bf2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d92bf6: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d92bf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92bfa: sub edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d92bfc: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* d92bff: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d92c03: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d92c05: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d92c07: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d92c0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92c0b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d92c20(void) {
  LOAD_REGS();
L_d92c20: /* d92c20: mov eax, ecx */
  eax = ecx;
/* d92c22: ret  */
  esp += 4; SPILL(); return;
}

void f_d92c40(void) {
  LOAD_REGS();
L_d92c40: /* d92c40: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d92c44: mov eax, ecx */
  eax = ecx;
/* d92c46: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d92c4a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d92c4c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d92c50: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* d92c53: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d92c57: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* d92c5a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* d92c5d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d92c70(void) {
  LOAD_REGS();
L_d92c70: /* d92c70: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d92c74: mov eax, ecx */
  eax = ecx;
/* d92c76: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d92c7a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d92c7c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d92c80: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* d92c83: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d92c87: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* d92c8a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* d92c8d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d92ca0(void) {
  LOAD_REGS();
L_d92ca0: /* d92ca0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* d92ca3: sub eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d92ca6: ret  */
  esp += 4; SPILL(); return;
}

void f_d92cc0(void) {
  LOAD_REGS();
L_d92cc0: /* d92cc0: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d92cc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d92cc4: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* d92cc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92cc7: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* d92cca: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d92ccd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92cce: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d92cd2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d92cd4: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* d92cd7: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d92cd9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d92cdb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d92cdf: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d92ce1: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d92ce3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d92ce4: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* d92ce7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92ce8: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d92cea: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d92ced: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d92cf0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d92cf1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d92d10(void) {
  LOAD_REGS();
L_d92d10: /* d92d10: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d92d13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d92d14: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* d92d16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92d17: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* d92d1a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d92d1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92d1e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d92d22: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d92d24: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* d92d27: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* d92d29: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d92d2b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d92d2f: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d92d31: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d92d33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d92d34: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* d92d37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92d38: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d92d3a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d92d3d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d92d40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d92d41: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d92d60(void) {
  LOAD_REGS();
L_d92d60: /* d92d60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d92d64: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d92d67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d92d68: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* d92d6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92d6c: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* d92d6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92d70: add esi, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d92d73: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* d92d75: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d92d78: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d92d7a: add edi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d92d7c: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* d92d7f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d92d83: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d92d85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d92d86: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d92d88: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* d92d8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92d8c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d92d8f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d92d92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d92d93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d92db0(void) {
  LOAD_REGS();
L_d92db0: /* d92db0: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d92db3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d92db7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d92db8: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* d92dbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92dbd: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* d92dc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92dc1: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* d92dc3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d92dc6: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d92dc8: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d92dca: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d92dce: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d92dd0: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d92dd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d92dd3: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d92dd5: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* d92dd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92dd9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d92ddc: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d92ddf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d92de0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d92e00(void) {
  LOAD_REGS();
L_d92e00: /* d92e00: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d92e20(void) {
  LOAD_REGS();
L_d92e20: /* d92e20: mov eax, ecx */
  eax = ecx;
/* d92e22: mov dword ptr [eax], 0xdc198c */
  W32((uint32_t)(eax), 0xdc198cu);
/* d92e28: ret  */
  esp += 4; SPILL(); return;
}

void f_d92e40(void) {
  LOAD_REGS();
L_d92e40: /* d92e40: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d92e60(void) {
  LOAD_REGS();
L_d92e60: /* d92e60: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d92e80(void) {
  LOAD_REGS();
L_d92e80: /* d92e80: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d92ea0(void) {
  LOAD_REGS();
L_d92ea0: /* d92ea0: mov eax, ecx */
  eax = ecx;
/* d92ea2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d92ea6: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d92eac: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d92eaf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* d92eb2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* d92eb5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* d92eb8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92ed0(void) {
  LOAD_REGS();
L_d92ed0: /* d92ed0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d92ed4: mov eax, ecx */
  eax = ecx;
/* d92ed6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d92eda: mov dword ptr [eax], 0xdc19a0 */
  W32((uint32_t)(eax), 0xdc19a0u);
/* d92ee0: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d92ee3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d92ee6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d92f00(void) {
  LOAD_REGS();
L_d92f00: /* d92f00: mov eax, ecx */
  eax = ecx;
/* d92f02: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d92f05: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d92f07: je 0xd92f0c */
  if (zf) goto L_d92f0c;
L_d92f09: /* d92f09: jmp dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); SPILL(); call_ind(t); return; }
L_d92f0c: /* d92f0c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92f20(void) {
  LOAD_REGS();
L_d92f20: /* d92f20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d92f22: push 0xdb9618 */
  { uint32_t v = 0xdb9618u; esp -= 4; W32(esp, v); }
/* d92f27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d92f2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92f2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d92f35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d92f36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92f37: mov esi, ecx */
  esi = ecx;
/* d92f39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d92f3d: mov dword ptr [esi], 0xdc19a8 */
  W32((uint32_t)(esi), 0xdc19a8u);
/* d92f43: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d92f4b: call 0xd8243c */
  esp -= 4; W32(esp, 0xd92f50u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* d92f50: mov ecx, esi */
  ecx = esi;
/* d92f52: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d92f5a: call 0xd81d89 */
  esp -= 4; W32(esp, 0xd92f5fu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* d92f5f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d92f63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d92f64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d92f6b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d92f6e: ret  */
  esp += 4; SPILL(); return;
}

void f_d92f90(void) {
  LOAD_REGS();
L_d92f90: /* d92f90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d92f94: push 0xde3548 */
  { uint32_t v = 0xde3548u; esp -= 4; W32(esp, v); }
/* d92f99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92f9a: call 0xd8218f */
  esp -= 4; W32(esp, 0xd92f9fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* d92f9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d92fa2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d92fc0(void) {
  LOAD_REGS();
L_d92fc0: /* d92fc0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* d92fc5: ret  */
  esp += 4; SPILL(); return;
}

void f_d92fe0(void) {
  LOAD_REGS();
L_d92fe0: /* d92fe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d92fe1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d92fe5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d92fe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d92fe9: mov esi, ecx */
  esi = ecx;
/* d92feb: je 0xd93020 */
  if (zf) goto L_d93020;
L_d92fed: /* d92fed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d92ff0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d92ff1: push 0xd81bfe */
  { uint32_t v = 0xd81bfeu; esp -= 4; W32(esp, v); }
/* d92ff6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d92ff9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d92ffa: push 0x94 */
  { uint32_t v = 0x94u; esp -= 4; W32(esp, v); }
/* d92fff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93000: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd93005u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d93005: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d93008: je 0xd93018 */
  if (zf) goto L_d93018;
L_d9300a: /* d9300a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d93010: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d93012: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d93014: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93015: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd93018u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d93018: /* d93018: mov eax, edi */
  eax = edi;
/* d9301a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9301b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9301c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9301d: ret 4 */
  esp += 8; SPILL(); return;
L_d93020: /* d93020: mov ecx, esi */
  ecx = esi;
/* d93022: call 0xd81bfe */
  esp -= 4; W32(esp, 0xd93027u); SPILL(); f_d81bfe(); if (g_unwind) return; RELOAD();
/* d93027: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9302a: je 0xd93039 */
  if (zf) goto L_d93039;
L_d9302c: /* d9302c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d93031: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d93033: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d93035: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93036: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd93039u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d93039: /* d93039: mov eax, esi */
  eax = esi;
/* d9303b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9303c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9303d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93060(void) {
  LOAD_REGS();
L_d93060: /* d93060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d93062: push 0xdb9638 */
  { uint32_t v = 0xdb9638u; esp -= 4; W32(esp, v); }
/* d93067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9306d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9306e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d93075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d93076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93077: mov esi, ecx */
  esi = ecx;
/* d93079: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d9307d: mov dword ptr [esi], 0xdc1ac8 */
  W32((uint32_t)(esi), 0xdc1ac8u);
/* d93083: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9308b: call 0xd8243c */
  esp -= 4; W32(esp, 0xd93090u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* d93090: mov ecx, esi */
  ecx = esi;
/* d93092: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9309a: call 0xd81bfe */
  esp -= 4; W32(esp, 0xd9309fu); SPILL(); f_d81bfe(); if (g_unwind) return; RELOAD();
/* d9309f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d930a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d930a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d930ab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d930ae: ret  */
  esp += 4; SPILL(); return;
}

void f_d930d0(void) {
  LOAD_REGS();
L_d930d0: /* d930d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d930d4: push 0xde355c */
  { uint32_t v = 0xde355cu; esp -= 4; W32(esp, v); }
/* d930d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d930da: call 0xd8218f */
  esp -= 4; W32(esp, 0xd930dfu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* d930df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d930e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93100(void) {
  LOAD_REGS();
L_d93100: /* d93100: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* d93105: ret  */
  esp += 4; SPILL(); return;
}

void f_d93120(void) {
  LOAD_REGS();
L_d93120: /* d93120: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93121: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d93125: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d93128: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93129: mov esi, ecx */
  esi = ecx;
/* d9312b: je 0xd93160 */
  if (zf) goto L_d93160;
L_d9312d: /* d9312d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d93130: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93131: push 0xd81b90 */
  { uint32_t v = 0xd81b90u; esp -= 4; W32(esp, v); }
/* d93136: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d93139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9313a: push 0x9c */
  { uint32_t v = 0x9cu; esp -= 4; W32(esp, v); }
/* d9313f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93140: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd93145u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d93145: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d93148: je 0xd93158 */
  if (zf) goto L_d93158;
L_d9314a: /* d9314a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d93150: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d93152: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d93154: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93155: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd93158u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d93158: /* d93158: mov eax, edi */
  eax = edi;
/* d9315a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9315b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9315c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9315d: ret 4 */
  esp += 8; SPILL(); return;
L_d93160: /* d93160: mov ecx, esi */
  ecx = esi;
/* d93162: call 0xd81b90 */
  esp -= 4; W32(esp, 0xd93167u); SPILL(); f_d81b90(); if (g_unwind) return; RELOAD();
/* d93167: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d9316a: je 0xd93179 */
  if (zf) goto L_d93179;
L_d9316c: /* d9316c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d93171: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d93173: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d93175: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93176: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd93179u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d93179: /* d93179: mov eax, esi */
  eax = esi;
/* d9317b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9317c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9317d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d931a0(void) {
  LOAD_REGS();
L_d931a0: /* d931a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d931a2: push 0xdb9658 */
  { uint32_t v = 0xdb9658u; esp -= 4; W32(esp, v); }
/* d931a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d931ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d931ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d931b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d931b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d931b7: mov esi, ecx */
  esi = ecx;
/* d931b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d931bd: mov dword ptr [esi], 0xdc1be8 */
  W32((uint32_t)(esi), 0xdc1be8u);
/* d931c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d931cb: call 0xd8243c */
  esp -= 4; W32(esp, 0xd931d0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* d931d0: mov ecx, esi */
  ecx = esi;
/* d931d2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d931da: call 0xd81d89 */
  esp -= 4; W32(esp, 0xd931dfu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* d931df: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d931e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d931e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d931eb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d931ee: ret  */
  esp += 4; SPILL(); return;
}

void f_d93210(void) {
  LOAD_REGS();
L_d93210: /* d93210: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d93214: push 0xde3578 */
  { uint32_t v = 0xde3578u; esp -= 4; W32(esp, v); }
/* d93219: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9321a: call 0xd8218f */
  esp -= 4; W32(esp, 0xd9321fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* d9321f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93222: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93240(void) {
  LOAD_REGS();
L_d93240: /* d93240: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* d93245: ret  */
  esp += 4; SPILL(); return;
}

void f_d93260(void) {
  LOAD_REGS();
L_d93260: /* d93260: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93261: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d93265: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d93268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93269: mov esi, ecx */
  esi = ecx;
/* d9326b: je 0xd932a0 */
  if (zf) goto L_d932a0;
L_d9326d: /* d9326d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d93270: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93271: push 0xd81226 */
  { uint32_t v = 0xd81226u; esp -= 4; W32(esp, v); }
/* d93276: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d93279: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9327a: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* d9327f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93280: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd93285u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d93285: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d93288: je 0xd93298 */
  if (zf) goto L_d93298;
L_d9328a: /* d9328a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d93290: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d93292: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d93294: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93295: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd93298u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d93298: /* d93298: mov eax, edi */
  eax = edi;
/* d9329a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9329b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9329c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9329d: ret 4 */
  esp += 8; SPILL(); return;
L_d932a0: /* d932a0: mov ecx, esi */
  ecx = esi;
/* d932a2: call 0xd81226 */
  esp -= 4; W32(esp, 0xd932a7u); SPILL(); f_d81226(); if (g_unwind) return; RELOAD();
/* d932a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d932aa: je 0xd932b9 */
  if (zf) goto L_d932b9;
L_d932ac: /* d932ac: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d932b1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d932b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d932b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d932b6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd932b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d932b9: /* d932b9: mov eax, esi */
  eax = esi;
/* d932bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d932bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d932bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d932e0(void) {
  LOAD_REGS();
L_d932e0: /* d932e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d932e2: push 0xdb9678 */
  { uint32_t v = 0xdb9678u; esp -= 4; W32(esp, v); }
/* d932e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d932ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d932ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d932f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d932f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d932f7: mov esi, ecx */
  esi = ecx;
/* d932f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d932fd: mov dword ptr [esi], 0xdc1d28 */
  W32((uint32_t)(esi), 0xdc1d28u);
/* d93303: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9330b: call 0xd8243c */
  esp -= 4; W32(esp, 0xd93310u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* d93310: mov ecx, esi */
  ecx = esi;
/* d93312: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9331a: call 0xd81d89 */
  esp -= 4; W32(esp, 0xd9331fu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* d9331f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d93323: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93324: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9332b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9332e: ret  */
  esp += 4; SPILL(); return;
}

void f_d93350(void) {
  LOAD_REGS();
L_d93350: /* d93350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d93354: push 0xde3590 */
  { uint32_t v = 0xde3590u; esp -= 4; W32(esp, v); }
/* d93359: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9335a: call 0xd8218f */
  esp -= 4; W32(esp, 0xd9335fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* d9335f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93362: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93380(void) {
  LOAD_REGS();
L_d93380: /* d93380: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* d93385: ret  */
  esp += 4; SPILL(); return;
}

void f_d933a0(void) {
  LOAD_REGS();
L_d933a0: /* d933a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d933a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d933a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d933a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d933a9: mov esi, ecx */
  esi = ecx;
/* d933ab: je 0xd933dd */
  if (zf) goto L_d933dd;
L_d933ad: /* d933ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d933b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d933b1: push 0xd82306 */
  { uint32_t v = 0xd82306u; esp -= 4; W32(esp, v); }
/* d933b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d933b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d933ba: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* d933bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d933bd: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd933c2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d933c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d933c5: je 0xd933d5 */
  if (zf) goto L_d933d5;
L_d933c7: /* d933c7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d933cd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d933cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d933d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d933d2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd933d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d933d5: /* d933d5: mov eax, edi */
  eax = edi;
/* d933d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d933d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d933d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d933da: ret 4 */
  esp += 8; SPILL(); return;
L_d933dd: /* d933dd: mov ecx, esi */
  ecx = esi;
/* d933df: call 0xd82306 */
  esp -= 4; W32(esp, 0xd933e4u); SPILL(); f_d82306(); if (g_unwind) return; RELOAD();
/* d933e4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d933e7: je 0xd933f6 */
  if (zf) goto L_d933f6;
L_d933e9: /* d933e9: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d933ee: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d933f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d933f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d933f3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd933f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d933f6: /* d933f6: mov eax, esi */
  eax = esi;
/* d933f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d933f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d933fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93420(void) {
  LOAD_REGS();
L_d93420: /* d93420: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d93422: push 0xdb9698 */
  { uint32_t v = 0xdb9698u; esp -= 4; W32(esp, v); }
/* d93427: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9342d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9342e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d93435: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d93436: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93437: mov esi, ecx */
  esi = ecx;
/* d93439: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d9343d: mov dword ptr [esi], 0xdc1e40 */
  W32((uint32_t)(esi), 0xdc1e40u);
/* d93443: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d9344b: call 0xd8243c */
  esp -= 4; W32(esp, 0xd93450u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* d93450: mov ecx, esi */
  ecx = esi;
/* d93452: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d9345a: call 0xd81d89 */
  esp -= 4; W32(esp, 0xd9345fu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* d9345f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d93463: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93464: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9346b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9346e: ret  */
  esp += 4; SPILL(); return;
}

void f_d93490(void) {
  LOAD_REGS();
L_d93490: /* d93490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d93494: push 0xde35a0 */
  { uint32_t v = 0xde35a0u; esp -= 4; W32(esp, v); }
/* d93499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9349a: call 0xd8218f */
  esp -= 4; W32(esp, 0xd9349fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* d9349f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d934a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d934c0(void) {
  LOAD_REGS();
L_d934c0: /* d934c0: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* d934c5: ret  */
  esp += 4; SPILL(); return;
}

void f_d934e0(void) {
  LOAD_REGS();
L_d934e0: /* d934e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d934e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d934e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d934e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d934e9: mov esi, ecx */
  esi = ecx;
/* d934eb: je 0xd9351d */
  if (zf) goto L_d9351d;
L_d934ed: /* d934ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d934f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d934f1: push 0xd816a9 */
  { uint32_t v = 0xd816a9u; esp -= 4; W32(esp, v); }
/* d934f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d934f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d934fa: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* d934fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d934fd: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd93502u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d93502: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d93505: je 0xd93515 */
  if (zf) goto L_d93515;
L_d93507: /* d93507: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9350d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9350f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d93511: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93512: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd93515u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d93515: /* d93515: mov eax, edi */
  eax = edi;
/* d93517: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d93518: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93519: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9351a: ret 4 */
  esp += 8; SPILL(); return;
L_d9351d: /* d9351d: mov ecx, esi */
  ecx = esi;
/* d9351f: call 0xd816a9 */
  esp -= 4; W32(esp, 0xd93524u); SPILL(); f_d816a9(); if (g_unwind) return; RELOAD();
/* d93524: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d93527: je 0xd93536 */
  if (zf) goto L_d93536;
L_d93529: /* d93529: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9352e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d93530: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d93532: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93533: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd93536u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d93536: /* d93536: mov eax, esi */
  eax = esi;
/* d93538: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93539: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9353a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93560(void) {
  LOAD_REGS();
L_d93560: /* d93560: mov eax, ecx */
  eax = ecx;
/* d93562: mov dword ptr [eax + 4], 0xdc198c */
  W32((uint32_t)(eax + 0x4u), 0xdc198cu);
/* d93569: mov dword ptr [eax], 0xdc1f6c */
  W32((uint32_t)(eax), 0xdc1f6cu);
/* d9356f: mov dword ptr [eax + 4], 0xdc1f58 */
  W32((uint32_t)(eax + 0x4u), 0xdc1f58u);
/* d93576: ret  */
  esp += 4; SPILL(); return;
}

void f_d93590(void) {
  LOAD_REGS();
L_d93590: /* d93590: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d93592: push 0xdb96b8 */
  { uint32_t v = 0xdb96b8u; esp -= 4; W32(esp, v); }
/* d93597: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9359d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9359e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d935a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d935a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d935a7: mov esi, ecx */
  esi = ecx;
/* d935a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d935ad: mov dword ptr [esi], 0xdc1f80 */
  W32((uint32_t)(esi), 0xdc1f80u);
/* d935b3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d935bb: call 0xd8243c */
  esp -= 4; W32(esp, 0xd935c0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* d935c0: mov ecx, esi */
  ecx = esi;
/* d935c2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d935ca: call 0xd8227f */
  esp -= 4; W32(esp, 0xd935cfu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* d935cf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d935d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d935d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d935db: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d935de: ret  */
  esp += 4; SPILL(); return;
}

void f_d93600(void) {
  LOAD_REGS();
L_d93600: /* d93600: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d93604: push 0xde35b8 */
  { uint32_t v = 0xde35b8u; esp -= 4; W32(esp, v); }
/* d93609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9360a: call 0xd8218f */
  esp -= 4; W32(esp, 0xd9360fu); SPILL(); f_d8218f(); if (g_unwind) return; RELOAD();
/* d9360f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93612: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93630(void) {
  LOAD_REGS();
L_d93630: /* d93630: mov eax, 0xde1dfc */
  eax = 0xde1dfcu;
/* d93635: ret  */
  esp += 4; SPILL(); return;
}

void f_d93650(void) {
  LOAD_REGS();
L_d93650: /* d93650: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93651: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d93655: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d93658: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93659: mov esi, ecx */
  esi = ecx;
/* d9365b: je 0xd9368d */
  if (zf) goto L_d9368d;
L_d9365d: /* d9365d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d93660: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93661: push 0xd81550 */
  { uint32_t v = 0xd81550u; esp -= 4; W32(esp, v); }
/* d93666: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d93669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9366a: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* d9366c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9366d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xd93672u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* d93672: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d93675: je 0xd93685 */
  if (zf) goto L_d93685;
L_d93677: /* d93677: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* d9367d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d9367f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d93681: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93682: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd93685u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d93685: /* d93685: mov eax, edi */
  eax = edi;
/* d93687: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d93688: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93689: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9368a: ret 4 */
  esp += 8; SPILL(); return;
L_d9368d: /* d9368d: mov ecx, esi */
  ecx = esi;
/* d9368f: call 0xd81550 */
  esp -= 4; W32(esp, 0xd93694u); SPILL(); f_d81550(); if (g_unwind) return; RELOAD();
/* d93694: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d93697: je 0xd936a6 */
  if (zf) goto L_d936a6;
L_d93699: /* d93699: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d9369e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d936a0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d936a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d936a3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd936a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d936a6: /* d936a6: mov eax, esi */
  eax = esi;
/* d936a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d936a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d936aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d936d0(void) {
  LOAD_REGS();
L_d936d0: /* d936d0: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd936d6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d936d6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d936da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d936db: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd936e1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d936e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d936e2: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xd936e8u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* d936e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d936eb: ret  */
  esp += 4; SPILL(); return;
}

void f_d93700(void) {
  LOAD_REGS();
L_d93700: /* d93700: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93701: mov esi, ecx */
  esi = ecx;
/* d93703: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd93709u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d93709: mov eax, esi */
  eax = esi;
/* d9370b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9370c: ret  */
  esp += 4; SPILL(); return;
}

void f_d93720(void) {
  LOAD_REGS();
L_d93720: /* d93720: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d93722: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d93726: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* d93729: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93740(void) {
  LOAD_REGS();
L_d93740: /* d93740: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93741: mov esi, ecx */
  esi = ecx;
/* d93743: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd93749u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d93749: mov eax, esi */
  eax = esi;
/* d9374b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9374c: ret  */
  esp += 4; SPILL(); return;
}

void f_d93760(void) {
  LOAD_REGS();
L_d93760: /* d93760: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d93763: xor eax, eax */
  eax = 0;
/* d93765: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d93767: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d9376a: ret  */
  esp += 4; SPILL(); return;
}

void f_d93780(void) {
  LOAD_REGS();
L_d93780: /* d93780: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d93783: ret  */
  esp += 4; SPILL(); return;
}

void f_d937a0(void) {
  LOAD_REGS();
L_d937a0: /* d937a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d937a1: mov esi, ecx */
  esi = ecx;
/* d937a3: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd937a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d937a9: mov eax, esi */
  eax = esi;
/* d937ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d937ac: ret  */
  esp += 4; SPILL(); return;
}

void f_d937c0(void) {
  LOAD_REGS();
L_d937c0: /* d937c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d937c1: mov esi, ecx */
  esi = ecx;
/* d937c3: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd937c9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d937c9: mov eax, esi */
  eax = esi;
/* d937cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d937cc: ret  */
  esp += 4; SPILL(); return;
}

void f_d937e0(void) {
  LOAD_REGS();
L_d937e0: /* d937e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d937e4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d937e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d937e7: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd937edu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d937ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93800(void) {
  LOAD_REGS();
L_d93800: /* d93800: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93801: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d93802: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* d93808: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93809: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9380a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d9380e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93810: mov esi, ecx */
  esi = ecx;
/* d93812: jge 0xd93828 */
  if ((sf == of)) goto L_d93828;
L_d93814: /* d93814: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* d93819: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9381e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* d93823: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd93825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d93825: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d93828: /* d93828: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9382b: jle 0xd93841 */
  if ((zf || sf != of)) goto L_d93841;
L_d9382d: /* d9382d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d93832: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d93837: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d9383c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd9383eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9383e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d93841: /* d93841: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* d93845: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d93848: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* d9384b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9384d: jle 0xd93863 */
  if ((zf || sf != of)) goto L_d93863;
L_d9384f: /* d9384f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d93854: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d93859: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d9385e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd93860u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d93860: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d93863: /* d93863: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d93865: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93866: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93867: mov ecx, esi */
  ecx = esi;
/* d93869: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd9386fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d9386f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d93870: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93871: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d93872: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d93873: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d938a0(void) {
  LOAD_REGS();
L_d938a0: /* d938a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d938a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d938a5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d938a7: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd938adu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d938ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d938c0(void) {
  LOAD_REGS();
L_d938c0: /* d938c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d938c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d938c6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* d938c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d938e0(void) {
  LOAD_REGS();
L_d938e0: /* d938e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d938e2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d938e6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* d938e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93900(void) {
  LOAD_REGS();
L_d93900: /* d93900: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93901: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d93902: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* d93908: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93909: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9390a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d9390e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93910: mov esi, ecx */
  esi = ecx;
/* d93912: jge 0xd93928 */
  if ((sf == of)) goto L_d93928;
L_d93914: /* d93914: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* d93919: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9391e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* d93923: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd93925u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d93925: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d93928: /* d93928: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9392b: jle 0xd93941 */
  if ((zf || sf != of)) goto L_d93941;
L_d9392d: /* d9392d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d93932: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d93937: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d9393c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd9393eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9393e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d93941: /* d93941: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* d93945: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d93948: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* d9394b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9394d: jle 0xd93963 */
  if ((zf || sf != of)) goto L_d93963;
L_d9394f: /* d9394f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d93954: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d93959: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d9395e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd93960u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d93960: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d93963: /* d93963: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d93965: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93966: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93967: mov ecx, esi */
  ecx = esi;
/* d93969: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd9396fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d9396f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d93970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93971: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d93972: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d93973: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d939a0(void) {
  LOAD_REGS();
L_d939a0: /* d939a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d939a1: mov esi, ecx */
  esi = ecx;
/* d939a3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d939a6: je 0xd939f0 */
  if (zf) goto L_d939f0;
L_d939a8: /* d939a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d939a9: mov edi, 0x8000 */
  edi = 0x8000u;
/* d939ae: mov edi, edi */
  edi = edi;
L_d939b0: /* d939b0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d939b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d939b5: je 0xd939d7 */
  if (zf) goto L_d939d7;
L_d939b7: /* d939b7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d939ba: call dword ptr [0xde89c8] */
  esp -= 4; W32(esp, 0xd939c0u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* d939c0: test dword ptr [eax + 0x498], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d939c6: jne 0xd939ef */
  if (!zf) goto L_d939ef;
L_d939c8: /* d939c8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d939cb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* d939ce: mov eax, ecx */
  eax = ecx;
/* d939d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d939d2: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* d939d5: jne 0xd939b7 */
  if (!zf) goto L_d939b7;
L_d939d7: /* d939d7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d939d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d939db: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0xd939deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d939de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d939e0: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* d939e2: je 0xd939ea */
  if (zf) goto L_d939ea;
L_d939e4: /* d939e4: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d939e7: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_d939ea: /* d939ea: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d939ed: jne 0xd939b0 */
  if (!zf) goto L_d939b0;
L_d939ef: /* d939ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_d939f0: /* d939f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d939f1: ret  */
  esp += 4; SPILL(); return;
}

void f_d93a20(void) {
  LOAD_REGS();
L_d93a20: /* d93a20: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d93a22: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d93a26: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* d93a29: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93a40(void) {
  LOAD_REGS();
L_d93a40: /* d93a40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d93a42: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d93a46: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* d93a49: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93a60(void) {
  LOAD_REGS();
L_d93a60: /* d93a60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d93a62: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d93a66: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* d93a69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93a80(void) {
  LOAD_REGS();
L_d93a80: /* d93a80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d93a84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93a85: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* d93a87: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd93a8du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d93a8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93aa0(void) {
  LOAD_REGS();
L_d93aa0: /* d93aa0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d93aa2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d93aa6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* d93aa9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93ac0(void) {
  LOAD_REGS();
L_d93ac0: /* d93ac0: mov eax, 1 */
  eax = 0x1u;
/* d93ac5: ret  */
  esp += 4; SPILL(); return;
}

void f_d93ae0(void) {
  LOAD_REGS();
L_d93ae0: /* d93ae0: mov eax, 1 */
  eax = 0x1u;
/* d93ae5: ret  */
  esp += 4; SPILL(); return;
}

void f_d93b00(void) {
  LOAD_REGS();
L_d93b00: /* d93b00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d93b04: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d93b06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93b07: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd93b0du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d93b0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93b20(void) {
  LOAD_REGS();
L_d93b20: /* d93b20: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* d93b24: fcomp dword ptr [esp + 8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x8u)));
  FPOP();
/* d93b28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d93b2a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d93b2d: jp 0xd93b34 */
  if (pf) goto L_d93b34;
L_d93b2f: /* d93b2f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* d93b33: ret  */
  esp += 4; SPILL(); return;
L_d93b34: /* d93b34: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* d93b38: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* d93b3c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d93b3e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d93b41: jp 0xd93b48 */
  if (pf) goto L_d93b48;
L_d93b43: /* d93b43: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* d93b47: ret  */
  esp += 4; SPILL(); return;
L_d93b48: /* d93b48: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* d93b4c: ret  */
  esp += 4; SPILL(); return;
}

void f_d93b60(void) {
  LOAD_REGS();
L_d93b60: /* d93b60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d93b64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93b66: jge 0xd93b6a */
  if ((sf == of)) goto L_d93b6a;
L_d93b68: /* d93b68: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_d93b6a: /* d93b6a: ret  */
  esp += 4; SPILL(); return;
}

void f_d93b80(void) {
  LOAD_REGS();
L_d93b80: /* d93b80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d93b84: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d93b88: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d93b8a: jge 0xd93b8e */
  if ((sf == of)) goto L_d93b8e;
L_d93b8c: /* d93b8c: mov eax, ecx */
  eax = ecx;
L_d93b8e: /* d93b8e: ret  */
  esp += 4; SPILL(); return;
}

void f_d93ba0(void) {
  LOAD_REGS();
L_d93ba0: /* d93ba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93ba1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d93ba5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d93ba7: je 0xd93bc0 */
  if (zf) goto L_d93bc0;
L_d93ba9: /* d93ba9: call dword ptr [0xde89b8] */
  esp -= 4; W32(esp, 0xd93bafu); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d93baf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93bb0: mov ecx, esi */
  ecx = esi;
/* d93bb2: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd93bb8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d93bb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d93bba: je 0xd93bc0 */
  if (zf) goto L_d93bc0;
L_d93bbc: /* d93bbc: mov eax, esi */
  eax = esi;
/* d93bbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93bbf: ret  */
  esp += 4; SPILL(); return;
L_d93bc0: /* d93bc0: xor eax, eax */
  eax = 0;
/* d93bc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93bc3: ret  */
  esp += 4; SPILL(); return;
}

void f_d93be0(void) {
  LOAD_REGS();
L_d93be0: /* d93be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93be1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d93be5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d93be7: je 0xd93c00 */
  if (zf) goto L_d93c00;
L_d93be9: /* d93be9: call dword ptr [0xde89cc] */
  esp -= 4; W32(esp, 0xd93befu); SPILL(); f_4e381e(); if (g_unwind) return; /* Core!?StaticClass@UStructProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d93bef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93bf0: mov ecx, esi */
  ecx = esi;
/* d93bf2: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd93bf8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d93bf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d93bfa: je 0xd93c00 */
  if (zf) goto L_d93c00;
L_d93bfc: /* d93bfc: mov eax, esi */
  eax = esi;
/* d93bfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93bff: ret  */
  esp += 4; SPILL(); return;
L_d93c00: /* d93c00: xor eax, eax */
  eax = 0;
/* d93c02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93c03: ret  */
  esp += 4; SPILL(); return;
}

void f_d93c20(void) {
  LOAD_REGS();
L_d93c20: /* d93c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93c21: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d93c25: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d93c27: je 0xd93c40 */
  if (zf) goto L_d93c40;
L_d93c29: /* d93c29: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd93c2fu); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d93c2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93c30: mov ecx, esi */
  ecx = esi;
/* d93c32: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd93c38u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d93c38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d93c3a: je 0xd93c40 */
  if (zf) goto L_d93c40;
L_d93c3c: /* d93c3c: mov eax, esi */
  eax = esi;
/* d93c3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93c3f: ret  */
  esp += 4; SPILL(); return;
L_d93c40: /* d93c40: xor eax, eax */
  eax = 0;
/* d93c42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93c43: ret  */
  esp += 4; SPILL(); return;
}

void f_d93c60(void) {
  LOAD_REGS();
L_d93c60: /* d93c60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d93c61: mov ebp, esp */
  ebp = esp;
/* d93c63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d93c65: push 0xdb96d0 */
  { uint32_t v = 0xdb96d0u; esp -= 4; W32(esp, v); }
/* d93c6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d93c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93c71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d93c78: sub esp, 0x11c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d93c7e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d93c81: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d93c84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93c85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93c86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93c87: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d93c8a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d93c91: jl 0xd93e7c */
  if ((sf != of)) goto L_d93e7c;
L_d93c97: /* d93c97: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d93c9a: mov dword ptr [ebp - 0x128], eax */
  W32((uint32_t)(ebp + 0xfffffed8u), eax);
/* d93ca0: lea eax, [eax + ecx*4 - 4] */
  eax = (uint32_t)(eax + ecx*4 + 0xfffffffcu);
/* d93ca4: mov dword ptr [ebp - 0x124], eax */
  W32((uint32_t)(ebp + 0xfffffedcu), eax);
/* d93caa: xor eax, eax */
  eax = 0;
/* d93cac: mov ecx, 0x3e */
  ecx = 0x3eu;
/* d93cb1: lea edi, [ebp - 0x120] */
  edi = (uint32_t)(ebp + 0xfffffee0u);
/* d93cb7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d93cb9: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
L_d93cbf: /* d93cbf: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* d93cc5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d93cc7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d93cca: jb 0xd93e7c */
  if (cf) goto L_d93e7c;
L_d93cd0: /* d93cd0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d93cd3: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d93cd5: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
L_d93cd8: /* d93cd8: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93cdb: mov eax, edi */
  eax = edi;
/* d93cdd: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93cdf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d93ce2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d93ce3: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d93ce6: jg 0xd93d4a */
  if ((!zf && sf == of)) goto L_d93d4a;
L_d93ce8: /* d93ce8: jmp 0xd93cf0 */
  goto L_d93cf0;
L_d93cf0: /* d93cf0: cmp dword ptr [ebp - 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93cf3: jbe 0xd93e66 */
  if ((cf | zf)) goto L_d93e66;
L_d93cf9: /* d93cf9: mov eax, esi */
  eax = esi;
/* d93cfb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d93cfe: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
L_d93d01: /* d93d01: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93d04: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93d06: ja 0xd93d3a */
  if ((!cf && !zf)) goto L_d93d3a;
L_d93d08: /* d93d08: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d93d0a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d93d0c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d93d0f: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d15u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d15: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d93d18: mov ebx, eax */
  ebx = eax;
/* d93d1a: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d20u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93d21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93d22: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xd93d28u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* d93d28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93d2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93d2d: jle 0xd93d32 */
  if ((zf || sf != of)) goto L_d93d32;
L_d93d2f: /* d93d2f: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_d93d32: /* d93d32: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d93d35: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d93d38: jmp 0xd93d01 */
  goto L_d93d01;
L_d93d3a: /* d93d3a: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* d93d3c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d93d3e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d93d40: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d93d42: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d93d45: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d93d48: jmp 0xd93cf0 */
  goto L_d93cf0;
L_d93d4a: /* d93d4a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d93d4b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93d4d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d93d4f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d93d51: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* d93d54: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* d93d57: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d93d59: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* d93d5b: mov ebx, esi */
  ebx = esi;
/* d93d5d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_d93d60: /* d93d60: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93d63: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d93d66: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93d68: ja 0xd93d95 */
  if ((!cf && !zf)) goto L_d93d95;
L_d93d6a: /* d93d6a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d93d6c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d93d6e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d93d71: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d77u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d77: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d93d7a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d93d7d: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d83u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d83: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d93d86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d93d87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93d88: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xd93d8eu); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* d93d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93d91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93d93: jle 0xd93d60 */
  if ((zf || sf != of)) goto L_d93d60;
L_d93d95: /* d93d95: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d93d98: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93d9a: jbe 0xd93dc7 */
  if ((cf | zf)) goto L_d93dc7;
L_d93d9c: /* d93d9c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d93d9e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d93da0: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* d93da3: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93da9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93da9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d93dac: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d93daf: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93db5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93db5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d93db8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d93db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93dba: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xd93dc0u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* d93dc0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93dc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93dc5: jge 0xd93d95 */
  if ((sf == of)) goto L_d93d95;
L_d93dc7: /* d93dc7: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93dc9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d93dcb: jbe 0xd93e71 */
  if ((cf | zf)) goto L_d93e71;
L_d93dd1: /* d93dd1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d93dd3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* d93dd5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93dd8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d93dda: mov edx, edi */
  edx = edi;
/* d93ddc: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d93dde: mov eax, ecx */
  eax = ecx;
/* d93de0: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d93de3: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93de5: and edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d93de8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d93deb: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d93ded: jl 0xd93e42 */
  if ((sf != of)) goto L_d93e42;
L_d93def: /* d93def: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* d93df2: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d93df4: jae 0xd93e07 */
  if (!cf) goto L_d93e07;
L_d93df6: /* d93df6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d93df9: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d93dfc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d93dfe: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* d93e01: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d93e04: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d93e07: /* d93e07: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93e09: jbe 0xd93e66 */
  if ((cf | zf)) goto L_d93e66;
L_d93e0b: /* d93e0b: mov esi, ebx */
  esi = ebx;
/* d93e0d: jmp 0xd93cd8 */
  goto L_d93cd8;
L_d93e42: /* d93e42: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93e44: jbe 0xd93e54 */
  if ((cf | zf)) goto L_d93e54;
L_d93e46: /* d93e46: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d93e49: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d93e4b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d93e4e: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d93e51: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d93e54: /* d93e54: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* d93e57: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d93e59: jae 0xd93e66 */
  if (!cf) goto L_d93e66;
L_d93e5b: /* d93e5b: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d93e5e: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* d93e61: jmp 0xd93cd8 */
  goto L_d93cd8;
L_d93e66: /* d93e66: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d93e69: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93e6c: jmp 0xd93cbf */
  goto L_d93cbf;
L_d93e71: /* d93e71: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d93e73: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* d93e75: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d93e77: jmp 0xd93d60 */
  goto L_d93d60;
L_d93e7c: /* d93e7c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d93e7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d93e80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93e81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d93e88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d93e89: mov esp, ebp */
  esp = ebp;
/* d93e8b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d93e8c: ret  */
  esp += 4; SPILL(); return;
}

void f_d93cea(void) {
  LOAD_REGS();
  goto L_d93cea;
L_d93cbf: /* d93cbf: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* d93cc5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d93cc7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d93cca: jb 0xd93e7c */
  if (cf) goto L_d93e7c;
L_d93cd0: /* d93cd0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d93cd3: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d93cd5: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
L_d93cd8: /* d93cd8: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93cdb: mov eax, edi */
  eax = edi;
/* d93cdd: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93cdf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d93ce2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d93ce3: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d93ce6: jg 0xd93d4a */
  if ((!zf && sf == of)) goto L_d93d4a;
L_d93ce8: /* d93ce8: jmp 0xd93cf0 */
  goto L_d93cf0;
L_d93cea: /* d93cea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d93cf0: /* d93cf0: cmp dword ptr [ebp - 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93cf3: jbe 0xd93e66 */
  if ((cf | zf)) goto L_d93e66;
L_d93cf9: /* d93cf9: mov eax, esi */
  eax = esi;
/* d93cfb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d93cfe: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
L_d93d01: /* d93d01: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93d04: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93d06: ja 0xd93d3a */
  if ((!cf && !zf)) goto L_d93d3a;
L_d93d08: /* d93d08: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d93d0a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d93d0c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d93d0f: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d15u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d15: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d93d18: mov ebx, eax */
  ebx = eax;
/* d93d1a: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d20u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93d21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93d22: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xd93d28u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* d93d28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93d2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93d2d: jle 0xd93d32 */
  if ((zf || sf != of)) goto L_d93d32;
L_d93d2f: /* d93d2f: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_d93d32: /* d93d32: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d93d35: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d93d38: jmp 0xd93d01 */
  goto L_d93d01;
L_d93d3a: /* d93d3a: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* d93d3c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d93d3e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d93d40: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d93d42: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d93d45: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d93d48: jmp 0xd93cf0 */
  goto L_d93cf0;
L_d93d4a: /* d93d4a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d93d4b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93d4d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d93d4f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d93d51: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* d93d54: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* d93d57: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d93d59: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* d93d5b: mov ebx, esi */
  ebx = esi;
/* d93d5d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_d93d60: /* d93d60: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93d63: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d93d66: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93d68: ja 0xd93d95 */
  if ((!cf && !zf)) goto L_d93d95;
L_d93d6a: /* d93d6a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d93d6c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d93d6e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d93d71: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d77u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d77: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d93d7a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d93d7d: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d83u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d83: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d93d86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d93d87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93d88: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xd93d8eu); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* d93d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93d91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93d93: jle 0xd93d60 */
  if ((zf || sf != of)) goto L_d93d60;
L_d93d95: /* d93d95: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d93d98: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93d9a: jbe 0xd93dc7 */
  if ((cf | zf)) goto L_d93dc7;
L_d93d9c: /* d93d9c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d93d9e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d93da0: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* d93da3: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93da9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93da9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d93dac: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d93daf: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93db5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93db5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d93db8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d93db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93dba: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xd93dc0u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* d93dc0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93dc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93dc5: jge 0xd93d95 */
  if ((sf == of)) goto L_d93d95;
L_d93dc7: /* d93dc7: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93dc9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d93dcb: jbe 0xd93e71 */
  if ((cf | zf)) goto L_d93e71;
L_d93dd1: /* d93dd1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d93dd3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* d93dd5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93dd8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d93dda: mov edx, edi */
  edx = edi;
/* d93ddc: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d93dde: mov eax, ecx */
  eax = ecx;
/* d93de0: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d93de3: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93de5: and edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d93de8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d93deb: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d93ded: jl 0xd93e42 */
  if ((sf != of)) goto L_d93e42;
L_d93def: /* d93def: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* d93df2: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d93df4: jae 0xd93e07 */
  if (!cf) goto L_d93e07;
L_d93df6: /* d93df6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d93df9: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d93dfc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d93dfe: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* d93e01: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d93e04: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d93e07: /* d93e07: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93e09: jbe 0xd93e66 */
  if ((cf | zf)) goto L_d93e66;
L_d93e0b: /* d93e0b: mov esi, ebx */
  esi = ebx;
/* d93e0d: jmp 0xd93cd8 */
  goto L_d93cd8;
L_d93e42: /* d93e42: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93e44: jbe 0xd93e54 */
  if ((cf | zf)) goto L_d93e54;
L_d93e46: /* d93e46: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d93e49: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d93e4b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d93e4e: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d93e51: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d93e54: /* d93e54: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* d93e57: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d93e59: jae 0xd93e66 */
  if (!cf) goto L_d93e66;
L_d93e5b: /* d93e5b: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d93e5e: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* d93e61: jmp 0xd93cd8 */
  goto L_d93cd8;
L_d93e66: /* d93e66: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d93e69: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93e6c: jmp 0xd93cbf */
  goto L_d93cbf;
L_d93e71: /* d93e71: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d93e73: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* d93e75: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d93e77: jmp 0xd93d60 */
  goto L_d93d60;
L_d93e7c: /* d93e7c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d93e7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d93e80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93e81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d93e88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d93e89: mov esp, ebp */
  esp = ebp;
/* d93e8b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d93e8c: ret  */
  esp += 4; SPILL(); return;
}

void f_d93e12(void) {
  LOAD_REGS();
L_d93e12: /* d93e12: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d93e15: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d93e1a: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d93e1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93e1e: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* d93e21: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd93e26u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d93e26(); return;
}

void f_d93e26(void) {
  LOAD_REGS();
  goto L_d93e26;
L_d93cbf: /* d93cbf: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* d93cc5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d93cc7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d93cca: jb 0xd93e7c */
  if (cf) goto L_d93e7c;
L_d93cd0: /* d93cd0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d93cd3: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d93cd5: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
L_d93cd8: /* d93cd8: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93cdb: mov eax, edi */
  eax = edi;
/* d93cdd: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93cdf: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d93ce2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d93ce3: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d93ce6: jg 0xd93d4a */
  if ((!zf && sf == of)) goto L_d93d4a;
L_d93ce8: /* d93ce8: jmp 0xd93cf0 */
  goto L_d93cf0;
L_d93cf0: /* d93cf0: cmp dword ptr [ebp - 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93cf3: jbe 0xd93e66 */
  if ((cf | zf)) goto L_d93e66;
L_d93cf9: /* d93cf9: mov eax, esi */
  eax = esi;
/* d93cfb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d93cfe: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
L_d93d01: /* d93d01: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93d04: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93d06: ja 0xd93d3a */
  if ((!cf && !zf)) goto L_d93d3a;
L_d93d08: /* d93d08: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d93d0a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d93d0c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d93d0f: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d15u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d15: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d93d18: mov ebx, eax */
  ebx = eax;
/* d93d1a: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d20u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93d21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93d22: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xd93d28u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* d93d28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93d2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93d2d: jle 0xd93d32 */
  if ((zf || sf != of)) goto L_d93d32;
L_d93d2f: /* d93d2f: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_d93d32: /* d93d32: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d93d35: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d93d38: jmp 0xd93d01 */
  goto L_d93d01;
L_d93d3a: /* d93d3a: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* d93d3c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d93d3e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d93d40: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d93d42: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d93d45: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d93d48: jmp 0xd93cf0 */
  goto L_d93cf0;
L_d93d4a: /* d93d4a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d93d4b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93d4d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d93d4f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d93d51: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* d93d54: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* d93d57: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d93d59: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* d93d5b: mov ebx, esi */
  ebx = esi;
/* d93d5d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_d93d60: /* d93d60: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93d63: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d93d66: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93d68: ja 0xd93d95 */
  if ((!cf && !zf)) goto L_d93d95;
L_d93d6a: /* d93d6a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d93d6c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d93d6e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d93d71: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d77u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d77: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d93d7a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d93d7d: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93d83u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93d83: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d93d86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d93d87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93d88: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xd93d8eu); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* d93d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93d91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93d93: jle 0xd93d60 */
  if ((zf || sf != of)) goto L_d93d60;
L_d93d95: /* d93d95: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d93d98: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93d9a: jbe 0xd93dc7 */
  if ((cf | zf)) goto L_d93dc7;
L_d93d9c: /* d93d9c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d93d9e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d93da0: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* d93da3: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93da9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93da9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d93dac: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d93daf: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd93db5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d93db5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d93db8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d93db9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93dba: call dword ptr [0xde89c0] */
  esp -= 4; W32(esp, 0xd93dc0u); SPILL(); f_4e4192(); if (g_unwind) return; /* Core!?appStrcmp@@YAHPBG0@Z */ RELOAD();
/* d93dc0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93dc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d93dc5: jge 0xd93d95 */
  if ((sf == of)) goto L_d93d95;
L_d93dc7: /* d93dc7: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93dc9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d93dcb: jbe 0xd93e71 */
  if ((cf | zf)) goto L_d93e71;
L_d93dd1: /* d93dd1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d93dd3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* d93dd5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d93dd8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d93dda: mov edx, edi */
  edx = edi;
/* d93ddc: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d93dde: mov eax, ecx */
  eax = ecx;
/* d93de0: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d93de3: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93de5: and edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d93de8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d93deb: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d93ded: jl 0xd93e42 */
  if ((sf != of)) goto L_d93e42;
L_d93def: /* d93def: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* d93df2: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d93df4: jae 0xd93e07 */
  if (!cf) goto L_d93e07;
L_d93df6: /* d93df6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d93df9: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d93dfc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d93dfe: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* d93e01: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d93e04: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d93e07: /* d93e07: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93e09: jbe 0xd93e66 */
  if ((cf | zf)) goto L_d93e66;
L_d93e0b: /* d93e0b: mov esi, ebx */
  esi = ebx;
/* d93e0d: jmp 0xd93cd8 */
  goto L_d93cd8;
L_d93e26: /* d93e26: push 0xdc20a0 */
  { uint32_t v = 0xdc20a0u; esp -= 4; W32(esp, v); }
/* d93e2b: push 0xde31e8 */
  { uint32_t v = 0xde31e8u; esp -= 4; W32(esp, v); }
/* d93e30: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd93e36u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d93e36: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93e39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d93e3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d93e3d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd93e42u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d93e42: /* d93e42: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d93e44: jbe 0xd93e54 */
  if ((cf | zf)) goto L_d93e54;
L_d93e46: /* d93e46: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d93e49: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d93e4b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d93e4e: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d93e51: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d93e54: /* d93e54: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* d93e57: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d93e59: jae 0xd93e66 */
  if (!cf) goto L_d93e66;
L_d93e5b: /* d93e5b: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d93e5e: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* d93e61: jmp 0xd93cd8 */
  goto L_d93cd8;
L_d93e66: /* d93e66: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d93e69: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d93e6c: jmp 0xd93cbf */
  goto L_d93cbf;
L_d93e71: /* d93e71: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d93e73: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* d93e75: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d93e77: jmp 0xd93d60 */
  goto L_d93d60;
L_d93e7c: /* d93e7c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d93e7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d93e80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93e81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d93e88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d93e89: mov esp, ebp */
  esp = ebp;
/* d93e8b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d93e8c: ret  */
  esp += 4; SPILL(); return;
}

void f_d93f20(void) {
  LOAD_REGS();
L_d93f20: /* d93f20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93f21: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d93f25: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d93f27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d93f29: mov ecx, esi */
  ecx = esi;
/* d93f2b: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd93f31u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d93f31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d93f33: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* d93f36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93f37: ret  */
  esp += 4; SPILL(); return;
}

void f_d93f50(void) {
  LOAD_REGS();
L_d93f50: /* d93f50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d93f51: mov ebp, esp */
  ebp = esp;
/* d93f53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d93f55: push 0xdb96e0 */
  { uint32_t v = 0xdb96e0u; esp -= 4; W32(esp, v); }
/* d93f5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d93f60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d93f61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d93f68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d93f6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93f6c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d93f6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d93f70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d93f71: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d93f74: mov edi, ecx */
  edi = ecx;
/* d93f76: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d93f7d: xor esi, esi */
  esi = 0;
/* d93f7f: nop  */
L_d93f80: /* d93f80: cmp esi, dword ptr [edi + 0x34] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d93f83: jge 0xd93fc4 */
  if ((sf == of)) goto L_d93fc4;
L_d93f85: /* d93f85: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* d93f88: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* d93f8b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d93f8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d93f8e: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xd93f91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d93f91: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d93f92: jmp 0xd93f80 */
  goto L_d93f80;
L_d93fc4: /* d93fc4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d93fc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d93fc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93fc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d93fd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d93fd1: mov esp, ebp */
  esp = ebp;
/* d93fd3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d93fd4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d93f94(void) {
  LOAD_REGS();
L_d93f94: /* d93f94: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d93f97: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d93f9c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d93f9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d93fa0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d93fa3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd93fa8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d93fa8(); return;
}

void f_d93fa8(void) {
  LOAD_REGS();
L_d93fa8: /* d93fa8: push 0xdc20ac */
  { uint32_t v = 0xdc20acu; esp -= 4; W32(esp, v); }
/* d93fad: push 0xde2168 */
  { uint32_t v = 0xde2168u; esp -= 4; W32(esp, v); }
/* d93fb2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd93fb8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d93fb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d93fbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d93fbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d93fbf: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd93fc4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d93fc4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d93fc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d93fc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d93fc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d93fd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d93fd1: mov esp, ebp */
  esp = ebp;
/* d93fd3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d93fd4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d94010(void) {
  LOAD_REGS();
L_d94010: /* d94010: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d94011: mov ebp, esp */
  ebp = esp;
/* d94013: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d94015: push 0xdb96f0 */
  { uint32_t v = 0xdb96f0u; esp -= 4; W32(esp, v); }
/* d9401a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d94020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94021: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d94028: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9402b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9402c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9402d: mov esi, ecx */
  esi = ecx;
/* d9402f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d94031: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d94032: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d94035: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d94038: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94039: mov ecx, esi */
  ecx = esi;
/* d9403b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d94042: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xd94045u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94045: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d94048: mov ecx, dword ptr [edx + 0x48] */
  ecx = R32((uint32_t)(edx + 0x48u));
/* d9404b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9404d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9404e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9404f: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xd94055u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* d94055: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d94058: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* d9405b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9405c: call dword ptr [0xde8f38] */
  esp -= 4; W32(esp, 0xd94062u); SPILL(); call_ind(R32(0xde8f38u)); if (g_unwind) return; /* USER32!UpdateWindow */ RELOAD();
/* d94062: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d94065: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d94067: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xd9406du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9406d: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* d94070: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d94072: je 0xd94079 */
  if (zf) goto L_d94079;
L_d94074: /* d94074: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d94076: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd94079u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d94079: /* d94079: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9407c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9407d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9407e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d94085: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d94086: mov esp, ebp */
  esp = ebp;
/* d94088: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d94089: ret  */
  esp += 4; SPILL(); return;
}

void f_d9408a(void) {
  LOAD_REGS();
L_d9408a: /* d9408a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9408d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d94092: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d94095: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94096: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d94099: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9409eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9409e(); return;
}

void f_d9409e(void) {
  LOAD_REGS();
L_d9409e: /* d9409e: push 0xdc20e0 */
  { uint32_t v = 0xdc20e0u; esp -= 4; W32(esp, v); }
/* d940a3: push 0xde2188 */
  { uint32_t v = 0xde2188u; esp -= 4; W32(esp, v); }
/* d940a8: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd940aeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d940ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d940b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d940b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d940b5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd940bau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d940ba: guest_badaddr(0xd940ba); return;
}

void f_d940f0(void) {
  LOAD_REGS();
L_d940f0: /* d940f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d940f1: mov ebp, esp */
  ebp = esp;
/* d940f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d940f5: push 0xdb9700 */
  { uint32_t v = 0xdb9700u; esp -= 4; W32(esp, v); }
/* d940fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d94100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94101: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d94108: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9410b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9410c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9410d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9410e: mov esi, ecx */
  esi = ecx;
/* d94110: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d94112: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d94115: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94117: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9411e: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0xd94121u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94121: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d94123: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94125: mov ecx, esi */
  ecx = esi;
/* d94127: lea edi, [eax + 0xd] */
  edi = (uint32_t)(eax + 0xdu);
/* d9412a: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xd9412du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9412d: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* d94130: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d94133: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d94135: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d94138: mov dword ptr [eax + 4], 4 */
  W32((uint32_t)(eax + 0x4u), 0x4u);
/* d9413f: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* d94142: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d94143: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d94144: mov dword ptr [eax + 0xc], 0xd */
  W32((uint32_t)(eax + 0xcu), 0xdu);
/* d9414b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d94152: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d94153: mov esp, ebp */
  esp = ebp;
/* d94155: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d94156: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d94159(void) {
  LOAD_REGS();
L_d94159: /* d94159: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9415c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d94161: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d94164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94165: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d94168: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9416du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9416d(); return;
}

void f_d9416d(void) {
  LOAD_REGS();
L_d9416d: /* d9416d: push 0xdc210c */
  { uint32_t v = 0xdc210cu; esp -= 4; W32(esp, v); }
/* d94172: push 0xde21c8 */
  { uint32_t v = 0xde21c8u; esp -= 4; W32(esp, v); }
/* d94177: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9417du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9417d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94180: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94182: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94184: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd94189u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d94189: guest_badaddr(0xd94189); return;
}

void f_d941c0(void) {
  LOAD_REGS();
L_d941c0: /* d941c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d941c1: mov ebp, esp */
  ebp = esp;
/* d941c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d941c5: push 0xdb9710 */
  { uint32_t v = 0xdb9710u; esp -= 4; W32(esp, v); }
/* d941ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d941d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d941d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d941d8: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d941db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d941dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d941dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d941de: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d941e1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d941e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d941e6: mov esi, ecx */
  esi = ecx;
/* d941e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d941e9: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* d941ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d941f3: call dword ptr [0xde8c88] */
  esp -= 4; W32(esp, 0xd941f9u); SPILL(); call_ind(R32(0xde8c88u)); if (g_unwind) return; /* GDI32!SetBkMode */ RELOAD();
/* d941f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d941fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d941fc: call dword ptr [0xde8c94] */
  esp -= 4; W32(esp, 0xd94202u); SPILL(); call_ind(R32(0xde8c94u)); if (g_unwind) return; /* GDI32!SetTextColor */ RELOAD();
/* d94202: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d94205: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* d94208: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9420a: je 0xd94413 */
  if (zf) goto L_d94413;
L_d94210: /* d94210: mov edi, esi */
  edi = esi;
/* d94212: mov ecx, esi */
  ecx = esi;
/* d94214: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* d94217: call 0xd81136 */
  esp -= 4; W32(esp, 0xd9421cu); SPILL(); f_d81136(); if (g_unwind) return; RELOAD();
/* d9421c: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_d9421f: /* d9421f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d94221: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d94224: jl 0xd94413 */
  if ((sf != of)) goto L_d94413;
L_d9422a: /* d9422a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d9422c: mov ecx, edi */
  ecx = edi;
/* d9422e: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xd94231u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94231: xor ecx, ecx */
  ecx = 0;
/* d94233: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d94236: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* d94239: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* d9423c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9423e: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* d94241: jne 0xd9425b */
  if (!zf) goto L_d9425b;
L_d94243: /* d94243: push 0xd2 */
  { uint32_t v = 0xd2u; esp -= 4; W32(esp, v); }
/* d94248: push 0xde21e0 */
  { uint32_t v = 0xde21e0u; esp -= 4; W32(esp, v); }
/* d9424d: push 0xde21f0 */
  { uint32_t v = 0xde21f0u; esp -= 4; W32(esp, v); }
/* d94252: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd94258u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d94258: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9425b: /* d9425b: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* d9425e: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d94261: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d94264: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d94266: jg 0xd94280 */
  if ((!zf && sf == of)) goto L_d94280;
L_d94268: /* d94268: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d9426d: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d94272: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d94277: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd9427du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d9427d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d94280: /* d94280: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d94283: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d94285: cmp dword ptr [eax + edx*4 - 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4 + 0xfffffffcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d94289: jne 0xd942c0 */
  if (!zf) goto L_d942c0;
L_d9428b: /* d9428b: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* d9428e: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d94291: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d94294: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d94296: jg 0xd942b0 */
  if ((!zf && sf == of)) goto L_d942b0;
L_d94298: /* d94298: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d9429d: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d942a2: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d942a7: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd942adu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d942ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d942b0: /* d942b0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d942b3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d942b5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d942b8: cmp dword ptr [eax + edx*4 - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4 + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d942bc: jne 0xd942d4 */
  if (!zf) goto L_d942d4;
L_d942be: /* d942be: jmp 0xd942c3 */
  goto L_d942c3;
L_d942c0: /* d942c0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_d942c3: /* d942c3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d942c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d942c8: jne 0xd942dd */
  if (!zf) goto L_d942dd;
L_d942ca: /* d942ca: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* d942cd: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* d942d0: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d942d2: jne 0xd942dd */
  if (!zf) goto L_d942dd;
L_d942d4: /* d942d4: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* d942db: jmp 0xd942e4 */
  goto L_d942e4;
L_d942dd: /* d942dd: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_d942e4: /* d942e4: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* d942e7: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d942ea: add esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d942ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d942ef: jg 0xd9430c */
  if ((!zf && sf == of)) goto L_d9430c;
L_d942f1: /* d942f1: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d942f6: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d942fb: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d94300: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd94306u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d94306: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d94309: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9430c: /* d9430c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d9430f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d94311: mov esi, dword ptr [eax + edx*4 - 4] */
  esi = R32((uint32_t)(eax + edx*4 + 0xfffffffcu));
/* d94315: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d94318: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* d9431b: xor ebx, ebx */
  ebx = 0;
/* d9431d: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9431f: mov esi, dword ptr [edx + 0x40] */
  esi = R32((uint32_t)(edx + 0x40u));
/* d94322: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d94325: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d94328: mov eax, ebx */
  eax = ebx;
/* d9432a: xor ebx, ebx */
  ebx = 0;
/* d9432c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9432e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* d94331: setne bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d94334: lea ebx, [ebx*4 + 8] */
  ebx = (uint32_t)(ebx*4 + 0x8u);
/* d9433b: imul ebx, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  ebx = (uint32_t)r;
  }
/* d9433f: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d94341: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94343: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d94346: jne 0xd94401 */
  if (!zf) goto L_d94401;
L_d9434c: /* d9434c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9434f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94351: jne 0xd94360 */
  if (!zf) goto L_d94360;
L_d94353: /* d94353: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94355: je 0xd943c0 */
  if (zf) goto L_d943c0;
L_d94357: /* d94357: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d94359: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xd9435cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9435c: mov ecx, eax */
  ecx = eax;
/* d9435e: jmp 0xd94372 */
  goto L_d94372;
L_d94360: /* d94360: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94362: je 0xd9436d */
  if (zf) goto L_d9436d;
L_d94364: /* d94364: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d94366: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xd94369u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94369: mov ecx, eax */
  ecx = eax;
/* d9436b: jmp 0xd94372 */
  goto L_d94372;
L_d9436d: /* d9436d: mov ecx, 8 */
  ecx = 0x8u;
L_d94372: /* d94372: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* d94375: mov eax, ebx */
  eax = ebx;
/* d94377: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d94379: xor ecx, ecx */
  ecx = 0;
/* d9437b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9437d: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d94380: lea edx, [esi + 9] */
  edx = (uint32_t)(esi + 0x9u);
/* d94383: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* d94386: mov edx, dword ptr [0xde516c] */
  edx = R32((uint32_t)(0xde516cu));
/* d9438c: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* d9438f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94390: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* d94393: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* d94394: and ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d94397: mov edi, ecx */
  edi = ecx;
/* d94399: mov ecx, ebx */
  ecx = ebx;
/* d9439b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9439d: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* d943a0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d943a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d943a4: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
/* d943a7: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* d943aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d943ab: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* d943ae: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* d943b1: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xd943b7u); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* d943b7: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* d943ba: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* d943bd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_d943c0: /* d943c0: call 0xd81136 */
  esp -= 4; W32(esp, 0xd943c5u); SPILL(); f_d81136(); if (g_unwind) return; RELOAD();
/* d943c5: cmp dword ptr [ebp - 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d943c8: jne 0xd94401 */
  if (!zf) goto L_d94401;
L_d943ca: /* d943ca: lea edx, [esi + 0x14] */
  edx = (uint32_t)(esi + 0x14u);
/* d943cd: mov eax, ebx */
  eax = ebx;
/* d943cf: add eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d943d2: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* d943d5: mov edx, dword ptr [0xde516c] */
  edx = R32((uint32_t)(0xde516cu));
/* d943db: mov ecx, ebx */
  ecx = ebx;
/* d943dd: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d943e0: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* d943e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d943e4: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* d943e7: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* d943ea: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* d943ed: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d943f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d943f1: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* d943f4: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d943f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d943f8: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* d943fb: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xd94401u); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
L_d94401: /* d94401: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* d94404: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d94407: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* d9440a: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* d9440d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* d9440e: jmp 0xd9421f */
  goto L_d9421f;
L_d94413: /* d94413: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* d94416: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94418: je 0xd94542 */
  if (zf) goto L_d94542;
L_d9441e: /* d9441e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d94420: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* d94423: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94424: mov ecx, esi */
  ecx = esi;
/* d94426: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0xd94429u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94429: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9442b: mov edi, eax */
  edi = eax;
/* d9442d: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* d94430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94431: mov ecx, esi */
  ecx = esi;
/* d94433: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0xd94436u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94436: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* d94439: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d9443b: mov ebx, dword ptr [eax + 8] */
  ebx = R32((uint32_t)(eax + 0x8u));
/* d9443e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* d94441: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* d94443: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d94446: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d94448: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d9444a: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d9444c: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d9444e: mov esi, eax */
  esi = eax;
/* d94450: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* d94453: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94455: mov ecx, edi */
  ecx = edi;
/* d94457: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* d9445a: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* d9445d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* d94460: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* d94463: jne 0xd944da */
  if (!zf) goto L_d944da;
L_d94465: /* d94465: mov ecx, dword ptr [0xde516c] */
  ecx = R32((uint32_t)(0xde516cu));
/* d9446b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d9446e: mov esi, dword ptr [0xde8f6c] */
  esi = R32((uint32_t)(0xde8f6cu));
/* d94474: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94475: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* d94478: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9447a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd9447cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9447c: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d9447f: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* d94482: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* d94485: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* d94488: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* d9448b: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* d9448e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* d9448f: mov dword ptr [ebp + 0x14], ebx */
  W32((uint32_t)(ebp + 0x14u), ebx);
/* d94492: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d94493: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d94494: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* d94497: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9449a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* d9449d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9449f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d944a1: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* d944a4: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* d944a7: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xd944aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d944aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d944ab: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d944ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d944af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d944b0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd944b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d944b2: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d944b5: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* d944b8: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* d944bb: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* d944be: lea edi, [ecx - 1] */
  edi = (uint32_t)(ecx + 0xffffffffu);
/* d944c1: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* d944c4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* d944c5: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* d944c8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d944c9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d944ca: mov esi, edx */
  esi = edx;
/* d944cc: mov ebx, edi */
  ebx = edi;
/* d944ce: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* d944d1: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* d944d4: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* d944d7: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_d944da: /* d944da: mov eax, ebx */
  eax = ebx;
/* d944dc: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d944de: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d944df: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d944e1: mov edi, eax */
  edi = eax;
/* d944e3: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* d944e6: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d944e8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d944e9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d944eb: mov edx, dword ptr [0xde516c] */
  edx = R32((uint32_t)(0xde516cu));
/* d944f1: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d944f3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d944f5: mov esi, dword ptr [0xde8f6c] */
  esi = R32((uint32_t)(0xde8f6cu));
/* d944fb: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* d944fd: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* d94500: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d94502: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d94503: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* d94506: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94507: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* d9450a: mov dword ptr [ebp + 0x14], ebx */
  W32((uint32_t)(ebp + 0x14u), ebx);
/* d9450d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d94510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94511: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d94512: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* d94515: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd94517u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94517: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9451a: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* d9451d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9451f: jne 0xd94542 */
  if (!zf) goto L_d94542;
L_d94521: /* d94521: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* d94524: mov ecx, dword ptr [0xde516c] */
  ecx = R32((uint32_t)(0xde516cu));
/* d9452a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9452d: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* d94530: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94531: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* d94534: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* d94537: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94538: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d94539: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9453a: mov dword ptr [ebp + 0x14], edi */
  W32((uint32_t)(ebp + 0x14u), edi);
/* d9453d: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* d94540: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd94542u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d94542: /* d94542: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d94545: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d94546: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d94547: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9454e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9454f: mov esp, ebp */
  esp = ebp;
/* d94551: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d94552: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_d94555(void) {
  LOAD_REGS();
L_d94555: /* d94555: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* d94558: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9455d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d94560: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94561: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* d94564: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd94569u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d94569(); return;
}

void f_d94569(void) {
  LOAD_REGS();
L_d94569: /* d94569: push 0xdc214c */
  { uint32_t v = 0xdc214cu; esp -= 4; W32(esp, v); }
/* d9456e: push 0xde2200 */
  { uint32_t v = 0xde2200u; esp -= 4; W32(esp, v); }
/* d94573: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd94579u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d94579: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9457c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9457e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94580: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd94585u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d94585: guest_badaddr(0xd94585); return;
}

void f_d94690(void) {
  LOAD_REGS();
L_d94690: /* d94690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d94691: mov ebp, esp */
  ebp = esp;
/* d94693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d94695: push 0xdb9720 */
  { uint32_t v = 0xdb9720u; esp -= 4; W32(esp, v); }
/* d9469a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d946a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d946a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d946a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d946ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d946ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d946ad: mov esi, ecx */
  esi = ecx;
/* d946af: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* d946b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d946b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d946b5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d946b8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d946bf: je 0xd946fd */
  if (zf) goto L_d946fd;
L_d946c1: /* d946c1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d946c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d946c6: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d946c9: call 0xd8260d */
  esp -= 4; W32(esp, 0xd946ceu); SPILL(); f_d8260d(); if (g_unwind) return; RELOAD();
/* d946ce: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d946d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d946d3: mov ecx, esi */
  ecx = esi;
/* d946d5: je 0xd946de */
  if (zf) goto L_d946de;
L_d946d7: /* d946d7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d946d9: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0xd946dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d946dc: jmp 0xd946e3 */
  goto L_d946e3;
L_d946de: /* d946de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d946e0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd946e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d946e3: /* d946e3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d946e6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d946e8: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d946eb: call 0xd8260d */
  esp -= 4; W32(esp, 0xd946f0u); SPILL(); f_d8260d(); if (g_unwind) return; RELOAD();
/* d946f0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d946f3: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* d946f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d946f7: call dword ptr [0xde8f38] */
  esp -= 4; W32(esp, 0xd946fdu); SPILL(); call_ind(R32(0xde8f38u)); if (g_unwind) return; /* USER32!UpdateWindow */ RELOAD();
L_d946fd: /* d946fd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d94700: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d94702: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d94704: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0xd9470au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9470a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9470d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9470e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9470f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d94716: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d94717: mov esp, ebp */
  esp = ebp;
/* d94719: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9471a: ret  */
  esp += 4; SPILL(); return;
}

void f_d9471b(void) {
  LOAD_REGS();
L_d9471b: /* d9471b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9471e: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d94723: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d94726: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94727: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9472a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9472fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9472f(); return;
}

void f_d9472f(void) {
  LOAD_REGS();
L_d9472f: /* d9472f: push 0xdc2174 */
  { uint32_t v = 0xdc2174u; esp -= 4; W32(esp, v); }
/* d94734: push 0xde2218 */
  { uint32_t v = 0xde2218u; esp -= 4; W32(esp, v); }
/* d94739: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9473fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9473f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94742: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94744: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94746: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9474bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9474b: guest_badaddr(0xd9474b); return;
}

void f_d94780(void) {
  LOAD_REGS();
L_d94780: /* d94780: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d94781: mov ebx, dword ptr [0xde8f54] */
  ebx = R32((uint32_t)(0xde8f54u));
/* d94787: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d94788: mov ebp, dword ptr [0xde8f50] */
  ebp = R32((uint32_t)(0xde8f50u));
/* d9478e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9478f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d94790: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* d94794: cmp edi, 0x26 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x26u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d94797: mov esi, ecx */
  esi = ecx;
/* d94799: je 0xd947a0 */
  if (zf) goto L_d947a0;
L_d9479b: /* d9479b: cmp edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9479e: jne 0xd947c6 */
  if (!zf) goto L_d947c6;
L_d947a0: /* d947a0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d947a5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d947a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d947aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d947ab: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* d947b0: je 0xd947bd */
  if (zf) goto L_d947bd;
L_d947b2: /* d947b2: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d947b5: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* d947b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d947b9: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd947bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d947bb: jmp 0xd947c6 */
  goto L_d947c6;
L_d947bd: /* d947bd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d947c0: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* d947c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d947c4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd947c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d947c6: /* d947c6: cmp edi, 9 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d947c9: jne 0xd94829 */
  if (!zf) goto L_d94829;
L_d947cb: /* d947cb: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d947d1: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d947d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d947d6: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* d947d8: je 0xd94805 */
  if (zf) goto L_d94805;
L_d947da: /* d947da: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d947dd: mov esi, dword ptr [eax + 0x48] */
  esi = R32((uint32_t)(eax + 0x48u));
/* d947e0: call dword ptr [0xde8f34] */
  esp -= 4; W32(esp, 0xd947e6u); SPILL(); call_ind(R32(0xde8f34u)); if (g_unwind) return; /* USER32!GetKeyState */ RELOAD();
/* d947e6: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d947eb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d947ed: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d947ef: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d947f2: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d947f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d947f6: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* d947fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d947fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd947feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d947fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d947ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d94800: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d94801: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d94802: ret 8 */
  esp += 12; SPILL(); return;
L_d94805: /* d94805: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d94808: mov esi, dword ptr [ecx + 0x48] */
  esi = R32((uint32_t)(ecx + 0x48u));
/* d9480b: call dword ptr [0xde8f34] */
  esp -= 4; W32(esp, 0xd94811u); SPILL(); call_ind(R32(0xde8f34u)); if (g_unwind) return; /* USER32!GetKeyState */ RELOAD();
/* d94811: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d94816: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d94818: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d9481a: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9481d: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d94820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94821: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* d94826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d94827: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd94829u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d94829: /* d94829: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9482a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9482b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9482c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9482d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d94860(void) {
  LOAD_REGS();
L_d94860: /* d94860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d94861: mov ebp, esp */
  ebp = esp;
/* d94863: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d94865: push 0xdb9730 */
  { uint32_t v = 0xdb9730u; esp -= 4; W32(esp, v); }
/* d9486a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d94870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94871: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d94878: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9487b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9487c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9487d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9487e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d94881: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d94884: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d94885: mov esi, ecx */
  esi = ecx;
/* d94887: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9488e: call 0xd8113b */
  esp -= 4; W32(esp, 0xd94893u); SPILL(); f_d8113b(); if (g_unwind) return; RELOAD();
/* d94893: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d94895: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* d94898: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94899: mov ecx, edi */
  ecx = edi;
/* d9489b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0xd9489eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9489e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d948a0: add esi, 0x70 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d948a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d948a4: mov ecx, eax */
  ecx = eax;
/* d948a6: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xd948a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d948a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d948ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d948ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d948ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d948b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d948b6: mov esp, ebp */
  esp = ebp;
/* d948b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d948b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d948bc(void) {
  LOAD_REGS();
L_d948bc: /* d948bc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d948bf: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d948c4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d948c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d948c8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d948cb: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd948d0u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d948d0(); return;
}

void f_d948d0(void) {
  LOAD_REGS();
L_d948d0: /* d948d0: push 0xdc21b4 */
  { uint32_t v = 0xdc21b4u; esp -= 4; W32(esp, v); }
/* d948d5: push 0xde2268 */
  { uint32_t v = 0xde2268u; esp -= 4; W32(esp, v); }
/* d948da: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd948e0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d948e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d948e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d948e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d948e7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd948ecu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d948ec: guest_badaddr(0xd948ec); return;
}

void f_d94920(void) {
  LOAD_REGS();
L_d94920: /* d94920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d94921: mov ebp, esp */
  ebp = esp;
/* d94923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d94925: push 0xdb9740 */
  { uint32_t v = 0xdb9740u; esp -= 4; W32(esp, v); }
/* d9492a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d94930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d94938: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9493b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9493c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9493d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9493e: mov edi, ecx */
  edi = ecx;
/* d94940: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d94942: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d94945: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d94948: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94949: mov ecx, edi */
  ecx = edi;
/* d9494b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d94952: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xd94955u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94955: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* d94958: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* d9495b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9495c: mov ebx, eax */
  ebx = eax;
/* d9495e: call 0xd81f14 */
  esp -= 4; W32(esp, 0xd94963u); SPILL(); f_d81f14(); if (g_unwind) return; RELOAD();
/* d94963: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d94965: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d94968: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* d9496b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9496d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* d94970: sub esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d94972: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd94978u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94978: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* d9497a: jns 0xd9497e */
  if (!sf) goto L_d9497e;
L_d9497c: /* d9497c: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
L_d9497e: /* d9497e: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d94981: jg 0xd949cb */
  if ((!zf && sf == of)) goto L_d949cb;
L_d94983: /* d94983: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d94988: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9498b: push 0x44f */
  { uint32_t v = 0x44fu; esp -= 4; W32(esp, v); }
/* d94990: je 0xd949a1 */
  if (zf) goto L_d949a1;
L_d94992: /* d94992: mov ecx, dword ptr [0xde50e8] */
  ecx = R32((uint32_t)(0xde50e8u));
/* d94998: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94999: call dword ptr [0xde8df0] */
  esp -= 4; W32(esp, 0xd9499fu); SPILL(); call_ind(R32(0xde8df0u)); if (g_unwind) return; /* USER32!LoadCursorW */ RELOAD();
/* d9499f: jmp 0xd949ae */
  goto L_d949ae;
L_d949a1: /* d949a1: mov edx, dword ptr [0xde50e8] */
  edx = R32((uint32_t)(0xde50e8u));
/* d949a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d949a8: call dword ptr [0xde8dec] */
  esp -= 4; W32(esp, 0xd949aeu); SPILL(); call_ind(R32(0xde8decu)); if (g_unwind) return; /* USER32!LoadCursorA */ RELOAD();
L_d949ae: /* d949ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d949af: call dword ptr [0xde8e90] */
  esp -= 4; W32(esp, 0xd949b5u); SPILL(); call_ind(R32(0xde8e90u)); if (g_unwind) return; /* USER32!SetCursor */ RELOAD();
/* d949b5: mov eax, 1 */
  eax = 0x1u;
/* d949ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d949bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d949c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d949c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d949c6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d949c7: mov esp, ebp */
  esp = ebp;
/* d949c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d949ca: ret  */
  esp += 4; SPILL(); return;
L_d949cb: /* d949cb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d949ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d949cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d949d0: xor eax, eax */
  eax = 0;
/* d949d2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d949d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d949da: mov esp, ebp */
  esp = ebp;
/* d949dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d949dd: ret  */
  esp += 4; SPILL(); return;
}

void f_d949de(void) {
  LOAD_REGS();
L_d949de: /* d949de: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d949e1: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d949e6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d949e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d949ea: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d949ed: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd949f2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d949f2(); return;
}

void f_d949f2(void) {
  LOAD_REGS();
L_d949f2: /* d949f2: push 0xdc21f0 */
  { uint32_t v = 0xdc21f0u; esp -= 4; W32(esp, v); }
/* d949f7: push 0xde2280 */
  { uint32_t v = 0xde2280u; esp -= 4; W32(esp, v); }
/* d949fc: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd94a02u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d94a02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94a05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94a07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94a09: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd94a0eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d94a0e: guest_badaddr(0xd94a0e); return;
}

void f_d94a50(void) {
  LOAD_REGS();
L_d94a50: /* d94a50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d94a51: mov ebp, esp */
  ebp = esp;
/* d94a53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d94a55: push 0xdb9750 */
  { uint32_t v = 0xdb9750u; esp -= 4; W32(esp, v); }
/* d94a5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d94a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94a61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d94a68: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d94a6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d94a6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d94a6d: mov ebx, ecx */
  ebx = ecx;
/* d94a6f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d94a71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d94a72: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d94a75: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d94a78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94a79: mov ecx, ebx */
  ecx = ebx;
/* d94a7b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d94a82: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xd94a85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94a85: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* d94a88: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* d94a8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94a8c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d94a8f: call 0xd81f14 */
  esp -= 4; W32(esp, 0xd94a94u); SPILL(); f_d81f14(); if (g_unwind) return; RELOAD();
/* d94a94: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d94a96: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* d94a99: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d94a9c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d94a9f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d94aa1: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d94aa3: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* d94aa6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d94aa8: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d94aaa: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0xd94ab0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94ab0: mov ecx, esi */
  ecx = esi;
/* d94ab2: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* d94ab4: jns 0xd94ab8 */
  if (!sf) goto L_d94ab8;
L_d94ab6: /* d94ab6: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_d94ab8: /* d94ab8: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d94abb: jg 0xd94add */
  if ((!zf && sf == of)) goto L_d94add;
L_d94abd: /* d94abd: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* d94ac0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d94ac2: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd94ac8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94ac8: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d94acd: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* d94ad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94ad1: mov dword ptr [ebp - 0x18], 0xde2288 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xde2288u);
/* d94ad8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd94addu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d94add: /* d94add: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d94ade: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d94adf: mov ecx, ebx */
  ecx = ebx;
/* d94ae1: call 0xd82955 */
  esp -= 4; W32(esp, 0xd94ae6u); SPILL(); f_d82955(); if (g_unwind) return; RELOAD();
/* d94ae6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d94ae9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d94aea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d94aeb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d94af2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d94af3: mov esp, ebp */
  esp = ebp;
/* d94af5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d94af6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d94af9(void) {
  LOAD_REGS();
L_d94af9: /* d94af9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* d94afc: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d94b01: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* d94b04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94b05: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d94b08: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd94b0du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d94b0d(); return;
}

void f_d94b0d(void) {
  LOAD_REGS();
L_d94b0d: /* d94b0d: push 0xdc2230 */
  { uint32_t v = 0xdc2230u; esp -= 4; W32(esp, v); }
/* d94b12: push 0xde2298 */
  { uint32_t v = 0xde2298u; esp -= 4; W32(esp, v); }
/* d94b17: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd94b1du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d94b1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94b20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94b22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94b24: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd94b29u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d94b29: guest_badaddr(0xd94b29); return;
}

void f_d94b70(void) {
  LOAD_REGS();
L_d94b70: /* d94b70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d94b71: mov esi, ecx */
  esi = ecx;
/* d94b73: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d94b77: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d94b79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d94b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94b7b: mov ecx, esi */
  ecx = esi;
/* d94b7d: call dword ptr [eax + 0x60] */
  { uint32_t t = R32((uint32_t)(eax + 0x60u)); esp -= 4; W32(esp, 0xd94b80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94b80: mov esi, dword ptr [esi + 0x3c] */
  esi = R32((uint32_t)(esi + 0x3cu));
/* d94b83: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94b85: mov edi, eax */
  edi = eax;
/* d94b87: je 0xd94ba9 */
  if (zf) goto L_d94ba9;
L_d94b89: /* d94b89: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd94b8fu); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d94b8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94b90: mov ecx, esi */
  ecx = esi;
/* d94b92: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd94b98u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d94b98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94b9a: je 0xd94ba9 */
  if (zf) goto L_d94ba9;
L_d94b9c: /* d94b9c: mov ecx, edi */
  ecx = edi;
/* d94b9e: call dword ptr [0xde8944] */
  esp -= 4; W32(esp, 0xd94ba4u); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* d94ba4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d94ba5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d94ba6: ret 4 */
  esp += 8; SPILL(); return;
L_d94ba9: /* d94ba9: mov eax, edi */
  eax = edi;
/* d94bab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d94bac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d94bad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d94bc0(void) {
  LOAD_REGS();
L_d94bc0: /* d94bc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d94bc1: mov ebp, esp */
  ebp = esp;
/* d94bc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d94bc5: push 0xdb9784 */
  { uint32_t v = 0xdb9784u; esp -= 4; W32(esp, v); }
/* d94bca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d94bd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94bd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d94bd8: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d94bdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d94bdc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d94bdd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d94bde: mov esi, ecx */
  esi = ecx;
/* d94be0: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d94be3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94be5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d94be8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d94bef: je 0xd94d61 */
  if (zf) goto L_d94d61;
L_d94bf5: /* d94bf5: call dword ptr [0xde8998] */
  esp -= 4; W32(esp, 0xd94bfbu); SPILL(); f_4e202c(); if (g_unwind) return; /* Core!?StaticClass@UClassProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d94bfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94bfc: mov ecx, edi */
  ecx = edi;
/* d94bfe: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd94c04u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d94c04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94c06: je 0xd94d61 */
  if (zf) goto L_d94d61;
L_d94c0c: /* d94c0c: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d94c0f: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d94c12: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd94c18u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d94c18: push 0xde22a8 */
  { uint32_t v = 0xde22a8u; esp -= 4; W32(esp, v); }
/* d94c1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94c1e: call dword ptr [0xde8938] */
  esp -= 4; W32(esp, 0xd94c24u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* d94c24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94c27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94c29: jne 0xd94d61 */
  if (!zf) goto L_d94d61;
L_d94c2f: /* d94c2f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d94c32: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd94c38u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d94c38: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d94c3b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d94c3f: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd94c45u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d94c45: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d94c48: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d94c4c: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd94c52u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d94c52: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d94c55: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* d94c57: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d94c5a: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd94c60u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d94c60: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d94c63: mov edi, eax */
  edi = eax;
/* d94c65: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d94c67: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0xd94c6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94c6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94c6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94c6e: mov ecx, eax */
  ecx = eax;
/* d94c70: call dword ptr [0xde89dc] */
  esp -= 4; W32(esp, 0xd94c76u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* d94c76: mov ecx, dword ptr [0xde89d8] */
  ecx = R32((uint32_t)(0xde89d8u));
/* d94c7c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d94c7e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d94c80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94c82: lea esi, [ebp - 0x24] */
  esi = (uint32_t)(ebp + 0xffffffdcu);
/* d94c85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d94c86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d94c87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94c88: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd94c8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94c8b: push 0xde22b8 */
  { uint32_t v = 0xde22b8u; esp -= 4; W32(esp, v); }
/* d94c90: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* d94c93: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd94c99u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d94c99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94c9b: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* d94c9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94c9f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d94ca2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94ca3: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* d94ca6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94ca7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d94caa: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* d94cae: call dword ptr [0xde89d4] */
  esp -= 4; W32(esp, 0xd94cb4u); SPILL(); f_4e443a(); if (g_unwind) return; /* Core!?Split@FString@@QBEHABV1@PAV1@1H@Z */ RELOAD();
/* d94cb4: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* d94cb7: mov esi, eax */
  esi = eax;
/* d94cb9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d94cbc: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd94cc2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d94cc2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d94cc4: je 0xd94cf5 */
  if (zf) goto L_d94cf5;
L_d94cc6: /* d94cc6: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d94cc9: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd94ccfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d94ccf: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d94cd2: mov esi, eax */
  esi = eax;
/* d94cd4: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd94cdau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d94cda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94cdc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94cde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d94cdf: push 0xde22bc */
  { uint32_t v = 0xde22bcu; esp -= 4; W32(esp, v); }
/* d94ce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94ce5: call dword ptr [0xde8914] */
  esp -= 4; W32(esp, 0xd94cebu); SPILL(); f_4e43db(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBG000H@Z */ RELOAD();
/* d94ceb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94cee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94cef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d94cf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94cf3: jmp 0xd94d1e */
  goto L_d94d1e;
L_d94cf5: /* d94cf5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d94cf8: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd94cfeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d94cfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94d01: push 0xde22d8 */
  { uint32_t v = 0xde22d8u; esp -= 4; W32(esp, v); }
/* d94d06: push 0xde22e4 */
  { uint32_t v = 0xde22e4u; esp -= 4; W32(esp, v); }
/* d94d0b: push 0xde22f0 */
  { uint32_t v = 0xde22f0u; esp -= 4; W32(esp, v); }
/* d94d10: call dword ptr [0xde89d0] */
  esp -= 4; W32(esp, 0xd94d16u); SPILL(); f_4e141f(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBD0PBG1H@Z */ RELOAD();
/* d94d16: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d94d19: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94d1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94d1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_d94d1e: /* d94d1e: call dword ptr [0xde88b4] */
  esp -= 4; W32(esp, 0xd94d24u); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* d94d24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94d27: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d94d2a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d94d2e: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd94d34u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d94d34: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d94d37: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d94d3b: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd94d41u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d94d41: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d94d44: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d94d48: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd94d4eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d94d4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d94d51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d94d58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d94d59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d94d5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d94d5b: mov esp, ebp */
  esp = ebp;
/* d94d5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d94d5e: ret 4 */
  esp += 8; SPILL(); return;
L_d94d61: /* d94d61: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d94d63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94d65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d94d66: mov ecx, esi */
  ecx = esi;
/* d94d68: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0xd94d6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94d6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94d6d: mov edi, eax */
  edi = eax;
/* d94d6f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d94d71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d94d72: mov ecx, esi */
  ecx = esi;
/* d94d74: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd94d77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94d77: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d94d7a: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* d94d7d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* d94d7f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d94d81: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d94d83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d94d84: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d94d86: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d94d89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94d8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94d8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94d8d: call dword ptr [esi + 0xa0] */
  { uint32_t t = R32((uint32_t)(esi + 0xa0u)); esp -= 4; W32(esp, 0xd94d93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94d93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d94d96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d94d97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d94d98: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d94d9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d94da0: mov esp, ebp */
  esp = ebp;
/* d94da2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d94da3: ret 4 */
  esp += 8; SPILL(); return;
}
