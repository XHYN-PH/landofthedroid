#include "recomp.h"
#include "rec_mod.h"

void f_98cda0(void) {
  LOAD_REGS();
L_98cda0: /* 98cda0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98cda4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98cda7: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 98cdab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cdac: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98cdb0: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 98cdb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98cdb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cdb7: push 0x20006 */
  { uint32_t v = 0x20006u; esp -= 4; W32(esp, v); }
/* 98cdbc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cdbe: push 0xa21a78 */
  { uint32_t v = 0xa21a78u; esp -= 4; W32(esp, v); }
/* 98cdc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cdc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98cdc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cdc7: call dword ptr [0xcfa144] */
  esp -= 4; W32(esp, 0x98cdcdu); SPILL(); call_ind(R32(0xcfa144u)); if (g_unwind) return; /* ADVAPI32!RegCreateKeyExA */ RELOAD();
/* 98cdcd: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 98cdd1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cdd3: je 0x98ce06 */
  if (zf) goto L_98ce06;
L_98cdd5: /* 98cdd5: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98cdd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98cdda: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98cddc: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 98cde0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98cde1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98cde3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cde5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98cde6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cde7: call dword ptr [0xcfa140] */
  esp -= 4; W32(esp, 0x98cdedu); SPILL(); call_ind(R32(0xcfa140u)); if (g_unwind) return; /* ADVAPI32!RegSetValueExA */ RELOAD();
/* 98cded: mov esi, eax */
  esi = eax;
/* 98cdef: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98cdf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cdf4: call dword ptr [0xcfa150] */
  esp -= 4; W32(esp, 0x98cdfau); SPILL(); call_ind(R32(0xcfa150u)); if (g_unwind) return; /* ADVAPI32!RegCloseKey */ RELOAD();
/* 98cdfa: xor eax, eax */
  eax = 0;
/* 98cdfc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cdfe: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98ce01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ce02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98ce05: ret  */
  esp += 4; SPILL(); return;
L_98ce06: /* 98ce06: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 98ce08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98ce0b: ret  */
  esp += 4; SPILL(); return;
}

void f_98ce10(void) {
  LOAD_REGS();
L_98ce10: /* 98ce10: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98ce13: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98ce17: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98ce1b: lea ecx, [esp] */
  ecx = (uint32_t)(esp);
/* 98ce1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ce20: push 0xf003f */
  { uint32_t v = 0xf003fu; esp -= 4; W32(esp, v); }
/* 98ce25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98ce27: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 98ce2b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98ce2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98ce30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ce31: call dword ptr [0xcfa14c] */
  esp -= 4; W32(esp, 0x98ce37u); SPILL(); call_ind(R32(0xcfa14cu)); if (g_unwind) return; /* ADVAPI32!RegOpenKeyExA */ RELOAD();
/* 98ce37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ce39: jne 0x98cecd */
  if (!zf) goto L_98cecd;
L_98ce3f: /* 98ce3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98ce40: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98ce44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98ce45: mov edi, dword ptr [0xcfa148] */
  edi = R32((uint32_t)(0xcfa148u));
/* 98ce4b: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 98ce4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ce50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ce51: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 98ce55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98ce56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ce57: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98ce5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98ce5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ce5d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x98ce5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98ce5f: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ce62: jne 0x98ce91 */
  if (!zf) goto L_98ce91;
L_98ce64: /* 98ce64: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98ce68: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98ce6c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98ce6e: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 98ce72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98ce73: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 98ce75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98ce77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98ce78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ce79: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 98ce7d: call dword ptr [0xcfa140] */
  esp -= 4; W32(esp, 0x98ce83u); SPILL(); call_ind(R32(0xcfa140u)); if (g_unwind) return; /* ADVAPI32!RegSetValueExA */ RELOAD();
/* 98ce83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ce85: jne 0x98cecb */
  if (!zf) goto L_98cecb;
L_98ce87: /* 98ce87: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 98ce8f: jmp 0x98ce9c */
  goto L_98ce9c;
L_98ce91: /* 98ce91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ce93: jne 0x98cecb */
  if (!zf) goto L_98cecb;
L_98ce95: /* 98ce95: cmp dword ptr [esp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ce9a: jne 0x98cecb */
  if (!zf) goto L_98cecb;
L_98ce9c: /* 98ce9c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 98cea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98cea1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98cea5: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 98cea9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98ceaa: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 98ceae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ceaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98ceb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98ceb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ceb3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x98ceb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98ceb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ceb7: jne 0x98cecb */
  if (!zf) goto L_98cecb;
L_98ceb9: /* 98ceb9: cmp dword ptr [esp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98cebe: jne 0x98cecb */
  if (!zf) goto L_98cecb;
L_98cec0: /* 98cec0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98cec4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98cec5: call dword ptr [0xcfa150] */
  esp -= 4; W32(esp, 0x98cecbu); SPILL(); call_ind(R32(0xcfa150u)); if (g_unwind) return; /* ADVAPI32!RegCloseKey */ RELOAD();
L_98cecb: /* 98cecb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98cecc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_98cecd: /* 98cecd: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 98ced1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98ced4: ret  */
  esp += 4; SPILL(); return;
}

void f_98cee0(void) {
  LOAD_REGS();
L_98cee0: /* 98cee0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98cee4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98cee7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98cee8: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 98ceec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ceed: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 98cef1: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 98cef5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98cef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cef8: push 0x20006 */
  { uint32_t v = 0x20006u; esp -= 4; W32(esp, v); }
/* 98cefd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98ceff: push 0xa21a78 */
  { uint32_t v = 0xa21a78u; esp -= 4; W32(esp, v); }
/* 98cf04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cf06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98cf07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cf08: call dword ptr [0xcfa144] */
  esp -= 4; W32(esp, 0x98cf0eu); SPILL(); call_ind(R32(0xcfa144u)); if (g_unwind) return; /* ADVAPI32!RegCreateKeyExA */ RELOAD();
/* 98cf0e: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* 98cf12: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cf14: je 0x98cf58 */
  if (zf) goto L_98cf58;
L_98cf16: /* 98cf16: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 98cf1a: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 98cf1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98cf20: /* 98cf20: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 98cf22: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98cf23: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98cf25: jne 0x98cf20 */
  if (!zf) goto L_98cf20;
L_98cf27: /* 98cf27: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98cf29: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98cf2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cf2e: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 98cf32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98cf33: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98cf35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cf37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98cf38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98cf39: call dword ptr [0xcfa140] */
  esp -= 4; W32(esp, 0x98cf3fu); SPILL(); call_ind(R32(0xcfa140u)); if (g_unwind) return; /* ADVAPI32!RegSetValueExA */ RELOAD();
/* 98cf3f: mov esi, eax */
  esi = eax;
/* 98cf41: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98cf45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cf46: call dword ptr [0xcfa150] */
  esp -= 4; W32(esp, 0x98cf4cu); SPILL(); call_ind(R32(0xcfa150u)); if (g_unwind) return; /* ADVAPI32!RegCloseKey */ RELOAD();
/* 98cf4c: xor eax, eax */
  eax = 0;
/* 98cf4e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cf50: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 98cf53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98cf54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98cf57: ret  */
  esp += 4; SPILL(); return;
L_98cf58: /* 98cf58: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 98cf5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98cf5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98cf5e: ret  */
  esp += 4; SPILL(); return;
}

void f_98cf60(void) {
  LOAD_REGS();
L_98cf60: /* 98cf60: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98cf63: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 98cf67: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 98cf6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98cf6c: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 98cf70: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 98cf74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cf75: push 0xf003f */
  { uint32_t v = 0xf003fu; esp -= 4; W32(esp, v); }
/* 98cf7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cf7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98cf7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98cf7e: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* 98cf82: call dword ptr [0xcfa14c] */
  esp -= 4; W32(esp, 0x98cf88u); SPILL(); call_ind(R32(0xcfa14cu)); if (g_unwind) return; /* ADVAPI32!RegOpenKeyExA */ RELOAD();
/* 98cf88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cf8a: jne 0x98d03b */
  if (!zf) goto L_98d03b;
L_98cf90: /* 98cf90: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 98cf94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98cf95: mov ebx, dword ptr [0xcfa148] */
  ebx = R32((uint32_t)(0xcfa148u));
/* 98cf9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98cf9c: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 98cfa0: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 98cfa4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cfa5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cfa7: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98cfab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98cfac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cfae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98cfaf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98cfb0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x98cfb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98cfb2: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98cfb5: jne 0x98cfff */
  if (!zf) goto L_98cfff;
L_98cfb7: /* 98cfb7: mov eax, edi */
  eax = edi;
/* 98cfb9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 98cfc1: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_98cfc4: /* 98cfc4: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 98cfc6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98cfc7: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98cfc9: jne 0x98cfc4 */
  if (!zf) goto L_98cfc4;
L_98cfcb: /* 98cfcb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98cfcf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98cfd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cfd2: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 98cfd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98cfd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98cfd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98cfdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98cfdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98cfdd: call dword ptr [0xcfa140] */
  esp -= 4; W32(esp, 0x98cfe3u); SPILL(); call_ind(R32(0xcfa140u)); if (g_unwind) return; /* ADVAPI32!RegSetValueExA */ RELOAD();
/* 98cfe3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98cfe5: jne 0x98d039 */
  if (!zf) goto L_98d039;
L_98cfe7: /* 98cfe7: mov eax, edi */
  eax = edi;
/* 98cfe9: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 98cfec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98cff0: /* 98cff0: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 98cff2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98cff3: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98cff5: jne 0x98cff0 */
  if (!zf) goto L_98cff0;
L_98cff7: /* 98cff7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98cff9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 98cffd: jmp 0x98d00a */
  goto L_98d00a;
L_98cfff: /* 98cfff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98d001: jne 0x98d039 */
  if (!zf) goto L_98d039;
L_98d003: /* 98d003: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98d008: jne 0x98d039 */
  if (!zf) goto L_98d039;
L_98d00a: /* 98d00a: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 98d00e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98d00f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98d013: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* 98d017: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d018: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98d01c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d01d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98d01f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d020: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98d021: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x98d023u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98d023: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98d025: jne 0x98d039 */
  if (!zf) goto L_98d039;
L_98d027: /* 98d027: cmp dword ptr [esp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98d02c: jne 0x98d039 */
  if (!zf) goto L_98d039;
L_98d02e: /* 98d02e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98d032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d033: call dword ptr [0xcfa150] */
  esp -= 4; W32(esp, 0x98d039u); SPILL(); call_ind(R32(0xcfa150u)); if (g_unwind) return; /* ADVAPI32!RegCloseKey */ RELOAD();
L_98d039: /* 98d039: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98d03a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_98d03b: /* 98d03b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 98d03f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98d040: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98d043: ret  */
  esp += 4; SPILL(); return;
}

void f_98d050(void) {
  LOAD_REGS();
L_98d050: /* 98d050: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98d054: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98d058: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d05a: push 0xa21a7c */
  { uint32_t v = 0xa21a7cu; esp -= 4; W32(esp, v); }
/* 98d05f: push 0x80000001 */
  { uint32_t v = 0x80000001u; esp -= 4; W32(esp, v); }
/* 98d064: call 0x98ce10 */
  esp -= 4; W32(esp, 0x98d069u); SPILL(); f_98ce10(); if (g_unwind) return; RELOAD();
/* 98d069: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98d06c: ret  */
  esp += 4; SPILL(); return;
}

void f_98d070(void) {
  LOAD_REGS();
L_98d070: /* 98d070: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98d074: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98d078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d079: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d07a: push 0xa21a7c */
  { uint32_t v = 0xa21a7cu; esp -= 4; W32(esp, v); }
/* 98d07f: push 0x80000001 */
  { uint32_t v = 0x80000001u; esp -= 4; W32(esp, v); }
/* 98d084: call 0x98cda0 */
  esp -= 4; W32(esp, 0x98d089u); SPILL(); f_98cda0(); if (g_unwind) return; RELOAD();
/* 98d089: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98d08c: ret  */
  esp += 4; SPILL(); return;
}

void f_98d090(void) {
  LOAD_REGS();
L_98d090: /* 98d090: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98d094: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98d098: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d099: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d09a: push 0xa21a7c */
  { uint32_t v = 0xa21a7cu; esp -= 4; W32(esp, v); }
/* 98d09f: push 0x80000001 */
  { uint32_t v = 0x80000001u; esp -= 4; W32(esp, v); }
/* 98d0a4: call 0x98cf60 */
  esp -= 4; W32(esp, 0x98d0a9u); SPILL(); f_98cf60(); if (g_unwind) return; RELOAD();
/* 98d0a9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98d0ac: ret  */
  esp += 4; SPILL(); return;
}

void f_98d0b0(void) {
  LOAD_REGS();
L_98d0b0: /* 98d0b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98d0b4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98d0b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d0b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d0ba: push 0xa21a7c */
  { uint32_t v = 0xa21a7cu; esp -= 4; W32(esp, v); }
/* 98d0bf: push 0x80000001 */
  { uint32_t v = 0x80000001u; esp -= 4; W32(esp, v); }
/* 98d0c4: call 0x98cee0 */
  esp -= 4; W32(esp, 0x98d0c9u); SPILL(); f_98cee0(); if (g_unwind) return; RELOAD();
/* 98d0c9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98d0cc: ret  */
  esp += 4; SPILL(); return;
}

void f_98d0d0(void) {
  LOAD_REGS();
L_98d0d0: /* 98d0d0: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 98d0d4: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 98d0da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d0dc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d0df: jp 0x98d0ea */
  if (pf) goto L_98d0ea;
L_98d0e1: /* 98d0e1: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 98d0e7: ret 8 */
  esp += 12; SPILL(); return;
L_98d0ea: /* 98d0ea: fld qword ptr [0xa21ab0] */
  { double v = F64((uint32_t)(0xa21ab0u)); FPUSH(v); }
/* 98d0f0: fmul qword ptr [esp + 4] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x4u)));
/* 98d0f4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d0f6: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 98d0f8: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 98d0fa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98d100(void) {
  LOAD_REGS();
L_98d100: /* 98d100: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98d103: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 98d107: xor ecx, ecx */
  ecx = 0;
/* 98d109: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 98d10f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98d113: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 98d119: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 98d11f: nop  */
L_98d120: /* 98d120: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98d121: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 98d125: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 98d129: fdivr qword ptr [esp] */
  ST0 = (F64((uint32_t)(esp))) / ST0;
/* 98d12d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 98d12f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d131: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98d133: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d135: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 98d137: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 98d139: fmul qword ptr [0xa21ab8] */
  ST0 = ST0 * (F64((uint32_t)(0xa21ab8u)));
/* 98d13f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 98d141: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 98d143: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d145: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d148: je 0x98d120 */
  if (zf) goto L_98d120;
L_98d14a: /* 98d14a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d14c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98d14f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98d160(void) {
  LOAD_REGS();
L_98d160: /* 98d160: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 98d164: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98d167: fdiv qword ptr [esp + 0x14] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x14u)));
/* 98d16b: mov edx, ecx */
  edx = ecx;
/* 98d16d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d16f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98d171: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 98d177: fsqrt  */
  ST0 = sqrt(ST0);
/* 98d179: fmul qword ptr [esp + 0xc] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xcu)));
/* 98d17d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98d180: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d182: call 0x98d100 */
  esp -= 4; W32(esp, 0x98d187u); SPILL(); f_98d100(); if (g_unwind) return; RELOAD();
/* 98d187: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98d18b: fstp qword ptr [esp + 0x14] */
  WF64((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 98d18f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98d193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d194: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d195: mov ecx, edx */
  ecx = edx;
/* 98d197: call 0x98d100 */
  esp -= 4; W32(esp, 0x98d19cu); SPILL(); f_98d100(); if (g_unwind) return; RELOAD();
/* 98d19c: fdivr qword ptr [esp + 0x14] */
  ST0 = (F64((uint32_t)(esp + 0x14u))) / ST0;
/* 98d1a0: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_98d1b0(void) {
  LOAD_REGS();
L_98d1b0: /* 98d1b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98d1b1: mov ebp, esp */
  ebp = esp;
/* 98d1b3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 98d1b6: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98d1b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98d1ba: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 98d1bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d1be: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 98d1c1: mov eax, esi */
  eax = esi;
/* 98d1c3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98d1c4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98d1c6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98d1c8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98d1cc: xor edx, edx */
  edx = 0;
/* 98d1ce: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d1d0: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98d1d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98d1d5: mov edi, ecx */
  edi = ecx;
/* 98d1d7: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 98d1db: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98d1df: fchs  */
  ST0 = -ST0;
/* 98d1e1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 98d1e5: fld qword ptr [ebp + 0x14] */
  { double v = F64((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 98d1e8: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 98d1ec: jle 0x98d28e */
  if ((zf || sf != of)) goto L_98d28e;
L_98d1f2: /* 98d1f2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 98d1f5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98d1f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d1f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d1fa: mov ecx, edi */
  ecx = edi;
/* 98d1fc: call 0x98d100 */
  esp -= 4; W32(esp, 0x98d201u); SPILL(); f_98d100(); if (g_unwind) return; RELOAD();
/* 98d201: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 98d205: jmp 0x98d210 */
  goto L_98d210;
L_98d210: /* 98d210: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 98d214: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 98d218: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d21e: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 98d222: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d224: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 98d22a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d22c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d22f: jp 0x98d243 */
  if (pf) goto L_98d243;
L_98d231: /* 98d231: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 98d239: mov dword ptr [esp + 0x24], 0x3ff00000 */
  W32((uint32_t)(esp + 0x24u), 0x3ff00000u);
/* 98d241: jmp 0x98d253 */
  goto L_98d253;
L_98d243: /* 98d243: fmul qword ptr [0xa21ab0] */
  ST0 = ST0 * (F64((uint32_t)(0xa21ab0u)));
/* 98d249: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d24b: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 98d24d: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 98d24f: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
L_98d253: /* 98d253: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d255: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98d258: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 98d25c: mov ecx, edi */
  ecx = edi;
/* 98d25e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d260: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98d262: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 98d268: fsqrt  */
  ST0 = sqrt(ST0);
/* 98d26a: fmul qword ptr [ebp + 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xcu)));
/* 98d26d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98d270: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d272: call 0x98d100 */
  esp -= 4; W32(esp, 0x98d277u); SPILL(); f_98d100(); if (g_unwind) return; RELOAD();
/* 98d277: fdiv qword ptr [esp + 0x28] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x28u)));
/* 98d27b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98d27d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98d27e: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d280: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98d284: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 98d288: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 98d28c: jl 0x98d210 */
  if ((sf != of)) goto L_98d210;
L_98d28e: /* 98d28e: mov ecx, ebx */
  ecx = ebx;
/* 98d290: call 0x9956e0 */
  esp -= 4; W32(esp, 0x98d295u); SPILL(); f_9956e0(); if (g_unwind) return; RELOAD();
/* 98d295: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98d296: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98d297: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98d298: mov esp, ebp */
  esp = ebp;
/* 98d29a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98d29b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_98d207(void) {
  LOAD_REGS();
L_98d207: /* 98d207: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 98d20e: mov edi, edi */
  edi = edi;
L_98d210: /* 98d210: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 98d214: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 98d218: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d21e: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 98d222: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d224: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 98d22a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d22c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d22f: jp 0x98d243 */
  if (pf) goto L_98d243;
L_98d231: /* 98d231: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 98d239: mov dword ptr [esp + 0x24], 0x3ff00000 */
  W32((uint32_t)(esp + 0x24u), 0x3ff00000u);
/* 98d241: jmp 0x98d253 */
  goto L_98d253;
L_98d243: /* 98d243: fmul qword ptr [0xa21ab0] */
  ST0 = ST0 * (F64((uint32_t)(0xa21ab0u)));
/* 98d249: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d24b: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 98d24d: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 98d24f: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
L_98d253: /* 98d253: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d255: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98d258: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 98d25c: mov ecx, edi */
  ecx = edi;
/* 98d25e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d260: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98d262: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 98d268: fsqrt  */
  ST0 = sqrt(ST0);
/* 98d26a: fmul qword ptr [ebp + 0xc] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xcu)));
/* 98d26d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98d270: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d272: call 0x98d100 */
  esp -= 4; W32(esp, 0x98d277u); SPILL(); f_98d100(); if (g_unwind) return; RELOAD();
/* 98d277: fdiv qword ptr [esp + 0x28] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x28u)));
/* 98d27b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98d27d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98d27e: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d280: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 98d284: fmul qword ptr [esp + 0x20] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x20u)));
/* 98d288: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 98d28c: jl 0x98d210 */
  if ((sf != of)) goto L_98d210;
L_98d28e: /* 98d28e: mov ecx, ebx */
  ecx = ebx;
/* 98d290: call 0x9956e0 */
  esp -= 4; W32(esp, 0x98d295u); SPILL(); f_9956e0(); if (g_unwind) return; RELOAD();
/* 98d295: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98d296: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98d297: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98d298: mov esp, ebp */
  esp = ebp;
/* 98d29a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98d29b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_98d2a0(void) {
  LOAD_REGS();
L_98d2a0: /* 98d2a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d2a1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 98d2a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d2a6: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 98d2a9: mov eax, esi */
  eax = esi;
/* 98d2ab: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98d2ac: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98d2ae: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98d2b0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 98d2b4: xor edx, edx */
  edx = 0;
/* 98d2b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d2b8: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 98d2bc: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 98d2c0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d2c2: fchs  */
  ST0 = -ST0;
/* 98d2c4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 98d2c8: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98d2cc: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 98d2d2: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 98d2d6: jle 0x98d361 */
  if ((zf || sf != of)) goto L_98d361;
L_98d2dc: /* 98d2dc: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
L_98d2e2: /* 98d2e2: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 98d2e6: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 98d2ea: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d2f0: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 98d2f4: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 98d2f8: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 98d2fc: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 98d302: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d304: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d307: jp 0x98d313 */
  if (pf) goto L_98d313;
L_98d309: /* 98d309: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d30b: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 98d311: jmp 0x98d31f */
  goto L_98d31f;
L_98d313: /* 98d313: fmul qword ptr [0xa21ab0] */
  ST0 = ST0 * (F64((uint32_t)(0xa21ab0u)));
/* 98d319: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d31b: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 98d31d: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
L_98d31f: /* 98d31f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 98d321: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 98d325: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 98d329: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 98d32d: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 98d333: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d335: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d338: jp 0x98d344 */
  if (pf) goto L_98d344;
L_98d33a: /* 98d33a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d33c: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 98d342: jmp 0x98d350 */
  goto L_98d350;
L_98d344: /* 98d344: fmul qword ptr [0xa21ab0] */
  ST0 = ST0 * (F64((uint32_t)(0xa21ab0u)));
/* 98d34a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98d34c: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* 98d34e: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
L_98d350: /* 98d350: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 98d352: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 98d354: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98d355: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d357: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 98d35b: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 98d35f: jl 0x98d2e2 */
  if ((sf != of)) goto L_98d2e2;
L_98d361: /* 98d361: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d363: call 0x9956e0 */
  esp -= 4; W32(esp, 0x98d368u); SPILL(); f_9956e0(); if (g_unwind) return; RELOAD();
/* 98d368: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98d369: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 98d36a: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_98d370(void) {
  LOAD_REGS();
L_98d370: /* 98d370: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98d374: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98d378: mov edx, dword ptr [ecx + eax*4 + 0xc] */
  edx = R32((uint32_t)(ecx + eax*4 + 0xcu));
/* 98d37c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 98d37e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98d382: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 98d385: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98d38b: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98d391: call 0x99c958 */
  esp -= 4; W32(esp, 0x98d396u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98d396: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_98d3a0(void) {
  LOAD_REGS();
L_98d3a0: /* 98d3a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d3a1: mov esi, ecx */
  esi = ecx;
/* 98d3a3: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98d3a8u); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98d3a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d3ad: je 0x98d3b8 */
  if (zf) goto L_98d3b8;
L_98d3af: /* 98d3af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d3b0: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98d3b5u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98d3b5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98d3b8: /* 98d3b8: mov eax, esi */
  eax = esi;
/* 98d3ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98d3bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98d3c0(void) {
  LOAD_REGS();
L_98d3c0: /* 98d3c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d3c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 98d3c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d3c7: jge 0x98d3cb */
  if ((sf == of)) goto L_98d3cb;
L_98d3c9: /* 98d3c9: xor esi, esi */
  esi = 0;
L_98d3cb: /* 98d3cb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 98d3cf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d3d1: jge 0x98d3d5 */
  if ((sf == of)) goto L_98d3d5;
L_98d3d3: /* 98d3d3: xor edx, edx */
  edx = 0;
L_98d3d5: /* 98d3d5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 98d3d7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d3d9: jl 0x98d3de */
  if ((sf != of)) goto L_98d3de;
L_98d3db: /* 98d3db: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_98d3de: /* 98d3de: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 98d3e1: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d3e3: jl 0x98d3e8 */
  if ((sf != of)) goto L_98d3e8;
L_98d3e5: /* 98d3e5: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
L_98d3e8: /* 98d3e8: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 98d3eb: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d3ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98d3ee: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98d400(void) {
  LOAD_REGS();
L_98d400: /* 98d400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98d401: mov ebp, esp */
  ebp = esp;
/* 98d403: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 98d406: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98d408: push 0x9da3ab */
  { uint32_t v = 0x9da3abu; esp -= 4; W32(esp, v); }
/* 98d40d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98d413: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d414: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98d41b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  esp = r;
  }
/* 98d41e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98d41f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98d420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d421: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98d422: mov ebp, ecx */
  ebp = ecx;
/* 98d424: mov edi, 1 */
  edi = 0x1u;
/* 98d429: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98d42d: mov ebx, ebp */
  ebx = ebp;
/* 98d42f: nop  */
L_98d430: /* 98d430: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
/* 98d433: mov eax, 1 */
  eax = 0x1u;
/* 98d438: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 98d43a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 98d43c: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* 98d43f: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 98d441: call 0x6c242d */
  esp -= 4; W32(esp, 0x98d446u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98d446: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98d449: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 98d44d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98d44f: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 98d457: je 0x98d465 */
  if (zf) goto L_98d465;
L_98d459: /* 98d459: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d45a: mov ecx, eax */
  ecx = eax;
/* 98d45c: call 0x995690 */
  esp -= 4; W32(esp, 0x98d461u); SPILL(); f_995690(); if (g_unwind) return; RELOAD();
/* 98d461: mov esi, eax */
  esi = eax;
/* 98d463: jmp 0x98d467 */
  goto L_98d467;
L_98d465: /* 98d465: xor esi, esi */
  esi = 0;
L_98d467: /* 98d467: fld qword ptr [0xa07e30] */
  { double v = F64((uint32_t)(0xa07e30u)); FPUSH(v); }
/* 98d46d: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 98d475: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 98d479: call 0x99d032 */
  esp -= 4; W32(esp, 0x98d47eu); SPILL(); hle_CIpow(); RELOAD();
/* 98d47e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98d481: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 98d485: fld dword ptr [0xa21aa8] */
  { double v = F32((uint32_t)(0xa21aa8u)); FPUSH(v); }
/* 98d48b: mov ecx, ebp */
  ecx = ebp;
/* 98d48d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 98d490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d491: call 0x98d1b0 */
  esp -= 4; W32(esp, 0x98d496u); SPILL(); f_98d1b0(); if (g_unwind) return; RELOAD();
/* 98d496: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98d497: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 98d499: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 98d49c: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98d49f: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d4a2: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98d4a6: jl 0x98d430 */
  if ((sf != of)) goto L_98d430;
L_98d4a8: /* 98d4a8: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98d4ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98d4ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98d4b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98d4b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98d4b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98d4b7: mov esp, ebp */
  esp = ebp;
/* 98d4b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98d4ba: ret  */
  esp += 4; SPILL(); return;
}

void f_98d4c0(void) {
  LOAD_REGS();
L_98d4c0: /* 98d4c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d4c1: mov esi, ecx */
  esi = ecx;
/* 98d4c3: call 0x9956d0 */
  esp -= 4; W32(esp, 0x98d4c8u); SPILL(); f_9956d0(); if (g_unwind) return; RELOAD();
/* 98d4c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d4cd: je 0x98d4d8 */
  if (zf) goto L_98d4d8;
L_98d4cf: /* 98d4cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d4d0: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98d4d5u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98d4d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98d4d8: /* 98d4d8: mov eax, esi */
  eax = esi;
/* 98d4da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98d4db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98d4e0(void) {
  LOAD_REGS();
L_98d4e0: /* 98d4e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98d4e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d4e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 98d4e6: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98d4e9: xor ebp, ebp */
  ebp = 0;
/* 98d4eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d4ed: jle 0x98d534 */
  if ((zf || sf != of)) goto L_98d534;
L_98d4ef: /* 98d4ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98d4f0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98d4f4: mov eax, ebx */
  eax = ebx;
/* 98d4f6: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98d4f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98d4f9: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 98d4fc: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 98d500: jmp 0x98d506 */
  goto L_98d506;
L_98d502: /* 98d502: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
L_98d506: /* 98d506: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 98d508: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 98d50b: mov eax, dword ptr [eax + edi] */
  eax = R32((uint32_t)(eax + edi));
/* 98d50e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d50f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 98d511: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98d514: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98d515: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 98d517: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d518: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 98d51a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98d51b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98d51d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d51e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98d51f: call 0x987280 */
  esp -= 4; W32(esp, 0x98d524u); SPILL(); f_987280(); if (g_unwind) return; RELOAD();
/* 98d524: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98d527: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98d52a: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98d52b: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98d52e: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d530: jl 0x98d502 */
  if ((sf != of)) goto L_98d502;
L_98d532: /* 98d532: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98d533: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_98d534: /* 98d534: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98d535: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98d536: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98d540(void) {
  LOAD_REGS();
L_98d540: /* 98d540: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 98d543: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98d545: jne 0x98d54a */
  if (!zf) goto L_98d54a;
L_98d547: /* 98d547: xor eax, eax */
  eax = 0;
/* 98d549: ret  */
  esp += 4; SPILL(); return;
L_98d54a: /* 98d54a: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 98d54d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98d54f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98d552: ret  */
  esp += 4; SPILL(); return;
}

void f_98d560(void) {
  LOAD_REGS();
L_98d560: /* 98d560: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98d564: ret  */
  esp += 4; SPILL(); return;
}

void f_98d570(void) {
  LOAD_REGS();
L_98d570: /* 98d570: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 98d573: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98d575: jne 0x98d57a */
  if (!zf) goto L_98d57a;
L_98d577: /* 98d577: xor eax, eax */
  eax = 0;
/* 98d579: ret  */
  esp += 4; SPILL(); return;
L_98d57a: /* 98d57a: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 98d57d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98d57f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98d582: ret  */
  esp += 4; SPILL(); return;
}

void f_98d590(void) {
  LOAD_REGS();
L_98d590: /* 98d590: mov eax, ecx */
  eax = ecx;
/* 98d592: ret  */
  esp += 4; SPILL(); return;
}

void f_98d5a0(void) {
  LOAD_REGS();
L_98d5a0: /* 98d5a0: mov eax, ecx */
  eax = ecx;
/* 98d5a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98d5b0(void) {
  LOAD_REGS();
L_98d5b0: /* 98d5b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98d5b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d5b5: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98d5bau); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98d5ba: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 98d5bb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98d5c0(void) {
  LOAD_REGS();
L_98d5c0: /* 98d5c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 98d5c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98d5c6: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98d5c8: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98d5cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98d5d0(void) {
  LOAD_REGS();
L_98d5d0: /* 98d5d0: mov eax, 0x3fffffff */
  eax = 0x3fffffffu;
/* 98d5d5: ret  */
  esp += 4; SPILL(); return;
}

void f_98d5e0(void) {
  LOAD_REGS();
L_98d5e0: /* 98d5e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 98d5e2: ret  */
  esp += 4; SPILL(); return;
}

void f_98d5f0(void) {
  LOAD_REGS();
L_98d5f0: /* 98d5f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98d5f4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 98d5f6: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 98d5fd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98d601: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98d603: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98d605: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98d610(void) {
  LOAD_REGS();
L_98d610: /* 98d610: mov eax, ecx */
  eax = ecx;
/* 98d612: xor ecx, ecx */
  ecx = 0;
/* 98d614: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 98d617: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 98d61a: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 98d61d: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 98d620: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 98d623: ret  */
  esp += 4; SPILL(); return;
}

void f_98d630(void) {
  LOAD_REGS();
L_98d630: /* 98d630: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98d634: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 98d63b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d63c: call 0x6c242d */
  esp -= 4; W32(esp, 0x98d641u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98d641: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98d644: ret  */
  esp += 4; SPILL(); return;
}

void f_98d650(void) {
  LOAD_REGS();
L_98d650: /* 98d650: mov eax, ecx */
  eax = ecx;
/* 98d652: add dword ptr [eax], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 98d655: ret  */
  esp += 4; SPILL(); return;
}

void f_98d660(void) {
  LOAD_REGS();
L_98d660: /* 98d660: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 98d662: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98d666: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98d668: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 98d66a: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 98d66c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98d66d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98d670(void) {
  LOAD_REGS();
L_98d670: /* 98d670: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d671: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 98d675: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 98d676: ret  */
  esp += 4; SPILL(); return;
}

void f_98d680(void) {
  LOAD_REGS();
L_98d680: /* 98d680: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d681: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 98d685: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 98d686: ret  */
  esp += 4; SPILL(); return;
}

void f_98d690(void) {
  LOAD_REGS();
L_98d690: /* 98d690: mov eax, ecx */
  eax = ecx;
/* 98d692: add dword ptr [eax], -4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 98d695: ret  */
  esp += 4; SPILL(); return;
}

void f_98d6a0(void) {
  LOAD_REGS();
L_98d6a0: /* 98d6a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98d6a1: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 98d6a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 98d6a6: ret  */
  esp += 4; SPILL(); return;
}

void f_98d6b0(void) {
  LOAD_REGS();
L_98d6b0: /* 98d6b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98d6b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98d6b6: je 0x98d6c0 */
  if (zf) goto L_98d6c0;
L_98d6b8: /* 98d6b8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 98d6bc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98d6be: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_98d6c0: /* 98d6c0: ret  */
  esp += 4; SPILL(); return;
}

void f_98d6d0(void) {
  LOAD_REGS();
L_98d6d0: /* 98d6d0: ret  */
  esp += 4; SPILL(); return;
}

void f_98d6e0(void) {
  LOAD_REGS();
L_98d6e0: /* 98d6e0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98d6e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98d6e4: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 98d6e8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98d6e9: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 98d6eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98d6ec: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 98d6ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98d6f0: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* 98d6f3: mov eax, edi */
  eax = edi;
/* 98d6f5: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 98d6f8: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 98d6fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98d6fc: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 98d700: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 98d704: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 98d708: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x98d70du); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 98d70d: xor ecx, ecx */
  ecx = 0;
/* 98d70f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98d712: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d714: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98d718: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98d71c: jle 0x98da5d */
  if ((zf || sf != of)) goto L_98da5d;
L_98d722: /* 98d722: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
L_98d726: /* 98d726: xor esi, esi */
  esi = 0;
/* 98d728: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d72a: jle 0x98da42 */
  if ((zf || sf != of)) goto L_98da42;
L_98d730: /* 98d730: xor ebp, ebp */
  ebp = 0;
/* 98d732: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d735: jl 0x98d980 */
  if ((sf != of)) goto L_98d980;
L_98d73b: /* 98d73b: lea edx, [ebx + 0x10] */
  edx = (uint32_t)(ebx + 0x10u);
/* 98d73e: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98d742: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98d746: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98d748: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 98d74b: lea eax, [edx + eax + 1] */
  eax = (uint32_t)(edx + eax + 0x1u);
/* 98d74f: mov dword ptr [esp + 0x24], 3 */
  W32((uint32_t)(esp + 0x24u), 0x3u);
/* 98d757: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_98d75b: /* 98d75b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d75d: mov edx, esi */
  edx = esi;
/* 98d75f: jge 0x98d763 */
  if ((sf == of)) goto L_98d763;
L_98d761: /* 98d761: xor edx, edx */
  edx = 0;
L_98d763: /* 98d763: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d765: jge 0x98d769 */
  if ((sf == of)) goto L_98d769;
L_98d767: /* 98d767: xor ecx, ecx */
  ecx = 0;
L_98d769: /* 98d769: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98d76b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d76d: jl 0x98d772 */
  if ((sf != of)) goto L_98d772;
L_98d76f: /* 98d76f: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98d772: /* 98d772: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 98d775: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d777: jl 0x98d77c */
  if ((sf != of)) goto L_98d77c;
L_98d779: /* 98d779: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98d77c: /* 98d77c: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98d77f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98d783: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d785: mov edx, dword ptr [ecx - 4] */
  edx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 98d788: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 98d78a: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 98d78d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98d793: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d795: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d798: jp 0x98d7a4 */
  if (pf) goto L_98d7a4;
L_98d79a: /* 98d79a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d79c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98d7a2: jmp 0x98d7b9 */
  goto L_98d7b9;
L_98d7a4: /* 98d7a4: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 98d7aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d7ac: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d7af: jne 0x98d7b9 */
  if (!zf) goto L_98d7b9;
L_98d7b1: /* 98d7b1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d7b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_98d7b9: /* 98d7b9: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98d7bf: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d7c5: call 0x99c958 */
  esp -= 4; W32(esp, 0x98d7cau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98d7ca: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d7cc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98d7d0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98d7d4: mov byte ptr [edx + ebp - 1], al */
  W8((uint32_t)(edx + ebp + 0xffffffffu), (eax & 0xffu));
/* 98d7d8: mov ecx, ebx */
  ecx = ebx;
/* 98d7da: mov edx, esi */
  edx = esi;
/* 98d7dc: jge 0x98d7e0 */
  if ((sf == of)) goto L_98d7e0;
L_98d7de: /* 98d7de: xor edx, edx */
  edx = 0;
L_98d7e0: /* 98d7e0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d7e2: jge 0x98d7e6 */
  if ((sf == of)) goto L_98d7e6;
L_98d7e4: /* 98d7e4: xor ecx, ecx */
  ecx = 0;
L_98d7e6: /* 98d7e6: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 98d7ea: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98d7ec: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d7ee: jl 0x98d7f3 */
  if ((sf != of)) goto L_98d7f3;
L_98d7f0: /* 98d7f0: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98d7f3: /* 98d7f3: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 98d7f6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d7f8: jl 0x98d7fd */
  if ((sf != of)) goto L_98d7fd;
L_98d7fa: /* 98d7fa: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98d7fd: /* 98d7fd: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98d800: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98d804: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d806: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98d808: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 98d80a: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 98d80d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98d813: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d815: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d818: jp 0x98d824 */
  if (pf) goto L_98d824;
L_98d81a: /* 98d81a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d81c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98d822: jmp 0x98d839 */
  goto L_98d839;
L_98d824: /* 98d824: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 98d82a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d82c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d82f: jne 0x98d839 */
  if (!zf) goto L_98d839;
L_98d831: /* 98d831: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d833: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_98d839: /* 98d839: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98d83f: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d845: call 0x99c958 */
  esp -= 4; W32(esp, 0x98d84au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98d84a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d84c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98d850: mov byte ptr [edx + ebp], al */
  W8((uint32_t)(edx + ebp), (eax & 0xffu));
/* 98d853: mov ecx, ebx */
  ecx = ebx;
/* 98d855: mov edx, esi */
  edx = esi;
/* 98d857: jge 0x98d85b */
  if ((sf == of)) goto L_98d85b;
L_98d859: /* 98d859: xor edx, edx */
  edx = 0;
L_98d85b: /* 98d85b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d85d: jge 0x98d861 */
  if ((sf == of)) goto L_98d861;
L_98d85f: /* 98d85f: xor ecx, ecx */
  ecx = 0;
L_98d861: /* 98d861: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 98d865: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98d867: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d869: jl 0x98d86e */
  if ((sf != of)) goto L_98d86e;
L_98d86b: /* 98d86b: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98d86e: /* 98d86e: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 98d871: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d873: jl 0x98d878 */
  if ((sf != of)) goto L_98d878;
L_98d875: /* 98d875: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98d878: /* 98d878: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98d87b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98d87f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d881: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 98d884: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 98d886: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 98d889: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98d88f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d891: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d894: jp 0x98d8a0 */
  if (pf) goto L_98d8a0;
L_98d896: /* 98d896: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d898: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98d89e: jmp 0x98d8b5 */
  goto L_98d8b5;
L_98d8a0: /* 98d8a0: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 98d8a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d8a8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d8ab: jne 0x98d8b5 */
  if (!zf) goto L_98d8b5;
L_98d8ad: /* 98d8ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d8af: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_98d8b5: /* 98d8b5: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98d8bb: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d8c1: call 0x99c958 */
  esp -= 4; W32(esp, 0x98d8c6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98d8c6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d8c8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98d8cc: mov byte ptr [edx + ebp + 1], al */
  W8((uint32_t)(edx + ebp + 0x1u), (eax & 0xffu));
/* 98d8d0: mov ecx, ebx */
  ecx = ebx;
/* 98d8d2: mov edx, esi */
  edx = esi;
/* 98d8d4: jge 0x98d8d8 */
  if ((sf == of)) goto L_98d8d8;
L_98d8d6: /* 98d8d6: xor edx, edx */
  edx = 0;
L_98d8d8: /* 98d8d8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d8da: jge 0x98d8de */
  if ((sf == of)) goto L_98d8de;
L_98d8dc: /* 98d8dc: xor ecx, ecx */
  ecx = 0;
L_98d8de: /* 98d8de: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 98d8e2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98d8e4: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d8e6: jl 0x98d8eb */
  if ((sf != of)) goto L_98d8eb;
L_98d8e8: /* 98d8e8: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98d8eb: /* 98d8eb: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 98d8ee: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d8f0: jl 0x98d8f5 */
  if ((sf != of)) goto L_98d8f5;
L_98d8f2: /* 98d8f2: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98d8f5: /* 98d8f5: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98d8f8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98d8fc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d8fe: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 98d901: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 98d903: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 98d906: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98d90c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d90e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d911: jp 0x98d91d */
  if (pf) goto L_98d91d;
L_98d913: /* 98d913: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d915: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98d91b: jmp 0x98d932 */
  goto L_98d932;
L_98d91d: /* 98d91d: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 98d923: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d925: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d928: jne 0x98d932 */
  if (!zf) goto L_98d932;
L_98d92a: /* 98d92a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d92c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_98d932: /* 98d932: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98d938: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d93e: call 0x99c958 */
  esp -= 4; W32(esp, 0x98d943u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98d943: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98d947: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98d94b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98d94f: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 98d953: mov byte ptr [edx + ebp + 2], al */
  W8((uint32_t)(edx + ebp + 0x2u), (eax & 0xffu));
/* 98d957: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 98d95b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d95e: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98d961: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 98d964: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d966: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98d96a: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98d96e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98d972: jl 0x98d75b */
  if ((sf != of)) goto L_98d75b;
L_98d978: /* 98d978: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98d97c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_98d980: /* 98d980: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d982: jge 0x98da33 */
  if ((sf == of)) goto L_98da33;
L_98d988: /* 98d988: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98d98c: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98d98e: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 98d991: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98d993: lea ebx, [ebx + ebp*4 + 0xc] */
  ebx = (uint32_t)(ebx + ebp*4 + 0xcu);
/* 98d997: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98d99b: jmp 0x98d9a0 */
  goto L_98d9a0;
L_98d9a0: /* 98d9a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d9a2: mov edx, esi */
  edx = esi;
/* 98d9a4: jge 0x98d9a8 */
  if ((sf == of)) goto L_98d9a8;
L_98d9a6: /* 98d9a6: xor edx, edx */
  edx = 0;
L_98d9a8: /* 98d9a8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d9aa: jge 0x98d9ae */
  if ((sf == of)) goto L_98d9ae;
L_98d9ac: /* 98d9ac: xor ecx, ecx */
  ecx = 0;
L_98d9ae: /* 98d9ae: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 98d9b2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98d9b4: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d9b6: jl 0x98d9bb */
  if ((sf != of)) goto L_98d9bb;
L_98d9b8: /* 98d9b8: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98d9bb: /* 98d9bb: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 98d9be: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d9c0: jl 0x98d9c5 */
  if ((sf != of)) goto L_98d9c5;
L_98d9c2: /* 98d9c2: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98d9c5: /* 98d9c5: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98d9c8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 98d9ca: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d9cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98d9ce: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 98d9d1: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98d9d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d9d9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d9dc: jp 0x98d9e8 */
  if (pf) goto L_98d9e8;
L_98d9de: /* 98d9de: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d9e0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98d9e6: jmp 0x98d9fd */
  goto L_98d9fd;
L_98d9e8: /* 98d9e8: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 98d9ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d9f0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d9f3: jne 0x98d9fd */
  if (!zf) goto L_98d9fd;
L_98d9f5: /* 98d9f5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d9f7: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_98d9fd: /* 98d9fd: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98da03: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98da09: call 0x99c958 */
  esp -= 4; W32(esp, 0x98da0eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98da0e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98da12: mov byte ptr [ecx + ebp], al */
  W8((uint32_t)(ecx + ebp), (eax & 0xffu));
/* 98da15: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 98da19: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98da1d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98da1e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98da21: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98da23: jl 0x98d9a0 */
  if ((sf != of)) goto L_98d9a0;
L_98da29: /* 98da29: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 98da2d: mov edi, eax */
  edi = eax;
/* 98da2f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_98da33: /* 98da33: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98da37: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98da38: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98da3a: jl 0x98d730 */
  if ((sf != of)) goto L_98d730;
L_98da40: /* 98da40: mov ebp, edx */
  ebp = edx;
L_98da42: /* 98da42: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98da46: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98da4a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98da4b: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98da4d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98da4f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98da53: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98da57: jl 0x98d726 */
  if ((sf != of)) goto L_98d726;
L_98da5d: /* 98da5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98da5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98da5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98da60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98da61: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98da64: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98d99d(void) {
  LOAD_REGS();
  goto L_98d99d;
L_98d726: /* 98d726: xor esi, esi */
  esi = 0;
/* 98d728: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d72a: jle 0x98da42 */
  if ((zf || sf != of)) goto L_98da42;
L_98d730: /* 98d730: xor ebp, ebp */
  ebp = 0;
/* 98d732: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d735: jl 0x98d980 */
  if ((sf != of)) goto L_98d980;
L_98d73b: /* 98d73b: lea edx, [ebx + 0x10] */
  edx = (uint32_t)(ebx + 0x10u);
/* 98d73e: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98d742: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98d746: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98d748: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 98d74b: lea eax, [edx + eax + 1] */
  eax = (uint32_t)(edx + eax + 0x1u);
/* 98d74f: mov dword ptr [esp + 0x24], 3 */
  W32((uint32_t)(esp + 0x24u), 0x3u);
/* 98d757: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_98d75b: /* 98d75b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d75d: mov edx, esi */
  edx = esi;
/* 98d75f: jge 0x98d763 */
  if ((sf == of)) goto L_98d763;
L_98d761: /* 98d761: xor edx, edx */
  edx = 0;
L_98d763: /* 98d763: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d765: jge 0x98d769 */
  if ((sf == of)) goto L_98d769;
L_98d767: /* 98d767: xor ecx, ecx */
  ecx = 0;
L_98d769: /* 98d769: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98d76b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d76d: jl 0x98d772 */
  if ((sf != of)) goto L_98d772;
L_98d76f: /* 98d76f: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98d772: /* 98d772: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 98d775: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d777: jl 0x98d77c */
  if ((sf != of)) goto L_98d77c;
L_98d779: /* 98d779: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98d77c: /* 98d77c: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98d77f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98d783: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d785: mov edx, dword ptr [ecx - 4] */
  edx = R32((uint32_t)(ecx + 0xfffffffcu));
/* 98d788: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 98d78a: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 98d78d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98d793: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d795: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d798: jp 0x98d7a4 */
  if (pf) goto L_98d7a4;
L_98d79a: /* 98d79a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d79c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98d7a2: jmp 0x98d7b9 */
  goto L_98d7b9;
L_98d7a4: /* 98d7a4: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 98d7aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d7ac: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d7af: jne 0x98d7b9 */
  if (!zf) goto L_98d7b9;
L_98d7b1: /* 98d7b1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d7b3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_98d7b9: /* 98d7b9: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98d7bf: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d7c5: call 0x99c958 */
  esp -= 4; W32(esp, 0x98d7cau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98d7ca: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d7cc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98d7d0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98d7d4: mov byte ptr [edx + ebp - 1], al */
  W8((uint32_t)(edx + ebp + 0xffffffffu), (eax & 0xffu));
/* 98d7d8: mov ecx, ebx */
  ecx = ebx;
/* 98d7da: mov edx, esi */
  edx = esi;
/* 98d7dc: jge 0x98d7e0 */
  if ((sf == of)) goto L_98d7e0;
L_98d7de: /* 98d7de: xor edx, edx */
  edx = 0;
L_98d7e0: /* 98d7e0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d7e2: jge 0x98d7e6 */
  if ((sf == of)) goto L_98d7e6;
L_98d7e4: /* 98d7e4: xor ecx, ecx */
  ecx = 0;
L_98d7e6: /* 98d7e6: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 98d7ea: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98d7ec: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d7ee: jl 0x98d7f3 */
  if ((sf != of)) goto L_98d7f3;
L_98d7f0: /* 98d7f0: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98d7f3: /* 98d7f3: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 98d7f6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d7f8: jl 0x98d7fd */
  if ((sf != of)) goto L_98d7fd;
L_98d7fa: /* 98d7fa: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98d7fd: /* 98d7fd: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98d800: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98d804: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d806: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98d808: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 98d80a: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 98d80d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98d813: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d815: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d818: jp 0x98d824 */
  if (pf) goto L_98d824;
L_98d81a: /* 98d81a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d81c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98d822: jmp 0x98d839 */
  goto L_98d839;
L_98d824: /* 98d824: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 98d82a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d82c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d82f: jne 0x98d839 */
  if (!zf) goto L_98d839;
L_98d831: /* 98d831: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d833: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_98d839: /* 98d839: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98d83f: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d845: call 0x99c958 */
  esp -= 4; W32(esp, 0x98d84au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98d84a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d84c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98d850: mov byte ptr [edx + ebp], al */
  W8((uint32_t)(edx + ebp), (eax & 0xffu));
/* 98d853: mov ecx, ebx */
  ecx = ebx;
/* 98d855: mov edx, esi */
  edx = esi;
/* 98d857: jge 0x98d85b */
  if ((sf == of)) goto L_98d85b;
L_98d859: /* 98d859: xor edx, edx */
  edx = 0;
L_98d85b: /* 98d85b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d85d: jge 0x98d861 */
  if ((sf == of)) goto L_98d861;
L_98d85f: /* 98d85f: xor ecx, ecx */
  ecx = 0;
L_98d861: /* 98d861: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 98d865: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98d867: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d869: jl 0x98d86e */
  if ((sf != of)) goto L_98d86e;
L_98d86b: /* 98d86b: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98d86e: /* 98d86e: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 98d871: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d873: jl 0x98d878 */
  if ((sf != of)) goto L_98d878;
L_98d875: /* 98d875: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98d878: /* 98d878: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98d87b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98d87f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d881: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 98d884: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 98d886: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 98d889: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98d88f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d891: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d894: jp 0x98d8a0 */
  if (pf) goto L_98d8a0;
L_98d896: /* 98d896: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d898: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98d89e: jmp 0x98d8b5 */
  goto L_98d8b5;
L_98d8a0: /* 98d8a0: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 98d8a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d8a8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d8ab: jne 0x98d8b5 */
  if (!zf) goto L_98d8b5;
L_98d8ad: /* 98d8ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d8af: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_98d8b5: /* 98d8b5: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98d8bb: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d8c1: call 0x99c958 */
  esp -= 4; W32(esp, 0x98d8c6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98d8c6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d8c8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98d8cc: mov byte ptr [edx + ebp + 1], al */
  W8((uint32_t)(edx + ebp + 0x1u), (eax & 0xffu));
/* 98d8d0: mov ecx, ebx */
  ecx = ebx;
/* 98d8d2: mov edx, esi */
  edx = esi;
/* 98d8d4: jge 0x98d8d8 */
  if ((sf == of)) goto L_98d8d8;
L_98d8d6: /* 98d8d6: xor edx, edx */
  edx = 0;
L_98d8d8: /* 98d8d8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d8da: jge 0x98d8de */
  if ((sf == of)) goto L_98d8de;
L_98d8dc: /* 98d8dc: xor ecx, ecx */
  ecx = 0;
L_98d8de: /* 98d8de: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 98d8e2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98d8e4: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d8e6: jl 0x98d8eb */
  if ((sf != of)) goto L_98d8eb;
L_98d8e8: /* 98d8e8: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98d8eb: /* 98d8eb: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 98d8ee: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d8f0: jl 0x98d8f5 */
  if ((sf != of)) goto L_98d8f5;
L_98d8f2: /* 98d8f2: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98d8f5: /* 98d8f5: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98d8f8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98d8fc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d8fe: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 98d901: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 98d903: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 98d906: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98d90c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d90e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d911: jp 0x98d91d */
  if (pf) goto L_98d91d;
L_98d913: /* 98d913: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d915: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98d91b: jmp 0x98d932 */
  goto L_98d932;
L_98d91d: /* 98d91d: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 98d923: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d925: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d928: jne 0x98d932 */
  if (!zf) goto L_98d932;
L_98d92a: /* 98d92a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d92c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_98d932: /* 98d932: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98d938: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98d93e: call 0x99c958 */
  esp -= 4; W32(esp, 0x98d943u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98d943: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98d947: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 98d94b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98d94f: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 98d953: mov byte ptr [edx + ebp + 2], al */
  W8((uint32_t)(edx + ebp + 0x2u), (eax & 0xffu));
/* 98d957: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 98d95b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d95e: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98d961: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 98d964: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d966: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98d96a: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98d96e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98d972: jl 0x98d75b */
  if ((sf != of)) goto L_98d75b;
L_98d978: /* 98d978: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 98d97c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_98d980: /* 98d980: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d982: jge 0x98da33 */
  if ((sf == of)) goto L_98da33;
L_98d988: /* 98d988: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98d98c: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98d98e: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 98d991: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98d993: lea ebx, [ebx + ebp*4 + 0xc] */
  ebx = (uint32_t)(ebx + ebp*4 + 0xcu);
/* 98d997: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 98d99b: jmp 0x98d9a0 */
  goto L_98d9a0;
L_98d99d: /* 98d99d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98d9a0: /* 98d9a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d9a2: mov edx, esi */
  edx = esi;
/* 98d9a4: jge 0x98d9a8 */
  if ((sf == of)) goto L_98d9a8;
L_98d9a6: /* 98d9a6: xor edx, edx */
  edx = 0;
L_98d9a8: /* 98d9a8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98d9aa: jge 0x98d9ae */
  if ((sf == of)) goto L_98d9ae;
L_98d9ac: /* 98d9ac: xor ecx, ecx */
  ecx = 0;
L_98d9ae: /* 98d9ae: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 98d9b2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98d9b4: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d9b6: jl 0x98d9bb */
  if ((sf != of)) goto L_98d9bb;
L_98d9b8: /* 98d9b8: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98d9bb: /* 98d9bb: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 98d9be: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98d9c0: jl 0x98d9c5 */
  if ((sf != of)) goto L_98d9c5;
L_98d9c2: /* 98d9c2: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98d9c5: /* 98d9c5: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98d9c8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 98d9ca: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98d9cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98d9ce: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 98d9d1: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 98d9d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d9d9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 98d9dc: jp 0x98d9e8 */
  if (pf) goto L_98d9e8;
L_98d9de: /* 98d9de: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d9e0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 98d9e6: jmp 0x98d9fd */
  goto L_98d9fd;
L_98d9e8: /* 98d9e8: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 98d9ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98d9f0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98d9f3: jne 0x98d9fd */
  if (!zf) goto L_98d9fd;
L_98d9f5: /* 98d9f5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98d9f7: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_98d9fd: /* 98d9fd: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98da03: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 98da09: call 0x99c958 */
  esp -= 4; W32(esp, 0x98da0eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98da0e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98da12: mov byte ptr [ecx + ebp], al */
  W8((uint32_t)(ecx + ebp), (eax & 0xffu));
/* 98da15: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 98da19: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98da1d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98da1e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98da21: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98da23: jl 0x98d9a0 */
  if ((sf != of)) goto L_98d9a0;
L_98da29: /* 98da29: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* 98da2d: mov edi, eax */
  edi = eax;
/* 98da2f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
L_98da33: /* 98da33: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98da37: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98da38: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98da3a: jl 0x98d730 */
  if ((sf != of)) goto L_98d730;
L_98da40: /* 98da40: mov ebp, edx */
  ebp = edx;
L_98da42: /* 98da42: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98da46: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98da4a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98da4b: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98da4d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98da4f: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 98da53: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 98da57: jl 0x98d726 */
  if ((sf != of)) goto L_98d726;
L_98da5d: /* 98da5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98da5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98da5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98da60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98da61: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98da64: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98da70(void) {
  LOAD_REGS();
L_98da70: /* 98da70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98da71: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 98da75: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98da78: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98da79: xor ebp, ebp */
  ebp = 0;
/* 98da7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98da7d: mov dword ptr [esp + 4], ebp */
  W32((uint32_t)(esp + 0x4u), ebp);
/* 98da81: jle 0x98db68 */
  if ((zf || sf != of)) goto L_98db68;
L_98da87: /* 98da87: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 98da89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98da8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98da8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98da8c: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
L_98da90: /* 98da90: xor esi, esi */
  esi = 0;
/* 98da92: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98da94: jle 0x98db55 */
  if ((zf || sf != of)) goto L_98db55;
L_98da9a: /* 98da9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98daa0: /* 98daa0: mov ecx, eax */
  ecx = eax;
/* 98daa2: imul ecx, ebp */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebp);
  ecx = (uint32_t)r;
  }
/* 98daa5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98daa7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98daa9: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 98daad: mov ebx, esi */
  ebx = esi;
/* 98daaf: jge 0x98dab3 */
  if ((sf == of)) goto L_98dab3;
L_98dab1: /* 98dab1: xor ebx, ebx */
  ebx = 0;
L_98dab3: /* 98dab3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98dab5: jge 0x98dabf */
  if ((sf == of)) goto L_98dabf;
L_98dab7: /* 98dab7: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
L_98dabf: /* 98dabf: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98dac1: jl 0x98dac6 */
  if ((sf != of)) goto L_98dac6;
L_98dac3: /* 98dac3: lea ebx, [eax - 1] */
  ebx = (uint32_t)(eax + 0xffffffffu);
L_98dac6: /* 98dac6: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 98dac9: cmp dword ptr [esp + 0x1c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98dacd: jl 0x98dad2 */
  if ((sf != of)) goto L_98dad2;
L_98dacf: /* 98dacf: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 98dad0: jmp 0x98dad6 */
  goto L_98dad6;
L_98dad2: /* 98dad2: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
L_98dad6: /* 98dad6: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 98dad9: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98dadb: movzx ebx, byte ptr [edi + ecx*4] */
  ebx = (uint32_t)(R8((uint32_t)(edi + ecx*4)));
/* 98dadf: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 98dae3: mov ebx, dword ptr [edx + 0xc] */
  ebx = R32((uint32_t)(edx + 0xcu));
/* 98dae6: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 98dae8: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98daec: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 98daf0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98daf1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 98daf7: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 98dafa: movzx ebx, byte ptr [edi + ecx*4 + 1] */
  ebx = (uint32_t)(R8((uint32_t)(edi + ecx*4 + 0x1u)));
/* 98daff: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 98db03: mov ebx, dword ptr [edx + 0x10] */
  ebx = R32((uint32_t)(edx + 0x10u));
/* 98db06: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 98db08: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98db0c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 98db12: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 98db15: movzx ebx, byte ptr [edi + ecx*4 + 2] */
  ebx = (uint32_t)(R8((uint32_t)(edi + ecx*4 + 0x2u)));
/* 98db1a: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 98db1e: mov ebx, dword ptr [edx + 0x14] */
  ebx = R32((uint32_t)(edx + 0x14u));
/* 98db21: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 98db23: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98db27: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 98db2d: fstp dword ptr [ebx + eax*4] */
  WF32((uint32_t)(ebx + eax*4), ST0); FPOP();
/* 98db30: movzx ecx, byte ptr [edi + ecx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(edi + ecx*4 + 0x3u)));
/* 98db35: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98db39: mov ecx, dword ptr [edx + 0x18] */
  ecx = R32((uint32_t)(edx + 0x18u));
/* 98db3c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 98db3e: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 98db42: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 98db48: fstp dword ptr [ecx + eax*4] */
  WF32((uint32_t)(ecx + eax*4), ST0); FPOP();
/* 98db4b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 98db4d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98db4f: jl 0x98daa0 */
  if ((sf != of)) goto L_98daa0;
L_98db55: /* 98db55: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 98db58: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98db59: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98db5b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 98db5f: jl 0x98da90 */
  if ((sf != of)) goto L_98da90;
L_98db65: /* 98db65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98db66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98db67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_98db68: /* 98db68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98db69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 98db6a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98db70(void) {
  LOAD_REGS();
L_98db70: /* 98db70: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98db73: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98db77: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 98db7a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98db7b: xor ebp, ebp */
  ebp = 0;
/* 98db7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98db7f: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 98db83: jle 0x98df3c */
  if ((zf || sf != of)) goto L_98df3c;
L_98db89: /* 98db89: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 98db8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98db8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98db8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98db8e: mov edi, edi */
  edi = edi;
L_98db90: /* 98db90: xor edx, edx */
  edx = 0;
/* 98db92: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98db94: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 98db98: jle 0x98df29 */
  if ((zf || sf != of)) goto L_98df29;
L_98db9e: /* 98db9e: lea eax, [ebp + ebp + 1] */
  eax = (uint32_t)(ebp + ebp + 0x1u);
/* 98dba2: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 98dba6: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98dbaa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98dbb0: /* 98dbb0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98dbb2: lea esi, [ebp + ebp] */
  esi = (uint32_t)(ebp + ebp);
/* 98dbb6: mov ecx, esi */
  ecx = esi;
/* 98dbb8: mov ebp, edx */
  ebp = edx;
/* 98dbba: jge 0x98dbbe */
  if ((sf == of)) goto L_98dbbe;
L_98dbbc: /* 98dbbc: xor ebp, ebp */
  ebp = 0;
L_98dbbe: /* 98dbbe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98dbc0: jge 0x98dbc4 */
  if ((sf == of)) goto L_98dbc4;
L_98dbc2: /* 98dbc2: xor ecx, ecx */
  ecx = 0;
L_98dbc4: /* 98dbc4: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 98dbc8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98dbca: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98dbcc: jl 0x98dbd1 */
  if ((sf != of)) goto L_98dbd1;
L_98dbce: /* 98dbce: lea ebp, [eax - 1] */
  ebp = (uint32_t)(eax + 0xffffffffu);
L_98dbd1: /* 98dbd1: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 98dbd4: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98dbd6: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98dbda: jl 0x98dbdf */
  if ((sf != of)) goto L_98dbdf;
L_98dbdc: /* 98dbdc: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
L_98dbdf: /* 98dbdf: mov ebx, eax */
  ebx = eax;
/* 98dbe1: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 98dbe4: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98dbe6: lea ebp, [edx + 1] */
  ebp = (uint32_t)(edx + 0x1u);
/* 98dbe9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98dbeb: mov ecx, ebp */
  ecx = ebp;
/* 98dbed: jge 0x98dbf1 */
  if ((sf == of)) goto L_98dbf1;
L_98dbef: /* 98dbef: xor ecx, ecx */
  ecx = 0;
L_98dbf1: /* 98dbf1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98dbf3: jge 0x98dbf7 */
  if ((sf == of)) goto L_98dbf7;
L_98dbf5: /* 98dbf5: xor esi, esi */
  esi = 0;
L_98dbf7: /* 98dbf7: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98dbf9: jl 0x98dbfe */
  if ((sf != of)) goto L_98dbfe;
L_98dbfb: /* 98dbfb: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
L_98dbfe: /* 98dbfe: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98dc00: jl 0x98dc05 */
  if ((sf != of)) goto L_98dc05;
L_98dc02: /* 98dc02: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
L_98dc05: /* 98dc05: mov edi, eax */
  edi = eax;
/* 98dc07: imul edi, esi */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(esi);
  edi = (uint32_t)r;
  }
/* 98dc0a: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98dc0c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98dc0e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98dc12: jge 0x98dc16 */
  if ((sf == of)) goto L_98dc16;
L_98dc14: /* 98dc14: xor edx, edx */
  edx = 0;
L_98dc16: /* 98dc16: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98dc18: jge 0x98dc1c */
  if ((sf == of)) goto L_98dc1c;
L_98dc1a: /* 98dc1a: xor ecx, ecx */
  ecx = 0;
L_98dc1c: /* 98dc1c: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98dc1e: jl 0x98dc23 */
  if ((sf != of)) goto L_98dc23;
L_98dc20: /* 98dc20: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98dc23: /* 98dc23: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 98dc27: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98dc29: jl 0x98dc2e */
  if ((sf != of)) goto L_98dc2e;
L_98dc2b: /* 98dc2b: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
L_98dc2e: /* 98dc2e: mov esi, eax */
  esi = eax;
/* 98dc30: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* 98dc33: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98dc37: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98dc39: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98dc3b: mov edx, ebp */
  edx = ebp;
/* 98dc3d: jge 0x98dc41 */
  if ((sf == of)) goto L_98dc41;
L_98dc3f: /* 98dc3f: xor edx, edx */
  edx = 0;
L_98dc41: /* 98dc41: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98dc43: jge 0x98dc47 */
  if ((sf == of)) goto L_98dc47;
L_98dc45: /* 98dc45: xor ecx, ecx */
  ecx = 0;
L_98dc47: /* 98dc47: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98dc49: jl 0x98dc4e */
  if ((sf != of)) goto L_98dc4e;
L_98dc4b: /* 98dc4b: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
L_98dc4e: /* 98dc4e: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 98dc52: mov ebp, dword ptr [ebp + 4] */
  ebp = R32((uint32_t)(ebp + 0x4u));
/* 98dc55: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98dc57: jl 0x98dc5c */
  if ((sf != of)) goto L_98dc5c;
L_98dc59: /* 98dc59: lea ecx, [ebp - 1] */
  ecx = (uint32_t)(ebp + 0xffffffffu);
L_98dc5c: /* 98dc5c: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98dc5f: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98dc63: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98dc65: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 98dc68: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 98dc6a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98dc6e: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 98dc72: fld dword ptr [ebp + ebx*4] */
  { double v = F32((uint32_t)(ebp + ebx*4)); FPUSH(v); }
/* 98dc76: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98dc7c: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98dc82: call 0x99c958 */
  esp -= 4; W32(esp, 0x98dc87u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98dc87: fld dword ptr [ebp + edi*4] */
  { double v = F32((uint32_t)(ebp + edi*4)); FPUSH(v); }
/* 98dc8b: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98dc91: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98dc95: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98dc9b: call 0x99c958 */
  esp -= 4; W32(esp, 0x98dca0u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98dca0: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98dca4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98dca6: mov eax, ebp */
  eax = ebp;
/* 98dca8: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 98dcab: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98dcaf: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98dcb5: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98dcbb: call 0x99c958 */
  esp -= 4; W32(esp, 0x98dcc0u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98dcc0: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98dcc4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98dcc6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98dcca: mov edx, ebp */
  edx = ebp;
/* 98dccc: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 98dccf: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98dcd3: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98dcd9: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98dcdf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98dce4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98dce4: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98dce8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98dcea: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98dcee: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98dcef: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98dcf2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98dcf4: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 98dcf7: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 98dcf9: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98dcfc: fld dword ptr [ebp + ebx*4] */
  { double v = F32((uint32_t)(ebp + ebx*4)); FPUSH(v); }
/* 98dd00: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 98dd04: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98dd0a: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 98dd0e: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98dd14: call 0x99c958 */
  esp -= 4; W32(esp, 0x98dd19u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98dd19: fld dword ptr [ebp + edi*4] */
  { double v = F32((uint32_t)(ebp + edi*4)); FPUSH(v); }
/* 98dd1d: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98dd23: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98dd27: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98dd2d: call 0x99c958 */
  esp -= 4; W32(esp, 0x98dd32u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98dd32: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98dd36: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98dd38: mov eax, ebp */
  eax = ebp;
/* 98dd3a: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 98dd3d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98dd41: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98dd47: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98dd4d: call 0x99c958 */
  esp -= 4; W32(esp, 0x98dd52u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98dd52: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98dd56: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98dd58: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98dd5c: mov edx, ebp */
  edx = ebp;
/* 98dd5e: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 98dd61: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98dd65: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98dd6b: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98dd71: call 0x99c958 */
  esp -= 4; W32(esp, 0x98dd76u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98dd76: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98dd7a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98dd7c: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98dd80: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98dd81: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98dd84: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98dd86: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 98dd89: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 98dd8b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98dd8e: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 98dd92: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 98dd96: fld dword ptr [ebp + ebx*4] */
  { double v = F32((uint32_t)(ebp + ebx*4)); FPUSH(v); }
/* 98dd9a: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98dda0: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98dda6: call 0x99c958 */
  esp -= 4; W32(esp, 0x98ddabu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98ddab: fld dword ptr [ebp + edi*4] */
  { double v = F32((uint32_t)(ebp + edi*4)); FPUSH(v); }
/* 98ddaf: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98ddb5: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98ddb9: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98ddbf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98ddc4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98ddc4: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98ddc8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ddca: mov eax, ebp */
  eax = ebp;
/* 98ddcc: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 98ddcf: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98ddd3: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98ddd9: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98dddf: call 0x99c958 */
  esp -= 4; W32(esp, 0x98dde4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98dde4: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98dde8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ddea: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98ddee: mov edx, ebp */
  edx = ebp;
/* 98ddf0: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 98ddf3: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 98ddf7: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98ddfd: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98de03: call 0x99c958 */
  esp -= 4; W32(esp, 0x98de08u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98de08: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98de0c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98de0e: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 98de12: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98de13: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98de16: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98de18: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 98de1b: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 98de1d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98de20: fld dword ptr [ebp + ebx*4] */
  { double v = F32((uint32_t)(ebp + ebx*4)); FPUSH(v); }
/* 98de24: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 98de28: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98de2e: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98de34: call 0x99c958 */
  esp -= 4; W32(esp, 0x98de39u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98de39: fld dword ptr [ebp + edi*4] */
  { double v = F32((uint32_t)(ebp + edi*4)); FPUSH(v); }
/* 98de3d: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98de43: mov ebx, eax */
  ebx = eax;
/* 98de45: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98de4b: call 0x99c958 */
  esp -= 4; W32(esp, 0x98de50u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98de50: fld dword ptr [ebp + esi*4] */
  { double v = F32((uint32_t)(ebp + esi*4)); FPUSH(v); }
/* 98de54: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98de5a: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98de5c: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98de62: call 0x99c958 */
  esp -= 4; W32(esp, 0x98de67u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98de67: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98de69: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98de6d: fld dword ptr [ebp + eax*4] */
  { double v = F32((uint32_t)(ebp + eax*4)); FPUSH(v); }
/* 98de71: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 98de77: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 98de7d: call 0x99c958 */
  esp -= 4; W32(esp, 0x98de82u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 98de82: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 98de86: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98de88: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 98de8c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98de8d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98de90: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98de92: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98de96: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98de99: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98de9b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98de9f: mov esi, ebp */
  esi = ebp;
/* 98dea1: mov edi, ebx */
  edi = ebx;
/* 98dea3: jge 0x98dea7 */
  if ((sf == of)) goto L_98dea7;
L_98dea5: /* 98dea5: xor edi, edi */
  edi = 0;
L_98dea7: /* 98dea7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98dea9: jge 0x98dead */
  if ((sf == of)) goto L_98dead;
L_98deab: /* 98deab: xor esi, esi */
  esi = 0;
L_98dead: /* 98dead: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98deb1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 98deb3: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98deb5: jl 0x98deba */
  if ((sf != of)) goto L_98deba;
L_98deb7: /* 98deb7: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_98deba: /* 98deba: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 98debd: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98debf: jl 0x98dec4 */
  if ((sf != of)) goto L_98dec4;
L_98dec1: /* 98dec1: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_98dec4: /* 98dec4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 98dec6: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 98deca: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 98decd: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 98ded3: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* 98ded6: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98ded8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98deda: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 98dedb: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 98dede: mov esi, dword ptr [ecx + 0x10] */
  esi = R32((uint32_t)(ecx + 0x10u));
/* 98dee1: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 98dee5: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98dee7: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98deea: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 98deee: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 98def4: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98def8: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 98defb: fild dword ptr [esp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 98deff: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 98df02: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98df04: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 98df0a: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 98df0d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 98df11: mov esi, dword ptr [ecx + 0x18] */
  esi = R32((uint32_t)(ecx + 0x18u));
/* 98df14: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 98df16: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 98df1c: fstp dword ptr [esi + eax*4] */
  WF32((uint32_t)(esi + eax*4), ST0); FPOP();
/* 98df1f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 98df21: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98df23: jl 0x98dbb0 */
  if ((sf != of)) goto L_98dbb0;
L_98df29: /* 98df29: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 98df2c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98df2d: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98df2f: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 98df33: jl 0x98db90 */
  if ((sf != of)) goto L_98db90;
L_98df39: /* 98df39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98df3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98df3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_98df3c: /* 98df3c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98df3d: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98df40: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98df50(void) {
  LOAD_REGS();
L_98df50: /* 98df50: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 98df53: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98df57: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98df59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98df60(void) {
  LOAD_REGS();
L_98df60: /* 98df60: mov eax, ecx */
  eax = ecx;
/* 98df62: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98df70(void) {
  LOAD_REGS();
L_98df70: /* 98df70: mov eax, 0x3fffffff */
  eax = 0x3fffffffu;
/* 98df75: ret  */
  esp += 4; SPILL(); return;
}

void f_98df80(void) {
  LOAD_REGS();
L_98df80: /* 98df80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98df84: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 98df8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98df8c: call 0x6c242d */
  esp -= 4; W32(esp, 0x98df91u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98df91: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98df94: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98dfa0(void) {
  LOAD_REGS();
L_98dfa0: /* 98dfa0: mov eax, ecx */
  eax = ecx;
/* 98dfa2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98dfa6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98dfa8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 98dfaa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98dfb0(void) {
  LOAD_REGS();
L_98dfb0: /* 98dfb0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 98dfb2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 98dfb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98dfb7: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 98dfb9: xor ecx, ecx */
  ecx = 0;
/* 98dfbb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98dfbd: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 98dfc0: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 98dfc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98dfc3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98dfd0(void) {
  LOAD_REGS();
L_98dfd0: /* 98dfd0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98dfd4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98dfd8: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98dfda: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98dfde: je 0x98dff1 */
  if (zf) goto L_98dff1;
L_98dfe0: /* 98dfe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_98dfe1: /* 98dfe1: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* 98dfe4: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98dfe7: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98dfea: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98dfec: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 98dfee: jne 0x98dfe1 */
  if (!zf) goto L_98dfe1;
L_98dff0: /* 98dff0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_98dff1: /* 98dff1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98dff5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98dff7: ret  */
  esp += 4; SPILL(); return;
}

void f_98e000(void) {
  LOAD_REGS();
L_98e000: /* 98e000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98e004: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e006: je 0x98e010 */
  if (zf) goto L_98e010;
L_98e008: /* 98e008: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 98e00c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 98e00e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_98e010: /* 98e010: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98e020(void) {
  LOAD_REGS();
L_98e020: /* 98e020: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98e030(void) {
  LOAD_REGS();
L_98e030: /* 98e030: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98e034: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98e038: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e03a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98e03e: je 0x98e054 */
  if (zf) goto L_98e054;
L_98e040: /* 98e040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_98e041: /* 98e041: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e043: je 0x98e049 */
  if (zf) goto L_98e049;
L_98e045: /* 98e045: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 98e047: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_98e049: /* 98e049: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98e04c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98e04f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e051: jne 0x98e041 */
  if (!zf) goto L_98e041;
L_98e053: /* 98e053: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_98e054: /* 98e054: ret  */
  esp += 4; SPILL(); return;
}

void f_98e060(void) {
  LOAD_REGS();
L_98e060: /* 98e060: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98e064: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 98e068: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e06a: je 0x98e07d */
  if (zf) goto L_98e07d;
L_98e06c: /* 98e06c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 98e070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_98e071: /* 98e071: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 98e073: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 98e075: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98e078: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e07a: jne 0x98e071 */
  if (!zf) goto L_98e071;
L_98e07c: /* 98e07c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_98e07d: /* 98e07d: ret  */
  esp += 4; SPILL(); return;
}

void f_98e080(void) {
  LOAD_REGS();
L_98e080: /* 98e080: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98e084: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98e088: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e08a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98e08e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e08f: je 0x98e0a0 */
  if (zf) goto L_98e0a0;
L_98e091: /* 98e091: mov esi, dword ptr [eax - 4] */
  esi = R32((uint32_t)(eax + 0xfffffffcu));
/* 98e094: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e097: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98e09a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e09c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 98e09e: jne 0x98e091 */
  if (!zf) goto L_98e091;
L_98e0a0: /* 98e0a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98e0a4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98e0a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98e0a7: ret  */
  esp += 4; SPILL(); return;
}

void f_98e0b0(void) {
  LOAD_REGS();
L_98e0b0: /* 98e0b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 98e0b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 98e0b6: jbe 0x98e0d2 */
  if ((cf | zf)) goto L_98e0d2;
L_98e0b8: /* 98e0b8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 98e0bc: mov ecx, eax */
  ecx = eax;
/* 98e0be: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98e0c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_98e0c3: /* 98e0c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e0c5: je 0x98e0cb */
  if (zf) goto L_98e0cb;
L_98e0c7: /* 98e0c7: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 98e0c9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_98e0cb: /* 98e0cb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98e0ce: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98e0cf: jne 0x98e0c3 */
  if (!zf) goto L_98e0c3;
L_98e0d1: /* 98e0d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_98e0d2: /* 98e0d2: ret  */
  esp += 4; SPILL(); return;
}

void f_98e0e0(void) {
  LOAD_REGS();
L_98e0e0: /* 98e0e0: ret  */
  esp += 4; SPILL(); return;
}

void f_98e0f0(void) {
  LOAD_REGS();
L_98e0f0: /* 98e0f0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98e0f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98e0f8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 98e0fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e0fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e0fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98e0ff: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98e103: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e104: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 98e108: mov eax, esp */
  eax = esp;
/* 98e10a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98e10c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e10d: mov eax, esp */
  eax = esp;
/* 98e10f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 98e111: call 0x98e030 */
  esp -= 4; W32(esp, 0x98e116u); SPILL(); f_98e030(); if (g_unwind) return; RELOAD();
/* 98e116: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e119: ret  */
  esp += 4; SPILL(); return;
}

void f_98e120(void) {
  LOAD_REGS();
L_98e120: /* 98e120: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98e122: push 0x9da3cb */
  { uint32_t v = 0x9da3cbu; esp -= 4; W32(esp, v); }
/* 98e127: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98e12d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e12e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98e135: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98e138: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e139: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e13a: mov esi, ecx */
  esi = ecx;
/* 98e13c: mov ebx, dword ptr [esi + 0x34] */
  ebx = R32((uint32_t)(esi + 0x34u));
/* 98e13f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e140: mov edx, 1 */
  edx = 0x1u;
/* 98e145: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 98e149: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 98e14d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98e14e: mov edi, edi */
  edi = edi;
L_98e150: /* 98e150: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 98e153: xor edi, edi */
  edi = 0;
/* 98e155: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e157: je 0x98e203 */
  if (zf) goto L_98e203;
L_98e15d: /* 98e15d: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 98e160: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e162: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e165: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98e167: jae 0x98e203 */
  if (!cf) goto L_98e203;
L_98e16d: /* 98e16d: mov eax, ecx */
  eax = ecx;
/* 98e16f: mov ebp, dword ptr [eax + edx*4] */
  ebp = R32((uint32_t)(eax + edx*4));
/* 98e172: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 98e174: call 0x6c242d */
  esp -= 4; W32(esp, 0x98e179u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98e179: mov ecx, eax */
  ecx = eax;
/* 98e17b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e17e: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 98e182: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e184: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 98e188: je 0x98e1a4 */
  if (zf) goto L_98e1a4;
L_98e18a: /* 98e18a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 98e18d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e18e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98e18f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e191: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e194: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 98e196: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e197: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98e198: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e19a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e19c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e19d: call 0x995780 */
  esp -= 4; W32(esp, 0x98e1a2u); SPILL(); f_995780(); if (g_unwind) return; RELOAD();
/* 98e1a2: mov edi, eax */
  edi = eax;
L_98e1a4: /* 98e1a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e1a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e1a6: mov ecx, esi */
  ecx = esi;
/* 98e1a8: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 98e1b0: call 0x98db70 */
  esp -= 4; W32(esp, 0x98e1b5u); SPILL(); f_98db70(); if (g_unwind) return; RELOAD();
/* 98e1b5: cmp ebx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e1b9: je 0x98e1cf */
  if (zf) goto L_98e1cf;
L_98e1bb: /* 98e1bb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e1bd: je 0x98e1cf */
  if (zf) goto L_98e1cf;
L_98e1bf: /* 98e1bf: mov ecx, ebx */
  ecx = ebx;
/* 98e1c1: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98e1c6u); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98e1c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e1c7: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e1ccu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e1cc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e1cf: /* 98e1cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e1d0: mov ecx, esi */
  ecx = esi;
/* 98e1d2: mov ebx, edi */
  ebx = edi;
/* 98e1d4: call 0x98d6e0 */
  esp -= 4; W32(esp, 0x98e1d9u); SPILL(); f_98d6e0(); if (g_unwind) return; RELOAD();
/* 98e1d9: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98e1dd: mov dword ptr [ebp + ecx*4 + 8], eax */
  W32((uint32_t)(ebp + ecx*4 + 0x8u), eax);
/* 98e1e1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98e1e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e1e7: je 0x98e1f3 */
  if (zf) goto L_98e1f3;
L_98e1e9: /* 98e1e9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98e1ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98e1ee: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x98e1f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98e1f0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e1f3: /* 98e1f3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98e1f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e1f8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98e1fc: mov edx, eax */
  edx = eax;
/* 98e1fe: jmp 0x98e150 */
  goto L_98e150;
L_98e203: /* 98e203: cmp ebx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e207: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98e208: je 0x98e21e */
  if (zf) goto L_98e21e;
L_98e20a: /* 98e20a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e20c: je 0x98e21e */
  if (zf) goto L_98e21e;
L_98e20e: /* 98e20e: mov ecx, ebx */
  ecx = ebx;
/* 98e210: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98e215u); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98e215: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e216: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e21bu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e21b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e21e: /* 98e21e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 98e222: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98e223: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98e224: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98e225: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98e22c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e22f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98e240(void) {
  LOAD_REGS();
L_98e240: /* 98e240: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98e242: push 0x9da3eb */
  { uint32_t v = 0x9da3ebu; esp -= 4; W32(esp, v); }
/* 98e247: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98e24d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e24e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98e255: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98e258: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e259: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98e25a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e25b: mov ebp, ecx */
  ebp = ecx;
/* 98e25d: mov esi, dword ptr [ebp + 0x34] */
  esi = R32((uint32_t)(ebp + 0x34u));
/* 98e260: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e261: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 98e265: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98e26d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98e270: /* 98e270: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* 98e273: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e275: je 0x98e32a */
  if (zf) goto L_98e32a;
L_98e27b: /* 98e27b: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* 98e27e: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e280: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98e284: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e287: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98e289: jae 0x98e32a */
  if (!cf) goto L_98e32a;
L_98e28f: /* 98e28f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98e291: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e292: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98e293: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e295: mov edi, eax */
  edi = eax;
/* 98e297: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98e29a: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 98e29c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e29d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98e29e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e2a0: mov ebx, eax */
  ebx = eax;
/* 98e2a2: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 98e2a4: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 98e2a6: call 0x6c242d */
  esp -= 4; W32(esp, 0x98e2abu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98e2ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e2ae: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98e2b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e2b4: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 98e2bc: je 0x98e2cb */
  if (zf) goto L_98e2cb;
L_98e2be: /* 98e2be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e2bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e2c0: mov ecx, eax */
  ecx = eax;
/* 98e2c2: call 0x995780 */
  esp -= 4; W32(esp, 0x98e2c7u); SPILL(); f_995780(); if (g_unwind) return; RELOAD();
/* 98e2c7: mov edi, eax */
  edi = eax;
/* 98e2c9: jmp 0x98e2cd */
  goto L_98e2cd;
L_98e2cb: /* 98e2cb: xor edi, edi */
  edi = 0;
L_98e2cd: /* 98e2cd: mov eax, dword ptr [ebp + 0x3c] */
  eax = R32((uint32_t)(ebp + 0x3cu));
/* 98e2d0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98e2d4: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 98e2d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e2d8: mov ecx, esi */
  ecx = esi;
/* 98e2da: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 98e2e2: call 0x996810 */
  esp -= 4; W32(esp, 0x98e2e7u); SPILL(); f_996810(); if (g_unwind) return; RELOAD();
/* 98e2e7: cmp esi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e2eb: je 0x98e2fd */
  if (zf) goto L_98e2fd;
L_98e2ed: /* 98e2ed: mov ecx, esi */
  ecx = esi;
/* 98e2ef: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98e2f4u); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98e2f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e2f5: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e2fau); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e2fa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e2fd: /* 98e2fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e2fe: mov ecx, ebp */
  ecx = ebp;
/* 98e300: mov esi, edi */
  esi = edi;
/* 98e302: call 0x98d6e0 */
  esp -= 4; W32(esp, 0x98e307u); SPILL(); f_98d6e0(); if (g_unwind) return; RELOAD();
/* 98e307: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 98e30b: mov dword ptr [ebx + edx*4 + 8], eax */
  W32((uint32_t)(ebx + edx*4 + 0x8u), eax);
/* 98e30f: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98e313: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e315: je 0x98e321 */
  if (zf) goto L_98e321;
L_98e317: /* 98e317: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98e31b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e31c: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x98e31eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98e31e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e321: /* 98e321: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 98e325: jmp 0x98e270 */
  goto L_98e270;
L_98e32a: /* 98e32a: cmp esi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e32e: je 0x98e344 */
  if (zf) goto L_98e344;
L_98e330: /* 98e330: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e332: je 0x98e344 */
  if (zf) goto L_98e344;
L_98e334: /* 98e334: mov ecx, esi */
  ecx = esi;
/* 98e336: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98e33bu); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98e33b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e33c: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e341u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e341: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e344: /* 98e344: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98e348: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98e349: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98e34a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98e34b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98e34c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98e353: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e356: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98e360(void) {
  LOAD_REGS();
L_98e360: /* 98e360: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98e361: mov ebp, esp */
  ebp = esp;
/* 98e363: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 98e366: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98e368: push 0x9da41e */
  { uint32_t v = 0x9da41eu; esp -= 4; W32(esp, v); }
/* 98e36d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98e373: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e374: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98e37b: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98e37e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e37f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e380: mov ebx, ecx */
  ebx = ecx;
/* 98e382: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e383: mov edi, dword ptr [ebx + 0x34] */
  edi = R32((uint32_t)(ebx + 0x34u));
/* 98e386: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 98e388: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 98e38c: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 98e390: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 98e394: call 0x995690 */
  esp -= 4; W32(esp, 0x98e399u); SPILL(); f_995690(); if (g_unwind) return; RELOAD();
/* 98e399: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 98e39f: fdiv qword ptr [0xa21aa0] */
  ST0 = ST0 / (F64((uint32_t)(0xa21aa0u)));
/* 98e3a5: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 98e3a9: mov edx, dword ptr [0xa21aa0] */
  edx = R32((uint32_t)(0xa21aa0u));
/* 98e3af: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 98e3b5: mov eax, dword ptr [0xa21aa4] */
  eax = R32((uint32_t)(0xa21aa4u));
/* 98e3ba: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 98e3be: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 98e3c2: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 98e3c5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98e3c7: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 98e3cf: mov dword ptr [ecx + 4], 0x3f800000 */
  W32((uint32_t)(ecx + 0x4u), 0x3f800000u);
/* 98e3d6: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 98e3da: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 98e3de: je 0x98e400 */
  if (zf) goto L_98e400;
L_98e3e0: /* 98e3e0: mov ecx, edi */
  ecx = edi;
/* 98e3e2: call 0x995dd0 */
  esp -= 4; W32(esp, 0x98e3e7u); SPILL(); f_995dd0(); if (g_unwind) return; RELOAD();
/* 98e3e7: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 98e3eb: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98e3ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e3f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98e3f1: mov ecx, eax */
  ecx = eax;
/* 98e3f3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 98e3f7: call 0x995d90 */
  esp -= 4; W32(esp, 0x98e3fcu); SPILL(); f_995d90(); if (g_unwind) return; RELOAD();
/* 98e3fc: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_98e400: /* 98e400: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 98e408: mov dword ptr [esp + 0x18], 4 */
  W32((uint32_t)(esp + 0x18u), 0x4u);
L_98e410: /* 98e410: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 98e413: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e415: je 0x98e58e */
  if (zf) goto L_98e58e;
L_98e41b: /* 98e41b: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* 98e41e: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e420: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98e424: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e427: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98e429: jae 0x98e58e */
  if (!cf) goto L_98e58e;
L_98e42f: /* 98e42f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 98e431: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e432: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98e433: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e435: mov esi, eax */
  esi = eax;
/* 98e437: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 98e43a: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 98e43c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e43d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98e43e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e440: mov edi, eax */
  edi = eax;
/* 98e442: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 98e444: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e447: jne 0x98e451 */
  if (!zf) goto L_98e451;
L_98e449: /* 98e449: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e44b: je 0x98e58a */
  if (zf) goto L_98e58a;
L_98e451: /* 98e451: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98e455: mov ebx, dword ptr [ebx + eax - 4] */
  ebx = R32((uint32_t)(ebx + eax + 0xfffffffcu));
/* 98e459: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 98e45b: call 0x6c242d */
  esp -= 4; W32(esp, 0x98e460u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98e460: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e463: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 98e467: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e469: mov byte ptr [esp + 0x44], 1 */
  W8((uint32_t)(esp + 0x44u), 0x1u);
/* 98e46e: je 0x98e47d */
  if (zf) goto L_98e47d;
L_98e470: /* 98e470: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e471: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e472: mov ecx, eax */
  ecx = eax;
/* 98e474: call 0x995780 */
  esp -= 4; W32(esp, 0x98e479u); SPILL(); f_995780(); if (g_unwind) return; RELOAD();
/* 98e479: mov esi, eax */
  esi = eax;
/* 98e47b: jmp 0x98e47f */
  goto L_98e47f;
L_98e47d: /* 98e47d: xor esi, esi */
  esi = 0;
L_98e47f: /* 98e47f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98e483: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e484: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e485: mov byte ptr [esp + 0x4c], 0 */
  W8((uint32_t)(esp + 0x4cu), 0x0u);
/* 98e48a: call 0x995d10 */
  esp -= 4; W32(esp, 0x98e48fu); SPILL(); f_995d10(); if (g_unwind) return; RELOAD();
/* 98e48f: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 98e492: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98e494: je 0x98e4b5 */
  if (zf) goto L_98e4b5;
L_98e496: /* 98e496: push 0x42c80000 */
  { uint32_t v = 0x42c80000u; esp -= 4; W32(esp, v); }
/* 98e49b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98e49d: mov ecx, esi */
  ecx = esi;
/* 98e49f: call 0x995d50 */
  esp -= 4; W32(esp, 0x98e4a4u); SPILL(); f_995d50(); if (g_unwind) return; RELOAD();
/* 98e4a4: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 98e4a8: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 98e4ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e4ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98e4ae: mov ecx, esi */
  ecx = esi;
/* 98e4b0: call 0x995d90 */
  esp -= 4; W32(esp, 0x98e4b5u); SPILL(); f_995d90(); if (g_unwind) return; RELOAD();
L_98e4b5: /* 98e4b5: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 98e4b9: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98e4bc: jle 0x98e531 */
  if ((zf || sf != of)) goto L_98e531;
L_98e4be: /* 98e4be: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98e4c2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98e4c3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_98e4c7: /* 98e4c7: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 98e4c9: call 0x6c242d */
  esp -= 4; W32(esp, 0x98e4ceu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98e4ce: mov ecx, eax */
  ecx = eax;
/* 98e4d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e4d3: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 98e4d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e4d9: mov byte ptr [esp + 0x44], 2 */
  W8((uint32_t)(esp + 0x44u), 0x2u);
/* 98e4de: je 0x98e4fc */
  if (zf) goto L_98e4fc;
L_98e4e0: /* 98e4e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98e4e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e4e4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98e4e5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e4e7: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e4e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e4ea: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98e4ec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e4ed: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98e4ee: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e4f0: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e4f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e4f3: call 0x995780 */
  esp -= 4; W32(esp, 0x98e4f8u); SPILL(); f_995780(); if (g_unwind) return; RELOAD();
/* 98e4f8: mov edi, eax */
  edi = eax;
/* 98e4fa: jmp 0x98e4fe */
  goto L_98e4fe;
L_98e4fc: /* 98e4fc: xor edi, edi */
  edi = 0;
L_98e4fe: /* 98e4fe: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 98e502: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e503: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e504: mov ecx, esi */
  ecx = esi;
/* 98e506: mov byte ptr [esp + 0x4c], 0 */
  W8((uint32_t)(esp + 0x4cu), 0x0u);
/* 98e50b: call 0x995d10 */
  esp -= 4; W32(esp, 0x98e510u); SPILL(); f_995d10(); if (g_unwind) return; RELOAD();
/* 98e510: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e512: je 0x98e524 */
  if (zf) goto L_98e524;
L_98e514: /* 98e514: mov ecx, esi */
  ecx = esi;
/* 98e516: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98e51bu); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98e51b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e51c: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e521u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e521: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e524: /* 98e524: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 98e528: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 98e529: mov esi, edi */
  esi = edi;
/* 98e52b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98e52f: jne 0x98e4c7 */
  if (!zf) goto L_98e4c7;
L_98e531: /* 98e531: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98e535: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 98e538: mov edi, dword ptr [ebx + edx] */
  edi = R32((uint32_t)(ebx + edx));
/* 98e53b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e53c: call 0x98d6e0 */
  esp -= 4; W32(esp, 0x98e541u); SPILL(); f_98d6e0(); if (g_unwind) return; RELOAD();
/* 98e541: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e543: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98e546: mov dword ptr [edi + ecx*4 + 8], eax */
  W32((uint32_t)(edi + ecx*4 + 0x8u), eax);
/* 98e54a: je 0x98e55c */
  if (zf) goto L_98e55c;
L_98e54c: /* 98e54c: mov ecx, esi */
  ecx = esi;
/* 98e54e: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98e553u); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98e553: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e554: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e559u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e559: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e55c: /* 98e55c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 98e55f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e561: je 0x98e56d */
  if (zf) goto L_98e56d;
L_98e563: /* 98e563: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98e567: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98e568: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x98e56au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98e56a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e56d: /* 98e56d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98e571: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 98e575: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98e576: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98e579: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 98e57d: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 98e581: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98e585: jmp 0x98e410 */
  goto L_98e410;
L_98e58a: /* 98e58a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_98e58e: /* 98e58e: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 98e591: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98e593: je 0x98e5a9 */
  if (zf) goto L_98e5a9;
L_98e595: /* 98e595: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e597: je 0x98e5a9 */
  if (zf) goto L_98e5a9;
L_98e599: /* 98e599: mov ecx, edi */
  ecx = edi;
/* 98e59b: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98e5a0u); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98e5a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e5a1: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e5a6u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e5a6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e5a9: /* 98e5a9: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 98e5ad: mov dword ptr [esp + 0x44], 0xffffffff */
  W32((uint32_t)(esp + 0x44u), 0xffffffffu);
/* 98e5b5: call 0x9956d0 */
  esp -= 4; W32(esp, 0x98e5bau); SPILL(); f_9956d0(); if (g_unwind) return; RELOAD();
/* 98e5ba: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 98e5be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98e5bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98e5c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98e5c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98e5c8: mov esp, ebp */
  esp = ebp;
/* 98e5ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98e5cb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_98e5d0(void) {
  LOAD_REGS();
L_98e5d0: /* 98e5d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98e5d2: push 0x9da43b */
  { uint32_t v = 0x9da43bu; esp -= 4; W32(esp, v); }
/* 98e5d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98e5dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e5de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98e5e5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98e5e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e5e9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98e5ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e5eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e5ec: mov edi, ecx */
  edi = ecx;
/* 98e5ee: mov esi, dword ptr [edi + 0x34] */
  esi = R32((uint32_t)(edi + 0x34u));
/* 98e5f1: mov edx, 1 */
  edx = 0x1u;
/* 98e5f6: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 98e5fa: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 98e5fe: mov edi, edi */
  edi = edi;
L_98e600: /* 98e600: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 98e603: xor ebx, ebx */
  ebx = 0;
/* 98e605: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e607: je 0x98e6c5 */
  if (zf) goto L_98e6c5;
L_98e60d: /* 98e60d: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 98e610: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e612: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e615: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98e617: jae 0x98e6c5 */
  if (!cf) goto L_98e6c5;
L_98e61d: /* 98e61d: mov eax, ecx */
  eax = ecx;
/* 98e61f: mov ebp, dword ptr [eax + edx*4] */
  ebp = R32((uint32_t)(eax + edx*4));
/* 98e622: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 98e624: call 0x6c242d */
  esp -= 4; W32(esp, 0x98e629u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98e629: mov ecx, eax */
  ecx = eax;
/* 98e62b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e62e: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 98e632: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e634: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98e638: je 0x98e654 */
  if (zf) goto L_98e654;
L_98e63a: /* 98e63a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98e63d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e63e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98e63f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e641: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e643: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e644: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98e646: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e647: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98e648: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e64a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e64c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e64d: call 0x995780 */
  esp -= 4; W32(esp, 0x98e652u); SPILL(); f_995780(); if (g_unwind) return; RELOAD();
/* 98e652: mov ebx, eax */
  ebx = eax;
L_98e654: /* 98e654: cmp dword ptr [esi], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98e657: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 98e65f: jle 0x98e672 */
  if ((zf || sf != of)) goto L_98e672;
L_98e661: /* 98e661: cmp dword ptr [esi + 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98e665: jle 0x98e672 */
  if ((zf || sf != of)) goto L_98e672;
L_98e667: /* 98e667: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e669: mov ecx, edi */
  ecx = edi;
/* 98e66b: call 0x98d4e0 */
  esp -= 4; W32(esp, 0x98e670u); SPILL(); f_98d4e0(); if (g_unwind) return; RELOAD();
/* 98e670: jmp 0x98e67b */
  goto L_98e67b;
L_98e672: /* 98e672: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e673: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e674: mov ecx, edi */
  ecx = edi;
/* 98e676: call 0x98db70 */
  esp -= 4; W32(esp, 0x98e67bu); SPILL(); f_98db70(); if (g_unwind) return; RELOAD();
L_98e67b: /* 98e67b: cmp esi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e67f: je 0x98e691 */
  if (zf) goto L_98e691;
L_98e681: /* 98e681: mov ecx, esi */
  ecx = esi;
/* 98e683: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98e688u); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98e688: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e689: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e68eu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e68e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e691: /* 98e691: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e692: mov ecx, edi */
  ecx = edi;
/* 98e694: mov esi, ebx */
  esi = ebx;
/* 98e696: call 0x98d6e0 */
  esp -= 4; W32(esp, 0x98e69bu); SPILL(); f_98d6e0(); if (g_unwind) return; RELOAD();
/* 98e69b: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 98e69f: mov dword ptr [ebp + ecx*4 + 8], eax */
  W32((uint32_t)(ebp + ecx*4 + 0x8u), eax);
/* 98e6a3: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98e6a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e6a9: je 0x98e6b5 */
  if (zf) goto L_98e6b5;
L_98e6ab: /* 98e6ab: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98e6af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98e6b0: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x98e6b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 98e6b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e6b5: /* 98e6b5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98e6b9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e6ba: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98e6be: mov edx, eax */
  edx = eax;
/* 98e6c0: jmp 0x98e600 */
  goto L_98e600;
L_98e6c5: /* 98e6c5: cmp esi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e6c9: je 0x98e6df */
  if (zf) goto L_98e6df;
L_98e6cb: /* 98e6cb: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e6cd: je 0x98e6df */
  if (zf) goto L_98e6df;
L_98e6cf: /* 98e6cf: mov ecx, esi */
  ecx = esi;
/* 98e6d1: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98e6d6u); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98e6d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e6d7: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e6dcu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e6dc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e6df: /* 98e6df: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98e6e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98e6e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98e6e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98e6e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98e6e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98e6ee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e6f1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98e700(void) {
  LOAD_REGS();
L_98e700: /* 98e700: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e701: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 98e705: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98e709: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98e70d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e70e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98e712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e713: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98e717: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98e718: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e719: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e71a: call 0x98e0b0 */
  esp -= 4; W32(esp, 0x98e71fu); SPILL(); f_98e0b0(); if (g_unwind) return; RELOAD();
/* 98e71f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e722: ret  */
  esp += 4; SPILL(); return;
}

void f_98e730(void) {
  LOAD_REGS();
L_98e730: /* 98e730: ret  */
  esp += 4; SPILL(); return;
}

void f_98e740(void) {
  LOAD_REGS();
L_98e740: /* 98e740: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98e744: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98e748: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e749: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e74a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98e74e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e74f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e750: mov eax, esp */
  eax = esp;
/* 98e752: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e753: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 98e757: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 98e759: mov eax, esp */
  eax = esp;
/* 98e75b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98e75d: call 0x98e030 */
  esp -= 4; W32(esp, 0x98e762u); SPILL(); f_98e030(); if (g_unwind) return; RELOAD();
/* 98e762: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e765: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_98e770(void) {
  LOAD_REGS();
L_98e770: /* 98e770: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98e774: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e775: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 98e779: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e77a: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 98e77e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e77f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e780: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 98e784: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e785: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e786: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e787: call 0x98e0b0 */
  esp -= 4; W32(esp, 0x98e78cu); SPILL(); f_98e0b0(); if (g_unwind) return; RELOAD();
/* 98e78c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e78f: lea eax, [edi + esi*4] */
  eax = (uint32_t)(edi + esi*4);
/* 98e792: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98e793: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98e794: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_98e7a0(void) {
  LOAD_REGS();
L_98e7a0: /* 98e7a0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_98e7b0(void) {
  LOAD_REGS();
L_98e7b0: /* 98e7b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e7b1: mov esi, ecx */
  esi = ecx;
/* 98e7b3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98e7b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e7b8: je 0x98e7c3 */
  if (zf) goto L_98e7c3;
L_98e7ba: /* 98e7ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e7bb: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e7c0u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e7c0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e7c3: /* 98e7c3: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 98e7ca: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 98e7d1: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 98e7d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98e7d9: ret  */
  esp += 4; SPILL(); return;
}

void f_98e810(void) {
  LOAD_REGS();
L_98e810: /* 98e810: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e811: mov esi, ecx */
  esi = ecx;
/* 98e813: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98e816: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e818: je 0x98e823 */
  if (zf) goto L_98e823;
L_98e81a: /* 98e81a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e81b: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e820u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e820: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e823: /* 98e823: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 98e82a: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 98e831: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 98e838: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98e839: ret  */
  esp += 4; SPILL(); return;
}

void f_98e840(void) {
  LOAD_REGS();
L_98e840: /* 98e840: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98e842: push 0x9da45b */
  { uint32_t v = 0x9da45bu; esp -= 4; W32(esp, v); }
/* 98e847: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98e84d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e84e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98e855: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98e858: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98e859: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98e85a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e85b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98e85c: mov edi, ecx */
  edi = ecx;
/* 98e85e: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 98e862: xor ebp, ebp */
  ebp = 0;
/* 98e864: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 98e868: xor ebx, ebx */
  ebx = 0;
/* 98e86a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98e870: /* 98e870: mov esi, dword ptr [edi + ebx*4] */
  esi = R32((uint32_t)(edi + ebx*4));
/* 98e873: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e875: je 0x98e887 */
  if (zf) goto L_98e887;
L_98e877: /* 98e877: mov ecx, esi */
  ecx = esi;
/* 98e879: call 0x9956d0 */
  esp -= 4; W32(esp, 0x98e87eu); SPILL(); f_9956d0(); if (g_unwind) return; RELOAD();
/* 98e87e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e87f: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e884u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e884: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e887: /* 98e887: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 98e888: cmp ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98e88b: jl 0x98e870 */
  if ((sf != of)) goto L_98e870;
L_98e88d: /* 98e88d: mov edx, 1 */
  edx = 0x1u;
/* 98e892: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_98e896: /* 98e896: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 98e899: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e89b: je 0x98e8e9 */
  if (zf) goto L_98e8e9;
L_98e89d: /* 98e89d: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 98e8a0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e8a2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98e8a5: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98e8a7: jae 0x98e8e9 */
  if (!cf) goto L_98e8e9;
L_98e8a9: /* 98e8a9: mov eax, ecx */
  eax = ecx;
/* 98e8ab: mov ebp, dword ptr [eax + edx*4] */
  ebp = R32((uint32_t)(eax + edx*4));
/* 98e8ae: lea esi, [ebp + 8] */
  esi = (uint32_t)(ebp + 0x8u);
/* 98e8b1: mov ebx, 5 */
  ebx = 0x5u;
L_98e8b6: /* 98e8b6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98e8b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98e8ba: je 0x98e8cb */
  if (zf) goto L_98e8cb;
L_98e8bc: /* 98e8bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e8bd: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98e8c2u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98e8c2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e8c5: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_98e8cb: /* 98e8cb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98e8ce: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 98e8cf: jne 0x98e8b6 */
  if (!zf) goto L_98e8b6;
L_98e8d1: /* 98e8d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98e8d2: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e8d7u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e8d7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 98e8db: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e8de: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e8df: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98e8e3: mov edx, eax */
  edx = eax;
/* 98e8e5: xor ebp, ebp */
  ebp = 0;
/* 98e8e7: jmp 0x98e896 */
  goto L_98e896;
L_98e8e9: /* 98e8e9: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 98e8ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e8ed: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98e8f2u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98e8f2: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 98e8f5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 98e8f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e8f8: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e8fdu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e8fd: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 98e900: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e903: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e905: je 0x98e910 */
  if (zf) goto L_98e910;
L_98e907: /* 98e907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e908: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e90du); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e90d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e910: /* 98e910: mov dword ptr [edi + 0x3c], ebp */
  W32((uint32_t)(edi + 0x3cu), ebp);
/* 98e913: mov dword ptr [edi + 0x40], ebp */
  W32((uint32_t)(edi + 0x40u), ebp);
/* 98e916: mov dword ptr [edi + 0x44], ebp */
  W32((uint32_t)(edi + 0x44u), ebp);
/* 98e919: mov esi, dword ptr [edi + 0x34] */
  esi = R32((uint32_t)(edi + 0x34u));
/* 98e91c: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e91e: je 0x98e930 */
  if (zf) goto L_98e930;
L_98e920: /* 98e920: mov ecx, esi */
  ecx = esi;
/* 98e922: call 0x995fd0 */
  esp -= 4; W32(esp, 0x98e927u); SPILL(); f_995fd0(); if (g_unwind) return; RELOAD();
/* 98e927: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e928: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e92du); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e92d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e930: /* 98e930: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 98e933: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e935: je 0x98e940 */
  if (zf) goto L_98e940;
L_98e937: /* 98e937: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e938: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98e93du); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98e93d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98e940: /* 98e940: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 98e944: mov dword ptr [edi + 0x3c], ebp */
  W32((uint32_t)(edi + 0x3cu), ebp);
/* 98e947: mov dword ptr [edi + 0x40], ebp */
  W32((uint32_t)(edi + 0x40u), ebp);
/* 98e94a: mov dword ptr [edi + 0x44], ebp */
  W32((uint32_t)(edi + 0x44u), ebp);
/* 98e94d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98e94e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98e94f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98e950: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98e951: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98e958: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98e95b: ret  */
  esp += 4; SPILL(); return;
}

void f_98e960(void) {
  LOAD_REGS();
L_98e960: /* 98e960: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98e962: push 0x9da478 */
  { uint32_t v = 0x9da478u; esp -= 4; W32(esp, v); }
/* 98e967: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98e96d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e96e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98e975: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98e978: mov eax, 0xa21a50 */
  eax = 0xa21a50u;
/* 98e97d: mov dword ptr [esp + 0x18], 0xf */
  W32((uint32_t)(esp + 0x18u), 0xfu);
/* 98e985: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 98e98d: mov byte ptr [esp + 4], 0 */
  W8((uint32_t)(esp + 0x4u), 0x0u);
/* 98e992: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_98e995: /* 98e995: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 98e997: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98e998: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98e99a: jne 0x98e995 */
  if (!zf) goto L_98e995;
L_98e99c: /* 98e99c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98e99e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e99f: push 0xa21a50 */
  { uint32_t v = 0xa21a50u; esp -= 4; W32(esp, v); }
/* 98e9a4: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 98e9a8: call 0x988ee0 */
  esp -= 4; W32(esp, 0x98e9adu); SPILL(); f_988ee0(); if (g_unwind) return; RELOAD();
/* 98e9ad: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 98e9b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98e9b2: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 98e9b6: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 98e9be: call 0x989010 */
  esp -= 4; W32(esp, 0x98e9c3u); SPILL(); f_989010(); if (g_unwind) return; RELOAD();
/* 98e9c3: push 0xa61a68 */
  { uint32_t v = 0xa61a68u; esp -= 4; W32(esp, v); }
/* 98e9c8: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 98e9cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98e9cd: mov dword ptr [esp + 0x24], 0xa21c5c */
  W32((uint32_t)(esp + 0x24u), 0xa21c5cu);
/* 98e9d5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x98e9dau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_98e9da: guest_badaddr(0x98e9da); return;
}

void f_98e9e0(void) {
  LOAD_REGS();
L_98e9e0: /* 98e9e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98e9e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98e9e5: mov esi, ecx */
  esi = ecx;
/* 98e9e7: xor ecx, ecx */
  ecx = 0;
/* 98e9e9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98e9eb: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 98e9ee: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 98e9f1: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 98e9f4: jne 0x98e9fc */
  if (!zf) goto L_98e9fc;
L_98e9f6: /* 98e9f6: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 98e9f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98e9f9: ret 4 */
  esp += 8; SPILL(); return;
L_98e9fc: /* 98e9fc: cmp eax, 0x3fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98ea01: jbe 0x98ea10 */
  if ((cf | zf)) goto L_98ea10;
L_98ea03: /* 98ea03: mov ecx, esi */
  ecx = esi;
/* 98ea05: call 0x98e960 */
  esp -= 4; W32(esp, 0x98ea0au); SPILL(); f_98e960(); if (g_unwind) return; RELOAD();
/* 98ea0a: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 98ea0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ea0d: ret 4 */
  esp += 8; SPILL(); return;
L_98ea10: /* 98ea10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98ea11: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 98ea18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98ea19: call 0x6c242d */
  esp -= 4; W32(esp, 0x98ea1eu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98ea1e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98ea20: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98ea23: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 98ea26: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 98ea29: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 98ea2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ea2d: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 98ea2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ea30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98ea40(void) {
  LOAD_REGS();
L_98ea40: /* 98ea40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98ea41: mov ebp, esp */
  ebp = esp;
/* 98ea43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98ea45: push 0x9da490 */
  { uint32_t v = 0x9da490u; esp -= 4; W32(esp, v); }
/* 98ea4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98ea50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ea51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98ea58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98ea5b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 98ea5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98ea5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98ea60: mov esi, ecx */
  esi = ecx;
/* 98ea62: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 98ea64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98ea65: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 98ea68: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ea6a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 98ea6d: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 98ea70: jne 0x98ea76 */
  if (!zf) goto L_98ea76;
L_98ea72: /* 98ea72: xor eax, eax */
  eax = 0;
/* 98ea74: jmp 0x98ea7e */
  goto L_98ea7e;
L_98ea76: /* 98ea76: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 98ea79: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ea7b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_98ea7e: /* 98ea7e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98ea81: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ea83: je 0x98ecca */
  if (zf) goto L_98ecca;
L_98ea89: /* 98ea89: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ea8b: jne 0x98ea91 */
  if (!zf) goto L_98ea91;
L_98ea8d: /* 98ea8d: xor ecx, ecx */
  ecx = 0;
/* 98ea8f: jmp 0x98ea99 */
  goto L_98ea99;
L_98ea91: /* 98ea91: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 98ea94: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98ea96: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_98ea99: /* 98ea99: mov ebx, 0x3fffffff */
  ebx = 0x3fffffffu;
/* 98ea9e: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 98eaa0: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98eaa2: jae 0x98eabe */
  if (!cf) goto L_98eabe;
L_98eaa4: /* 98eaa4: mov ecx, esi */
  ecx = esi;
/* 98eaa6: call 0x98e960 */
  esp -= 4; W32(esp, 0x98eaabu); SPILL(); f_98e960(); if (g_unwind) return; RELOAD();
/* 98eaab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 98eaae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98eab5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98eab6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98eab7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98eab8: mov esp, ebp */
  esp = ebp;
/* 98eaba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98eabb: ret 0xc */
  esp += 16; SPILL(); return;
L_98eabe: /* 98eabe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98eac0: jne 0x98eac6 */
  if (!zf) goto L_98eac6;
L_98eac2: /* 98eac2: xor ecx, ecx */
  ecx = 0;
/* 98eac4: jmp 0x98eace */
  goto L_98eace;
L_98eac6: /* 98eac6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 98eac9: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98eacb: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_98eace: /* 98eace: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ead0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ead2: jae 0x98ebe8 */
  if (!cf) goto L_98ebe8;
L_98ead8: /* 98ead8: mov ecx, eax */
  ecx = eax;
/* 98eada: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98eadc: mov ebx, 0x3fffffff */
  ebx = 0x3fffffffu;
/* 98eae1: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 98eae3: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98eae5: jae 0x98eaeb */
  if (!cf) goto L_98eaeb;
L_98eae7: /* 98eae7: xor eax, eax */
  eax = 0;
/* 98eae9: jmp 0x98eaed */
  goto L_98eaed;
L_98eaeb: /* 98eaeb: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_98eaed: /* 98eaed: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98eaef: jne 0x98eaf5 */
  if (!zf) goto L_98eaf5;
L_98eaf1: /* 98eaf1: xor ecx, ecx */
  ecx = 0;
/* 98eaf3: jmp 0x98eafd */
  goto L_98eafd;
L_98eaf5: /* 98eaf5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 98eaf8: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98eafa: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_98eafd: /* 98eafd: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98eaff: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98eb01: jae 0x98eb15 */
  if (!cf) goto L_98eb15;
L_98eb03: /* 98eb03: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98eb05: jne 0x98eb0b */
  if (!zf) goto L_98eb0b;
L_98eb07: /* 98eb07: xor eax, eax */
  eax = 0;
/* 98eb09: jmp 0x98eb13 */
  goto L_98eb13;
L_98eb0b: /* 98eb0b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98eb0e: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98eb10: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_98eb13: /* 98eb13: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_98eb15: /* 98eb15: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98eb18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98eb19: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 98eb1c: call 0x6c242d */
  esp -= 4; W32(esp, 0x98eb21u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98eb21: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98eb24: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98eb27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98eb28: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 98eb2b: mov ebx, eax */
  ebx = eax;
/* 98eb2d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98eb30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98eb31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98eb32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98eb33: mov ecx, esp */
  ecx = esp;
/* 98eb35: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 98eb37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98eb38: mov ecx, esp */
  ecx = esp;
/* 98eb3a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 98eb3d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 98eb44: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98eb46: call 0x98e030 */
  esp -= 4; W32(esp, 0x98eb4bu); SPILL(); f_98e030(); if (g_unwind) return; RELOAD();
/* 98eb4b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98eb4e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98eb51: mov edi, eax */
  edi = eax;
/* 98eb53: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 98eb56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98eb57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98eb58: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 98eb5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98eb5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98eb5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98eb5e: call 0x98e0b0 */
  esp -= 4; W32(esp, 0x98eb63u); SPILL(); f_98e0b0(); if (g_unwind) return; RELOAD();
/* 98eb63: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 98eb66: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 98eb69: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 98eb6c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98eb6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98eb70: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 98eb73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98eb74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98eb75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98eb76: mov eax, esp */
  eax = esp;
/* 98eb78: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98eb7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98eb7b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98eb7e: mov eax, esp */
  eax = esp;
/* 98eb80: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98eb82: call 0x98e030 */
  esp -= 4; W32(esp, 0x98eb87u); SPILL(); f_98e030(); if (g_unwind) return; RELOAD();
/* 98eb87: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 98eb8a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98eb8d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98eb8f: jne 0x98eb95 */
  if (!zf) goto L_98eb95;
L_98eb91: /* 98eb91: xor eax, eax */
  eax = 0;
/* 98eb93: jmp 0x98eb9d */
  goto L_98eb9d;
L_98eb95: /* 98eb95: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98eb98: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98eb9a: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_98eb9d: /* 98eb9d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 98eba0: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98eba2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98eba4: je 0x98ebaf */
  if (zf) goto L_98ebaf;
L_98eba6: /* 98eba6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98eba7: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98ebacu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98ebac: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98ebaf: /* 98ebaf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 98ebb2: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98ebb4: lea eax, [ebx + edi*4] */
  eax = (uint32_t)(ebx + edi*4);
/* 98ebb7: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 98ebba: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 98ebbd: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 98ebc0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 98ebc3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98ebca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ebcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ebcc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ebcd: mov esp, ebp */
  esp = ebp;
/* 98ebcf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ebd0: ret 0xc */
  esp += 16; SPILL(); return;
L_98ebe8: /* 98ebe8: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 98ebeb: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 98ebee: mov eax, ebx */
  eax = ebx;
/* 98ebf0: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ebf2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98ebf5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ebf7: jae 0x98ec5a */
  if (!cf) goto L_98ec5a;
L_98ebf9: /* 98ebf9: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 98ec00: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 98ec03: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ec05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ec06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec07: mov eax, esp */
  eax = esp;
/* 98ec09: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 98ec0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec0d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 98ec0f: mov eax, esp */
  eax = esp;
/* 98ec11: mov ecx, esi */
  ecx = esi;
/* 98ec13: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 98ec16: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 98ec18: call 0x98e740 */
  esp -= 4; W32(esp, 0x98ec1du); SPILL(); f_98e740(); if (g_unwind) return; RELOAD();
/* 98ec1d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 98ec20: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 98ec23: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 98ec26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98ec27: mov edx, ecx */
  edx = ecx;
/* 98ec29: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 98ec2b: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98ec2e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ec30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ec31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec32: mov ecx, esi */
  ecx = esi;
/* 98ec34: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 98ec3b: call 0x98e770 */
  esp -= 4; W32(esp, 0x98ec40u); SPILL(); f_98e770(); if (g_unwind) return; RELOAD();
/* 98ec40: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 98ec43: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98ec46: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98ec48: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 98ec4b: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 98ec4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ec4f: mov esi, ebx */
  esi = ebx;
/* 98ec51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec52: mov eax, esp */
  eax = esp;
/* 98ec54: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98ec56: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 98ec58: jmp 0x98ecb7 */
  goto L_98ecb7;
L_98ec5a: /* 98ec5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98ec5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec5c: mov eax, esp */
  eax = esp;
/* 98ec5e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 98ec60: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 98ec63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec64: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98ec67: mov ecx, esp */
  ecx = esp;
/* 98ec69: mov eax, ebx */
  eax = ebx;
/* 98ec6b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ec6d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ec6f: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 98ec72: mov ecx, esi */
  ecx = esi;
/* 98ec74: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 98ec77: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 98ec7a: call 0x98e740 */
  esp -= 4; W32(esp, 0x98ec7fu); SPILL(); f_98e740(); if (g_unwind) return; RELOAD();
/* 98ec7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec80: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 98ec83: mov eax, esp */
  eax = esp;
/* 98ec85: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 98ec88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec89: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98ec8c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 98ec8e: mov eax, esp */
  eax = esp;
/* 98ec90: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 98ec93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec94: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98ec96: mov eax, esp */
  eax = esp;
/* 98ec98: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 98ec9b: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 98ec9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98ec9f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 98eca1: call 0x98e080 */
  esp -= 4; W32(esp, 0x98eca6u); SPILL(); f_98e080(); if (g_unwind) return; RELOAD();
/* 98eca6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98eca9: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 98ecac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ecad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ecae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98ecb1: mov eax, esp */
  eax = esp;
/* 98ecb3: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ecb5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_98ecb7: /* 98ecb7: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 98ecba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ecbb: mov eax, esp */
  eax = esp;
/* 98ecbd: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 98ecbf: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 98ecc2: call 0x98e060 */
  esp -= 4; W32(esp, 0x98ecc7u); SPILL(); f_98e060(); if (g_unwind) return; RELOAD();
/* 98ecc7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98ecca: /* 98ecca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 98eccd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ecce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98eccf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98ecd6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ecd7: mov esp, ebp */
  esp = ebp;
/* 98ecd9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ecda: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_98ebd3(void) {
  LOAD_REGS();
L_98ebd3: /* 98ebd3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 98ebd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ebd7: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98ebdcu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98ebdc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
  SPILL(); f_98ebdf(); return;
}

void f_98ebdf(void) {
  LOAD_REGS();
L_98ebdf: /* 98ebdf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98ebe1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 98ebe3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x98ebe8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 98ebe8: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 98ebeb: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 98ebee: mov eax, ebx */
  eax = ebx;
/* 98ebf0: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ebf2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98ebf5: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ebf7: jae 0x98ec5a */
  if (!cf) goto L_98ec5a;
L_98ebf9: /* 98ebf9: lea eax, [edx*4] */
  eax = (uint32_t)(edx*4);
/* 98ec00: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 98ec03: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98ec05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ec06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec07: mov eax, esp */
  eax = esp;
/* 98ec09: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 98ec0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec0d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 98ec0f: mov eax, esp */
  eax = esp;
/* 98ec11: mov ecx, esi */
  ecx = esi;
/* 98ec13: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 98ec16: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 98ec18: call 0x98e740 */
  esp -= 4; W32(esp, 0x98ec1du); SPILL(); f_98e740(); if (g_unwind) return; RELOAD();
/* 98ec1d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 98ec20: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 98ec23: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 98ec26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98ec27: mov edx, ecx */
  edx = ecx;
/* 98ec29: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 98ec2b: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 98ec2e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ec30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ec31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec32: mov ecx, esi */
  ecx = esi;
/* 98ec34: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 98ec3b: call 0x98e770 */
  esp -= 4; W32(esp, 0x98ec40u); SPILL(); f_98e770(); if (g_unwind) return; RELOAD();
/* 98ec40: mov ebx, dword ptr [esi + 8] */
  ebx = R32((uint32_t)(esi + 0x8u));
/* 98ec43: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98ec46: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98ec48: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 98ec4b: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 98ec4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ec4f: mov esi, ebx */
  esi = ebx;
/* 98ec51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec52: mov eax, esp */
  eax = esp;
/* 98ec54: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 98ec56: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 98ec58: jmp 0x98ecb7 */
  goto L_98ecb7;
L_98ec5a: /* 98ec5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98ec5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec5c: mov eax, esp */
  eax = esp;
/* 98ec5e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 98ec60: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 98ec63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec64: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98ec67: mov ecx, esp */
  ecx = esp;
/* 98ec69: mov eax, ebx */
  eax = ebx;
/* 98ec6b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ec6d: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ec6f: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 98ec72: mov ecx, esi */
  ecx = esi;
/* 98ec74: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 98ec77: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 98ec7a: call 0x98e740 */
  esp -= 4; W32(esp, 0x98ec7fu); SPILL(); f_98e740(); if (g_unwind) return; RELOAD();
/* 98ec7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec80: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 98ec83: mov eax, esp */
  eax = esp;
/* 98ec85: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 98ec88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec89: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 98ec8c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 98ec8e: mov eax, esp */
  eax = esp;
/* 98ec90: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 98ec93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ec94: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 98ec96: mov eax, esp */
  eax = esp;
/* 98ec98: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 98ec9b: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 98ec9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98ec9f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 98eca1: call 0x98e080 */
  esp -= 4; W32(esp, 0x98eca6u); SPILL(); f_98e080(); if (g_unwind) return; RELOAD();
/* 98eca6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98eca9: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 98ecac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ecad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ecae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 98ecb1: mov eax, esp */
  eax = esp;
/* 98ecb3: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98ecb5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_98ecb7: /* 98ecb7: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 98ecba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ecbb: mov eax, esp */
  eax = esp;
/* 98ecbd: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 98ecbf: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 98ecc2: call 0x98e060 */
  esp -= 4; W32(esp, 0x98ecc7u); SPILL(); f_98e060(); if (g_unwind) return; RELOAD();
/* 98ecc7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98ecca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 98eccd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ecce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98eccf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98ecd6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98ecd7: mov esp, ebp */
  esp = ebp;
/* 98ecd9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98ecda: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_98ece0(void) {
  LOAD_REGS();
L_98ece0: /* 98ece0: mov eax, ecx */
  eax = ecx;
/* 98ece2: xor ecx, ecx */
  ecx = 0;
/* 98ece4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 98ece7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 98ecea: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 98eced: ret  */
  esp += 4; SPILL(); return;
}

void f_98ecf0(void) {
  LOAD_REGS();
L_98ecf0: /* 98ecf0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 98ecf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98ecf5: mov esi, ecx */
  esi = ecx;
/* 98ecf7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 98ecfa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ecfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98ecfd: je 0x98ed0b */
  if (zf) goto L_98ed0b;
L_98ecff: /* 98ecff: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98ed02: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ed04: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98ed07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ed09: jne 0x98ed0f */
  if (!zf) goto L_98ed0f;
L_98ed0b: /* 98ed0b: xor edi, edi */
  edi = 0;
/* 98ed0d: jmp 0x98ed16 */
  goto L_98ed16;
L_98ed0f: /* 98ed0f: mov edi, edx */
  edi = edx;
/* 98ed11: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 98ed13: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
L_98ed16: /* 98ed16: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 98ed1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ed1b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98ed1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ed1e: mov eax, esp */
  eax = esp;
/* 98ed20: mov ecx, esi */
  ecx = esi;
/* 98ed22: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 98ed24: call 0x98ea40 */
  esp -= 4; W32(esp, 0x98ed29u); SPILL(); f_98ea40(); if (g_unwind) return; RELOAD();
/* 98ed29: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 98ed2c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98ed30: lea edx, [ecx + edi*4] */
  edx = (uint32_t)(ecx + edi*4);
/* 98ed33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ed34: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 98ed36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ed37: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_98ed40(void) {
  LOAD_REGS();
L_98ed40: /* 98ed40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98ed41: mov esi, ecx */
  esi = ecx;
/* 98ed43: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 98ed46: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ed48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98ed49: jne 0x98ed4f */
  if (!zf) goto L_98ed4f;
L_98ed4b: /* 98ed4b: xor ecx, ecx */
  ecx = 0;
/* 98ed4d: jmp 0x98ed57 */
  goto L_98ed57;
L_98ed4f: /* 98ed4f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 98ed52: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98ed54: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_98ed57: /* 98ed57: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ed59: je 0x98ed8b */
  if (zf) goto L_98ed8b;
L_98ed5b: /* 98ed5b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 98ed5e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ed60: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98ed63: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ed65: jae 0x98ed8b */
  if (!cf) goto L_98ed8b;
L_98ed67: /* 98ed67: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98ed6b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 98ed6f: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 98ed72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ed73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98ed74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ed75: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98ed77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98ed78: call 0x98e0b0 */
  esp -= 4; W32(esp, 0x98ed7du); SPILL(); f_98e0b0(); if (g_unwind) return; RELOAD();
/* 98ed7d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98ed80: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98ed83: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 98ed86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98ed87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98ed88: ret 4 */
  esp += 8; SPILL(); return;
L_98ed8b: /* 98ed8b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 98ed8f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98ed92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98ed93: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98ed95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ed96: mov ecx, esp */
  ecx = esp;
/* 98ed98: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ed9a: mov ecx, esi */
  ecx = esi;
/* 98ed9c: call 0x98ea40 */
  esp -= 4; W32(esp, 0x98eda1u); SPILL(); f_98ea40(); if (g_unwind) return; RELOAD();
/* 98eda1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98eda2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98eda3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_98edb0(void) {
  LOAD_REGS();
L_98edb0: /* 98edb0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98edb3: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 98edb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98edb7: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 98edba: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98edbb: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 98edbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98edbe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98edbf: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 98edc3: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 98edc7: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 98edcf: lea edi, [ecx + 0x38] */
  edi = (uint32_t)(ecx + 0x38u);
L_98edd2: /* 98edd2: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 98edd4: call 0x6c242d */
  esp -= 4; W32(esp, 0x98edd9u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98edd9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98eddc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98edde: je 0x98edf5 */
  if (zf) goto L_98edf5;
L_98ede0: /* 98ede0: xor ecx, ecx */
  ecx = 0;
/* 98ede2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 98ede5: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 98ede8: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 98edeb: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 98edee: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 98edf1: mov esi, eax */
  esi = eax;
/* 98edf3: jmp 0x98edf7 */
  goto L_98edf7;
L_98edf5: /* 98edf5: xor esi, esi */
  esi = 0;
L_98edf7: /* 98edf7: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 98edfa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98edfc: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 98ee00: jne 0x98ee06 */
  if (!zf) goto L_98ee06;
L_98ee02: /* 98ee02: xor ecx, ecx */
  ecx = 0;
/* 98ee04: jmp 0x98ee0e */
  goto L_98ee0e;
L_98ee06: /* 98ee06: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 98ee09: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98ee0b: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_98ee0e: /* 98ee0e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ee10: je 0x98ee43 */
  if (zf) goto L_98ee43;
L_98ee12: /* 98ee12: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 98ee15: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ee17: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98ee1a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98ee1c: jae 0x98ee43 */
  if (!cf) goto L_98ee43;
L_98ee1e: /* 98ee1e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 98ee22: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 98ee25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98ee26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98ee27: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 98ee2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ee2c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98ee2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98ee2f: call 0x98e0b0 */
  esp -= 4; W32(esp, 0x98ee34u); SPILL(); f_98e0b0(); if (g_unwind) return; RELOAD();
/* 98ee34: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98ee37: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98ee3a: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 98ee3d: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98ee41: jmp 0x98ee59 */
  goto L_98ee59;
L_98ee43: /* 98ee43: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 98ee46: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98ee4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ee4b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98ee4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98ee4e: mov ecx, esp */
  ecx = esp;
/* 98ee50: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 98ee52: mov ecx, edi */
  ecx = edi;
/* 98ee54: call 0x98ea40 */
  esp -= 4; W32(esp, 0x98ee59u); SPILL(); f_98ea40(); if (g_unwind) return; RELOAD();
L_98ee59: /* 98ee59: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98ee5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98ee5f: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 98ee61: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 98ee64: jne 0x98ee88 */
  if (!zf) goto L_98ee88;
L_98ee66: /* 98ee66: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 98ee6a: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 98ee6d: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 98ee70: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 98ee73: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 98ee76: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 98ee79: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 98ee7c: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 98ee7f: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 98ee82: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 98ee85: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
L_98ee88: /* 98ee88: lea eax, [ebp + 1] */
  eax = (uint32_t)(ebp + 0x1u);
/* 98ee8b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98ee8c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ee8e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98ee90: mov ecx, ebp */
  ecx = ebp;
/* 98ee92: mov ebp, eax */
  ebp = eax;
/* 98ee94: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 98ee97: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98ee98: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98ee9a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98ee9c: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ee9f: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 98eea3: jne 0x98eeb1 */
  if (!zf) goto L_98eeb1;
L_98eea5: /* 98eea5: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98eea7: jne 0x98eeb1 */
  if (!zf) goto L_98eeb1;
L_98eea9: /* 98eea9: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98eeab: jne 0x98eeb1 */
  if (!zf) goto L_98eeb1;
L_98eead: /* 98eead: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98eeaf: je 0x98eec3 */
  if (zf) goto L_98eec3;
L_98eeb1: /* 98eeb1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 98eeb5: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98eeb9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98eeba: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 98eebe: jmp 0x98edd2 */
  goto L_98edd2;
L_98eec3: /* 98eec3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98eec4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98eec5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98eec6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98eec7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98eeca: ret  */
  esp += 4; SPILL(); return;
}

void f_98eed0(void) {
  LOAD_REGS();
L_98eed0: /* 98eed0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98eed2: push 0x9da4b6 */
  { uint32_t v = 0x9da4b6u; esp -= 4; W32(esp, v); }
/* 98eed7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98eedd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98eede: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98eee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98eee6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98eee7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98eee8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98eee9: mov esi, ecx */
  esi = ecx;
/* 98eeeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98eeec: xor edi, edi */
  edi = 0;
/* 98eeee: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 98eef2: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 98eef5: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* 98eef8: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* 98eefb: mov eax, edi */
  eax = edi;
/* 98eefd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98eeff: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 98ef03: je 0x98ef0e */
  if (zf) goto L_98ef0e;
L_98ef05: /* 98ef05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ef06: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98ef0bu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98ef0b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98ef0e: /* 98ef0e: mov ecx, esi */
  ecx = esi;
/* 98ef10: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 98ef13: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* 98ef16: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* 98ef19: call 0x98d400 */
  esp -= 4; W32(esp, 0x98ef1eu); SPILL(); f_98d400(); if (g_unwind) return; RELOAD();
/* 98ef1e: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 98ef22: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 98ef26: mov eax, ebp */
  eax = ebp;
/* 98ef28: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 98ef2b: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98ef2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98ef2f: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x98ef34u); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 98ef34: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 98ef38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98ef3b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98ef3d: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 98ef40: jle 0x98ef99 */
  if ((zf || sf != of)) goto L_98ef99;
L_98ef42: /* 98ef42: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 98ef46: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98ef4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98ef50: /* 98ef50: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98ef52: mov ecx, edi */
  ecx = edi;
/* 98ef54: jle 0x98ef8f */
  if ((zf || sf != of)) goto L_98ef8f;
L_98ef56: /* 98ef56: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 98ef5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98ef60: /* 98ef60: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98ef62: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98ef64: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 98ef67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ef68: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ef69: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98ef6b: mov bl, byte ptr [ecx + 1] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 98ef6e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ef6f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ef70: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98ef72: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ef73: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ef74: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98ef77: jne 0x98ef81 */
  if (!zf) goto L_98ef81;
L_98ef79: /* 98ef79: mov bl, byte ptr [ecx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98ef7b: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 98ef7d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98ef7e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98ef7f: jmp 0x98ef85 */
  goto L_98ef85;
L_98ef81: /* 98ef81: mov byte ptr [eax], 0xff */
  W8((uint32_t)(eax), 0xffu);
/* 98ef84: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_98ef85: /* 98ef85: dec dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 98ef89: jne 0x98ef60 */
  if (!zf) goto L_98ef60;
L_98ef8b: /* 98ef8b: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
L_98ef8f: /* 98ef8f: add edi, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98ef93: dec dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x24u), r);
  }
/* 98ef97: jne 0x98ef50 */
  if (!zf) goto L_98ef50;
L_98ef99: /* 98ef99: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 98ef9b: call 0x6c242d */
  esp -= 4; W32(esp, 0x98efa0u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 98efa0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98efa3: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 98efa7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98efa9: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 98efae: je 0x98efbb */
  if (zf) goto L_98efbb;
L_98efb0: /* 98efb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98efb1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98efb2: mov ecx, eax */
  ecx = eax;
/* 98efb4: call 0x995780 */
  esp -= 4; W32(esp, 0x98efb9u); SPILL(); f_995780(); if (g_unwind) return; RELOAD();
/* 98efb9: jmp 0x98efbd */
  goto L_98efbd;
L_98efbb: /* 98efbb: xor eax, eax */
  eax = 0;
L_98efbd: /* 98efbd: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 98efc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98efc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98efc2: mov ecx, esi */
  ecx = esi;
/* 98efc4: mov byte ptr [esp + 0x24], 0 */
  W8((uint32_t)(esp + 0x24u), 0x0u);
/* 98efc9: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 98efcc: call 0x98da70 */
  esp -= 4; W32(esp, 0x98efd1u); SPILL(); f_98da70(); if (g_unwind) return; RELOAD();
/* 98efd1: mov ecx, esi */
  ecx = esi;
/* 98efd3: call 0x98edb0 */
  esp -= 4; W32(esp, 0x98efd8u); SPILL(); f_98edb0(); if (g_unwind) return; RELOAD();
/* 98efd8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 98efdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98efdd: mov eax, esi */
  eax = esi;
/* 98efdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98efe0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98efe1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98efe2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98efe9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98efec: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_98eff0(void) {
  LOAD_REGS();
L_98eff0: /* 98eff0: xor eax, eax */
  eax = 0;
/* 98eff2: ret  */
  esp += 4; SPILL(); return;
}

void f_98f000(void) {
  LOAD_REGS();
L_98f000: /* 98f000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f001: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f002: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f003: push 0xa21ac8 */
  { uint32_t v = 0xa21ac8u; esp -= 4; W32(esp, v); }
/* 98f008: call 0x99cea6 */
  esp -= 4; W32(esp, 0x98f00du); SPILL(); f_99cea6(); if (g_unwind) return; RELOAD();
/* 98f00d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f010: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98f012: call 0x99ced6 */
  esp -= 4; W32(esp, 0x98f017u); SPILL(); f_99ced6(); if (g_unwind) return; RELOAD();
L_98f017: guest_badaddr(0x98f017); return;
}

void f_98f020(void) {
  LOAD_REGS();
L_98f020: /* 98f020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f021: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f022: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 98f024: call 0x99cf4e */
  esp -= 4; W32(esp, 0x98f029u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 98f029: mov esi, eax */
  esi = eax;
/* 98f02b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f02e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f030: jne 0x98f043 */
  if (!zf) goto L_98f043;
L_98f032: /* 98f032: mov eax, 0xcf308c */
  eax = 0xcf308cu;
/* 98f037: mov ecx, eax */
  ecx = eax;
/* 98f039: mov edx, 0xa21ad4 */
  edx = 0xa21ad4u;
/* 98f03e: call 0x98f000 */
  esp -= 4; W32(esp, 0x98f043u); SPILL(); f_98f000(); if (g_unwind) return; RELOAD();
L_98f043: /* 98f043: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 98f047: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 98f04b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 98f04d: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 98f050: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98f053: mov edi, eax */
  edi = eax;
/* 98f055: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f056: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 98f059: call 0x99cf4e */
  esp -= 4; W32(esp, 0x98f05eu); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 98f05e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f061: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f063: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 98f066: jne 0x98f079 */
  if (!zf) goto L_98f079;
L_98f068: /* 98f068: mov eax, 0xcf308c */
  eax = 0xcf308cu;
/* 98f06d: mov ecx, eax */
  ecx = eax;
/* 98f06f: mov edx, 0xa21ad4 */
  edx = 0xa21ad4u;
/* 98f074: call 0x98f000 */
  esp -= 4; W32(esp, 0x98f079u); SPILL(); f_98f000(); if (g_unwind) return; RELOAD();
L_98f079: /* 98f079: mov ecx, edi */
  ecx = edi;
/* 98f07b: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* 98f07e: mov edx, ecx */
  edx = ecx;
/* 98f080: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 98f083: xor eax, eax */
  eax = 0;
/* 98f085: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 98f087: mov ecx, edx */
  ecx = edx;
/* 98f089: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 98f08c: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 98f08e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98f08f: mov eax, esi */
  eax = esi;
/* 98f091: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f092: ret  */
  esp += 4; SPILL(); return;
}

void f_98f0a0(void) {
  LOAD_REGS();
L_98f0a0: /* 98f0a0: mov dl, byte ptr [esp + 0xc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* 98f0a4: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f0a6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98f0aa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 98f0ae: je 0x98f0c4 */
  if (zf) goto L_98f0c4;
L_98f0b0: /* 98f0b0: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f0b3: jge 0x98f0ba */
  if ((sf == of)) goto L_98f0ba;
L_98f0b5: /* 98f0b5: mov eax, 4 */
  eax = 0x4u;
L_98f0ba: /* 98f0ba: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f0bd: jge 0x98f0c4 */
  if ((sf == of)) goto L_98f0c4;
L_98f0bf: /* 98f0bf: mov ecx, 4 */
  ecx = 0x4u;
L_98f0c4: /* 98f0c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f0c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f0c6: call 0x98f020 */
  esp -= 4; W32(esp, 0x98f0cbu); SPILL(); f_98f020(); if (g_unwind) return; RELOAD();
/* 98f0cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f0ce: ret  */
  esp += 4; SPILL(); return;
}

void f_98f0d0(void) {
  LOAD_REGS();
L_98f0d0: /* 98f0d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f0d1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 98f0d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f0d7: je 0x98f0f2 */
  if (zf) goto L_98f0f2;
L_98f0d9: /* 98f0d9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f0dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f0de: je 0x98f0e9 */
  if (zf) goto L_98f0e9;
L_98f0e0: /* 98f0e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f0e1: call 0x99cf5a */
  esp -= 4; W32(esp, 0x98f0e6u); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 98f0e6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f0e9: /* 98f0e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f0ea: call 0x99cf5a */
  esp -= 4; W32(esp, 0x98f0efu); SPILL(); f_99cf5a(); if (g_unwind) return; RELOAD();
/* 98f0ef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f0f2: /* 98f0f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f0f3: ret  */
  esp += 4; SPILL(); return;
}

void f_98f100(void) {
  LOAD_REGS();
L_98f100: /* 98f100: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98f103: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 98f107: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98f10a: mov cl, byte ptr [esp + 0x2c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x2cu))) & 0xffu);
/* 98f10e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f10f: mov ebp, dword ptr [eax + 0x340] */
  ebp = R32((uint32_t)(eax + 0x340u));
/* 98f115: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f116: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 98f11a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f11b: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
/* 98f11f: add ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 98f121: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f123: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 98f127: mov eax, edi */
  eax = edi;
/* 98f129: je 0x98f135 */
  if (zf) goto L_98f135;
L_98f12b: /* 98f12b: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f12e: jge 0x98f135 */
  if ((sf == of)) goto L_98f135;
L_98f130: /* 98f130: mov eax, 4 */
  eax = 0x4u;
L_98f135: /* 98f135: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 98f139: xor ecx, ecx */
  ecx = 0;
/* 98f13b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f13d: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 98f141: jle 0x98f415 */
  if ((zf || sf != of)) goto L_98f415;
L_98f147: /* 98f147: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98f14b: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 98f14e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 98f152: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 98f156: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f157: jmp 0x98f160 */
  goto L_98f160;
L_98f160: /* 98f160: xor ebx, ebx */
  ebx = 0;
/* 98f162: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98f164: jle 0x98f3e6 */
  if ((zf || sf != of)) goto L_98f3e6;
L_98f16a: /* 98f16a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 98f16e: mov edi, edi */
  edi = edi;
L_98f170: /* 98f170: mov al, byte ptr [edx + 0x23a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23a4u))) & 0xffu);
/* 98f176: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f178: je 0x98f28e */
  if (zf) goto L_98f28e;
L_98f17e: /* 98f17e: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f181: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 98f184: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f185: mov byte ptr [esp + 0x3c], al */
  W8((uint32_t)(esp + 0x3cu), (eax & 0xffu));
/* 98f189: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f18c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f18d: mov byte ptr [esp + 0x3d], al */
  W8((uint32_t)(esp + 0x3du), (eax & 0xffu));
/* 98f191: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f194: mov byte ptr [esp + 0x3e], al */
  W8((uint32_t)(esp + 0x3eu), (eax & 0xffu));
/* 98f198: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f199: cmp word ptr [edx + 0x34], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + 0x34u))); uint16_t b = (uint16_t)(0x4u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98f19e: jne 0x98f1aa */
  if (!zf) goto L_98f1aa;
L_98f1a0: /* 98f1a0: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f1a3: mov byte ptr [esp + 0x3f], al */
  W8((uint32_t)(esp + 0x3fu), (eax & 0xffu));
/* 98f1a7: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f1a8: jmp 0x98f1af */
  goto L_98f1af;
L_98f1aa: /* 98f1aa: mov byte ptr [esp + 0x3f], 0xff */
  W8((uint32_t)(esp + 0x3fu), 0xffu);
L_98f1af: /* 98f1af: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 98f1b3: add eax, -0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98f1b6: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98f1b9: ja 0x98f27e */
  if ((!cf && !zf)) goto L_98f27e;
L_98f1bf: /* 98f1bf: movzx edx, byte ptr [eax + 0x98f430] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x98f430u)));
/* 98f1c6: jmp dword ptr [edx*4 + 0x98f41c] */
  switch (R32((uint32_t)(edx*4 + 0x98f41cu))) {
    case 0x98f1cdu: goto L_98f1cd;
    case 0x98f1f8u: goto L_98f1f8;
    case 0x98f223u: goto L_98f223;
    case 0x98f24eu: goto L_98f24e;
    case 0x98f276u: goto L_98f276;
    default: guest_badjump(0x98f1c6, R32((uint32_t)(edx*4 + 0x98f41cu))); return;
  }
L_98f1cd: /* 98f1cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f1ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f1cf: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 98f1d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f1d4: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 98f1d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f1d9: call 0x98cbd0 */
  esp -= 4; W32(esp, 0x98f1deu); SPILL(); f_98cbd0(); if (g_unwind) return; RELOAD();
/* 98f1de: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98f1e2: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f1e5: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98f1e9: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* 98f1ec: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 98f1f0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f1f3: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f1f8: /* 98f1f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f1f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f1fa: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 98f1fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f1ff: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 98f203: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f204: call 0x98c8f0 */
  esp -= 4; W32(esp, 0x98f209u); SPILL(); f_98c8f0(); if (g_unwind) return; RELOAD();
/* 98f209: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98f20d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f210: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98f214: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* 98f217: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 98f21b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f21e: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f223: /* 98f223: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f224: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f225: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98f229: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f22a: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 98f22e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f22f: call 0x98cad0 */
  esp -= 4; W32(esp, 0x98f234u); SPILL(); f_98cad0(); if (g_unwind) return; RELOAD();
/* 98f234: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98f238: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f23b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98f23f: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* 98f242: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 98f246: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f249: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f24e: /* 98f24e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f24f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f250: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 98f254: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f255: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 98f259: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f25a: call 0x98c5e0 */
  esp -= 4; W32(esp, 0x98f25fu); SPILL(); f_98c5e0(); if (g_unwind) return; RELOAD();
/* 98f25f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98f263: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f266: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98f26a: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* 98f26d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 98f271: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f274: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f276: /* 98f276: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 98f27a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_98f27e: /* 98f27e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98f282: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f285: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* 98f288: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 98f28c: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f28e: /* 98f28e: mov dl, byte ptr [ebp] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f291: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f294: mov byte ptr [edi + eax], dl */
  W8((uint32_t)(edi + eax), (edx & 0xffu));
/* 98f297: mov dl, byte ptr [ebp + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x1u))) & 0xffu);
/* 98f29a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f29d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f29e: mov byte ptr [edi + eax + 1], dl */
  W8((uint32_t)(edi + eax + 0x1u), (edx & 0xffu));
/* 98f2a2: mov dl, byte ptr [ebp + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x1u))) & 0xffu);
/* 98f2a5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f2a8: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f2a9: mov byte ptr [edi + eax + 2], dl */
  W8((uint32_t)(edi + eax + 0x2u), (edx & 0xffu));
/* 98f2ad: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 98f2b1: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98f2b4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f2b5: cmp word ptr [eax + 0x34], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x34u))); uint16_t b = (uint16_t)(0x4u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98f2ba: jne 0x98f2cd */
  if (!zf) goto L_98f2cd;
L_98f2bc: /* 98f2bc: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 98f2bf: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f2c2: mov byte ptr [edi + edx + 3], al */
  W8((uint32_t)(edi + edx + 0x3u), (eax & 0xffu));
/* 98f2c6: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 98f2ca: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f2cb: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f2cd: /* 98f2cd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f2d0: mov byte ptr [edi + eax + 3], 0xff */
  W8((uint32_t)(edi + eax + 0x3u), 0xffu);
L_98f2d5: /* 98f2d5: mov al, byte ptr [edx + 0x2387] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2387u))) & 0xffu);
/* 98f2db: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f2dd: je 0x98f2fe */
  if (zf) goto L_98f2fe;
L_98f2df: /* 98f2df: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f2e1: je 0x98f2f6 */
  if (zf) goto L_98f2f6;
L_98f2e3: /* 98f2e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f2e5: je 0x98f2f6 */
  if (zf) goto L_98f2f6;
L_98f2e7: /* 98f2e7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98f2e9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f2ea: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f2ec: je 0x98f2f6 */
  if (zf) goto L_98f2f6;
L_98f2ee: /* 98f2ee: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98f2f1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f2f2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f2f4: jne 0x98f2fe */
  if (!zf) goto L_98f2fe;
L_98f2f6: /* 98f2f6: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f2f9: mov byte ptr [edi + eax + 3], 0 */
  W8((uint32_t)(edi + eax + 0x3u), 0x0u);
L_98f2fe: /* 98f2fe: mov al, byte ptr [edx + 0x2388] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2388u))) & 0xffu);
/* 98f304: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f306: je 0x98f37f */
  if (zf) goto L_98f37f;
L_98f308: /* 98f308: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f30a: je 0x98f31f */
  if (zf) goto L_98f31f;
L_98f30c: /* 98f30c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f30e: je 0x98f31f */
  if (zf) goto L_98f31f;
L_98f310: /* 98f310: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98f312: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f313: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f315: je 0x98f31f */
  if (zf) goto L_98f31f;
L_98f317: /* 98f317: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98f31a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f31b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f31d: jne 0x98f32f */
  if (!zf) goto L_98f32f;
L_98f31f: /* 98f31f: mov dl, byte ptr [edx + 0x238c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x238cu))) & 0xffu);
/* 98f325: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f328: mov byte ptr [edi + eax], dl */
  W8((uint32_t)(edi + eax), (edx & 0xffu));
/* 98f32b: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_98f32f: /* 98f32f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f331: je 0x98f346 */
  if (zf) goto L_98f346;
L_98f333: /* 98f333: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f335: je 0x98f346 */
  if (zf) goto L_98f346;
L_98f337: /* 98f337: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98f339: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f33a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f33c: je 0x98f346 */
  if (zf) goto L_98f346;
L_98f33e: /* 98f33e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98f341: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f342: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f344: jne 0x98f357 */
  if (!zf) goto L_98f357;
L_98f346: /* 98f346: mov dl, byte ptr [edx + 0x238d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x238du))) & 0xffu);
/* 98f34c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f34f: mov byte ptr [edi + eax + 1], dl */
  W8((uint32_t)(edi + eax + 0x1u), (edx & 0xffu));
/* 98f353: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_98f357: /* 98f357: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f359: je 0x98f36e */
  if (zf) goto L_98f36e;
L_98f35b: /* 98f35b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f35d: je 0x98f36e */
  if (zf) goto L_98f36e;
L_98f35f: /* 98f35f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98f361: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f362: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f364: je 0x98f36e */
  if (zf) goto L_98f36e;
L_98f366: /* 98f366: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98f369: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f36a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f36c: jne 0x98f37f */
  if (!zf) goto L_98f37f;
L_98f36e: /* 98f36e: mov dl, byte ptr [edx + 0x238e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x238eu))) & 0xffu);
/* 98f374: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f377: mov byte ptr [edi + eax + 2], dl */
  W8((uint32_t)(edi + eax + 0x2u), (edx & 0xffu));
/* 98f37b: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_98f37f: /* 98f37f: mov al, byte ptr [edx + 0x2384] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2384u))) & 0xffu);
/* 98f385: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f387: je 0x98f3a8 */
  if (zf) goto L_98f3a8;
L_98f389: /* 98f389: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f38c: mov dl, byte ptr [edi + eax + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x3u))) & 0xffu);
/* 98f390: lea eax, [edi + eax + 3] */
  eax = (uint32_t)(edi + eax + 0x3u);
/* 98f394: cmp dl, 0x7f */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 98f397: setb dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 98f39a: dec dl */
  { uint8_t a = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98f39c: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98f3a2: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98f3a4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_98f3a8: /* 98f3a8: mov al, byte ptr [edx + 0x23ac] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23acu))) & 0xffu);
/* 98f3ae: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f3b0: je 0x98f3d0 */
  if (zf) goto L_98f3d0;
L_98f3b2: /* 98f3b2: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f3b5: mov dl, byte ptr [eax + edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi + 0x2u))) & 0xffu);
/* 98f3b9: movzx ecx, byte ptr [eax + edi] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi)));
/* 98f3bd: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98f3bf: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98f3c1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f3c4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 98f3c8: mov byte ptr [edi + eax + 2], cl */
  W8((uint32_t)(edi + eax + 0x2u), (ecx & 0xffu));
/* 98f3cc: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
L_98f3d0: /* 98f3d0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98f3d4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 98f3d5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98f3d8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f3da: jl 0x98f170 */
  if ((sf != of)) goto L_98f170;
L_98f3e0: /* 98f3e0: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 98f3e4: mov edi, eax */
  edi = eax;
L_98f3e6: /* 98f3e6: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98f3e9: mov ebx, dword ptr [eax + 0x354] */
  ebx = R32((uint32_t)(eax + 0x354u));
/* 98f3ef: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 98f3f3: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 98f3f5: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98f3f9: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98f3fb: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98f3ff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98f400: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f402: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 98f406: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 98f40a: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 98f40e: jl 0x98f160 */
  if ((sf != of)) goto L_98f160;
L_98f414: /* 98f414: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_98f415: /* 98f415: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98f416: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f417: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98f418: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f41b: ret  */
  esp += 4; SPILL(); return;
}

void f_98f159(void) {
  LOAD_REGS();
L_98f159: /* 98f159: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98f160: /* 98f160: xor ebx, ebx */
  ebx = 0;
/* 98f162: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98f164: jle 0x98f3e6 */
  if ((zf || sf != of)) goto L_98f3e6;
L_98f16a: /* 98f16a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 98f16e: mov edi, edi */
  edi = edi;
L_98f170: /* 98f170: mov al, byte ptr [edx + 0x23a4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23a4u))) & 0xffu);
/* 98f176: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f178: je 0x98f28e */
  if (zf) goto L_98f28e;
L_98f17e: /* 98f17e: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f181: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 98f184: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f185: mov byte ptr [esp + 0x3c], al */
  W8((uint32_t)(esp + 0x3cu), (eax & 0xffu));
/* 98f189: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f18c: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f18d: mov byte ptr [esp + 0x3d], al */
  W8((uint32_t)(esp + 0x3du), (eax & 0xffu));
/* 98f191: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f194: mov byte ptr [esp + 0x3e], al */
  W8((uint32_t)(esp + 0x3eu), (eax & 0xffu));
/* 98f198: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f199: cmp word ptr [edx + 0x34], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + 0x34u))); uint16_t b = (uint16_t)(0x4u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98f19e: jne 0x98f1aa */
  if (!zf) goto L_98f1aa;
L_98f1a0: /* 98f1a0: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f1a3: mov byte ptr [esp + 0x3f], al */
  W8((uint32_t)(esp + 0x3fu), (eax & 0xffu));
/* 98f1a7: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f1a8: jmp 0x98f1af */
  goto L_98f1af;
L_98f1aa: /* 98f1aa: mov byte ptr [esp + 0x3f], 0xff */
  W8((uint32_t)(esp + 0x3fu), 0xffu);
L_98f1af: /* 98f1af: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 98f1b3: add eax, -0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98f1b6: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98f1b9: ja 0x98f27e */
  if ((!cf && !zf)) goto L_98f27e;
L_98f1bf: /* 98f1bf: movzx edx, byte ptr [eax + 0x98f430] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x98f430u)));
/* 98f1c6: jmp dword ptr [edx*4 + 0x98f41c] */
  switch (R32((uint32_t)(edx*4 + 0x98f41cu))) {
    case 0x98f1cdu: goto L_98f1cd;
    case 0x98f1f8u: goto L_98f1f8;
    case 0x98f223u: goto L_98f223;
    case 0x98f24eu: goto L_98f24e;
    case 0x98f276u: goto L_98f276;
    default: guest_badjump(0x98f1c6, R32((uint32_t)(edx*4 + 0x98f41cu))); return;
  }
L_98f1cd: /* 98f1cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f1ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f1cf: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 98f1d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f1d4: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 98f1d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f1d9: call 0x98cbd0 */
  esp -= 4; W32(esp, 0x98f1deu); SPILL(); f_98cbd0(); if (g_unwind) return; RELOAD();
/* 98f1de: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98f1e2: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f1e5: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98f1e9: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* 98f1ec: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 98f1f0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f1f3: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f1f8: /* 98f1f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f1f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f1fa: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 98f1fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f1ff: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 98f203: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f204: call 0x98c8f0 */
  esp -= 4; W32(esp, 0x98f209u); SPILL(); f_98c8f0(); if (g_unwind) return; RELOAD();
/* 98f209: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98f20d: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f210: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98f214: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* 98f217: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 98f21b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f21e: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f223: /* 98f223: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f224: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f225: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 98f229: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f22a: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* 98f22e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f22f: call 0x98cad0 */
  esp -= 4; W32(esp, 0x98f234u); SPILL(); f_98cad0(); if (g_unwind) return; RELOAD();
/* 98f234: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98f238: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f23b: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98f23f: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* 98f242: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 98f246: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f249: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f24e: /* 98f24e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f24f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f250: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 98f254: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f255: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 98f259: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f25a: call 0x98c5e0 */
  esp -= 4; W32(esp, 0x98f25fu); SPILL(); f_98c5e0(); if (g_unwind) return; RELOAD();
/* 98f25f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 98f263: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f266: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 98f26a: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* 98f26d: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 98f271: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f274: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f276: /* 98f276: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 98f27a: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_98f27e: /* 98f27e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 98f282: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f285: mov dword ptr [edi + eax], edx */
  W32((uint32_t)(edi + eax), edx);
/* 98f288: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 98f28c: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f28e: /* 98f28e: mov dl, byte ptr [ebp] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f291: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f294: mov byte ptr [edi + eax], dl */
  W8((uint32_t)(edi + eax), (edx & 0xffu));
/* 98f297: mov dl, byte ptr [ebp + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x1u))) & 0xffu);
/* 98f29a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f29d: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f29e: mov byte ptr [edi + eax + 1], dl */
  W8((uint32_t)(edi + eax + 0x1u), (edx & 0xffu));
/* 98f2a2: mov dl, byte ptr [ebp + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x1u))) & 0xffu);
/* 98f2a5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f2a8: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f2a9: mov byte ptr [edi + eax + 2], dl */
  W8((uint32_t)(edi + eax + 0x2u), (edx & 0xffu));
/* 98f2ad: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 98f2b1: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98f2b4: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f2b5: cmp word ptr [eax + 0x34], 4 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x34u))); uint16_t b = (uint16_t)(0x4u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 98f2ba: jne 0x98f2cd */
  if (!zf) goto L_98f2cd;
L_98f2bc: /* 98f2bc: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 98f2bf: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 98f2c2: mov byte ptr [edi + edx + 3], al */
  W8((uint32_t)(edi + edx + 0x3u), (eax & 0xffu));
/* 98f2c6: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 98f2ca: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 98f2cb: jmp 0x98f2d5 */
  goto L_98f2d5;
L_98f2cd: /* 98f2cd: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f2d0: mov byte ptr [edi + eax + 3], 0xff */
  W8((uint32_t)(edi + eax + 0x3u), 0xffu);
L_98f2d5: /* 98f2d5: mov al, byte ptr [edx + 0x2387] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2387u))) & 0xffu);
/* 98f2db: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f2dd: je 0x98f2fe */
  if (zf) goto L_98f2fe;
L_98f2df: /* 98f2df: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f2e1: je 0x98f2f6 */
  if (zf) goto L_98f2f6;
L_98f2e3: /* 98f2e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f2e5: je 0x98f2f6 */
  if (zf) goto L_98f2f6;
L_98f2e7: /* 98f2e7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98f2e9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f2ea: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f2ec: je 0x98f2f6 */
  if (zf) goto L_98f2f6;
L_98f2ee: /* 98f2ee: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98f2f1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f2f2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f2f4: jne 0x98f2fe */
  if (!zf) goto L_98f2fe;
L_98f2f6: /* 98f2f6: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f2f9: mov byte ptr [edi + eax + 3], 0 */
  W8((uint32_t)(edi + eax + 0x3u), 0x0u);
L_98f2fe: /* 98f2fe: mov al, byte ptr [edx + 0x2388] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2388u))) & 0xffu);
/* 98f304: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f306: je 0x98f37f */
  if (zf) goto L_98f37f;
L_98f308: /* 98f308: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f30a: je 0x98f31f */
  if (zf) goto L_98f31f;
L_98f30c: /* 98f30c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f30e: je 0x98f31f */
  if (zf) goto L_98f31f;
L_98f310: /* 98f310: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98f312: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f313: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f315: je 0x98f31f */
  if (zf) goto L_98f31f;
L_98f317: /* 98f317: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98f31a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f31b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f31d: jne 0x98f32f */
  if (!zf) goto L_98f32f;
L_98f31f: /* 98f31f: mov dl, byte ptr [edx + 0x238c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x238cu))) & 0xffu);
/* 98f325: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f328: mov byte ptr [edi + eax], dl */
  W8((uint32_t)(edi + eax), (edx & 0xffu));
/* 98f32b: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_98f32f: /* 98f32f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f331: je 0x98f346 */
  if (zf) goto L_98f346;
L_98f333: /* 98f333: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f335: je 0x98f346 */
  if (zf) goto L_98f346;
L_98f337: /* 98f337: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98f339: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f33a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f33c: je 0x98f346 */
  if (zf) goto L_98f346;
L_98f33e: /* 98f33e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98f341: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f342: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f344: jne 0x98f357 */
  if (!zf) goto L_98f357;
L_98f346: /* 98f346: mov dl, byte ptr [edx + 0x238d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x238du))) & 0xffu);
/* 98f34c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f34f: mov byte ptr [edi + eax + 1], dl */
  W8((uint32_t)(edi + eax + 0x1u), (edx & 0xffu));
/* 98f353: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_98f357: /* 98f357: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f359: je 0x98f36e */
  if (zf) goto L_98f36e;
L_98f35b: /* 98f35b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f35d: je 0x98f36e */
  if (zf) goto L_98f36e;
L_98f35f: /* 98f35f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 98f361: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f362: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f364: je 0x98f36e */
  if (zf) goto L_98f36e;
L_98f366: /* 98f366: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 98f369: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 98f36a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f36c: jne 0x98f37f */
  if (!zf) goto L_98f37f;
L_98f36e: /* 98f36e: mov dl, byte ptr [edx + 0x238e] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x238eu))) & 0xffu);
/* 98f374: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f377: mov byte ptr [edi + eax + 2], dl */
  W8((uint32_t)(edi + eax + 0x2u), (edx & 0xffu));
/* 98f37b: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_98f37f: /* 98f37f: mov al, byte ptr [edx + 0x2384] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x2384u))) & 0xffu);
/* 98f385: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f387: je 0x98f3a8 */
  if (zf) goto L_98f3a8;
L_98f389: /* 98f389: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f38c: mov dl, byte ptr [edi + eax + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax + 0x3u))) & 0xffu);
/* 98f390: lea eax, [edi + eax + 3] */
  eax = (uint32_t)(edi + eax + 0x3u);
/* 98f394: cmp dl, 0x7f */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 98f397: setb dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((cf) ? 1 : 0) & 0xffu);
/* 98f39a: dec dl */
  { uint8_t a = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 98f39c: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 98f3a2: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98f3a4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
L_98f3a8: /* 98f3a8: mov al, byte ptr [edx + 0x23ac] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x23acu))) & 0xffu);
/* 98f3ae: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98f3b0: je 0x98f3d0 */
  if (zf) goto L_98f3d0;
L_98f3b2: /* 98f3b2: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f3b5: mov dl, byte ptr [eax + edi + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edi + 0x2u))) & 0xffu);
/* 98f3b9: movzx ecx, byte ptr [eax + edi] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi)));
/* 98f3bd: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98f3bf: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98f3c1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 98f3c4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 98f3c8: mov byte ptr [edi + eax + 2], cl */
  W8((uint32_t)(edi + eax + 0x2u), (ecx & 0xffu));
/* 98f3cc: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
L_98f3d0: /* 98f3d0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98f3d4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 98f3d5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98f3d8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f3da: jl 0x98f170 */
  if ((sf != of)) goto L_98f170;
L_98f3e0: /* 98f3e0: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 98f3e4: mov edi, eax */
  edi = eax;
L_98f3e6: /* 98f3e6: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 98f3e9: mov ebx, dword ptr [eax + 0x354] */
  ebx = R32((uint32_t)(eax + 0x354u));
/* 98f3ef: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 98f3f3: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 98f3f5: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 98f3f9: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 98f3fb: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 98f3ff: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98f400: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f402: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 98f406: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 98f40a: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 98f40e: jl 0x98f160 */
  if ((sf != of)) goto L_98f160;
L_98f414: /* 98f414: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98f415: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98f416: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f417: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98f418: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f41b: ret  */
  esp += 4; SPILL(); return;
}

void f_98f440(void) {
  LOAD_REGS();
L_98f440: /* 98f440: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f441: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 98f443: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 98f448: call 0x98f020 */
  esp -= 4; W32(esp, 0x98f44du); SPILL(); f_98f020(); if (g_unwind) return; RELOAD();
/* 98f44d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98f450: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f453: xor edx, edx */
  edx = 0;
/* 98f455: xor edi, edi */
  edi = 0;
/* 98f457: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98f459: jle 0x98f49d */
  if ((zf || sf != of)) goto L_98f49d;
L_98f45b: /* 98f45b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f45c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f45d: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 98f45f: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
L_98f461: /* 98f461: xor ecx, ecx */
  ecx = 0;
/* 98f463: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98f465: jle 0x98f493 */
  if ((zf || sf != of)) goto L_98f493;
L_98f467: /* 98f467: jmp 0x98f470 */
  goto L_98f470;
L_98f470: /* 98f470: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98f473: mov byte ptr [esi + edx*4 + 2], cl */
  W8((uint32_t)(esi + edx*4 + 0x2u), (ecx & 0xffu));
/* 98f477: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98f47a: mov byte ptr [esi + edx*4 + 1], cl */
  W8((uint32_t)(esi + edx*4 + 0x1u), (ecx & 0xffu));
/* 98f47e: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98f481: mov byte ptr [esi + edx*4], cl */
  W8((uint32_t)(esi + edx*4), (ecx & 0xffu));
/* 98f484: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98f487: mov byte ptr [esi + edx*4 + 3], bl */
  W8((uint32_t)(esi + edx*4 + 0x3u), (ebx & 0xffu));
/* 98f48b: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 98f48d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98f48e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98f48f: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f491: jl 0x98f470 */
  if ((sf != of)) goto L_98f470;
L_98f493: /* 98f493: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98f496: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98f497: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f499: jl 0x98f461 */
  if ((sf != of)) goto L_98f461;
L_98f49b: /* 98f49b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f49c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_98f49d: /* 98f49d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98f49e: ret  */
  esp += 4; SPILL(); return;
}

void f_98f469(void) {
  LOAD_REGS();
  goto L_98f469;
L_98f461: /* 98f461: xor ecx, ecx */
  ecx = 0;
/* 98f463: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98f465: jle 0x98f493 */
  if ((zf || sf != of)) goto L_98f493;
L_98f467: /* 98f467: jmp 0x98f470 */
  goto L_98f470;
L_98f469: /* 98f469: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98f470: /* 98f470: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98f473: mov byte ptr [esi + edx*4 + 2], cl */
  W8((uint32_t)(esi + edx*4 + 0x2u), (ecx & 0xffu));
/* 98f477: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98f47a: mov byte ptr [esi + edx*4 + 1], cl */
  W8((uint32_t)(esi + edx*4 + 0x1u), (ecx & 0xffu));
/* 98f47e: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98f481: mov byte ptr [esi + edx*4], cl */
  W8((uint32_t)(esi + edx*4), (ecx & 0xffu));
/* 98f484: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 98f487: mov byte ptr [esi + edx*4 + 3], bl */
  W8((uint32_t)(esi + edx*4 + 0x3u), (ebx & 0xffu));
/* 98f48b: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 98f48d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 98f48e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98f48f: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f491: jl 0x98f470 */
  if ((sf != of)) goto L_98f470;
L_98f493: /* 98f493: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 98f496: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98f497: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f499: jl 0x98f461 */
  if ((sf != of)) goto L_98f461;
L_98f49b: /* 98f49b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f49c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98f49d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98f49e: ret  */
  esp += 4; SPILL(); return;
}

void f_98f4a0(void) {
  LOAD_REGS();
L_98f4a0: /* 98f4a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98f4a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f4a5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98f4a7: call 0x99cf54 */
  esp -= 4; W32(esp, 0x98f4acu); SPILL(); f_99cf54(); if (g_unwind) return; RELOAD();
/* 98f4ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f4af: ret  */
  esp += 4; SPILL(); return;
}

void f_98f4b0(void) {
  LOAD_REGS();
L_98f4b0: /* 98f4b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98f4b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f4b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f4b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f4b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f4b8: push 0xa21b30 */
  { uint32_t v = 0xa21b30u; esp -= 4; W32(esp, v); }
/* 98f4bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f4be: call 0x99cc56 */
  esp -= 4; W32(esp, 0x98f4c3u); SPILL(); f_99cc56(); if (g_unwind) return; RELOAD();
/* 98f4c3: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 98f4c7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 98f4ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f4cb: mov ebx, eax */
  ebx = eax;
/* 98f4cd: push 0xa21b1c */
  { uint32_t v = 0xa21b1cu; esp -= 4; W32(esp, v); }
/* 98f4d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f4d3: call 0x99cf48 */
  esp -= 4; W32(esp, 0x98f4d8u); SPILL(); f_99cf48(); if (g_unwind) return; RELOAD();
/* 98f4d8: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 98f4db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f4dc: push 0xa21b0c */
  { uint32_t v = 0xa21b0cu; esp -= 4; W32(esp, v); }
/* 98f4e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f4e2: call 0x99cf48 */
  esp -= 4; W32(esp, 0x98f4e7u); SPILL(); f_99cf48(); if (g_unwind) return; RELOAD();
/* 98f4e7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 98f4ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f4eb: push 0xa21b00 */
  { uint32_t v = 0xa21b00u; esp -= 4; W32(esp, v); }
/* 98f4f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f4f1: call 0x99cf48 */
  esp -= 4; W32(esp, 0x98f4f6u); SPILL(); f_99cf48(); if (g_unwind) return; RELOAD();
/* 98f4f6: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 98f4f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f4fa: push 0xa21af4 */
  { uint32_t v = 0xa21af4u; esp -= 4; W32(esp, v); }
/* 98f4ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f500: call 0x99cf48 */
  esp -= 4; W32(esp, 0x98f505u); SPILL(); f_99cf48(); if (g_unwind) return; RELOAD();
/* 98f505: mov ebp, dword ptr [esi + 8] */
  ebp = R32((uint32_t)(esi + 0x8u));
/* 98f508: imul ebp, dword ptr [esi + 0xc] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0xcu)));
  ebp = (uint32_t)r;
  }
/* 98f50c: imul ebp, dword ptr [esi + 4] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x4u)));
  ebp = (uint32_t)r;
  }
/* 98f510: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f513: xor edi, edi */
  edi = 0;
L_98f515: /* 98f515: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 98f518: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f51a: je 0x98f55b */
  if (zf) goto L_98f55b;
L_98f51c: /* 98f51c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 98f51f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98f521: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 98f524: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98f526: jae 0x98f55b */
  if (!cf) goto L_98f55b;
L_98f528: /* 98f528: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98f52a: jle 0x98f543 */
  if ((zf || sf != of)) goto L_98f543;
L_98f52c: /* 98f52c: mov eax, edi */
  eax = edi;
/* 98f52e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98f52f: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x98f52f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 98f531: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 98f533: jne 0x98f543 */
  if (!zf) goto L_98f543;
L_98f535: /* 98f535: push 0xa21af0 */
  { uint32_t v = 0xa21af0u; esp -= 4; W32(esp, v); }
/* 98f53a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f53b: call 0x99cf48 */
  esp -= 4; W32(esp, 0x98f540u); SPILL(); f_99cf48(); if (g_unwind) return; RELOAD();
/* 98f540: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f543: /* 98f543: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 98f546: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 98f549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f54a: push 0xa21ae8 */
  { uint32_t v = 0xa21ae8u; esp -= 4; W32(esp, v); }
/* 98f54f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f550: call 0x99cf48 */
  esp -= 4; W32(esp, 0x98f555u); SPILL(); f_99cf48(); if (g_unwind) return; RELOAD();
/* 98f555: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f558: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 98f559: jmp 0x98f515 */
  goto L_98f515;
L_98f55b: /* 98f55b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f55c: call 0x99cf66 */
  esp -= 4; W32(esp, 0x98f561u); SPILL(); f_99cf66(); if (g_unwind) return; RELOAD();
/* 98f561: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f564: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98f565: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f566: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98f567: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98f568: ret  */
  esp += 4; SPILL(); return;
}

void f_98f5a0(void) {
  LOAD_REGS();
L_98f5a0: /* 98f5a0: mov eax, ecx */
  eax = ecx;
/* 98f5a2: xor ecx, ecx */
  ecx = 0;
/* 98f5a4: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 98f5a7: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 98f5aa: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 98f5ad: ret  */
  esp += 4; SPILL(); return;
}

void f_98f5b0(void) {
  LOAD_REGS();
L_98f5b0: /* 98f5b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 98f5b2: push 0x9da4d8 */
  { uint32_t v = 0x9da4d8u; esp -= 4; W32(esp, v); }
/* 98f5b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 98f5bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f5be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 98f5c5: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98f5c8: mov cl, byte ptr [esp + 0x98] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x98u))) & 0xffu);
/* 98f5cf: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 98f5d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f5d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f5d8: mov ebp, dword ptr [esp + 0x88] */
  ebp = R32((uint32_t)(esp + 0x88u));
/* 98f5df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f5e0: mov esi, dword ptr [esp + 0x88] */
  esi = R32((uint32_t)(esp + 0x88u));
/* 98f5e7: xor ebx, ebx */
  ebx = 0;
/* 98f5e9: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98f5eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f5ec: mov edi, dword ptr [esp + 0x88] */
  edi = R32((uint32_t)(esp + 0x88u));
/* 98f5f3: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 98f5f7: mov dword ptr [esp + 0x94], eax */
  W32((uint32_t)(esp + 0x94u), eax);
/* 98f5fe: je 0x98f67e */
  if (zf) goto L_98f67e;
L_98f600: /* 98f600: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f603: jne 0x98f67e */
  if (!zf) goto L_98f67e;
L_98f605: /* 98f605: mov eax, esi */
  eax = esi;
/* 98f607: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 98f60a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 98f60d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f60e: mov dword ptr [esp + 0x98], 3 */
  W32((uint32_t)(esp + 0x98u), 0x3u);
/* 98f619: call 0x6c8b11 */
  esp -= 4; W32(esp, 0x98f61eu); SPILL(); f_6c8b11(); if (g_unwind) return; RELOAD();
/* 98f61e: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 98f625: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f628: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f62a: mov edi, eax */
  edi = eax;
/* 98f62c: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 98f630: jle 0x98f67e */
  if ((zf || sf != of)) goto L_98f67e;
L_98f632: /* 98f632: mov dword ptr [esp + 0x88], ebp */
  W32((uint32_t)(esp + 0x88u), ebp);
/* 98f639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98f640: /* 98f640: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f642: jle 0x98f675 */
  if ((zf || sf != of)) goto L_98f675;
L_98f644: /* 98f644: mov dword ptr [esp + 0xa8], esi */
  W32((uint32_t)(esp + 0xa8u), esi);
/* 98f64b: jmp 0x98f650 */
  goto L_98f650;
L_98f650: /* 98f650: mov dl, byte ptr [ecx + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x2u))) & 0xffu);
/* 98f653: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98f655: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 98f658: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98f659: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98f65b: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98f65d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98f65e: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98f660: mov edx, dword ptr [esp + 0xa8] */
  edx = R32((uint32_t)(esp + 0xa8u));
/* 98f667: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98f668: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98f66b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98f66c: mov dword ptr [esp + 0xa8], edx */
  W32((uint32_t)(esp + 0xa8u), edx);
/* 98f673: jne 0x98f650 */
  if (!zf) goto L_98f650;
L_98f675: /* 98f675: dec dword ptr [esp + 0x88] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x88u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x88u), r);
  }
/* 98f67c: jne 0x98f640 */
  if (!zf) goto L_98f640;
L_98f67e: /* 98f67e: cmp byte ptr [esp + 0xa4], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0xa4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98f685: je 0x98f6bb */
  if (zf) goto L_98f6bb;
L_98f687: /* 98f687: cmp dword ptr [esp + 0x94], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x94u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f68f: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 98f696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f697: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f699: jne 0x98f6b0 */
  if (!zf) goto L_98f6b0;
L_98f69b: /* 98f69b: mov eax, dword ptr [esp + 0xa8] */
  eax = R32((uint32_t)(esp + 0xa8u));
/* 98f6a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f6a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f6a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f6a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f6a6: call 0x9986c0 */
  esp -= 4; W32(esp, 0x98f6abu); SPILL(); f_9986c0(); if (g_unwind) return; RELOAD();
/* 98f6ab: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f6ae: jmp 0x98f6bb */
  goto L_98f6bb;
L_98f6b0: /* 98f6b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f6b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f6b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f6b3: call 0x998ce0 */
  esp -= 4; W32(esp, 0x98f6b8u); SPILL(); f_998ce0(); if (g_unwind) return; RELOAD();
/* 98f6b8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f6bb: /* 98f6bb: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 98f6bf: mov dword ptr [esp + 0x58], ebx */
  W32((uint32_t)(esp + 0x58u), ebx);
/* 98f6c3: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 98f6c7: mov dword ptr [esp + 0x60], ebx */
  W32((uint32_t)(esp + 0x60u), ebx);
/* 98f6cb: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 98f6cf: mov dword ptr [esp + 0x80], ebx */
  W32((uint32_t)(esp + 0x80u), ebx);
/* 98f6d6: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 98f6da: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 98f6de: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 98f6e2: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 98f6e6: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 98f6ea: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 98f6f1: push 0x1000000 */
  { uint32_t v = 0x1000000u; esp -= 4; W32(esp, v); }
/* 98f6f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98f6f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98f6fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f6fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f6fc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f6fd: lea edx, [esp + 0x6c] */
  edx = (uint32_t)(esp + 0x6cu);
/* 98f701: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f702: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f703: mov byte ptr [esp + 0xa0], 2 */
  W8((uint32_t)(esp + 0xa0u), 0x2u);
/* 98f70b: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 98f70f: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 98f713: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 98f717: mov dword ptr [esp + 0x8c], ebx */
  W32((uint32_t)(esp + 0x8cu), ebx);
/* 98f71e: mov dword ptr [esp + 0x90], ebx */
  W32((uint32_t)(esp + 0x90u), ebx);
/* 98f725: mov dword ptr [esp + 0x94], ebx */
  W32((uint32_t)(esp + 0x94u), ebx);
/* 98f72c: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* 98f730: mov dword ptr [esp + 0x6c], ebx */
  W32((uint32_t)(esp + 0x6cu), ebx);
/* 98f734: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 98f738: call 0x998630 */
  esp -= 4; W32(esp, 0x98f73du); SPILL(); f_998630(); if (g_unwind) return; RELOAD();
/* 98f73d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f73e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f73f: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 98f743: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f744: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 98f74b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f74c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f74d: call 0x997510 */
  esp -= 4; W32(esp, 0x98f752u); SPILL(); f_997510(); if (g_unwind) return; RELOAD();
/* 98f752: mov eax, dword ptr [esp + 0xcc] */
  eax = R32((uint32_t)(esp + 0xccu));
/* 98f759: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 98f75c: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f75f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f761: jne 0x98f787 */
  if (!zf) goto L_98f787;
L_98f763: /* 98f763: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 98f76a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 98f76f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98f771: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98f773: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f774: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f775: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f778: call 0x998630 */
  esp -= 4; W32(esp, 0x98f77du); SPILL(); f_998630(); if (g_unwind) return; RELOAD();
/* 98f77d: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 98f784: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f787: /* 98f787: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 98f78b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f78c: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 98f790: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f791: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f792: call 0x9973b0 */
  esp -= 4; W32(esp, 0x98f797u); SPILL(); f_9973b0(); if (g_unwind) return; RELOAD();
/* 98f797: imul esi, ebp */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebp);
  esi = (uint32_t)r;
  }
/* 98f79a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f79b: call 0x99cf4e */
  esp -= 4; W32(esp, 0x98f7a0u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 98f7a0: mov esi, eax */
  esi = eax;
/* 98f7a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f7a3: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 98f7a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f7a8: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 98f7ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f7ad: call 0x9968f0 */
  esp -= 4; W32(esp, 0x98f7b2u); SPILL(); f_9968f0(); if (g_unwind) return; RELOAD();
/* 98f7b2: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98f7b6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f7b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f7bb: je 0x98f7c6 */
  if (zf) goto L_98f7c6;
L_98f7bd: /* 98f7bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f7be: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98f7c3u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98f7c3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f7c6: /* 98f7c6: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 98f7ca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f7cc: je 0x98f7d7 */
  if (zf) goto L_98f7d7;
L_98f7ce: /* 98f7ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f7cf: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98f7d4u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98f7d4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f7d7: /* 98f7d7: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 98f7db: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f7dd: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 98f7e1: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 98f7e5: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 98f7e9: je 0x98f7f4 */
  if (zf) goto L_98f7f4;
L_98f7eb: /* 98f7eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f7ec: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98f7f1u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98f7f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f7f4: /* 98f7f4: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 98f7f8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f7fa: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98f7fe: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 98f802: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 98f806: je 0x98f811 */
  if (zf) goto L_98f811;
L_98f808: /* 98f808: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f809: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98f80eu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98f80e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f811: /* 98f811: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 98f815: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98f816: mov eax, esi */
  eax = esi;
/* 98f818: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f819: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98f81a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98f81b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98f822: add esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f825: ret  */
  esp += 4; SPILL(); return;
}

void f_98f64d(void) {
  LOAD_REGS();
  goto L_98f64d;
L_98f640: /* 98f640: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f642: jle 0x98f675 */
  if ((zf || sf != of)) goto L_98f675;
L_98f644: /* 98f644: mov dword ptr [esp + 0xa8], esi */
  W32((uint32_t)(esp + 0xa8u), esi);
/* 98f64b: jmp 0x98f650 */
  goto L_98f650;
L_98f64d: /* 98f64d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98f650: /* 98f650: mov dl, byte ptr [ecx + 2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x2u))) & 0xffu);
/* 98f653: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98f655: mov dl, byte ptr [ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x1u))) & 0xffu);
/* 98f658: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98f659: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98f65b: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 98f65d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98f65e: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 98f660: mov edx, dword ptr [esp + 0xa8] */
  edx = R32((uint32_t)(esp + 0xa8u));
/* 98f667: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98f668: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98f66b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98f66c: mov dword ptr [esp + 0xa8], edx */
  W32((uint32_t)(esp + 0xa8u), edx);
/* 98f673: jne 0x98f650 */
  if (!zf) goto L_98f650;
L_98f675: /* 98f675: dec dword ptr [esp + 0x88] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x88u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x88u), r);
  }
/* 98f67c: jne 0x98f640 */
  if (!zf) goto L_98f640;
L_98f67e: /* 98f67e: cmp byte ptr [esp + 0xa4], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0xa4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 98f685: je 0x98f6bb */
  if (zf) goto L_98f6bb;
L_98f687: /* 98f687: cmp dword ptr [esp + 0x94], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x94u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f68f: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 98f696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f697: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f699: jne 0x98f6b0 */
  if (!zf) goto L_98f6b0;
L_98f69b: /* 98f69b: mov eax, dword ptr [esp + 0xa8] */
  eax = R32((uint32_t)(esp + 0xa8u));
/* 98f6a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f6a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f6a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f6a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f6a6: call 0x9986c0 */
  esp -= 4; W32(esp, 0x98f6abu); SPILL(); f_9986c0(); if (g_unwind) return; RELOAD();
/* 98f6ab: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f6ae: jmp 0x98f6bb */
  goto L_98f6bb;
L_98f6b0: /* 98f6b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f6b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f6b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f6b3: call 0x998ce0 */
  esp -= 4; W32(esp, 0x98f6b8u); SPILL(); f_998ce0(); if (g_unwind) return; RELOAD();
/* 98f6b8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f6bb: /* 98f6bb: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* 98f6bf: mov dword ptr [esp + 0x58], ebx */
  W32((uint32_t)(esp + 0x58u), ebx);
/* 98f6c3: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 98f6c7: mov dword ptr [esp + 0x60], ebx */
  W32((uint32_t)(esp + 0x60u), ebx);
/* 98f6cb: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 98f6cf: mov dword ptr [esp + 0x80], ebx */
  W32((uint32_t)(esp + 0x80u), ebx);
/* 98f6d6: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 98f6da: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 98f6de: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 98f6e2: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 98f6e6: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 98f6ea: mov ecx, dword ptr [esp + 0x94] */
  ecx = R32((uint32_t)(esp + 0x94u));
/* 98f6f1: push 0x1000000 */
  { uint32_t v = 0x1000000u; esp -= 4; W32(esp, v); }
/* 98f6f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98f6f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98f6fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f6fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f6fc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f6fd: lea edx, [esp + 0x6c] */
  edx = (uint32_t)(esp + 0x6cu);
/* 98f701: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f702: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f703: mov byte ptr [esp + 0xa0], 2 */
  W8((uint32_t)(esp + 0xa0u), 0x2u);
/* 98f70b: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 98f70f: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 98f713: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 98f717: mov dword ptr [esp + 0x8c], ebx */
  W32((uint32_t)(esp + 0x8cu), ebx);
/* 98f71e: mov dword ptr [esp + 0x90], ebx */
  W32((uint32_t)(esp + 0x90u), ebx);
/* 98f725: mov dword ptr [esp + 0x94], ebx */
  W32((uint32_t)(esp + 0x94u), ebx);
/* 98f72c: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* 98f730: mov dword ptr [esp + 0x6c], ebx */
  W32((uint32_t)(esp + 0x6cu), ebx);
/* 98f734: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 98f738: call 0x998630 */
  esp -= 4; W32(esp, 0x98f73du); SPILL(); f_998630(); if (g_unwind) return; RELOAD();
/* 98f73d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f73e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f73f: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 98f743: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f744: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 98f74b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f74c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f74d: call 0x997510 */
  esp -= 4; W32(esp, 0x98f752u); SPILL(); f_997510(); if (g_unwind) return; RELOAD();
/* 98f752: mov eax, dword ptr [esp + 0xcc] */
  eax = R32((uint32_t)(esp + 0xccu));
/* 98f759: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 98f75c: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f75f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f761: jne 0x98f787 */
  if (!zf) goto L_98f787;
L_98f763: /* 98f763: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 98f76a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 98f76f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98f771: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 98f773: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f774: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f775: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f778: call 0x998630 */
  esp -= 4; W32(esp, 0x98f77du); SPILL(); f_998630(); if (g_unwind) return; RELOAD();
/* 98f77d: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 98f784: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f787: /* 98f787: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 98f78b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f78c: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 98f790: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 98f791: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f792: call 0x9973b0 */
  esp -= 4; W32(esp, 0x98f797u); SPILL(); f_9973b0(); if (g_unwind) return; RELOAD();
/* 98f797: imul esi, ebp */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebp);
  esi = (uint32_t)r;
  }
/* 98f79a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f79b: call 0x99cf4e */
  esp -= 4; W32(esp, 0x98f7a0u); SPILL(); f_99cf4e(); if (g_unwind) return; RELOAD();
/* 98f7a0: mov esi, eax */
  esi = eax;
/* 98f7a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f7a3: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 98f7a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f7a8: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 98f7ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 98f7ad: call 0x9968f0 */
  esp -= 4; W32(esp, 0x98f7b2u); SPILL(); f_9968f0(); if (g_unwind) return; RELOAD();
/* 98f7b2: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 98f7b6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f7b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f7bb: je 0x98f7c6 */
  if (zf) goto L_98f7c6;
L_98f7bd: /* 98f7bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f7be: call 0x6c2a22 */
  esp -= 4; W32(esp, 0x98f7c3u); SPILL(); f_6c2a22(); if (g_unwind) return; RELOAD();
/* 98f7c3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f7c6: /* 98f7c6: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 98f7ca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f7cc: je 0x98f7d7 */
  if (zf) goto L_98f7d7;
L_98f7ce: /* 98f7ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f7cf: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98f7d4u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98f7d4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f7d7: /* 98f7d7: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 98f7db: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f7dd: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 98f7e1: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 98f7e5: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 98f7e9: je 0x98f7f4 */
  if (zf) goto L_98f7f4;
L_98f7eb: /* 98f7eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f7ec: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98f7f1u); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98f7f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f7f4: /* 98f7f4: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 98f7f8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 98f7fa: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 98f7fe: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 98f802: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 98f806: je 0x98f811 */
  if (zf) goto L_98f811;
L_98f808: /* 98f808: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 98f809: call 0x6c58d0 */
  esp -= 4; W32(esp, 0x98f80eu); SPILL(); f_6c58d0(); if (g_unwind) return; RELOAD();
/* 98f80e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_98f811: /* 98f811: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 98f815: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98f816: mov eax, esi */
  eax = esi;
/* 98f818: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f819: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98f81a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98f81b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 98f822: add esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 98f825: ret  */
  esp += 4; SPILL(); return;
}

void f_98f830(void) {
  LOAD_REGS();
L_98f830: /* 98f830: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98f834: mov eax, ecx */
  eax = ecx;
/* 98f836: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98f839: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98f83c: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98f83e: ret  */
  esp += 4; SPILL(); return;
}

void f_98f840(void) {
  LOAD_REGS();
L_98f840: /* 98f840: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 98f844: mov eax, ecx */
  eax = ecx;
/* 98f846: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98f849: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 98f84c: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98f84e: ret  */
  esp += 4; SPILL(); return;
}

void f_98f850(void) {
  LOAD_REGS();
L_98f850: /* 98f850: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f851: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 98f855: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f856: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f857: mov esi, ebx */
  esi = ebx;
/* 98f859: xor edi, edi */
  edi = 0;
/* 98f85b: mov ecx, 1 */
  ecx = 0x1u;
L_98f860: /* 98f860: mov eax, ecx */
  eax = ecx;
/* 98f862: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98f865: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 98f86c: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98f86e: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98f870: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98f871: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 98f873: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98f875: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98f877: jae 0x98f87d */
  if (!cf) goto L_98f87d;
L_98f879: /* 98f879: mov esi, eax */
  esi = eax;
/* 98f87b: mov edi, ecx */
  edi = ecx;
L_98f87d: /* 98f87d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98f87e: cmp ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98f881: jbe 0x98f860 */
  if ((cf | zf)) goto L_98f860;
L_98f883: /* 98f883: mov eax, edi */
  eax = edi;
/* 98f885: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98f886: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f887: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98f888: ret  */
  esp += 4; SPILL(); return;
}

void f_98f890(void) {
  LOAD_REGS();
L_98f890: /* 98f890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98f891: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 98f895: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f896: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f897: mov esi, ebx */
  esi = ebx;
/* 98f899: xor edi, edi */
  edi = 0;
/* 98f89b: mov ecx, 1 */
  ecx = 0x1u;
L_98f8a0: /* 98f8a0: mov eax, ecx */
  eax = ecx;
/* 98f8a2: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 98f8a5: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 98f8ac: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 98f8ae: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98f8b0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 98f8b1: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 98f8b3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 98f8b5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 98f8b7: jae 0x98f8bd */
  if (!cf) goto L_98f8bd;
L_98f8b9: /* 98f8b9: mov esi, eax */
  esi = eax;
/* 98f8bb: mov edi, ecx */
  edi = ecx;
L_98f8bd: /* 98f8bd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 98f8be: cmp ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 98f8c1: jbe 0x98f8a0 */
  if ((cf | zf)) goto L_98f8a0;
L_98f8c3: /* 98f8c3: mov eax, edi */
  eax = edi;
/* 98f8c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98f8c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98f8c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 98f8c8: ret  */
  esp += 4; SPILL(); return;
}

void f_98f8d0(void) {
  LOAD_REGS();
L_98f8d0: /* 98f8d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98f8d1: mov ebp, esp */
  ebp = esp;
/* 98f8d3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 98f8d6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98f8d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98f8da: xor ecx, ecx */
  ecx = 0;
/* 98f8dc: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98f8df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98f8e0: mov edi, eax */
  edi = eax;
/* 98f8e2: mov dword ptr [0xcf3128], 0 */
  W32((uint32_t)(0xcf3128u), 0x0u);
/* 98f8ec: mov dword ptr [0xcf312c], 0 */
  W32((uint32_t)(0xcf312cu), 0x0u);
/* 98f8f6: mov dword ptr [0xcf3110], 0 */
  W32((uint32_t)(0xcf3110u), 0x0u);
/* 98f900: mov dword ptr [0xcf3114], 0 */
  W32((uint32_t)(0xcf3114u), 0x0u);
/* 98f90a: mov dword ptr [0xcf3108], 0 */
  W32((uint32_t)(0xcf3108u), 0x0u);
/* 98f914: mov dword ptr [0xcf310c], 0 */
  W32((uint32_t)(0xcf310cu), 0x0u);
/* 98f91e: mov dword ptr [0xcf30f8], 0 */
  W32((uint32_t)(0xcf30f8u), 0x0u);
/* 98f928: mov dword ptr [0xcf30fc], 0 */
  W32((uint32_t)(0xcf30fcu), 0x0u);
/* 98f932: mov dword ptr [0xcf30f0], 0 */
  W32((uint32_t)(0xcf30f0u), 0x0u);
/* 98f93c: mov dword ptr [0xcf30f4], 0 */
  W32((uint32_t)(0xcf30f4u), 0x0u);
/* 98f946: mov dword ptr [0xcf30e8], 0 */
  W32((uint32_t)(0xcf30e8u), 0x0u);
/* 98f950: mov dword ptr [0xcf30ec], 0 */
  W32((uint32_t)(0xcf30ecu), 0x0u);
/* 98f95a: jl 0x98fb4a */
  if ((sf != of)) goto L_98fb4a;
L_98f960: /* 98f960: mov esi, 3 */
  esi = 0x3u;
/* 98f965: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
L_98f968: /* 98f968: fld qword ptr [eax - 0x10] */
  { double v = F64((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 98f96b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98f96d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98f96f: fadd qword ptr [0xcf30e8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30e8u)));
/* 98f975: fstp qword ptr [0xcf30e8] */
  WF64((uint32_t)(0xcf30e8u), ST0); FPOP();
/* 98f97b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98f97d: fld qword ptr [eax - 8] */
  { double v = F64((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 98f980: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 98f983: fadd qword ptr [0xcf30f0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f0u)));
/* 98f989: fstp qword ptr [0xcf30f0] */
  WF64((uint32_t)(0xcf30f0u), ST0); FPOP();
/* 98f98f: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 98f991: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 98f994: fadd qword ptr [0xcf30f8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f8u)));
/* 98f99a: fstp qword ptr [0xcf30f8] */
  WF64((uint32_t)(0xcf30f8u), ST0); FPOP();
/* 98f9a0: fld qword ptr [eax - 8] */
  { double v = F64((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 98f9a3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98f9a5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98f9a7: fadd qword ptr [0xcf3108] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3108u)));
/* 98f9ad: fstp qword ptr [0xcf3108] */
  WF64((uint32_t)(0xcf3108u), ST0); FPOP();
/* 98f9b3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98f9b5: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 98f9b7: fmul qword ptr [eax - 8] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff8u)));
/* 98f9ba: fadd qword ptr [0xcf3110] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3110u)));
/* 98f9c0: fstp qword ptr [0xcf3110] */
  WF64((uint32_t)(0xcf3110u), ST0); FPOP();
/* 98f9c6: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 98f9c8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98f9ca: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98f9cc: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98f9d2: fstp qword ptr [0xcf3128] */
  WF64((uint32_t)(0xcf3128u), ST0); FPOP();
/* 98f9d8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98f9da: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 98f9dd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98f9df: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98f9e1: fadd qword ptr [0xcf30e8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30e8u)));
/* 98f9e7: fstp qword ptr [0xcf30e8] */
  WF64((uint32_t)(0xcf30e8u), ST0); FPOP();
/* 98f9ed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98f9ef: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 98f9f2: fmul qword ptr [eax + 8] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0x8u)));
/* 98f9f5: fadd qword ptr [0xcf30f0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f0u)));
/* 98f9fb: fstp qword ptr [0xcf30f0] */
  WF64((uint32_t)(0xcf30f0u), ST0); FPOP();
/* 98fa01: fld qword ptr [eax + 0x18] */
  { double v = F64((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 98fa04: fmul qword ptr [eax + 8] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0x8u)));
/* 98fa07: fadd qword ptr [0xcf30f8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f8u)));
/* 98fa0d: fstp qword ptr [0xcf30f8] */
  WF64((uint32_t)(0xcf30f8u), ST0); FPOP();
/* 98fa13: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 98fa16: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fa18: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fa1a: fadd qword ptr [0xcf3108] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3108u)));
/* 98fa20: fstp qword ptr [0xcf3108] */
  WF64((uint32_t)(0xcf3108u), ST0); FPOP();
/* 98fa26: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fa28: fld qword ptr [eax + 0x18] */
  { double v = F64((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 98fa2b: fmul qword ptr [eax + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0x10u)));
/* 98fa2e: fadd qword ptr [0xcf3110] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3110u)));
/* 98fa34: fstp qword ptr [0xcf3110] */
  WF64((uint32_t)(0xcf3110u), ST0); FPOP();
/* 98fa3a: fld qword ptr [eax + 0x18] */
  { double v = F64((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 98fa3d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fa3f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fa41: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fa47: fstp qword ptr [0xcf3128] */
  WF64((uint32_t)(0xcf3128u), ST0); FPOP();
/* 98fa4d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fa4f: fld qword ptr [eax + 0x20] */
  { double v = F64((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 98fa52: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fa54: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fa56: fadd qword ptr [0xcf30e8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30e8u)));
/* 98fa5c: fstp qword ptr [0xcf30e8] */
  WF64((uint32_t)(0xcf30e8u), ST0); FPOP();
/* 98fa62: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fa64: fld qword ptr [eax + 0x20] */
  { double v = F64((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 98fa67: fmul qword ptr [eax + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0x28u)));
/* 98fa6a: fadd qword ptr [0xcf30f0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f0u)));
/* 98fa70: fstp qword ptr [0xcf30f0] */
  WF64((uint32_t)(0xcf30f0u), ST0); FPOP();
/* 98fa76: fld qword ptr [eax + 0x20] */
  { double v = F64((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 98fa79: fmul qword ptr [eax + 0x30] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0x30u)));
/* 98fa7c: fadd qword ptr [0xcf30f8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f8u)));
/* 98fa82: fstp qword ptr [0xcf30f8] */
  WF64((uint32_t)(0xcf30f8u), ST0); FPOP();
/* 98fa88: fld qword ptr [eax + 0x28] */
  { double v = F64((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 98fa8b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fa8d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fa8f: fadd qword ptr [0xcf3108] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3108u)));
/* 98fa95: fstp qword ptr [0xcf3108] */
  WF64((uint32_t)(0xcf3108u), ST0); FPOP();
/* 98fa9b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fa9d: fld qword ptr [eax + 0x30] */
  { double v = F64((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* 98faa0: fmul qword ptr [eax + 0x28] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0x28u)));
/* 98faa3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 98faa6: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98faa9: add eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98faac: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98faae: fadd qword ptr [0xcf3110] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3110u)));
/* 98fab4: fstp qword ptr [0xcf3110] */
  WF64((uint32_t)(0xcf3110u), ST0); FPOP();
/* 98faba: fld qword ptr [eax - 0x30] */
  { double v = F64((uint32_t)(eax + 0xffffffd0u)); FPUSH(v); }
/* 98fabd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fabf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fac1: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fac7: fstp qword ptr [0xcf3128] */
  WF64((uint32_t)(0xcf3128u), ST0); FPOP();
/* 98facd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98facf: fld qword ptr [eax - 0x28] */
  { double v = F64((uint32_t)(eax + 0xffffffd8u)); FPUSH(v); }
/* 98fad2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fad4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fad6: fadd qword ptr [0xcf30e8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30e8u)));
/* 98fadc: fstp qword ptr [0xcf30e8] */
  WF64((uint32_t)(0xcf30e8u), ST0); FPOP();
/* 98fae2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fae4: fld qword ptr [eax - 0x28] */
  { double v = F64((uint32_t)(eax + 0xffffffd8u)); FPUSH(v); }
/* 98fae7: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 98faea: fadd qword ptr [0xcf30f0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f0u)));
/* 98faf0: fstp qword ptr [0xcf30f0] */
  WF64((uint32_t)(0xcf30f0u), ST0); FPOP();
/* 98faf6: fld qword ptr [eax - 0x28] */
  { double v = F64((uint32_t)(eax + 0xffffffd8u)); FPUSH(v); }
/* 98faf9: fmul qword ptr [eax - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe8u)));
/* 98fafc: fadd qword ptr [0xcf30f8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f8u)));
/* 98fb02: fstp qword ptr [0xcf30f8] */
  WF64((uint32_t)(0xcf30f8u), ST0); FPOP();
/* 98fb08: fld qword ptr [eax - 0x20] */
  { double v = F64((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 98fb0b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fb0d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fb0f: fadd qword ptr [0xcf3108] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3108u)));
/* 98fb15: fstp qword ptr [0xcf3108] */
  WF64((uint32_t)(0xcf3108u), ST0); FPOP();
/* 98fb1b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fb1d: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 98fb20: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 98fb23: fadd qword ptr [0xcf3110] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3110u)));
/* 98fb29: fstp qword ptr [0xcf3110] */
  WF64((uint32_t)(0xcf3110u), ST0); FPOP();
/* 98fb2f: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 98fb32: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fb34: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fb36: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fb3c: fstp qword ptr [0xcf3128] */
  WF64((uint32_t)(0xcf3128u), ST0); FPOP();
/* 98fb42: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fb44: jl 0x98f968 */
  if ((sf != of)) goto L_98f968;
L_98fb4a: /* 98fb4a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98fb4c: jge 0x98fbdb */
  if ((sf == of)) goto L_98fbdb;
L_98fb52: /* 98fb52: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 98fb55: lea eax, [edi + eax*8 + 0x10] */
  eax = (uint32_t)(edi + eax*8 + 0x10u);
/* 98fb59: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 98fb5b: jmp 0x98fb60 */
  goto L_98fb60;
L_98fb60: /* 98fb60: fld qword ptr [eax - 0x10] */
  { double v = F64((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 98fb63: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98fb66: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98fb67: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fb69: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fb6b: fadd qword ptr [0xcf30e8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30e8u)));
/* 98fb71: fstp qword ptr [0xcf30e8] */
  WF64((uint32_t)(0xcf30e8u), ST0); FPOP();
/* 98fb77: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fb79: fld qword ptr [eax - 0x20] */
  { double v = F64((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 98fb7c: fmul qword ptr [eax - 0x28] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffd8u)));
/* 98fb7f: fadd qword ptr [0xcf30f0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f0u)));
/* 98fb85: fstp qword ptr [0xcf30f0] */
  WF64((uint32_t)(0xcf30f0u), ST0); FPOP();
/* 98fb8b: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 98fb8e: fmul qword ptr [eax - 0x28] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffd8u)));
/* 98fb91: fadd qword ptr [0xcf30f8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f8u)));
/* 98fb97: fstp qword ptr [0xcf30f8] */
  WF64((uint32_t)(0xcf30f8u), ST0); FPOP();
/* 98fb9d: fld qword ptr [eax - 0x20] */
  { double v = F64((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 98fba0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fba2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fba4: fadd qword ptr [0xcf3108] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3108u)));
/* 98fbaa: fstp qword ptr [0xcf3108] */
  WF64((uint32_t)(0xcf3108u), ST0); FPOP();
/* 98fbb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fbb2: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 98fbb5: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 98fbb8: fadd qword ptr [0xcf3110] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3110u)));
/* 98fbbe: fstp qword ptr [0xcf3110] */
  WF64((uint32_t)(0xcf3110u), ST0); FPOP();
/* 98fbc4: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 98fbc7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fbc9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fbcb: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fbd1: fstp qword ptr [0xcf3128] */
  WF64((uint32_t)(0xcf3128u), ST0); FPOP();
/* 98fbd7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fbd9: jne 0x98fb60 */
  if (!zf) goto L_98fb60;
L_98fbdb: /* 98fbdb: mov edi, 3 */
  edi = 0x3u;
L_98fbe0: /* 98fbe0: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fbe6: mov edx, 0xcf30e8 */
  edx = 0xcf30e8u;
/* 98fbeb: fadd qword ptr [0xcf3108] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3108u)));
/* 98fbf1: xor esi, esi */
  esi = 0;
/* 98fbf3: cmp edx, 0xcf3148 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcf3148u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98fbf9: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fbff: fstp qword ptr [0xcf30e0] */
  WF64((uint32_t)(0xcf30e0u), ST0); FPOP();
/* 98fc05: fld qword ptr [0xa17848] */
  { double v = F64((uint32_t)(0xa17848u)); FPUSH(v); }
/* 98fc0b: fdiv qword ptr [0xcf30e0] */
  ST0 = ST0 / (F64((uint32_t)(0xcf30e0u)));
/* 98fc11: jge 0x98fc2e */
  if ((sf == of)) goto L_98fc2e;
L_98fc13: /* 98fc13: mov ecx, 3 */
  ecx = 0x3u;
/* 98fc18: mov eax, edx */
  eax = edx;
/* 98fc1a: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98fc1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98fc20: /* 98fc20: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fc22: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98fc25: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98fc26: fmul qword ptr [eax - 8] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff8u)));
/* 98fc29: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 98fc2c: jne 0x98fc20 */
  if (!zf) goto L_98fc20;
L_98fc2e: /* 98fc2e: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98fc31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98fc32: cmp edx, 0xcf3148 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcf3148u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98fc38: jl 0x98fc13 */
  if ((sf != of)) goto L_98fc13;
L_98fc3a: /* 98fc3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fc3c: mov eax, 4 */
  eax = 0x4u;
L_98fc41: /* 98fc41: fld qword ptr [0xcf30f0] */
  { double v = F64((uint32_t)(0xcf30f0u)); FPUSH(v); }
/* 98fc47: fmul qword ptr [0xcf30f0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30f0u)));
/* 98fc4d: fld qword ptr [0xcf30f8] */
  { double v = F64((uint32_t)(0xcf30f8u)); FPUSH(v); }
/* 98fc53: fmul qword ptr [0xcf30f8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30f8u)));
/* 98fc59: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fc5f: fmul qword ptr [0xcf30e8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30e8u)));
/* 98fc65: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fc67: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 98fc69: fstp qword ptr [0xcf3098] */
  WF64((uint32_t)(0xcf3098u), ST0); FPOP();
/* 98fc6f: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fc75: fadd qword ptr [0xcf3108] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3108u)));
/* 98fc7b: fmul qword ptr [0xcf30f0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30f0u)));
/* 98fc81: fld qword ptr [0xcf30f8] */
  { double v = F64((uint32_t)(0xcf30f8u)); FPUSH(v); }
/* 98fc87: fmul qword ptr [0xcf3110] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3110u)));
/* 98fc8d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fc8f: fstp qword ptr [0xcf30a0] */
  WF64((uint32_t)(0xcf30a0u), ST0); FPOP();
/* 98fc95: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fc9b: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fca1: fmul qword ptr [0xcf30f8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30f8u)));
/* 98fca7: fld qword ptr [0xcf30f0] */
  { double v = F64((uint32_t)(0xcf30f0u)); FPUSH(v); }
/* 98fcad: fmul qword ptr [0xcf3110] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3110u)));
/* 98fcb3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fcb5: fstp qword ptr [0xcf30a8] */
  WF64((uint32_t)(0xcf30a8u), ST0); FPOP();
/* 98fcbb: fld qword ptr [0xcf3110] */
  { double v = F64((uint32_t)(0xcf3110u)); FPUSH(v); }
/* 98fcc1: fmul qword ptr [0xcf3110] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3110u)));
/* 98fcc7: fld qword ptr [0xcf3108] */
  { double v = F64((uint32_t)(0xcf3108u)); FPUSH(v); }
/* 98fccd: fmul qword ptr [0xcf3108] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3108u)));
/* 98fcd3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fcd5: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 98fcd7: fstp qword ptr [0xcf30b8] */
  WF64((uint32_t)(0xcf30b8u), ST0); FPOP();
/* 98fcdd: fld qword ptr [0xcf3108] */
  { double v = F64((uint32_t)(0xcf3108u)); FPUSH(v); }
/* 98fce3: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fce9: fmul qword ptr [0xcf3110] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3110u)));
/* 98fcef: fld qword ptr [0xcf30f0] */
  { double v = F64((uint32_t)(0xcf30f0u)); FPUSH(v); }
/* 98fcf5: fmul qword ptr [0xcf30f8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30f8u)));
/* 98fcfb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fcfd: fstp qword ptr [0xcf30c0] */
  WF64((uint32_t)(0xcf30c0u), ST0); FPOP();
/* 98fd03: fld qword ptr [0xcf3128] */
  { double v = F64((uint32_t)(0xcf3128u)); FPUSH(v); }
/* 98fd09: fmul qword ptr [0xcf3128] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3128u)));
/* 98fd0f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fd11: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 98fd13: fstp qword ptr [0xcf30d8] */
  WF64((uint32_t)(0xcf30d8u), ST0); FPOP();
/* 98fd19: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fd1b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fd1d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fd1f: fld qword ptr [0xcf30a8] */
  { double v = F64((uint32_t)(0xcf30a8u)); FPUSH(v); }
/* 98fd25: fmul qword ptr [0xcf30a8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a8u)));
/* 98fd2b: fld qword ptr [0xcf30a0] */
  { double v = F64((uint32_t)(0xcf30a0u)); FPUSH(v); }
/* 98fd31: fmul qword ptr [0xcf30a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a0u)));
/* 98fd37: fld qword ptr [0xcf3098] */
  { double v = F64((uint32_t)(0xcf3098u)); FPUSH(v); }
/* 98fd3d: fmul qword ptr [0xcf3098] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3098u)));
/* 98fd43: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fd45: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 98fd47: fstp qword ptr [0xcf30e8] */
  WF64((uint32_t)(0xcf30e8u), ST0); FPOP();
/* 98fd4d: fld qword ptr [0xcf30b8] */
  { double v = F64((uint32_t)(0xcf30b8u)); FPUSH(v); }
/* 98fd53: fadd qword ptr [0xcf3098] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3098u)));
/* 98fd59: fmul qword ptr [0xcf30a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a0u)));
/* 98fd5f: fld qword ptr [0xcf30c0] */
  { double v = F64((uint32_t)(0xcf30c0u)); FPUSH(v); }
/* 98fd65: fmul qword ptr [0xcf30a8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a8u)));
/* 98fd6b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fd6d: fstp qword ptr [0xcf30f0] */
  WF64((uint32_t)(0xcf30f0u), ST0); FPOP();
/* 98fd73: fld qword ptr [0xcf30d8] */
  { double v = F64((uint32_t)(0xcf30d8u)); FPUSH(v); }
/* 98fd79: fadd qword ptr [0xcf3098] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3098u)));
/* 98fd7f: fmul qword ptr [0xcf30a8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a8u)));
/* 98fd85: fld qword ptr [0xcf30c0] */
  { double v = F64((uint32_t)(0xcf30c0u)); FPUSH(v); }
/* 98fd8b: fmul qword ptr [0xcf30a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a0u)));
/* 98fd91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fd93: fstp qword ptr [0xcf30f8] */
  WF64((uint32_t)(0xcf30f8u), ST0); FPOP();
/* 98fd99: fld qword ptr [0xcf30c0] */
  { double v = F64((uint32_t)(0xcf30c0u)); FPUSH(v); }
/* 98fd9f: fmul qword ptr [0xcf30c0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30c0u)));
/* 98fda5: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 98fda9: fld qword ptr [0xcf30b8] */
  { double v = F64((uint32_t)(0xcf30b8u)); FPUSH(v); }
/* 98fdaf: fmul qword ptr [0xcf30b8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30b8u)));
/* 98fdb5: fadd qword ptr [esp + 8] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x8u)));
/* 98fdb9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fdbb: fstp qword ptr [0xcf3108] */
  WF64((uint32_t)(0xcf3108u), ST0); FPOP();
/* 98fdc1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fdc3: fld qword ptr [0xcf30d8] */
  { double v = F64((uint32_t)(0xcf30d8u)); FPUSH(v); }
/* 98fdc9: fadd qword ptr [0xcf30b8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30b8u)));
/* 98fdcf: fmul qword ptr [0xcf30c0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30c0u)));
/* 98fdd5: fld qword ptr [0xcf30a8] */
  { double v = F64((uint32_t)(0xcf30a8u)); FPUSH(v); }
/* 98fddb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 98fddc: fmul qword ptr [0xcf30a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a0u)));
/* 98fde2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fde4: fstp qword ptr [0xcf3110] */
  WF64((uint32_t)(0xcf3110u), ST0); FPOP();
/* 98fdea: fld qword ptr [0xcf30d8] */
  { double v = F64((uint32_t)(0xcf30d8u)); FPUSH(v); }
/* 98fdf0: fmul qword ptr [0xcf30d8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30d8u)));
/* 98fdf6: fadd qword ptr [esp + 8] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x8u)));
/* 98fdfa: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fdfc: fstp qword ptr [0xcf3128] */
  WF64((uint32_t)(0xcf3128u), ST0); FPOP();
/* 98fe02: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fe04: jne 0x98fc41 */
  if (!zf) goto L_98fc41;
L_98fe0a: /* 98fe0a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 98fe0b: jne 0x98fbe0 */
  if (!zf) goto L_98fbe0;
L_98fe11: /* 98fe11: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fe17: fcomp qword ptr [0xcf3108] */
  fpu_com(ST0, F64((uint32_t)(0xcf3108u)));
  FPOP();
/* 98fe1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98fe1f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98fe22: jne 0x98fe3b */
  if (!zf) goto L_98fe3b;
L_98fe24: /* 98fe24: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fe2a: fcomp qword ptr [0xcf3128] */
  fpu_com(ST0, F64((uint32_t)(0xcf3128u)));
  FPOP();
/* 98fe30: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98fe32: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98fe35: jne 0x98fe53 */
  if (!zf) goto L_98fe53;
L_98fe37: /* 98fe37: xor ecx, ecx */
  ecx = 0;
/* 98fe39: jmp 0x98fe58 */
  goto L_98fe58;
L_98fe3b: /* 98fe3b: fld qword ptr [0xcf3108] */
  { double v = F64((uint32_t)(0xcf3108u)); FPUSH(v); }
/* 98fe41: mov ecx, 1 */
  ecx = 0x1u;
/* 98fe46: fcomp qword ptr [0xcf3128] */
  fpu_com(ST0, F64((uint32_t)(0xcf3128u)));
  FPOP();
/* 98fe4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98fe4e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98fe51: je 0x98fe58 */
  if (zf) goto L_98fe58;
L_98fe53: /* 98fe53: mov ecx, 2 */
  ecx = 0x2u;
L_98fe58: /* 98fe58: mov edx, ecx */
  edx = ecx;
/* 98fe5a: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98fe5d: fld qword ptr [edx + 0xcf30e8] */
  { double v = F64((uint32_t)(edx + 0xcf30e8u)); FPUSH(v); }
/* 98fe63: xor eax, eax */
  eax = 0;
/* 98fe65: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98fe67: fsqrt  */
  ST0 = sqrt(ST0);
/* 98fe69: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98fe6f: fstp qword ptr [0xcf3090] */
  WF64((uint32_t)(0xcf3090u), ST0); FPOP();
/* 98fe75: jle 0x98fe99 */
  if ((zf || sf != of)) goto L_98fe99;
L_98fe77: /* 98fe77: lea edx, [ecx*8 + 0xcf3098] */
  edx = (uint32_t)(ecx*8 + 0xcf3098u);
/* 98fe7e: mov edi, edi */
  edi = edi;
L_98fe80: /* 98fe80: fld qword ptr [0xcf3090] */
  { double v = F64((uint32_t)(0xcf3090u)); FPUSH(v); }
/* 98fe86: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98fe87: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 98fe89: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98fe8c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98fe8e: fstp qword ptr [ebx + eax*8 - 8] */
  WF64((uint32_t)(ebx + eax*8 + 0xfffffff8u), ST0); FPOP();
/* 98fe92: jl 0x98fe80 */
  if ((sf != of)) goto L_98fe80;
L_98fe94: /* 98fe94: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98fe97: jge 0x98feba */
  if ((sf == of)) goto L_98feba;
L_98fe99: /* 98fe99: lea edx, [eax + ecx*2] */
  edx = (uint32_t)(eax + ecx*2);
/* 98fe9c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98fe9e: lea ecx, [ecx*8 + 0xcf3098] */
  ecx = (uint32_t)(ecx*8 + 0xcf3098u);
L_98fea5: /* 98fea5: fld qword ptr [0xcf3090] */
  { double v = F64((uint32_t)(0xcf3090u)); FPUSH(v); }
/* 98feab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98feac: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 98feae: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98feb1: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98feb4: fstp qword ptr [ebx + eax*8 - 8] */
  WF64((uint32_t)(ebx + eax*8 + 0xfffffff8u), ST0); FPOP();
/* 98feb8: jl 0x98fea5 */
  if ((sf != of)) goto L_98fea5;
L_98feba: /* 98feba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98febb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98febc: mov esp, ebp */
  esp = ebp;
/* 98febe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98febf: ret  */
  esp += 4; SPILL(); return;
}

void f_98fb5d(void) {
  LOAD_REGS();
L_98fb5d: /* 98fb5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_98fb60: /* 98fb60: fld qword ptr [eax - 0x10] */
  { double v = F64((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* 98fb63: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98fb66: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 98fb67: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fb69: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fb6b: fadd qword ptr [0xcf30e8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30e8u)));
/* 98fb71: fstp qword ptr [0xcf30e8] */
  WF64((uint32_t)(0xcf30e8u), ST0); FPOP();
/* 98fb77: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fb79: fld qword ptr [eax - 0x20] */
  { double v = F64((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 98fb7c: fmul qword ptr [eax - 0x28] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffd8u)));
/* 98fb7f: fadd qword ptr [0xcf30f0] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f0u)));
/* 98fb85: fstp qword ptr [0xcf30f0] */
  WF64((uint32_t)(0xcf30f0u), ST0); FPOP();
/* 98fb8b: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 98fb8e: fmul qword ptr [eax - 0x28] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffd8u)));
/* 98fb91: fadd qword ptr [0xcf30f8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30f8u)));
/* 98fb97: fstp qword ptr [0xcf30f8] */
  WF64((uint32_t)(0xcf30f8u), ST0); FPOP();
/* 98fb9d: fld qword ptr [eax - 0x20] */
  { double v = F64((uint32_t)(eax + 0xffffffe0u)); FPUSH(v); }
/* 98fba0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fba2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fba4: fadd qword ptr [0xcf3108] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3108u)));
/* 98fbaa: fstp qword ptr [0xcf3108] */
  WF64((uint32_t)(0xcf3108u), ST0); FPOP();
/* 98fbb0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fbb2: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 98fbb5: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 98fbb8: fadd qword ptr [0xcf3110] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3110u)));
/* 98fbbe: fstp qword ptr [0xcf3110] */
  WF64((uint32_t)(0xcf3110u), ST0); FPOP();
/* 98fbc4: fld qword ptr [eax - 0x18] */
  { double v = F64((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 98fbc7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fbc9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98fbcb: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fbd1: fstp qword ptr [0xcf3128] */
  WF64((uint32_t)(0xcf3128u), ST0); FPOP();
/* 98fbd7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fbd9: jne 0x98fb60 */
  if (!zf) goto L_98fb60;
L_98fbdb: /* 98fbdb: mov edi, 3 */
  edi = 0x3u;
L_98fbe0: /* 98fbe0: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fbe6: mov edx, 0xcf30e8 */
  edx = 0xcf30e8u;
/* 98fbeb: fadd qword ptr [0xcf3108] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3108u)));
/* 98fbf1: xor esi, esi */
  esi = 0;
/* 98fbf3: cmp edx, 0xcf3148 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcf3148u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98fbf9: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fbff: fstp qword ptr [0xcf30e0] */
  WF64((uint32_t)(0xcf30e0u), ST0); FPOP();
/* 98fc05: fld qword ptr [0xa17848] */
  { double v = F64((uint32_t)(0xa17848u)); FPUSH(v); }
/* 98fc0b: fdiv qword ptr [0xcf30e0] */
  ST0 = ST0 / (F64((uint32_t)(0xcf30e0u)));
/* 98fc11: jge 0x98fc2e */
  if ((sf == of)) goto L_98fc2e;
L_98fc13: /* 98fc13: mov ecx, 3 */
  ecx = 0x3u;
/* 98fc18: mov eax, edx */
  eax = edx;
/* 98fc1a: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 98fc1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_98fc20: /* 98fc20: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98fc22: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 98fc25: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 98fc26: fmul qword ptr [eax - 8] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff8u)));
/* 98fc29: fstp qword ptr [eax - 8] */
  WF64((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 98fc2c: jne 0x98fc20 */
  if (!zf) goto L_98fc20;
L_98fc2e: /* 98fc2e: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98fc31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 98fc32: cmp edx, 0xcf3148 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcf3148u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98fc38: jl 0x98fc13 */
  if ((sf != of)) goto L_98fc13;
L_98fc3a: /* 98fc3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fc3c: mov eax, 4 */
  eax = 0x4u;
L_98fc41: /* 98fc41: fld qword ptr [0xcf30f0] */
  { double v = F64((uint32_t)(0xcf30f0u)); FPUSH(v); }
/* 98fc47: fmul qword ptr [0xcf30f0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30f0u)));
/* 98fc4d: fld qword ptr [0xcf30f8] */
  { double v = F64((uint32_t)(0xcf30f8u)); FPUSH(v); }
/* 98fc53: fmul qword ptr [0xcf30f8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30f8u)));
/* 98fc59: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fc5f: fmul qword ptr [0xcf30e8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30e8u)));
/* 98fc65: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fc67: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 98fc69: fstp qword ptr [0xcf3098] */
  WF64((uint32_t)(0xcf3098u), ST0); FPOP();
/* 98fc6f: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fc75: fadd qword ptr [0xcf3108] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3108u)));
/* 98fc7b: fmul qword ptr [0xcf30f0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30f0u)));
/* 98fc81: fld qword ptr [0xcf30f8] */
  { double v = F64((uint32_t)(0xcf30f8u)); FPUSH(v); }
/* 98fc87: fmul qword ptr [0xcf3110] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3110u)));
/* 98fc8d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fc8f: fstp qword ptr [0xcf30a0] */
  WF64((uint32_t)(0xcf30a0u), ST0); FPOP();
/* 98fc95: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fc9b: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fca1: fmul qword ptr [0xcf30f8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30f8u)));
/* 98fca7: fld qword ptr [0xcf30f0] */
  { double v = F64((uint32_t)(0xcf30f0u)); FPUSH(v); }
/* 98fcad: fmul qword ptr [0xcf3110] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3110u)));
/* 98fcb3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fcb5: fstp qword ptr [0xcf30a8] */
  WF64((uint32_t)(0xcf30a8u), ST0); FPOP();
/* 98fcbb: fld qword ptr [0xcf3110] */
  { double v = F64((uint32_t)(0xcf3110u)); FPUSH(v); }
/* 98fcc1: fmul qword ptr [0xcf3110] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3110u)));
/* 98fcc7: fld qword ptr [0xcf3108] */
  { double v = F64((uint32_t)(0xcf3108u)); FPUSH(v); }
/* 98fccd: fmul qword ptr [0xcf3108] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3108u)));
/* 98fcd3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fcd5: fadd st(3) */
  ST0 = ST0 + STI(3);
/* 98fcd7: fstp qword ptr [0xcf30b8] */
  WF64((uint32_t)(0xcf30b8u), ST0); FPOP();
/* 98fcdd: fld qword ptr [0xcf3108] */
  { double v = F64((uint32_t)(0xcf3108u)); FPUSH(v); }
/* 98fce3: fadd qword ptr [0xcf3128] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3128u)));
/* 98fce9: fmul qword ptr [0xcf3110] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3110u)));
/* 98fcef: fld qword ptr [0xcf30f0] */
  { double v = F64((uint32_t)(0xcf30f0u)); FPUSH(v); }
/* 98fcf5: fmul qword ptr [0xcf30f8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30f8u)));
/* 98fcfb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fcfd: fstp qword ptr [0xcf30c0] */
  WF64((uint32_t)(0xcf30c0u), ST0); FPOP();
/* 98fd03: fld qword ptr [0xcf3128] */
  { double v = F64((uint32_t)(0xcf3128u)); FPUSH(v); }
/* 98fd09: fmul qword ptr [0xcf3128] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3128u)));
/* 98fd0f: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fd11: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 98fd13: fstp qword ptr [0xcf30d8] */
  WF64((uint32_t)(0xcf30d8u), ST0); FPOP();
/* 98fd19: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fd1b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fd1d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fd1f: fld qword ptr [0xcf30a8] */
  { double v = F64((uint32_t)(0xcf30a8u)); FPUSH(v); }
/* 98fd25: fmul qword ptr [0xcf30a8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a8u)));
/* 98fd2b: fld qword ptr [0xcf30a0] */
  { double v = F64((uint32_t)(0xcf30a0u)); FPUSH(v); }
/* 98fd31: fmul qword ptr [0xcf30a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a0u)));
/* 98fd37: fld qword ptr [0xcf3098] */
  { double v = F64((uint32_t)(0xcf3098u)); FPUSH(v); }
/* 98fd3d: fmul qword ptr [0xcf3098] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3098u)));
/* 98fd43: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fd45: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 98fd47: fstp qword ptr [0xcf30e8] */
  WF64((uint32_t)(0xcf30e8u), ST0); FPOP();
/* 98fd4d: fld qword ptr [0xcf30b8] */
  { double v = F64((uint32_t)(0xcf30b8u)); FPUSH(v); }
/* 98fd53: fadd qword ptr [0xcf3098] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3098u)));
/* 98fd59: fmul qword ptr [0xcf30a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a0u)));
/* 98fd5f: fld qword ptr [0xcf30c0] */
  { double v = F64((uint32_t)(0xcf30c0u)); FPUSH(v); }
/* 98fd65: fmul qword ptr [0xcf30a8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a8u)));
/* 98fd6b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fd6d: fstp qword ptr [0xcf30f0] */
  WF64((uint32_t)(0xcf30f0u), ST0); FPOP();
/* 98fd73: fld qword ptr [0xcf30d8] */
  { double v = F64((uint32_t)(0xcf30d8u)); FPUSH(v); }
/* 98fd79: fadd qword ptr [0xcf3098] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3098u)));
/* 98fd7f: fmul qword ptr [0xcf30a8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a8u)));
/* 98fd85: fld qword ptr [0xcf30c0] */
  { double v = F64((uint32_t)(0xcf30c0u)); FPUSH(v); }
/* 98fd8b: fmul qword ptr [0xcf30a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a0u)));
/* 98fd91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fd93: fstp qword ptr [0xcf30f8] */
  WF64((uint32_t)(0xcf30f8u), ST0); FPOP();
/* 98fd99: fld qword ptr [0xcf30c0] */
  { double v = F64((uint32_t)(0xcf30c0u)); FPUSH(v); }
/* 98fd9f: fmul qword ptr [0xcf30c0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30c0u)));
/* 98fda5: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 98fda9: fld qword ptr [0xcf30b8] */
  { double v = F64((uint32_t)(0xcf30b8u)); FPUSH(v); }
/* 98fdaf: fmul qword ptr [0xcf30b8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30b8u)));
/* 98fdb5: fadd qword ptr [esp + 8] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x8u)));
/* 98fdb9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fdbb: fstp qword ptr [0xcf3108] */
  WF64((uint32_t)(0xcf3108u), ST0); FPOP();
/* 98fdc1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fdc3: fld qword ptr [0xcf30d8] */
  { double v = F64((uint32_t)(0xcf30d8u)); FPUSH(v); }
/* 98fdc9: fadd qword ptr [0xcf30b8] */
  ST0 = ST0 + (F64((uint32_t)(0xcf30b8u)));
/* 98fdcf: fmul qword ptr [0xcf30c0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30c0u)));
/* 98fdd5: fld qword ptr [0xcf30a8] */
  { double v = F64((uint32_t)(0xcf30a8u)); FPUSH(v); }
/* 98fddb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 98fddc: fmul qword ptr [0xcf30a0] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30a0u)));
/* 98fde2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fde4: fstp qword ptr [0xcf3110] */
  WF64((uint32_t)(0xcf3110u), ST0); FPOP();
/* 98fdea: fld qword ptr [0xcf30d8] */
  { double v = F64((uint32_t)(0xcf30d8u)); FPUSH(v); }
/* 98fdf0: fmul qword ptr [0xcf30d8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf30d8u)));
/* 98fdf6: fadd qword ptr [esp + 8] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x8u)));
/* 98fdfa: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 98fdfc: fstp qword ptr [0xcf3128] */
  WF64((uint32_t)(0xcf3128u), ST0); FPOP();
/* 98fe02: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fe04: jne 0x98fc41 */
  if (!zf) goto L_98fc41;
L_98fe0a: /* 98fe0a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 98fe0b: jne 0x98fbe0 */
  if (!zf) goto L_98fbe0;
L_98fe11: /* 98fe11: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fe17: fcomp qword ptr [0xcf3108] */
  fpu_com(ST0, F64((uint32_t)(0xcf3108u)));
  FPOP();
/* 98fe1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98fe1f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98fe22: jne 0x98fe3b */
  if (!zf) goto L_98fe3b;
L_98fe24: /* 98fe24: fld qword ptr [0xcf30e8] */
  { double v = F64((uint32_t)(0xcf30e8u)); FPUSH(v); }
/* 98fe2a: fcomp qword ptr [0xcf3128] */
  fpu_com(ST0, F64((uint32_t)(0xcf3128u)));
  FPOP();
/* 98fe30: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98fe32: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98fe35: jne 0x98fe53 */
  if (!zf) goto L_98fe53;
L_98fe37: /* 98fe37: xor ecx, ecx */
  ecx = 0;
/* 98fe39: jmp 0x98fe58 */
  goto L_98fe58;
L_98fe3b: /* 98fe3b: fld qword ptr [0xcf3108] */
  { double v = F64((uint32_t)(0xcf3108u)); FPUSH(v); }
/* 98fe41: mov ecx, 1 */
  ecx = 0x1u;
/* 98fe46: fcomp qword ptr [0xcf3128] */
  fpu_com(ST0, F64((uint32_t)(0xcf3128u)));
  FPOP();
/* 98fe4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98fe4e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98fe51: je 0x98fe58 */
  if (zf) goto L_98fe58;
L_98fe53: /* 98fe53: mov ecx, 2 */
  ecx = 0x2u;
L_98fe58: /* 98fe58: mov edx, ecx */
  edx = ecx;
/* 98fe5a: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 98fe5d: fld qword ptr [edx + 0xcf30e8] */
  { double v = F64((uint32_t)(edx + 0xcf30e8u)); FPUSH(v); }
/* 98fe63: xor eax, eax */
  eax = 0;
/* 98fe65: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98fe67: fsqrt  */
  ST0 = sqrt(ST0);
/* 98fe69: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 98fe6f: fstp qword ptr [0xcf3090] */
  WF64((uint32_t)(0xcf3090u), ST0); FPOP();
/* 98fe75: jle 0x98fe99 */
  if ((zf || sf != of)) goto L_98fe99;
L_98fe77: /* 98fe77: lea edx, [ecx*8 + 0xcf3098] */
  edx = (uint32_t)(ecx*8 + 0xcf3098u);
/* 98fe7e: mov edi, edi */
  edi = edi;
L_98fe80: /* 98fe80: fld qword ptr [0xcf3090] */
  { double v = F64((uint32_t)(0xcf3090u)); FPUSH(v); }
/* 98fe86: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98fe87: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 98fe89: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 98fe8c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98fe8e: fstp qword ptr [ebx + eax*8 - 8] */
  WF64((uint32_t)(ebx + eax*8 + 0xfffffff8u), ST0); FPOP();
/* 98fe92: jl 0x98fe80 */
  if ((sf != of)) goto L_98fe80;
L_98fe94: /* 98fe94: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98fe97: jge 0x98feba */
  if ((sf == of)) goto L_98feba;
L_98fe99: /* 98fe99: lea edx, [eax + ecx*2] */
  edx = (uint32_t)(eax + ecx*2);
/* 98fe9c: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98fe9e: lea ecx, [ecx*8 + 0xcf3098] */
  ecx = (uint32_t)(ecx*8 + 0xcf3098u);
L_98fea5: /* 98fea5: fld qword ptr [0xcf3090] */
  { double v = F64((uint32_t)(0xcf3090u)); FPUSH(v); }
/* 98feab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 98feac: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 98feae: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 98feb1: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98feb4: fstp qword ptr [ebx + eax*8 - 8] */
  WF64((uint32_t)(ebx + eax*8 + 0xfffffff8u), ST0); FPOP();
/* 98feb8: jl 0x98fea5 */
  if ((sf != of)) goto L_98fea5;
L_98feba: /* 98feba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 98febb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 98febc: mov esp, ebp */
  esp = ebp;
/* 98febe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 98febf: ret  */
  esp += 4; SPILL(); return;
}

void f_98fec0(void) {
  LOAD_REGS();
L_98fec0: /* 98fec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 98fec4: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 98feca: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 98fecd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 98fece: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 98fed2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 98fed3: xor esi, esi */
  esi = 0;
/* 98fed5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 98fed7: jle 0x9900ad */
  if ((zf || sf != of)) goto L_9900ad;
L_98fedd: /* 98fedd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 98fede: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 98fedf: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 98fee3: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 98fee7: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 98feea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_98fef0: /* 98fef0: cmp dword ptr [esp + 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 98fef5: mov ebx, esi */
  ebx = esi;
/* 98fef7: jl 0x990032 */
  if ((sf != of)) goto L_990032;
L_98fefd: /* 98fefd: lea edx, [esi + 3] */
  edx = (uint32_t)(esi + 0x3u);
/* 98ff00: mov ecx, edi */
  ecx = edi;
L_98ff02: /* 98ff02: fld qword ptr [edi - 0x10] */
  { double v = F64((uint32_t)(edi + 0xfffffff0u)); FPUSH(v); }
/* 98ff05: fsub qword ptr [ecx - 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff0u)));
/* 98ff08: fld qword ptr [edi - 8] */
  { double v = F64((uint32_t)(edi + 0xfffffff8u)); FPUSH(v); }
/* 98ff0b: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 98ff0e: fld qword ptr [edi] */
  { double v = F64((uint32_t)(edi)); FPUSH(v); }
/* 98ff10: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 98ff12: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98ff14: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98ff16: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 98ff18: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 98ff1a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98ff1c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 98ff1e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 98ff20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98ff22: fst qword ptr [0xcf3138] */
  WF64((uint32_t)(0xcf3138u), ST0);
/* 98ff28: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 98ff2a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98ff2c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98ff2e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 98ff30: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98ff32: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98ff35: jne 0x98ff45 */
  if (!zf) goto L_98ff45;
L_98ff37: /* 98ff37: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98ff39: mov ebp, esi */
  ebp = esi;
/* 98ff3b: fld qword ptr [0xcf3138] */
  { double v = F64((uint32_t)(0xcf3138u)); FPUSH(v); }
/* 98ff41: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_98ff45: /* 98ff45: fld qword ptr [edi - 0x10] */
  { double v = F64((uint32_t)(edi + 0xfffffff0u)); FPUSH(v); }
/* 98ff48: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 98ff4b: fld qword ptr [edi - 8] */
  { double v = F64((uint32_t)(edi + 0xfffffff8u)); FPUSH(v); }
/* 98ff4e: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 98ff51: fld qword ptr [edi] */
  { double v = F64((uint32_t)(edi)); FPUSH(v); }
/* 98ff53: fsub qword ptr [ecx + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x18u)));
/* 98ff56: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98ff58: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98ff5a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 98ff5c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 98ff5e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98ff60: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 98ff62: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 98ff64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98ff66: fst qword ptr [0xcf3138] */
  WF64((uint32_t)(0xcf3138u), ST0);
/* 98ff6c: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 98ff6e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98ff70: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98ff72: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 98ff74: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98ff76: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98ff79: jne 0x98ff8c */
  if (!zf) goto L_98ff8c;
L_98ff7b: /* 98ff7b: lea eax, [edx - 2] */
  eax = (uint32_t)(edx + 0xfffffffeu);
/* 98ff7e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98ff80: fld qword ptr [0xcf3138] */
  { double v = F64((uint32_t)(0xcf3138u)); FPUSH(v); }
/* 98ff86: mov ebp, esi */
  ebp = esi;
/* 98ff88: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_98ff8c: /* 98ff8c: fld qword ptr [edi - 0x10] */
  { double v = F64((uint32_t)(edi + 0xfffffff0u)); FPUSH(v); }
/* 98ff8f: fsub qword ptr [ecx + 0x20] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x20u)));
/* 98ff92: fld qword ptr [edi - 8] */
  { double v = F64((uint32_t)(edi + 0xfffffff8u)); FPUSH(v); }
/* 98ff95: fsub qword ptr [ecx + 0x28] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x28u)));
/* 98ff98: fld qword ptr [edi] */
  { double v = F64((uint32_t)(edi)); FPUSH(v); }
/* 98ff9a: fsub qword ptr [ecx + 0x30] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x30u)));
/* 98ff9d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98ff9f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98ffa1: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 98ffa3: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 98ffa5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98ffa7: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 98ffa9: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 98ffab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98ffad: fst qword ptr [0xcf3138] */
  WF64((uint32_t)(0xcf3138u), ST0);
/* 98ffb3: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 98ffb5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98ffb7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98ffb9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 98ffbb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 98ffbd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 98ffc0: jne 0x98ffd3 */
  if (!zf) goto L_98ffd3;
L_98ffc2: /* 98ffc2: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 98ffc5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98ffc7: fld qword ptr [0xcf3138] */
  { double v = F64((uint32_t)(0xcf3138u)); FPUSH(v); }
/* 98ffcd: mov ebp, esi */
  ebp = esi;
/* 98ffcf: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_98ffd3: /* 98ffd3: fld qword ptr [edi - 0x10] */
  { double v = F64((uint32_t)(edi + 0xfffffff0u)); FPUSH(v); }
/* 98ffd6: fsub qword ptr [ecx + 0x38] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x38u)));
/* 98ffd9: fld qword ptr [edi - 8] */
  { double v = F64((uint32_t)(edi + 0xfffffff8u)); FPUSH(v); }
/* 98ffdc: fsub qword ptr [ecx + 0x40] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x40u)));
/* 98ffdf: fld qword ptr [edi] */
  { double v = F64((uint32_t)(edi)); FPUSH(v); }
/* 98ffe1: fsub qword ptr [ecx + 0x48] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x48u)));
/* 98ffe4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 98ffe6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 98ffe8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 98ffea: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 98ffec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98ffee: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 98fff0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 98fff2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 98fff4: fstp qword ptr [0xcf3138] */
  WF64((uint32_t)(0xcf3138u), ST0); FPOP();
/* 98fffa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fffc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 98fffe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990000: fld qword ptr [0xcf3138] */
  { double v = F64((uint32_t)(0xcf3138u)); FPUSH(v); }
/* 990006: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 990008: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99000a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99000d: jne 0x99001d */
  if (!zf) goto L_99001d;
L_99000f: /* 99000f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990011: mov ebp, esi */
  ebp = esi;
/* 990013: fld qword ptr [0xcf3138] */
  { double v = F64((uint32_t)(0xcf3138u)); FPUSH(v); }
/* 990019: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_99001d: /* 99001d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 990021: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 990024: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 990027: add ecx, 0x60 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99002a: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99002c: jl 0x98ff02 */
  if ((sf != of)) goto L_98ff02;
L_990032: /* 990032: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990034: jge 0x990096 */
  if ((sf == of)) goto L_990096;
L_990036: /* 990036: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 99003a: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 99003d: lea ecx, [edx + ecx*8 + 0x10] */
  ecx = (uint32_t)(edx + ecx*8 + 0x10u);
L_990041: /* 990041: fld qword ptr [edi - 0x10] */
  { double v = F64((uint32_t)(edi + 0xfffffff0u)); FPUSH(v); }
/* 990044: fsub qword ptr [ecx - 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff0u)));
/* 990047: fld qword ptr [edi - 8] */
  { double v = F64((uint32_t)(edi + 0xfffffff8u)); FPUSH(v); }
/* 99004a: fsub qword ptr [ecx - 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0xfffffff8u)));
/* 99004d: fld qword ptr [edi] */
  { double v = F64((uint32_t)(edi)); FPUSH(v); }
/* 99004f: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 990051: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990053: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990055: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 990057: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 990059: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99005b: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 99005d: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 99005f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 990061: fstp qword ptr [0xcf3138] */
  WF64((uint32_t)(0xcf3138u), ST0); FPOP();
/* 990067: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990069: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99006b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99006d: fld qword ptr [0xcf3138] */
  { double v = F64((uint32_t)(0xcf3138u)); FPUSH(v); }
/* 990073: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 990075: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 990077: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 99007a: jne 0x99008a */
  if (!zf) goto L_99008a;
L_99007c: /* 99007c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 99007e: mov ebp, esi */
  ebp = esi;
/* 990080: fld qword ptr [0xcf3138] */
  { double v = F64((uint32_t)(0xcf3138u)); FPUSH(v); }
/* 990086: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_99008a: /* 99008a: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99008e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 99008f: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 990092: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990094: jl 0x990041 */
  if ((sf != of)) goto L_990041;
L_990096: /* 990096: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 99009a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 99009b: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 99009c: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 99009f: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9900a1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 9900a5: jl 0x98fef0 */
  if ((sf != of)) goto L_98fef0;
L_9900ab: /* 9900ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9900ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_9900ad: /* 9900ad: fsqrt  */
  ST0 = sqrt(ST0);
/* 9900af: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 9900b3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 9900b7: lea eax, [ebp + ebp*2] */
  eax = (uint32_t)(ebp + ebp*2);
/* 9900bb: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 9900be: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 9900c1: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 9900c4: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 9900c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9900c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9900ca: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 9900d0: fstp qword ptr [0xcf3130] */
  WF64((uint32_t)(0xcf3130u), ST0); FPOP();
/* 9900d6: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 9900d8: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 9900da: fmul qword ptr [0xcf3130] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3130u)));
/* 9900e0: fstp qword ptr [edx] */
  WF64((uint32_t)(edx), ST0); FPOP();
/* 9900e2: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 9900e5: fsub qword ptr [ecx + 8] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x8u)));
/* 9900e8: fmul qword ptr [0xcf3130] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3130u)));
/* 9900ee: fstp qword ptr [edx + 8] */
  WF64((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 9900f1: fld qword ptr [eax + 0x10] */
  { double v = F64((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 9900f4: fsub qword ptr [ecx + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(ecx + 0x10u)));
/* 9900f7: fmul qword ptr [0xcf3130] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3130u)));
/* 9900fd: fstp qword ptr [edx + 0x10] */
  WF64((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 990100: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 990103: ret  */
  esp += 4; SPILL(); return;
}

void f_990110(void) {
  LOAD_REGS();
L_990110: /* 990110: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 990113: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 990114: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 990115: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 990119: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99011a: xor esi, esi */
  esi = 0;
/* 99011c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99011e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 99011f: mov ebx, eax */
  ebx = eax;
/* 990121: jle 0x990157 */
  if ((zf || sf != of)) goto L_990157;
L_990123: /* 990123: mov ecx, ebp */
  ecx = ebp;
/* 990125: mov eax, 1 */
  eax = 0x1u;
/* 99012a: lea edi, [esp + 0x18] */
  edi = (uint32_t)(esp + 0x18u);
/* 99012e: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 990131: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_990133: /* 990133: fld qword ptr [edx + 8] */
  { double v = F64((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 990136: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 990137: fmul qword ptr [ebx + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebx + 0x10u)));
/* 99013a: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99013d: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99013f: fld qword ptr [edx - 0x20] */
  { double v = F64((uint32_t)(edx + 0xffffffe0u)); FPUSH(v); }
/* 990142: fmul qword ptr [ebx] */
  ST0 = ST0 * (F64((uint32_t)(ebx)));
/* 990144: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 990146: fld qword ptr [edx - 0x18] */
  { double v = F64((uint32_t)(edx + 0xffffffe8u)); FPUSH(v); }
/* 990149: fmul qword ptr [ebx + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebx + 0x8u)));
/* 99014c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 99014e: fstp qword ptr [esi*8 + 0xcf3138] */
  WF64((uint32_t)(esi*8 + 0xcf3138u), ST0); FPOP();
/* 990155: jl 0x990133 */
  if ((sf != of)) goto L_990133;
L_990157: /* 990157: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 99015b: xor ebx, ebx */
  ebx = 0;
/* 99015d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99015f: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 990163: je 0x9902cf */
  if (zf) goto L_9902cf;
L_990169: /* 990169: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 99016b: jle 0x990437 */
  if ((zf || sf != of)) goto L_990437;
L_990171: /* 990171: xor ecx, ecx */
  ecx = 0;
L_990173: /* 990173: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 990177: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 990179: jne 0x990180 */
  if (!zf) goto L_990180;
L_99017b: /* 99017b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 99017c: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99017e: jl 0x990173 */
  if ((sf != of)) goto L_990173;
L_990180: /* 990180: mov edi, ecx */
  edi = ecx;
/* 990182: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 990183: mov eax, ebp */
  eax = ebp;
/* 990185: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 990187: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99018a: jl 0x990272 */
  if ((sf != of)) goto L_990272;
L_990190: /* 990190: mov eax, 0x10 */
  eax = 0x10u;
/* 990195: sub eax, 0xcf3148 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3148u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 99019a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 99019e: mov eax, 0x18 */
  eax = 0x18u;
/* 9901a3: sub eax, 0xcf3148 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3148u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9901a8: lea esi, [ecx + 3] */
  esi = (uint32_t)(ecx + 0x3u);
/* 9901ab: lea edx, [edi*8] */
  edx = (uint32_t)(edi*8);
/* 9901b2: lea ebp, [ecx*8 + 8] */
  ebp = (uint32_t)(ecx*8 + 0x8u);
/* 9901b9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_9901bd: /* 9901bd: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 9901c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9901c3: je 0x9901e3 */
  if (zf) goto L_9901e3;
L_9901c5: /* 9901c5: lea ebx, [ecx*8] */
  ebx = (uint32_t)(ecx*8);
/* 9901cc: fld qword ptr [ebx + 0xcf3140] */
  { double v = F64((uint32_t)(ebx + 0xcf3140u)); FPUSH(v); }
/* 9901d2: fcomp qword ptr [edx + 0xcf3140] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf3140u)));
  FPOP();
/* 9901d8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9901da: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9901dd: jp 0x9901e3 */
  if (pf) goto L_9901e3;
L_9901df: /* 9901df: mov edi, ecx */
  edi = ecx;
/* 9901e1: mov edx, ebx */
  edx = ebx;
L_9901e3: /* 9901e3: mov eax, dword ptr [esp + ecx*4 + 0x1c] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x1cu));
/* 9901e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9901e9: je 0x990204 */
  if (zf) goto L_990204;
L_9901eb: /* 9901eb: fld qword ptr [ecx*8 + 0xcf3148] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf3148u)); FPUSH(v); }
/* 9901f2: fcomp qword ptr [edx + 0xcf3140] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf3140u)));
  FPOP();
/* 9901f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9901fa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9901fd: jp 0x990204 */
  if (pf) goto L_990204;
L_9901ff: /* 9901ff: lea edi, [esi - 2] */
  edi = (uint32_t)(esi + 0xfffffffeu);
/* 990202: mov edx, ebp */
  edx = ebp;
L_990204: /* 990204: mov eax, dword ptr [esp + ecx*4 + 0x20] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x20u));
/* 990208: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 99020a: je 0x99022e */
  if (zf) goto L_99022e;
L_99020c: /* 99020c: fld qword ptr [ecx*8 + 0xcf3150] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf3150u)); FPUSH(v); }
/* 990213: fcomp qword ptr [edx + 0xcf3140] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf3140u)));
  FPOP();
/* 990219: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99021b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99021e: jp 0x99022e */
  if (pf) goto L_99022e;
L_990220: /* 990220: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 990224: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
/* 990227: lea edx, [edx + ecx*8 + 0xcf3148] */
  edx = (uint32_t)(edx + ecx*8 + 0xcf3148u);
L_99022e: /* 99022e: mov eax, dword ptr [esp + ecx*4 + 0x24] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x24u));
/* 990232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 990234: je 0x990257 */
  if (zf) goto L_990257;
L_990236: /* 990236: fld qword ptr [ecx*8 + 0xcf3158] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf3158u)); FPUSH(v); }
/* 99023d: fcomp qword ptr [edx + 0xcf3140] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf3140u)));
  FPOP();
/* 990243: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 990245: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 990248: jp 0x990257 */
  if (pf) goto L_990257;
L_99024a: /* 99024a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 99024e: mov edi, esi */
  edi = esi;
/* 990250: lea edx, [eax + ecx*8 + 0xcf3148] */
  edx = (uint32_t)(eax + ecx*8 + 0xcf3148u);
L_990257: /* 990257: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 99025b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 99025e: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 990261: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 990264: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990266: jl 0x9901bd */
  if ((sf != of)) goto L_9901bd;
L_99026c: /* 99026c: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 990270: mov ebp, eax */
  ebp = eax;
L_990272: /* 990272: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990274: jge 0x9902ab */
  if ((sf == of)) goto L_9902ab;
L_990276: /* 990276: lea esi, [edi*8] */
  esi = (uint32_t)(edi*8);
/* 99027d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_990280: /* 990280: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 990284: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 990286: je 0x9902a6 */
  if (zf) goto L_9902a6;
L_990288: /* 990288: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 99028f: fld qword ptr [edx + 0xcf3140] */
  { double v = F64((uint32_t)(edx + 0xcf3140u)); FPUSH(v); }
/* 990295: fcomp qword ptr [esi + 0xcf3140] */
  fpu_com(ST0, F64((uint32_t)(esi + 0xcf3140u)));
  FPOP();
/* 99029b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99029d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9902a0: jp 0x9902a6 */
  if (pf) goto L_9902a6;
L_9902a2: /* 9902a2: mov edi, ecx */
  edi = ecx;
/* 9902a4: mov esi, edx */
  esi = edx;
L_9902a6: /* 9902a6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9902a7: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9902a9: jl 0x990280 */
  if ((sf != of)) goto L_990280;
L_9902ab: /* 9902ab: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 9902af: mov dword ptr [ecx + ebx*4], edi */
  W32((uint32_t)(ecx + ebx*4), edi);
/* 9902b2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 9902b3: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9902b5: mov dword ptr [esp + edi*4 + 0x18], 0 */
  W32((uint32_t)(esp + edi*4 + 0x18u), 0x0u);
/* 9902bd: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 9902c1: jl 0x990171 */
  if ((sf != of)) goto L_990171;
L_9902c7: /* 9902c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 9902c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 9902c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 9902ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 9902cb: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 9902ce: ret  */
  esp += 4; SPILL(); return;
L_9902cf: /* 9902cf: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9902d1: jle 0x990437 */
  if ((zf || sf != of)) goto L_990437;
L_9902d7: /* 9902d7: xor ecx, ecx */
  ecx = 0;
/* 9902d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9902e0: /* 9902e0: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 9902e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9902e6: jne 0x9902ed */
  if (!zf) goto L_9902ed;
L_9902e8: /* 9902e8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9902e9: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9902eb: jl 0x9902e0 */
  if ((sf != of)) goto L_9902e0;
L_9902ed: /* 9902ed: mov edi, ecx */
  edi = ecx;
/* 9902ef: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 9902f0: mov edx, ebp */
  edx = ebp;
/* 9902f2: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 9902f4: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9902f7: jl 0x9903df */
  if ((sf != of)) goto L_9903df;
L_9902fd: /* 9902fd: mov eax, 0x10 */
  eax = 0x10u;
/* 990302: sub eax, 0xcf3148 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3148u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 990307: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 99030b: mov eax, 0x18 */
  eax = 0x18u;
/* 990310: sub eax, 0xcf3148 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcf3148u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 990315: lea esi, [ecx + 3] */
  esi = (uint32_t)(ecx + 0x3u);
/* 990318: lea edx, [edi*8] */
  edx = (uint32_t)(edi*8);
/* 99031f: lea ebp, [ecx*8 + 8] */
  ebp = (uint32_t)(ecx*8 + 0x8u);
/* 990326: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_99032a: /* 99032a: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 99032e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 990330: je 0x990350 */
  if (zf) goto L_990350;
L_990332: /* 990332: lea ebx, [ecx*8] */
  ebx = (uint32_t)(ecx*8);
/* 990339: fld qword ptr [ebx + 0xcf3140] */
  { double v = F64((uint32_t)(ebx + 0xcf3140u)); FPUSH(v); }
/* 99033f: fcomp qword ptr [edx + 0xcf3140] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf3140u)));
  FPOP();
/* 990345: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 990347: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99034a: jp 0x990350 */
  if (pf) goto L_990350;
L_99034c: /* 99034c: mov edi, ecx */
  edi = ecx;
/* 99034e: mov edx, ebx */
  edx = ebx;
L_990350: /* 990350: mov eax, dword ptr [esp + ecx*4 + 0x1c] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x1cu));
/* 990354: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 990356: je 0x990371 */
  if (zf) goto L_990371;
L_990358: /* 990358: fld qword ptr [ecx*8 + 0xcf3148] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf3148u)); FPUSH(v); }
/* 99035f: fcomp qword ptr [edx + 0xcf3140] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf3140u)));
  FPOP();
/* 990365: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 990367: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99036a: jp 0x990371 */
  if (pf) goto L_990371;
L_99036c: /* 99036c: lea edi, [esi - 2] */
  edi = (uint32_t)(esi + 0xfffffffeu);
/* 99036f: mov edx, ebp */
  edx = ebp;
L_990371: /* 990371: mov eax, dword ptr [esp + ecx*4 + 0x20] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x20u));
/* 990375: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 990377: je 0x99039b */
  if (zf) goto L_99039b;
L_990379: /* 990379: fld qword ptr [ecx*8 + 0xcf3150] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf3150u)); FPUSH(v); }
/* 990380: fcomp qword ptr [edx + 0xcf3140] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf3140u)));
  FPOP();
/* 990386: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 990388: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 99038b: jp 0x99039b */
  if (pf) goto L_99039b;
L_99038d: /* 99038d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 990391: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
/* 990394: lea edx, [eax + ecx*8 + 0xcf3148] */
  edx = (uint32_t)(eax + ecx*8 + 0xcf3148u);
L_99039b: /* 99039b: mov eax, dword ptr [esp + ecx*4 + 0x24] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x24u));
/* 99039f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9903a1: je 0x9903c4 */
  if (zf) goto L_9903c4;
L_9903a3: /* 9903a3: fld qword ptr [ecx*8 + 0xcf3158] */
  { double v = F64((uint32_t)(ecx*8 + 0xcf3158u)); FPUSH(v); }
/* 9903aa: fcomp qword ptr [edx + 0xcf3140] */
  fpu_com(ST0, F64((uint32_t)(edx + 0xcf3140u)));
  FPOP();
/* 9903b0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9903b2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9903b5: jp 0x9903c4 */
  if (pf) goto L_9903c4;
L_9903b7: /* 9903b7: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 9903bb: mov edi, esi */
  edi = esi;
/* 9903bd: lea edx, [edx + ecx*8 + 0xcf3148] */
  edx = (uint32_t)(edx + ecx*8 + 0xcf3148u);
L_9903c4: /* 9903c4: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 9903c8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 9903cb: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 9903ce: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 9903d1: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9903d3: jl 0x99032a */
  if ((sf != of)) goto L_99032a;
L_9903d9: /* 9903d9: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 9903dd: mov ebp, eax */
  ebp = eax;
L_9903df: /* 9903df: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9903e1: jge 0x99041b */
  if ((sf == of)) goto L_99041b;
L_9903e3: /* 9903e3: lea esi, [edi*8] */
  esi = (uint32_t)(edi*8);
/* 9903ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_9903f0: /* 9903f0: mov eax, dword ptr [esp + ecx*4 + 0x18] */
  eax = R32((uint32_t)(esp + ecx*4 + 0x18u));
/* 9903f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 9903f6: je 0x990416 */
  if (zf) goto L_990416;
L_9903f8: /* 9903f8: lea edx, [ecx*8] */
  edx = (uint32_t)(ecx*8);
/* 9903ff: fld qword ptr [edx + 0xcf3140] */
  { double v = F64((uint32_t)(edx + 0xcf3140u)); FPUSH(v); }
/* 990405: fcomp qword ptr [esi + 0xcf3140] */
  fpu_com(ST0, F64((uint32_t)(esi + 0xcf3140u)));
  FPOP();
/* 99040b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 99040d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 990410: jp 0x990416 */
  if (pf) goto L_990416;
L_990412: /* 990412: mov edi, ecx */
  edi = ecx;
/* 990414: mov esi, edx */
  esi = edx;
L_990416: /* 990416: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 990417: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990419: jl 0x9903f0 */
  if ((sf != of)) goto L_9903f0;
L_99041b: /* 99041b: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 99041f: mov dword ptr [eax + ebx*4], edi */
  W32((uint32_t)(eax + ebx*4), edi);
/* 990422: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 990423: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990425: mov dword ptr [esp + edi*4 + 0x18], 0 */
  W32((uint32_t)(esp + edi*4 + 0x18u), 0x0u);
/* 99042d: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 990431: jl 0x9902d7 */
  if ((sf != of)) goto L_9902d7;
L_990437: /* 990437: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 990438: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 990439: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 99043a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 99043b: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 99043e: ret  */
  esp += 4; SPILL(); return;
}

void f_990440(void) {
  LOAD_REGS();
L_990440: /* 990440: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 990441: mov edi, eax */
  edi = eax;
/* 990443: xor eax, eax */
  eax = 0;
/* 990445: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 990447: jle 0x990488 */
  if ((zf || sf != of)) goto L_990488;
L_990449: /* 990449: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 99044a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 99044b: mov esi, ebx */
  esi = ebx;
/* 99044d: mov edx, edi */
  edx = edi;
/* 99044f: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_990451: /* 990451: mov ebp, dword ptr [esi + edx] */
  ebp = R32((uint32_t)(esi + edx));
/* 990454: cmp ebp, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 990456: jne 0x99046d */
  if (!zf) goto L_99046d;
L_990458: /* 990458: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 990459: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 99045c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99045e: jl 0x990451 */
  if ((sf != of)) goto L_990451;
L_990460: /* 990460: xor edx, edx */
  edx = 0;
/* 990462: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 990464: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 990467: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 990468: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 990469: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 99046a: mov eax, edx */
  eax = edx;
/* 99046c: ret  */
  esp += 4; SPILL(); return;
L_99046d: /* 99046d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99046f: jge 0x990486 */
  if ((sf == of)) goto L_990486;
L_990471: /* 990471: xor eax, eax */
  eax = 0;
/* 990473: lea edx, [edi + ecx*4 - 4] */
  edx = (uint32_t)(edi + ecx*4 + 0xfffffffcu);
L_990477: /* 990477: mov esi, dword ptr [ebx + eax*4] */
  esi = R32((uint32_t)(ebx + eax*4));
/* 99047a: cmp esi, dword ptr [edx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99047c: jne 0x990486 */
  if (!zf) goto L_990486;
L_99047e: /* 99047e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 99047f: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 990482: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990484: jl 0x990477 */
  if ((sf != of)) goto L_990477;
L_990486: /* 990486: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 990487: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_990488: /* 990488: xor edx, edx */
  edx = 0;
/* 99048a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 99048c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 99048f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 990490: mov eax, edx */
  eax = edx;
/* 990492: ret  */
  esp += 4; SPILL(); return;
}

void f_9904a0(void) {
  LOAD_REGS();
L_9904a0: /* 9904a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 9904a1: mov ebp, esp */
  ebp = esp;
/* 9904a3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 9904a6: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 9904a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 9904aa: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 9904ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 9904ae: mov esi, eax */
  esi = eax;
/* 9904b0: xor eax, eax */
  eax = 0;
/* 9904b2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 9904b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 9904b5: jle 0x990563 */
  if ((zf || sf != of)) goto L_990563;
L_9904bb: /* 9904bb: mov ecx, 0xcf32c8 */
  ecx = 0xcf32c8u;
L_9904c0: /* 9904c0: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 9904c3: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 9904c6: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 9904c9: mov ebx, dword ptr [ebx + edi*8] */
  ebx = R32((uint32_t)(ebx + edi*8));
/* 9904cc: mov dword ptr [ecx - 8], ebx */
  W32((uint32_t)(ecx + 0xfffffff8u), ebx);
/* 9904cf: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 9904d2: mov edi, dword ptr [ebx + edi*8 + 4] */
  edi = R32((uint32_t)(ebx + edi*8 + 0x4u));
/* 9904d6: mov dword ptr [ecx - 4], edi */
  W32((uint32_t)(ecx + 0xfffffffcu), edi);
/* 9904d9: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 9904dc: mov ebx, dword ptr [esi + edi*8] */
  ebx = R32((uint32_t)(esi + edi*8));
/* 9904df: mov dword ptr [eax*8 + 0xcf3240], ebx */
  W32((uint32_t)(eax*8 + 0xcf3240u), ebx);
/* 9904e6: mov edi, dword ptr [esi + edi*8 + 4] */
  edi = R32((uint32_t)(esi + edi*8 + 0x4u));
/* 9904ea: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 9904ed: mov dword ptr [eax*8 + 0xcf3244], edi */
  W32((uint32_t)(eax*8 + 0xcf3244u), edi);
/* 9904f4: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 9904f7: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 9904fa: mov ebx, dword ptr [ebx + edi*8 + 8] */
  ebx = R32((uint32_t)(ebx + edi*8 + 0x8u));
/* 9904fe: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 990500: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 990503: mov edi, dword ptr [ebx + edi*8 + 0xc] */
  edi = R32((uint32_t)(ebx + edi*8 + 0xcu));
/* 990507: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 99050a: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 99050d: mov ebx, dword ptr [esi + edi*8] */
  ebx = R32((uint32_t)(esi + edi*8));
/* 990510: mov dword ptr [eax*8 + 0xcf3240], ebx */
  W32((uint32_t)(eax*8 + 0xcf3240u), ebx);
/* 990517: mov edi, dword ptr [esi + edi*8 + 4] */
  edi = R32((uint32_t)(esi + edi*8 + 0x4u));
/* 99051b: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 99051e: mov dword ptr [eax*8 + 0xcf3244], edi */
  W32((uint32_t)(eax*8 + 0xcf3244u), edi);
/* 990525: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 990528: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 99052b: mov ebx, dword ptr [ebx + edi*8 + 0x10] */
  ebx = R32((uint32_t)(ebx + edi*8 + 0x10u));
/* 99052f: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 990532: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 990535: mov edi, dword ptr [ebx + edi*8 + 0x14] */
  edi = R32((uint32_t)(ebx + edi*8 + 0x14u));
/* 990539: mov dword ptr [ecx + 0xc], edi */
  W32((uint32_t)(ecx + 0xcu), edi);
/* 99053c: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 99053f: mov ebx, dword ptr [esi + edi*8] */
  ebx = R32((uint32_t)(esi + edi*8));
/* 990542: mov dword ptr [eax*8 + 0xcf3240], ebx */
  W32((uint32_t)(eax*8 + 0xcf3240u), ebx);
/* 990549: mov edi, dword ptr [esi + edi*8 + 4] */
  edi = R32((uint32_t)(esi + edi*8 + 0x4u));
/* 99054d: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 990550: mov dword ptr [eax*8 + 0xcf3244], edi */
  W32((uint32_t)(eax*8 + 0xcf3244u), edi);
/* 990557: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 990558: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 99055b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99055d: jl 0x9904c0 */
  if ((sf != of)) goto L_9904c0;
L_990563: /* 990563: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 990566: lea esi, [eax*8 + 0xcf32c8] */
  esi = (uint32_t)(eax*8 + 0xcf32c8u);
/* 99056d: mov dword ptr [0xcf3228], 0 */
  W32((uint32_t)(0xcf3228u), 0x0u);
/* 990577: mov dword ptr [0xcf322c], 0 */
  W32((uint32_t)(0xcf322cu), 0x0u);
/* 990581: mov dword ptr [0xcf3210], 0 */
  W32((uint32_t)(0xcf3210u), 0x0u);
/* 99058b: mov dword ptr [0xcf3214], 0 */
  W32((uint32_t)(0xcf3214u), 0x0u);
/* 990595: mov dword ptr [0xcf31d8], 0 */
  W32((uint32_t)(0xcf31d8u), 0x0u);
/* 99059f: mov dword ptr [0xcf31dc], 0 */
  W32((uint32_t)(0xcf31dcu), 0x0u);
/* 9905a9: mov dword ptr [0xcf31d0], 0 */
  W32((uint32_t)(0xcf31d0u), 0x0u);
/* 9905b3: mov dword ptr [0xcf31d4], 0 */
  W32((uint32_t)(0xcf31d4u), 0x0u);
/* 9905bd: mov dword ptr [0xcf31c8], 0 */
  W32((uint32_t)(0xcf31c8u), 0x0u);
/* 9905c7: mov dword ptr [0xcf31cc], 0 */
  W32((uint32_t)(0xcf31ccu), 0x0u);
/* 9905d1: mov dword ptr [0xcf3230], 0 */
  W32((uint32_t)(0xcf3230u), 0x0u);
/* 9905db: mov dword ptr [0xcf3234], 0 */
  W32((uint32_t)(0xcf3234u), 0x0u);
/* 9905e5: mov dword ptr [0xcf3218], 0 */
  W32((uint32_t)(0xcf3218u), 0x0u);
/* 9905ef: mov dword ptr [0xcf321c], 0 */
  W32((uint32_t)(0xcf321cu), 0x0u);
/* 9905f9: mov dword ptr [0xcf31f0], 0 */
  W32((uint32_t)(0xcf31f0u), 0x0u);
/* 990603: mov dword ptr [0xcf31f4], 0 */
  W32((uint32_t)(0xcf31f4u), 0x0u);
/* 99060d: mov dword ptr [0xcf31e8], 0 */
  W32((uint32_t)(0xcf31e8u), 0x0u);
/* 990617: mov dword ptr [0xcf31ec], 0 */
  W32((uint32_t)(0xcf31ecu), 0x0u);
/* 990621: mov dword ptr [0xcf31e0], 0 */
  W32((uint32_t)(0xcf31e0u), 0x0u);
/* 99062b: mov dword ptr [0xcf31e4], 0 */
  W32((uint32_t)(0xcf31e4u), 0x0u);
/* 990635: mov dword ptr [0xcf3238], 0 */
  W32((uint32_t)(0xcf3238u), 0x0u);
/* 99063f: mov dword ptr [0xcf323c], 0 */
  W32((uint32_t)(0xcf323cu), 0x0u);
/* 990649: mov dword ptr [0xcf3220], 0 */
  W32((uint32_t)(0xcf3220u), 0x0u);
/* 990653: mov dword ptr [0xcf3224], 0 */
  W32((uint32_t)(0xcf3224u), 0x0u);
/* 99065d: mov dword ptr [0xcf3208], 0 */
  W32((uint32_t)(0xcf3208u), 0x0u);
/* 990667: mov dword ptr [0xcf320c], 0 */
  W32((uint32_t)(0xcf320cu), 0x0u);
/* 990671: mov dword ptr [0xcf3200], 0 */
  W32((uint32_t)(0xcf3200u), 0x0u);
/* 99067b: mov dword ptr [0xcf3204], 0 */
  W32((uint32_t)(0xcf3204u), 0x0u);
/* 990685: mov dword ptr [0xcf31f8], 0 */
  W32((uint32_t)(0xcf31f8u), 0x0u);
/* 99068f: mov dword ptr [0xcf31fc], 0 */
  W32((uint32_t)(0xcf31fcu), 0x0u);
/* 990699: mov edi, ebx */
  edi = ebx;
/* 99069b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 99069f: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
L_9906a3: /* 9906a3: mov edx, ebx */
  edx = ebx;
/* 9906a5: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 9906a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_9906b0: /* 9906b0: mov ecx, ebx */
  ecx = ebx;
L_9906b2: /* 9906b2: fld qword ptr [0xcf31f8] */
  { double v = F64((uint32_t)(0xcf31f8u)); FPUSH(v); }
/* 9906b8: fmul qword ptr [0xcf31f8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf31f8u)));
/* 9906be: fchs  */
  ST0 = -ST0;
/* 9906c0: fld qword ptr [0xcf3200] */
  { double v = F64((uint32_t)(0xcf3200u)); FPUSH(v); }
/* 9906c6: fmul qword ptr [0xcf3200] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3200u)));
/* 9906cc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9906ce: fld qword ptr [0xcf3208] */
  { double v = F64((uint32_t)(0xcf3208u)); FPUSH(v); }
/* 9906d4: fmul qword ptr [0xcf3208] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3208u)));
/* 9906da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 9906dc: fld qword ptr [0xcf31c0] */
  { double v = F64((uint32_t)(0xcf31c0u)); FPUSH(v); }
/* 9906e2: fmul qword ptr [0xcf3220] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3220u)));
/* 9906e8: fld qword ptr [0xb04370] */
  { double v = F64((uint32_t)(0xb04370u)); FPUSH(v); }
/* 9906ee: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 9906f0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 9906f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 9906f4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 9906f7: jp 0x990726 */
  if (pf) goto L_990726;
L_9906f9: /* 9906f9: mov ebx, dword ptr [0xcf3224] */
  ebx = R32((uint32_t)(0xcf3224u));
/* 9906ff: fstp qword ptr [0xcf31c0] */
  WF64((uint32_t)(0xcf31c0u), ST0); FPOP();
/* 990705: mov eax, dword ptr [0xcf3220] */
  eax = R32((uint32_t)(0xcf3220u));
/* 99070a: mov dword ptr [0xb04374], ebx */
  W32((uint32_t)(0xb04374u), ebx);
/* 990710: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 990713: mov dword ptr [0xb04370], eax */
  W32((uint32_t)(0xb04370u), eax);
/* 990718: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 99071c: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 990720: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 990724: jmp 0x990728 */
  goto L_990728;
L_990726: /* 990726: fstp st(0) */
  STI(0) = ST0; FPOP();
L_990728: /* 990728: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 990729: sub esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 99072c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 99072e: jl 0x9907a4 */
  if ((sf != of)) goto L_9907a4;
L_990730: /* 990730: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 990733: cmp dword ptr [eax], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990736: jl 0x9907a4 */
  if ((sf != of)) goto L_9907a4;
L_990738: /* 990738: fld qword ptr [0xcf31f8] */
  { double v = F64((uint32_t)(0xcf31f8u)); FPUSH(v); }
/* 99073e: fadd qword ptr [esi - 8] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0xfffffff8u)));
/* 990741: fstp qword ptr [0xcf31f8] */
  WF64((uint32_t)(0xcf31f8u), ST0); FPOP();
/* 990747: fld qword ptr [0xcf3200] */
  { double v = F64((uint32_t)(0xcf3200u)); FPUSH(v); }
/* 99074d: fadd qword ptr [esi] */
  ST0 = ST0 + (F64((uint32_t)(esi)));
/* 99074f: fstp qword ptr [0xcf3200] */
  WF64((uint32_t)(0xcf3200u), ST0); FPOP();
/* 990755: fld qword ptr [0xcf3208] */
  { double v = F64((uint32_t)(0xcf3208u)); FPUSH(v); }
/* 99075b: fadd qword ptr [esi + 8] */
  ST0 = ST0 + (F64((uint32_t)(esi + 0x8u)));
/* 99075e: fstp qword ptr [0xcf3208] */
  WF64((uint32_t)(0xcf3208u), ST0); FPOP();
/* 990764: fld qword ptr [0xcf3238] */
  { double v = F64((uint32_t)(0xcf3238u)); FPUSH(v); }
/* 99076a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99076c: fsubr qword ptr [0xa110e0] */
  ST0 = (F64((uint32_t)(0xa110e0u))) - ST0;
/* 990772: fsub qword ptr [ecx*8 + 0xcf3240] */
  ST0 = ST0 - (F64((uint32_t)(ecx*8 + 0xcf3240u)));
/* 990779: fmul qword ptr [ecx*8 + 0xcf3240] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf3240u)));
/* 990780: fadd qword ptr [0xcf3220] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3220u)));
/* 990786: fstp qword ptr [0xcf3220] */
  WF64((uint32_t)(0xcf3220u), ST0); FPOP();
/* 99078c: fld qword ptr [0xcf3238] */
  { double v = F64((uint32_t)(0xcf3238u)); FPUSH(v); }
/* 990792: fadd qword ptr [ecx*8 + 0xcf3240] */
  ST0 = ST0 + (F64((uint32_t)(ecx*8 + 0xcf3240u)));
/* 990799: fstp qword ptr [0xcf3238] */
  WF64((uint32_t)(0xcf3238u), ST0); FPOP();
/* 99079f: jmp 0x9906b2 */
  goto L_9906b2;
L_9907a4: /* 9907a4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 9907a8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 9907a9: sub eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9907ac: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9907ae: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 9907b2: jl 0x99089a */
  if ((sf != of)) goto L_99089a;
L_9907b8: /* 9907b8: fld qword ptr [0xcf31e0] */
  { double v = F64((uint32_t)(0xcf31e0u)); FPUSH(v); }
/* 9907be: fadd qword ptr [eax - 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xfffffff8u)));
/* 9907c1: fstp qword ptr [0xcf31e0] */
  WF64((uint32_t)(0xcf31e0u), ST0); FPOP();
/* 9907c7: mov ecx, dword ptr [0xcf31e0] */
  ecx = R32((uint32_t)(0xcf31e0u));
/* 9907cd: fld qword ptr [0xcf31e8] */
  { double v = F64((uint32_t)(0xcf31e8u)); FPUSH(v); }
/* 9907d3: mov esi, dword ptr [0xcf31e4] */
  esi = R32((uint32_t)(0xcf31e4u));
/* 9907d9: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 9907db: mov dword ptr [0xcf31f8], ecx */
  W32((uint32_t)(0xcf31f8u), ecx);
/* 9907e1: mov dword ptr [0xcf31fc], esi */
  W32((uint32_t)(0xcf31fcu), esi);
/* 9907e7: fstp qword ptr [0xcf31e8] */
  WF64((uint32_t)(0xcf31e8u), ST0); FPOP();
/* 9907ed: mov ecx, dword ptr [0xcf31e8] */
  ecx = R32((uint32_t)(0xcf31e8u));
/* 9907f3: fld qword ptr [0xcf31f0] */
  { double v = F64((uint32_t)(0xcf31f0u)); FPUSH(v); }
/* 9907f9: mov esi, dword ptr [0xcf31ec] */
  esi = R32((uint32_t)(0xcf31ecu));
/* 9907ff: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 990802: mov dword ptr [0xcf3200], ecx */
  W32((uint32_t)(0xcf3200u), ecx);
/* 990808: mov dword ptr [0xcf3204], esi */
  W32((uint32_t)(0xcf3204u), esi);
/* 99080e: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 990812: fstp qword ptr [0xcf31f0] */
  WF64((uint32_t)(0xcf31f0u), ST0); FPOP();
/* 990818: mov eax, dword ptr [0xcf31f0] */
  eax = R32((uint32_t)(0xcf31f0u));
/* 99081d: fld qword ptr [0xcf3230] */
  { double v = F64((uint32_t)(0xcf3230u)); FPUSH(v); }
/* 990823: mov ecx, dword ptr [0xcf31f4] */
  ecx = R32((uint32_t)(0xcf31f4u));
/* 990829: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99082b: mov dword ptr [0xcf3208], eax */
  W32((uint32_t)(0xcf3208u), eax);
/* 990830: mov dword ptr [0xcf320c], ecx */
  W32((uint32_t)(0xcf320cu), ecx);
/* 990836: fsubr qword ptr [0xa16940] */
  ST0 = (F64((uint32_t)(0xa16940u))) - ST0;
/* 99083c: fsub qword ptr [edx*8 + 0xcf3240] */
  ST0 = ST0 - (F64((uint32_t)(edx*8 + 0xcf3240u)));
/* 990843: fmul qword ptr [edx*8 + 0xcf3240] */
  ST0 = ST0 * (F64((uint32_t)(edx*8 + 0xcf3240u)));
/* 99084a: fadd qword ptr [0xcf3218] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3218u)));
/* 990850: fstp qword ptr [0xcf3218] */
  WF64((uint32_t)(0xcf3218u), ST0); FPOP();
/* 990856: mov eax, dword ptr [0xcf3218] */
  eax = R32((uint32_t)(0xcf3218u));
/* 99085b: fld qword ptr [0xcf3230] */
  { double v = F64((uint32_t)(0xcf3230u)); FPUSH(v); }
/* 990861: mov ecx, dword ptr [0xcf321c] */
  ecx = R32((uint32_t)(0xcf321cu));
/* 990867: fadd qword ptr [edx*8 + 0xcf3240] */
  ST0 = ST0 + (F64((uint32_t)(edx*8 + 0xcf3240u)));
/* 99086e: mov dword ptr [0xcf3220], eax */
  W32((uint32_t)(0xcf3220u), eax);
/* 990873: mov dword ptr [0xcf3224], ecx */
  W32((uint32_t)(0xcf3224u), ecx);
/* 990879: fstp qword ptr [0xcf3230] */
  WF64((uint32_t)(0xcf3230u), ST0); FPOP();
/* 99087f: mov eax, dword ptr [0xcf3230] */
  eax = R32((uint32_t)(0xcf3230u));
/* 990884: mov ecx, dword ptr [0xcf3234] */
  ecx = R32((uint32_t)(0xcf3234u));
/* 99088a: mov dword ptr [0xcf3238], eax */
  W32((uint32_t)(0xcf3238u), eax);
/* 99088f: mov dword ptr [0xcf323c], ecx */
  W32((uint32_t)(0xcf323cu), ecx);
/* 990895: jmp 0x9906b0 */
  goto L_9906b0;
L_99089a: /* 99089a: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 99089e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 99089f: sub eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 9908a2: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 9908a5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 9908a9: jl 0x9909d9 */
  if ((sf != of)) goto L_9909d9;
L_9908af: /* 9908af: fld qword ptr [0xcf31c8] */
  { double v = F64((uint32_t)(0xcf31c8u)); FPUSH(v); }
/* 9908b5: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 9908b9: fadd qword ptr [eax - 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0xfffffff8u)));
/* 9908bc: fstp qword ptr [0xcf31c8] */
  WF64((uint32_t)(0xcf31c8u), ST0); FPOP();
/* 9908c2: mov edx, dword ptr [0xcf31c8] */
  edx = R32((uint32_t)(0xcf31c8u));
/* 9908c8: fld qword ptr [0xcf31d0] */
  { double v = F64((uint32_t)(0xcf31d0u)); FPUSH(v); }
/* 9908ce: mov ecx, dword ptr [0xcf31cc] */
  ecx = R32((uint32_t)(0xcf31ccu));
/* 9908d4: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 9908d6: mov dword ptr [0xcf31e0], edx */
  W32((uint32_t)(0xcf31e0u), edx);
/* 9908dc: mov dword ptr [0xcf31f8], edx */
  W32((uint32_t)(0xcf31f8u), edx);
/* 9908e2: mov dword ptr [0xcf31e4], ecx */
  W32((uint32_t)(0xcf31e4u), ecx);
/* 9908e8: fstp qword ptr [0xcf31d0] */
  WF64((uint32_t)(0xcf31d0u), ST0); FPOP();
/* 9908ee: mov edx, dword ptr [0xcf31d0] */
  edx = R32((uint32_t)(0xcf31d0u));
/* 9908f4: fld qword ptr [0xcf31d8] */
  { double v = F64((uint32_t)(0xcf31d8u)); FPUSH(v); }
/* 9908fa: mov dword ptr [0xcf31fc], ecx */
  W32((uint32_t)(0xcf31fcu), ecx);
/* 990900: fadd qword ptr [eax + 8] */
  ST0 = ST0 + (F64((uint32_t)(eax + 0x8u)));
/* 990903: mov ecx, dword ptr [0xcf31d4] */
  ecx = R32((uint32_t)(0xcf31d4u));
/* 990909: mov dword ptr [0xcf31e8], edx */
  W32((uint32_t)(0xcf31e8u), edx);
/* 99090f: mov dword ptr [0xcf3200], edx */
  W32((uint32_t)(0xcf3200u), edx);
/* 990915: fstp qword ptr [0xcf31d8] */
  WF64((uint32_t)(0xcf31d8u), ST0); FPOP();
/* 99091b: mov edx, dword ptr [0xcf31d8] */
  edx = R32((uint32_t)(0xcf31d8u));
/* 990921: fld qword ptr [0xcf3228] */
  { double v = F64((uint32_t)(0xcf3228u)); FPUSH(v); }
/* 990927: mov eax, dword ptr [0xcf31dc] */
  eax = R32((uint32_t)(0xcf31dcu));
/* 99092c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 99092e: mov dword ptr [0xcf31ec], ecx */
  W32((uint32_t)(0xcf31ecu), ecx);
/* 990934: mov dword ptr [0xcf3204], ecx */
  W32((uint32_t)(0xcf3204u), ecx);
/* 99093a: mov ecx, edx */
  ecx = edx;
/* 99093c: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 990942: mov dword ptr [0xcf31f0], edx */
  W32((uint32_t)(0xcf31f0u), edx);
/* 990948: mov edx, eax */
  edx = eax;
/* 99094a: mov dword ptr [0xcf31f4], eax */
  W32((uint32_t)(0xcf31f4u), eax);
/* 99094f: fsub qword ptr [edi*8 + 0xcf3240] */
  ST0 = ST0 - (F64((uint32_t)(edi*8 + 0xcf3240u)));
/* 990956: mov dword ptr [0xcf3208], ecx */
  W32((uint32_t)(0xcf3208u), ecx);
/* 99095c: mov dword ptr [0xcf320c], edx */
  W32((uint32_t)(0xcf320cu), edx);
/* 990962: fmul qword ptr [edi*8 + 0xcf3240] */
  ST0 = ST0 * (F64((uint32_t)(edi*8 + 0xcf3240u)));
/* 990969: fadd qword ptr [0xcf3210] */
  ST0 = ST0 + (F64((uint32_t)(0xcf3210u)));
/* 99096f: fstp qword ptr [0xcf3210] */
  WF64((uint32_t)(0xcf3210u), ST0); FPOP();
/* 990975: mov eax, dword ptr [0xcf3210] */
  eax = R32((uint32_t)(0xcf3210u));
/* 99097a: fld qword ptr [0xcf3228] */
  { double v = F64((uint32_t)(0xcf3228u)); FPUSH(v); }
/* 990980: mov ecx, dword ptr [0xcf3214] */
  ecx = R32((uint32_t)(0xcf3214u));
/* 990986: fadd qword ptr [edi*8 + 0xcf3240] */
  ST0 = ST0 + (F64((uint32_t)(edi*8 + 0xcf3240u)));
/* 99098d: mov edx, eax */
  edx = eax;
/* 99098f: mov dword ptr [0xcf3218], eax */
  W32((uint32_t)(0xcf3218u), eax);
/* 990994: mov eax, ecx */
  eax = ecx;
/* 990996: fstp qword ptr [0xcf3228] */
  WF64((uint32_t)(0xcf3228u), ST0); FPOP();
/* 99099c: mov dword ptr [0xcf321c], ecx */
  W32((uint32_t)(0xcf321cu), ecx);
/* 9909a2: mov ecx, dword ptr [0xcf3228] */
  ecx = R32((uint32_t)(0xcf3228u));
/* 9909a8: mov dword ptr [0xcf3220], edx */
  W32((uint32_t)(0xcf3220u), edx);
/* 9909ae: mov edx, dword ptr [0xcf322c] */
  edx = R32((uint32_t)(0xcf322cu));
/* 9909b4: mov dword ptr [0xcf3224], eax */
  W32((uint32_t)(0xcf3224u), eax);
/* 9909b9: mov eax, ecx */
  eax = ecx;
/* 9909bb: mov dword ptr [0xcf3230], ecx */
  W32((uint32_t)(0xcf3230u), ecx);
/* 9909c1: mov ecx, edx */
  ecx = edx;
/* 9909c3: mov dword ptr [0xcf3234], edx */
  W32((uint32_t)(0xcf3234u), edx);
/* 9909c9: mov dword ptr [0xcf3238], eax */
  W32((uint32_t)(0xcf3238u), eax);
/* 9909ce: mov dword ptr [0xcf323c], ecx */
  W32((uint32_t)(0xcf323cu), ecx);
/* 9909d4: jmp 0x9906a3 */
  goto L_9906a3;
L_9909d9: /* 9909d9: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 9909dd: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 9909e1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 9909e5: xor eax, eax */
  eax = 0;
/* 9909e7: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9909e9: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9909ec: xor edx, edx */
  edx = 0;
/* 9909ee: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9909f0: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 9909f3: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 9909f7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 9909f9: xor edx, edx */
  edx = 0;
/* 9909fb: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 9909fd: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 990a00: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 990a02: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 990a05: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 990a09: jne 0x990a25 */
  if (!zf) goto L_990a25;
L_990a0b: /* 990a0b: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 990a0d: je 0x990a25 */
  if (zf) goto L_990a25;
L_990a0f: /* 990a0f: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 990a11: jne 0x990a19 */
  if (!zf) goto L_990a19;
L_990a13: /* 990a13: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 990a17: jmp 0x990a25 */
  goto L_990a25;
L_990a19: /* 990a19: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 990a1b: jne 0x990a25 */
  if (!zf) goto L_990a25;
L_990a1d: /* 990a1d: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 990a21: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
L_990a25: /* 990a25: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 990a2b: xor esi, esi */
  esi = 0;
/* 990a2d: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 990a33: xor ecx, ecx */
  ecx = 0;
/* 990a35: fst qword ptr [0xcf3238] */
  WF64((uint32_t)(0xcf3238u), ST0);
/* 990a3b: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 990a3f: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 990a45: xor edi, edi */
  edi = 0;
/* 990a47: fst qword ptr [0xcf3208] */
  WF64((uint32_t)(0xcf3208u), ST0);
/* 990a4d: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 990a53: fst qword ptr [0xcf3200] */
  WF64((uint32_t)(0xcf3200u), ST0);
/* 990a59: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 990a5f: fst qword ptr [0xcf31f8] */
  WF64((uint32_t)(0xcf31f8u), ST0);
L_990a65: /* 990a65: mov edx, dword ptr [esp + esi*4 + 0x28] */
  edx = R32((uint32_t)(esp + esi*4 + 0x28u));
/* 990a69: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990a6b: jge 0x990ab0 */
  if ((sf == of)) goto L_990ab0;
L_990a6d: /* 990a6d: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 990a71: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 990a74: lea eax, [eax*8 + 0xcf32c8] */
  eax = (uint32_t)(eax*8 + 0xcf32c8u);
/* 990a7b: jmp 0x990a80 */
  goto L_990a80;
L_990a80: /* 990a80: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990a82: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 990a83: fmul qword ptr [ecx*8 + 0xcf3238] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf3238u)));
/* 990a8a: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 990a8d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990a8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990a91: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 990a93: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990a95: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 990a97: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990a99: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 990a9c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 990a9e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990aa0: fmul qword ptr [eax - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe8u)));
/* 990aa3: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 990aa5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990aa7: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 990aaa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 990aac: jl 0x990a80 */
  if ((sf != of)) goto L_990a80;
L_990aae: /* 990aae: fstp st(0) */
  STI(0) = ST0; FPOP();
L_990ab0: /* 990ab0: xor eax, eax */
  eax = 0;
/* 990ab2: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 990ab4: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 990ab7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 990ab9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 990aba: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990abd: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 990ac1: jl 0x990a65 */
  if ((sf != of)) goto L_990a65;
L_990ac3: /* 990ac3: fst qword ptr [0xcf31f8] */
  WF64((uint32_t)(0xcf31f8u), ST0);
/* 990ac9: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 990acd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 990acf: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 990ad2: fst qword ptr [0xcf3238] */
  WF64((uint32_t)(0xcf3238u), ST0);
/* 990ad8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 990adb: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 990add: fstp qword ptr [0xcf3200] */
  WF64((uint32_t)(0xcf3200u), ST0); FPOP();
/* 990ae3: fstp qword ptr [0xcf3208] */
  WF64((uint32_t)(0xcf3208u), ST0); FPOP();
/* 990ae9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990aeb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990aed: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 990aef: fstp qword ptr [0xcf3220] */
  WF64((uint32_t)(0xcf3220u), ST0); FPOP();
/* 990af5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990af7: fchs  */
  ST0 = -ST0;
/* 990af9: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 990afd: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 990b01: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990b03: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 990b05: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990b07: fld qword ptr [0xcf31f8] */
  { double v = F64((uint32_t)(0xcf31f8u)); FPUSH(v); }
/* 990b0d: fmul qword ptr [0xcf31f8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf31f8u)));
/* 990b13: fchs  */
  ST0 = -ST0;
/* 990b15: fld qword ptr [0xcf3200] */
  { double v = F64((uint32_t)(0xcf3200u)); FPUSH(v); }
/* 990b1b: fmul qword ptr [0xcf3200] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3200u)));
/* 990b21: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 990b23: fld qword ptr [0xcf3208] */
  { double v = F64((uint32_t)(0xcf3208u)); FPUSH(v); }
/* 990b29: fmul qword ptr [0xcf3208] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3208u)));
/* 990b2f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 990b31: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 990b35: fld qword ptr [0xcf31f8] */
  { double v = F64((uint32_t)(0xcf31f8u)); FPUSH(v); }
/* 990b3b: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 990b3f: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990b45: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 990b47: fld qword ptr [0xcf31f8] */
  { double v = F64((uint32_t)(0xcf31f8u)); FPUSH(v); }
/* 990b4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990b4f: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990b55: fstp qword ptr [ecx + 0x18] */
  WF64((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 990b58: mov edx, dword ptr [0xcf31f8] */
  edx = R32((uint32_t)(0xcf31f8u));
/* 990b5e: mov esi, dword ptr [0xcf31fc] */
  esi = R32((uint32_t)(0xcf31fcu));
/* 990b64: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 990b66: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 990b69: fld qword ptr [0xcf3200] */
  { double v = F64((uint32_t)(0xcf3200u)); FPUSH(v); }
/* 990b6f: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 990b73: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990b79: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 990b7c: fld qword ptr [0xcf3200] */
  { double v = F64((uint32_t)(0xcf3200u)); FPUSH(v); }
/* 990b82: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990b84: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990b8a: fstp qword ptr [ecx + 0x20] */
  WF64((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 990b8d: mov edx, dword ptr [0xcf3200] */
  edx = R32((uint32_t)(0xcf3200u));
/* 990b93: mov esi, dword ptr [0xcf3204] */
  esi = R32((uint32_t)(0xcf3204u));
/* 990b99: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 990b9c: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 990b9f: fld qword ptr [0xcf3208] */
  { double v = F64((uint32_t)(0xcf3208u)); FPUSH(v); }
/* 990ba5: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 990ba9: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990baf: fstp qword ptr [ecx + 0x10] */
  WF64((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 990bb2: fld qword ptr [0xcf3208] */
  { double v = F64((uint32_t)(0xcf3208u)); FPUSH(v); }
/* 990bb8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990bba: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990bc0: fstp qword ptr [ecx + 0x28] */
  WF64((uint32_t)(ecx + 0x28u), ST0); FPOP();
/* 990bc3: mov ecx, dword ptr [0xcf3208] */
  ecx = R32((uint32_t)(0xcf3208u));
/* 990bc9: mov edx, dword ptr [0xcf320c] */
  edx = R32((uint32_t)(0xcf320cu));
/* 990bcf: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 990bd2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990bd4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 990bd8: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 990bdb: mov eax, 1 */
  eax = 0x1u;
/* 990be0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 990be2: je 0x990be6 */
  if (zf) goto L_990be6;
L_990be4: /* 990be4: mov eax, edi */
  eax = edi;
L_990be6: /* 990be6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 990be9: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 990bed: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 990bef: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990bf5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 990bf6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 990bf7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 990bf8: mov esp, ebp */
  esp = ebp;
/* 990bfa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 990bfb: ret  */
  esp += 4; SPILL(); return;
}

void f_990a7d(void) {
  LOAD_REGS();
  goto L_990a7d;
L_990a65: /* 990a65: mov edx, dword ptr [esp + esi*4 + 0x28] */
  edx = R32((uint32_t)(esp + esi*4 + 0x28u));
/* 990a69: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990a6b: jge 0x990ab0 */
  if ((sf == of)) goto L_990ab0;
L_990a6d: /* 990a6d: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 990a71: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 990a74: lea eax, [eax*8 + 0xcf32c8] */
  eax = (uint32_t)(eax*8 + 0xcf32c8u);
/* 990a7b: jmp 0x990a80 */
  goto L_990a80;
L_990a7d: /* 990a7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_990a80: /* 990a80: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990a82: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 990a83: fmul qword ptr [ecx*8 + 0xcf3238] */
  ST0 = ST0 * (F64((uint32_t)(ecx*8 + 0xcf3238u)));
/* 990a8a: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 990a8d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990a8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990a91: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 990a93: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990a95: faddp st(6) */
  STI(6) = STI(6) + ST0;
  FPOP();
/* 990a97: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990a99: fmul qword ptr [eax - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe0u)));
/* 990a9c: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 990a9e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990aa0: fmul qword ptr [eax - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xffffffe8u)));
/* 990aa3: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 990aa5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990aa7: fmul qword ptr [eax - 0x10] */
  ST0 = ST0 * (F64((uint32_t)(eax + 0xfffffff0u)));
/* 990aaa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 990aac: jl 0x990a80 */
  if ((sf != of)) goto L_990a80;
L_990aae: /* 990aae: fstp st(0) */
  STI(0) = ST0; FPOP();
L_990ab0: /* 990ab0: xor eax, eax */
  eax = 0;
/* 990ab2: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 990ab4: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 990ab7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 990ab9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 990aba: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 990abd: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 990ac1: jl 0x990a65 */
  if ((sf != of)) goto L_990a65;
L_990ac3: /* 990ac3: fst qword ptr [0xcf31f8] */
  WF64((uint32_t)(0xcf31f8u), ST0);
/* 990ac9: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 990acd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 990acf: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 990ad2: fst qword ptr [0xcf3238] */
  WF64((uint32_t)(0xcf3238u), ST0);
/* 990ad8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 990adb: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 990add: fstp qword ptr [0xcf3200] */
  WF64((uint32_t)(0xcf3200u), ST0); FPOP();
/* 990ae3: fstp qword ptr [0xcf3208] */
  WF64((uint32_t)(0xcf3208u), ST0); FPOP();
/* 990ae9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990aeb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990aed: fsubr st(2) */
  ST0 = STI(2) - ST0;
/* 990aef: fstp qword ptr [0xcf3220] */
  WF64((uint32_t)(0xcf3220u), ST0); FPOP();
/* 990af5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 990af7: fchs  */
  ST0 = -ST0;
/* 990af9: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 990afd: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 990b01: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 990b03: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 990b05: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990b07: fld qword ptr [0xcf31f8] */
  { double v = F64((uint32_t)(0xcf31f8u)); FPUSH(v); }
/* 990b0d: fmul qword ptr [0xcf31f8] */
  ST0 = ST0 * (F64((uint32_t)(0xcf31f8u)));
/* 990b13: fchs  */
  ST0 = -ST0;
/* 990b15: fld qword ptr [0xcf3200] */
  { double v = F64((uint32_t)(0xcf3200u)); FPUSH(v); }
/* 990b1b: fmul qword ptr [0xcf3200] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3200u)));
/* 990b21: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 990b23: fld qword ptr [0xcf3208] */
  { double v = F64((uint32_t)(0xcf3208u)); FPUSH(v); }
/* 990b29: fmul qword ptr [0xcf3208] */
  ST0 = ST0 * (F64((uint32_t)(0xcf3208u)));
/* 990b2f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 990b31: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 990b35: fld qword ptr [0xcf31f8] */
  { double v = F64((uint32_t)(0xcf31f8u)); FPUSH(v); }
/* 990b3b: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 990b3f: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990b45: fstp qword ptr [ecx] */
  WF64((uint32_t)(ecx), ST0); FPOP();
/* 990b47: fld qword ptr [0xcf31f8] */
  { double v = F64((uint32_t)(0xcf31f8u)); FPUSH(v); }
/* 990b4d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990b4f: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990b55: fstp qword ptr [ecx + 0x18] */
  WF64((uint32_t)(ecx + 0x18u), ST0); FPOP();
/* 990b58: mov edx, dword ptr [0xcf31f8] */
  edx = R32((uint32_t)(0xcf31f8u));
/* 990b5e: mov esi, dword ptr [0xcf31fc] */
  esi = R32((uint32_t)(0xcf31fcu));
/* 990b64: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 990b66: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 990b69: fld qword ptr [0xcf3200] */
  { double v = F64((uint32_t)(0xcf3200u)); FPUSH(v); }
/* 990b6f: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 990b73: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990b79: fstp qword ptr [ecx + 8] */
  WF64((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 990b7c: fld qword ptr [0xcf3200] */
  { double v = F64((uint32_t)(0xcf3200u)); FPUSH(v); }
/* 990b82: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990b84: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990b8a: fstp qword ptr [ecx + 0x20] */
  WF64((uint32_t)(ecx + 0x20u), ST0); FPOP();
/* 990b8d: mov edx, dword ptr [0xcf3200] */
  edx = R32((uint32_t)(0xcf3200u));
/* 990b93: mov esi, dword ptr [0xcf3204] */
  esi = R32((uint32_t)(0xcf3204u));
/* 990b99: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 990b9c: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 990b9f: fld qword ptr [0xcf3208] */
  { double v = F64((uint32_t)(0xcf3208u)); FPUSH(v); }
/* 990ba5: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* 990ba9: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990baf: fstp qword ptr [ecx + 0x10] */
  WF64((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 990bb2: fld qword ptr [0xcf3208] */
  { double v = F64((uint32_t)(0xcf3208u)); FPUSH(v); }
/* 990bb8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 990bba: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990bc0: fstp qword ptr [ecx + 0x28] */
  WF64((uint32_t)(ecx + 0x28u), ST0); FPOP();
/* 990bc3: mov ecx, dword ptr [0xcf3208] */
  ecx = R32((uint32_t)(0xcf3208u));
/* 990bc9: mov edx, dword ptr [0xcf320c] */
  edx = R32((uint32_t)(0xcf320cu));
/* 990bcf: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 990bd2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 990bd4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 990bd8: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 990bdb: mov eax, 1 */
  eax = 0x1u;
/* 990be0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 990be2: je 0x990be6 */
  if (zf) goto L_990be6;
L_990be4: /* 990be4: mov eax, edi */
  eax = edi;
L_990be6: /* 990be6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 990be9: fld qword ptr [esp + 0x20] */
  { double v = F64((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 990bed: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 990bef: fdiv qword ptr [0xcf3220] */
  ST0 = ST0 / (F64((uint32_t)(0xcf3220u)));
/* 990bf5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 990bf6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 990bf7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 990bf8: mov esp, ebp */
  esp = ebp;
/* 990bfa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 990bfb: ret  */
  esp += 4; SPILL(); return;
}
