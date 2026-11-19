#include "recomp.h"
#include "rec_mod.h"

void f_7f68ca(void) {
  LOAD_REGS();
L_7f68ca: /* 7f68ca: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f68cd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f68d2: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f68d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f68d6: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7f68d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f68deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f68de(); return;
}

void f_7f68de(void) {
  LOAD_REGS();
L_7f68de: /* 7f68de: push 0xa11b24 */
  { uint32_t v = 0xa11b24u; esp -= 4; W32(esp, v); }
/* 7f68e3: push 0xadeb5c */
  { uint32_t v = 0xadeb5cu; esp -= 4; W32(esp, v); }
/* 7f68e8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f68eeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f68ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f68f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f68f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f68f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f68fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f68fa: guest_badaddr(0x7f68fa); return;
}

void f_7f69a0(void) {
  LOAD_REGS();
L_7f69a0: /* 7f69a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f69a1: mov ebp, esp */
  ebp = esp;
/* 7f69a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f69a5: push 0x9d1790 */
  { uint32_t v = 0x9d1790u; esp -= 4; W32(esp, v); }
/* 7f69aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f69b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f69b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f69b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f69bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f69bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f69bd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7f69c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f69c1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f69c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f69c5: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f69c8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f69cf: call 0x6c974b */
  esp -= 4; W32(esp, 0x7f69d4u); SPILL(); f_6c974b(); if (g_unwind) return; RELOAD();
/* 7f69d4: mov ecx, esi */
  ecx = esi;
/* 7f69d6: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x7f69dcu); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 7f69dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f69df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f69e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f69e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f69e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f69e9: mov esp, ebp */
  esp = ebp;
/* 7f69eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f69ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f69ef(void) {
  LOAD_REGS();
L_7f69ef: /* 7f69ef: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f69f2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f69f7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f69fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f69fb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f69fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f6a03u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f6a03(); return;
}

void f_7f6a03(void) {
  LOAD_REGS();
L_7f6a03: /* 7f6a03: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7f6a09: push 0xa11b50 */
  { uint32_t v = 0xa11b50u; esp -= 4; W32(esp, v); }
/* 7f6a0e: push 0xadfdcc */
  { uint32_t v = 0xadfdccu; esp -= 4; W32(esp, v); }
/* 7f6a13: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6a15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6a15: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f6a18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6a1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f6a1d: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7f6a23u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7f6a23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6a24: push 0xadfdd4 */
  { uint32_t v = 0xadfdd4u; esp -= 4; W32(esp, v); }
/* 7f6a29: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6a2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6a2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6a2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f6a30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f6a32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f6a37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f6a37: guest_badaddr(0x7f6a37); return;
}

void f_7f6a70(void) {
  LOAD_REGS();
L_7f6a70: /* 7f6a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6a71: mov esi, ecx */
  esi = ecx;
/* 7f6a73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f6a79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f6a79: mov eax, esi */
  eax = esi;
/* 7f6a7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f6a7c: ret  */
  esp += 4; SPILL(); return;
}

void f_7f6a90(void) {
  LOAD_REGS();
L_7f6a90: /* 7f6a90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f6a94: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f6a96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6a97: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f6a9du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f6a9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f6ab0(void) {
  LOAD_REGS();
L_7f6ab0: /* 7f6ab0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f6ab4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f6ab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6ab7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f6abdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f6abd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f6ad0(void) {
  LOAD_REGS();
L_7f6ad0: /* 7f6ad0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f6ad4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7f6ad6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6ad7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f6addu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f6add: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f6af0(void) {
  LOAD_REGS();
L_7f6af0: /* 7f6af0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f6af4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7f6af6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7f6af9: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7f6afc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f6b10(void) {
  LOAD_REGS();
L_7f6b10: /* 7f6b10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f6b14: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7f6b16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6b17: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f6b1du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f6b1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f6b30(void) {
  LOAD_REGS();
L_7f6b30: /* 7f6b30: mov eax, 1 */
  eax = 0x1u;
/* 7f6b35: ret  */
  esp += 4; SPILL(); return;
}

void f_7f6b50(void) {
  LOAD_REGS();
L_7f6b50: /* 7f6b50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6b51: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7f6b55: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7f6b57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f6b59: mov ecx, esi */
  ecx = esi;
/* 7f6b5b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f6b61u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f6b61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f6b63: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7f6b66: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 7f6b69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f6b6a: ret  */
  esp += 4; SPILL(); return;
}

void f_7f6b80(void) {
  LOAD_REGS();
L_7f6b80: /* 7f6b80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7f6b84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6b85: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 7f6b8b: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 7f6b8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6b8f: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 7f6b92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6b94: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7f6b98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6b99: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6b9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6b9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6b9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6b9f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6ba1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6ba1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6ba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6ba5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6ba7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6ba7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6baa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f6bab: ret  */
  esp += 4; SPILL(); return;
}

void f_7f6bc0(void) {
  LOAD_REGS();
L_7f6bc0: /* 7f6bc0: mov eax, ecx */
  eax = ecx;
/* 7f6bc2: ret  */
  esp += 4; SPILL(); return;
}

void f_7f6be0(void) {
  LOAD_REGS();
L_7f6be0: /* 7f6be0: jmp dword ptr [0xcfa27c] */
  SPILL(); f_4e4165(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */
}

void f_7f6c00(void) {
  LOAD_REGS();
L_7f6c00: /* 7f6c00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7f6c04: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7f6c08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6c09: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 7f6c0f: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 7f6c12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6c14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6c15: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6c17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6c17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6c1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6c1b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6c1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6c1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6c20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f6c21: ret  */
  esp += 4; SPILL(); return;
}

void f_7f6c40(void) {
  LOAD_REGS();
L_7f6c40: /* 7f6c40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6c41: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7f6c45: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f6c46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6c47: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 7f6c4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f6c4c: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 7f6c52: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f6c55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6c56: lea ecx, [esi + 2] */
  ecx = (uint32_t)(esi + 0x2u);
/* 7f6c59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6c5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6c5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6c5c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6c5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6c5e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6c61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6c62: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6c64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6c64: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6c67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6c68: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6c6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6c6a: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 7f6c70: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 7f6c73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6c76: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 7f6c79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6c7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6c7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6c7c: lea ebp, [esi + 0x10] */
  ebp = (uint32_t)(esi + 0x10u);
/* 7f6c7f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6c81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6c81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6c84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6c85: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6c87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6c87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6c8a: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* 7f6c8d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6c8e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f6c8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6c90: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6c92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6c92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6c95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6c96: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6c98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6c98: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 7f6c9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6c9e: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 7f6ca1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6ca2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6ca3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6ca4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6ca6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6ca6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6ca9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6caa: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6cacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6cac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6caf: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 7f6cb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6cb3: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f6cb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6cb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6cb8: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x7f6cbeu); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 7f6cbe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6cc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6cc2: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f6cc8u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f6cc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6ccb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f6ccc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f6ccd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f6cce: mov eax, ebx */
  eax = ebx;
/* 7f6cd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f6cd1: ret  */
  esp += 4; SPILL(); return;
}

void f_7f6d10(void) {
  LOAD_REGS();
L_7f6d10: /* 7f6d10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7f6d14: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7f6d18: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 7f6d1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6d1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6d1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6d1e: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x7f6d24u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 7f6d24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6d27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6d28: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f6d2eu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f6d2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6d31: ret  */
  esp += 4; SPILL(); return;
}

void f_7f6d50(void) {
  LOAD_REGS();
L_7f6d50: /* 7f6d50: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7f6d54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f6d56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6d57: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f6d58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6d59: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 7f6d5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f6d5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6d5f: lea edi, [esi + 0x1c] */
  edi = (uint32_t)(esi + 0x1cu);
/* 7f6d62: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7f6d65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6d65: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 7f6d68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6d69: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 7f6d6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6d6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f6d6e: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 7f6d74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6d75: lea ebx, [esi + 0x10] */
  ebx = (uint32_t)(esi + 0x10u);
/* 7f6d78: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6d7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6d7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6d7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6d7e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6d80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6d80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6d83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6d84: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6d86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6d86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6d89: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 7f6d8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6d8d: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 7f6d90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6d91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6d92: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 7f6d98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6d99: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f6d9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6d9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6d9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6d9f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f6da1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6da1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6da4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6da5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f6da7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6da7: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7f6daa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6dad: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 7f6db0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6db1: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 7f6db4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6db5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6db6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6db7: lea ebp, [esi + 0x28] */
  ebp = (uint32_t)(esi + 0x28u);
/* 7f6dba: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6dbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6dbc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6dbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6dc0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6dc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6dc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6dc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6dc6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f6dc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6dc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6dcb: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7f6dce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6dcf: lea edx, [esi + 0x30] */
  edx = (uint32_t)(esi + 0x30u);
/* 7f6dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6dd3: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f6dd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6dd7: mov esi, dword ptr [0xcfa1b8] */
  esi = R32((uint32_t)(0xcfa1b8u));
/* 7f6ddd: lea ecx, [ebp + 3] */
  ecx = (uint32_t)(ebp + 0x3u);
/* 7f6de0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6de1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f6de2: lea edx, [ebp + 1] */
  edx = (uint32_t)(ebp + 0x1u);
/* 7f6de5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f6de6: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7f6de9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f6dea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6deb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6dedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6ded: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6df1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6df3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6df3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6df7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6df9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6df9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6dfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6dfd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f6dffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6dff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6e02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6e03: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f6e05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6e05: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6e08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6e09: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f6e0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6e0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6e0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6e0f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f6e11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6e11: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7f6e15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6e18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f6e19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f6e1a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f6e1b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f6e1c: ret  */
  esp += 4; SPILL(); return;
}

void f_7f6e60(void) {
  LOAD_REGS();
L_7f6e60: /* 7f6e60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f6e64: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7f6e66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6e67: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f6e6du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f6e6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f6e80(void) {
  LOAD_REGS();
L_7f6e80: /* 7f6e80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f6e84: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7f6e86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6e87: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f6e8du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f6e8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f6ea0(void) {
  LOAD_REGS();
L_7f6ea0: /* 7f6ea0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6ea1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f6ea2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7f6ea8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6ea9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f6eaa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7f6eae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f6eb0: mov esi, ecx */
  esi = ecx;
/* 7f6eb2: jge 0x7f6ec8 */
  if ((sf == of)) goto L_7f6ec8;
L_7f6eb4: /* 7f6eb4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7f6eb9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f6ebe: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7f6ec3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7f6ec5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6ec5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f6ec8: /* 7f6ec8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f6ecb: jle 0x7f6ee1 */
  if ((zf || sf != of)) goto L_7f6ee1;
L_7f6ecd: /* 7f6ecd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7f6ed2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f6ed7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7f6edc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7f6edeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6ede: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f6ee1: /* 7f6ee1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7f6ee5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7f6ee8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7f6eeb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f6eed: jle 0x7f6f03 */
  if ((zf || sf != of)) goto L_7f6f03;
L_7f6eef: /* 7f6eef: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7f6ef4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f6ef9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7f6efe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7f6f00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6f00: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f6f03: /* 7f6f03: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7f6f05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6f06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f6f07: mov ecx, esi */
  ecx = esi;
/* 7f6f09: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7f6f0fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7f6f0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f6f10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f6f11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f6f12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f6f13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7f6f40(void) {
  LOAD_REGS();
L_7f6f40: /* 7f6f40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7f6f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6f45: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7f6f47: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f6f4du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7f6f4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f6f60(void) {
  LOAD_REGS();
L_7f6f60: /* 7f6f60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f6f61: mov ebp, esp */
  ebp = esp;
/* 7f6f63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f6f65: push 0x9d17a0 */
  { uint32_t v = 0x9d17a0u; esp -= 4; W32(esp, v); }
/* 7f6f6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f6f70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6f71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f6f78: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f6f7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f6f7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f6f7d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7f6f80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f6f81: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f6f84: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f6f87: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f6f89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f6f8a: mov ecx, esi */
  ecx = esi;
/* 7f6f8c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f6f93: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f6f99u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f6f99: mov ecx, edi */
  ecx = edi;
/* 7f6f9b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f6fa1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f6fa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f6fa3: je 0x7f6ff1 */
  if (zf) goto L_7f6ff1;
L_7f6fa5: /* 7f6fa5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f6fa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6fa9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f6faa: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f6fb0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f6fb0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f6fb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6fb6: xor eax, eax */
  eax = 0;
L_7f6fb8: /* 7f6fb8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f6fbb: jge 0x7f6fc0 */
  if ((sf == of)) goto L_7f6fc0;
L_7f6fbd: /* 7f6fbd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f6fbe: jmp 0x7f6fb8 */
  goto L_7f6fb8;
L_7f6fc0: /* 7f6fc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f6fc1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f6fc3: mov ecx, esi */
  ecx = esi;
/* 7f6fc5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f6fcbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7f6fcb: xor ebx, ebx */
  ebx = 0;
/* 7f6fcd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7f6fd0: /* 7f6fd0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f6fd3: jge 0x7f7016 */
  if ((sf == of)) goto L_7f7016;
L_7f6fd5: /* 7f6fd5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f6fd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f6fd9: mov ecx, esi */
  ecx = esi;
/* 7f6fdb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f6fe1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f6fe1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f6fe3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f6fe5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7f6fe8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6fe9: mov ecx, edi */
  ecx = edi;
/* 7f6feb: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f6feeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f6fee: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f6fef: jmp 0x7f6fd0 */
  goto L_7f6fd0;
L_7f6ff1: /* 7f6ff1: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f6ff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f6ff5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f6ff6: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f6ffcu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f6ffc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f6fff: xor ebx, ebx */
  ebx = 0;
L_7f7001: /* 7f7001: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f7004: jge 0x7f7016 */
  if ((sf == of)) goto L_7f7016;
L_7f7006: /* 7f7006: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f7008: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f700a: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 7f700d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f700e: mov ecx, edi */
  ecx = edi;
/* 7f7010: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7f7013u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7013: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f7014: jmp 0x7f7001 */
  goto L_7f7001;
L_7f7016: /* 7f7016: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f7019: mov eax, edi */
  eax = edi;
/* 7f701b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f701c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f701d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f7024: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f7025: mov esp, ebp */
  esp = ebp;
/* 7f7027: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f7028: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7029(void) {
  LOAD_REGS();
L_7f7029: /* 7f7029: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f702c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f7031: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7f7034: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f7035: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7f7038: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f703du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f703d(); return;
}

void f_7f703d(void) {
  LOAD_REGS();
L_7f703d: /* 7f703d: push 0xa11b94 */
  { uint32_t v = 0xa11b94u; esp -= 4; W32(esp, v); }
/* 7f7042: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7f7047: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f704du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f704d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7050: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f7052: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f7054: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7059u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f7059: guest_badaddr(0x7f7059); return;
}

void f_7f70a0(void) {
  LOAD_REGS();
L_7f70a0: /* 7f70a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f70a1: mov ebp, esp */
  ebp = esp;
/* 7f70a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f70a5: push 0x9d17b0 */
  { uint32_t v = 0x9d17b0u; esp -= 4; W32(esp, v); }
/* 7f70aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f70b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f70b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f70b8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f70bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f70bc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7f70bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f70c0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7f70c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f70c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f70c7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f70c9: xor edi, edi */
  edi = 0;
/* 7f70cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f70cc: mov ecx, esi */
  ecx = esi;
/* 7f70ce: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f70d1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f70d7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f70d7: mov ecx, ebx */
  ecx = ebx;
/* 7f70d9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f70dfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f70df: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f70e1: je 0x7f713b */
  if (zf) goto L_7f713b;
L_7f70e3: /* 7f70e3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7f70e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f70e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f70e8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f70eeu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f70ee: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f70f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f70f4: xor eax, eax */
  eax = 0;
L_7f70f6: /* 7f70f6: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f70f9: jge 0x7f70fe */
  if ((sf == of)) goto L_7f70fe;
L_7f70fb: /* 7f70fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f70fc: jmp 0x7f70f6 */
  goto L_7f70f6;
L_7f70fe: /* 7f70fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f70ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f7101: mov ecx, esi */
  ecx = esi;
/* 7f7103: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f7109u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7f7109: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7f710c: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
L_7f7112: /* 7f7112: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f7115: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f7118: jge 0x7f7168 */
  if ((sf == of)) goto L_7f7168;
L_7f711a: /* 7f711a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f711c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f711e: mov ecx, esi */
  ecx = esi;
/* 7f7120: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f7126u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f7126: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f7128: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 7f712b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f712c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f712d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f712fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f712f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f7132: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7135: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f7136: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f7139: jmp 0x7f7112 */
  goto L_7f7112;
L_7f713b: /* 7f713b: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f713e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f713f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7140: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f7146u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f7146: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7149: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7f7150: /* 7f7150: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f7153: jge 0x7f7168 */
  if ((sf == of)) goto L_7f7168;
L_7f7155: /* 7f7155: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f7157: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 7f715a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f715b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f715c: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x7f7162u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 7f7162: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7165: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f7166: jmp 0x7f7150 */
  goto L_7f7150;
L_7f7168: /* 7f7168: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f716b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f716c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f716d: mov eax, ebx */
  eax = ebx;
/* 7f716f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f7176: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f7177: mov esp, ebp */
  esp = ebp;
/* 7f7179: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f717a: ret  */
  esp += 4; SPILL(); return;
}

void f_7f717b(void) {
  LOAD_REGS();
L_7f717b: /* 7f717b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f717e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f7183: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f7186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f7187: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7f718a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f718fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f718f(); return;
}

void f_7f718f(void) {
  LOAD_REGS();
L_7f718f: /* 7f718f: push 0xa11bac */
  { uint32_t v = 0xa11bacu; esp -= 4; W32(esp, v); }
/* 7f7194: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7f7199: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f719fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f719f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f71a2: xor edi, edi */
  edi = 0;
/* 7f71a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f71a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f71a6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f71abu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f71ab: guest_badaddr(0x7f71ab); return;
}

void f_7f7200(void) {
  LOAD_REGS();
L_7f7200: /* 7f7200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f7201: mov ebp, esp */
  ebp = esp;
/* 7f7203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f7205: push 0x9d17c0 */
  { uint32_t v = 0x9d17c0u; esp -= 4; W32(esp, v); }
/* 7f720a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f7210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f7218: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f721b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f721c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f721d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7f7220: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7221: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7f7224: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f7227: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7f7229: xor ebx, ebx */
  ebx = 0;
/* 7f722b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f722c: mov ecx, edi */
  ecx = edi;
/* 7f722e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7f7231: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f7237u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f7237: mov ecx, esi */
  ecx = esi;
/* 7f7239: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f723fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f723f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f7241: je 0x7f72ac */
  if (zf) goto L_7f72ac;
L_7f7243: /* 7f7243: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7f7246: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7247: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7248: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f724eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f724e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f7251: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7254: xor eax, eax */
  eax = 0;
L_7f7256: /* 7f7256: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f7259: jge 0x7f725e */
  if ((sf == of)) goto L_7f725e;
L_7f725b: /* 7f725b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f725c: jmp 0x7f7256 */
  goto L_7f7256;
L_7f725e: /* 7f725e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f725f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7f7261: mov ecx, edi */
  ecx = edi;
/* 7f7263: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f7269u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7f7269: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7f726c: mov ebx, dword ptr [0xcfa27c] */
  ebx = R32((uint32_t)(0xcfa27cu));
L_7f7272: /* 7f7272: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f7275: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f7278: jge 0x7f72e9 */
  if ((sf == of)) goto L_7f72e9;
L_7f727a: /* 7f727a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7f727c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f727e: mov ecx, edi */
  ecx = edi;
/* 7f7280: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f7286u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f7286: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7f7288: lea esi, [edx + eax*8] */
  esi = (uint32_t)(edx + eax*8);
/* 7f728b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f728e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f728f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7290: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f7292u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7292: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7295: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f7298: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7299: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f729a: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f72a0u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f72a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f72a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f72a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f72a7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f72aa: jmp 0x7f7272 */
  goto L_7f7272;
L_7f72ac: /* 7f72ac: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 7f72af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f72b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f72b1: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f72b7u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f72b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f72ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7f72c0: /* 7f72c0: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f72c3: jge 0x7f72e9 */
  if ((sf == of)) goto L_7f72e9;
L_7f72c5: /* 7f72c5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7f72c7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f72ca: lea esi, [ecx + ebx*8] */
  esi = (uint32_t)(ecx + ebx*8);
/* 7f72cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f72ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f72cf: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x7f72d5u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 7f72d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f72d8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f72db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f72dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f72dd: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f72e3u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f72e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f72e6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7f72e7: jmp 0x7f72c0 */
  goto L_7f72c0;
L_7f72e9: /* 7f72e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f72ec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f72ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f72f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f72f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f72f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f72f9: mov esp, ebp */
  esp = ebp;
/* 7f72fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f72fc: ret  */
  esp += 4; SPILL(); return;
}

void f_7f72fd(void) {
  LOAD_REGS();
L_7f72fd: /* 7f72fd: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7f7300: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f7305: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7f7308: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f7309: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7f730c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7311u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f7311(); return;
}

void f_7f7311(void) {
  LOAD_REGS();
L_7f7311: /* 7f7311: push 0xa11bc4 */
  { uint32_t v = 0xa11bc4u; esp -= 4; W32(esp, v); }
/* 7f7316: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7f731b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f7321u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f7321: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7324: xor ebx, ebx */
  ebx = 0;
/* 7f7326: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7327: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7328: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f732du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f732d: guest_badaddr(0x7f732d); return;
}

void f_7f7380(void) {
  LOAD_REGS();
L_7f7380: /* 7f7380: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f7382: push 0x9d17d9 */
  { uint32_t v = 0x9d17d9u; esp -= 4; W32(esp, v); }
/* 7f7387: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f738d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f738e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f7395: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f7396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7397: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7398: mov esi, ecx */
  esi = ecx;
/* 7f739a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f739b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7f739f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7f73a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f73a4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7f73aa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7f73b2: jge 0x7f73c8 */
  if ((sf == of)) goto L_7f73c8;
L_7f73b4: /* 7f73b4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7f73b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f73be: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7f73c3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f73c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f73c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f73c8: /* 7f73c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f73cb: jle 0x7f73e1 */
  if ((zf || sf != of)) goto L_7f73e1;
L_7f73cd: /* 7f73cd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7f73d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7f73d7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7f73dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f73deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f73de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f73e1: /* 7f73e1: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7f73e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f73e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f73e6: mov ecx, esi */
  ecx = esi;
/* 7f73e8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7f73eeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7f73ee: mov ecx, esi */
  ecx = esi;
/* 7f73f0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7f73f8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7f73feu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7f73fe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7f7402: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f7403: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f7405: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f740c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f740f: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7440(void) {
  LOAD_REGS();
L_7f7440: /* 7f7440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f7441: mov ebp, esp */
  ebp = esp;
/* 7f7443: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f7445: push 0x9d17f0 */
  { uint32_t v = 0x9d17f0u; esp -= 4; W32(esp, v); }
/* 7f744a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f7450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7451: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f7458: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f745b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f745c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7f745f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7460: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7f7463: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7464: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f7467: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7f7469: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f746a: mov ecx, esi */
  ecx = esi;
/* 7f746c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f7473: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7f7479u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7f7479: mov ecx, ebx */
  ecx = ebx;
/* 7f747b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7f7481u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7f7481: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7483: je 0x7f74d6 */
  if (zf) goto L_7f74d6;
L_7f7485: /* 7f7485: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f7488: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7489: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f748a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f7490u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f7490: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7f7493: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7496: xor eax, eax */
  eax = 0;
L_7f7498: /* 7f7498: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f749b: jge 0x7f74a0 */
  if ((sf == of)) goto L_7f74a0;
L_7f749d: /* 7f749d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f749e: jmp 0x7f7498 */
  goto L_7f7498;
L_7f74a0: /* 7f74a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f74a1: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7f74a3: mov ecx, esi */
  ecx = esi;
/* 7f74a5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7f74abu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7f74ab: xor edi, edi */
  edi = 0;
/* 7f74ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7f74b0: /* 7f74b0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f74b3: jge 0x7f7500 */
  if ((sf == of)) goto L_7f7500;
L_7f74b5: /* 7f74b5: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7f74b7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f74b9: mov ecx, esi */
  ecx = esi;
/* 7f74bb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f74c1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f74c1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f74c3: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7f74c6: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 7f74c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f74ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f74cb: call 0x6c8dcd */
  esp -= 4; W32(esp, 0x7f74d0u); SPILL(); f_6c8dcd(); if (g_unwind) return; RELOAD();
/* 7f74d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f74d3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f74d4: jmp 0x7f74b0 */
  goto L_7f74b0;
L_7f74d6: /* 7f74d6: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7f74d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f74da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f74db: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7f74e1u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7f74e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f74e4: xor edi, edi */
  edi = 0;
L_7f74e6: /* 7f74e6: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f74e9: jge 0x7f7500 */
  if ((sf == of)) goto L_7f7500;
L_7f74eb: /* 7f74eb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f74ed: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 7f74f0: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 7f74f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f74f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f74f5: call 0x6c8dcd */
  esp -= 4; W32(esp, 0x7f74fau); SPILL(); f_6c8dcd(); if (g_unwind) return; RELOAD();
/* 7f74fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f74fd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7f74fe: jmp 0x7f74e6 */
  goto L_7f74e6;
L_7f7500: /* 7f7500: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f7503: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f7504: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7505: mov eax, ebx */
  eax = ebx;
/* 7f7507: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f750e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f750f: mov esp, ebp */
  esp = ebp;
/* 7f7511: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f7512: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7513(void) {
  LOAD_REGS();
L_7f7513: /* 7f7513: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f7516: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f751b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7f751e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f751f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7f7522: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7527u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f7527(); return;
}

void f_7f7527(void) {
  LOAD_REGS();
L_7f7527: /* 7f7527: push 0xa11bdc */
  { uint32_t v = 0xa11bdcu; esp -= 4; W32(esp, v); }
/* 7f752c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7f7531: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f7537u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f7537: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f753a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f753c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f753e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7543u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f7543: guest_badaddr(0x7f7543); return;
}

void f_7f75a0(void) {
  LOAD_REGS();
L_7f75a0: /* 7f75a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f75a1: mov ebp, esp */
  ebp = esp;
/* 7f75a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f75a5: push 0x9d1811 */
  { uint32_t v = 0x9d1811u; esp -= 4; W32(esp, v); }
/* 7f75aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f75b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f75b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f75b8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f75bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f75bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f75bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f75be: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f75c1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f75c4: mov esi, ecx */
  esi = ecx;
/* 7f75c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f75c7: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7f75ca: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f75d1: call 0x6c5709 */
  esp -= 4; W32(esp, 0x7f75d6u); SPILL(); f_6c5709(); if (g_unwind) return; RELOAD();
/* 7f75d6: mov ecx, edi */
  ecx = edi;
/* 7f75d8: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x7f75deu); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 7f75de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f75e0: je 0x7f75e9 */
  if (zf) goto L_7f75e9;
L_7f75e2: /* 7f75e2: mov dword ptr [esi + 0x58], 4 */
  W32((uint32_t)(esi + 0x58u), 0x4u);
L_7f75e9: /* 7f75e9: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 7f75ef: lea eax, [esi + 0x58] */
  eax = (uint32_t)(esi + 0x58u);
/* 7f75f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f75f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f75f4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f75f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f75f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f75f9: lea eax, [esi + 0x5c] */
  eax = (uint32_t)(esi + 0x5cu);
/* 7f75fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f75fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f75fe: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7f7600u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7600: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7603: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 7f7606: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f7607: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7608: call 0x6cb447 */
  esp -= 4; W32(esp, 0x7f760du); SPILL(); f_6cb447(); if (g_unwind) return; RELOAD();
/* 7f760d: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 7f7610: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7613: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f7616: jge 0x7f763e */
  if ((sf == of)) goto L_7f763e;
L_7f7618: /* 7f7618: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f761b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7f7621u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7f7621: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f7624: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f7625: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7626: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7f762a: call 0x6cbbdb */
  esp -= 4; W32(esp, 0x7f762fu); SPILL(); f_6cbbdb(); if (g_unwind) return; RELOAD();
/* 7f762f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7632: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f7635: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f7639: call 0x6c7559 */
  esp -= 4; W32(esp, 0x7f763eu); SPILL(); f_6c7559(); if (g_unwind) return; RELOAD();
L_7f763e: /* 7f763e: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 7f7641: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7642: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7643: call 0x6c7801 */
  esp -= 4; W32(esp, 0x7f7648u); SPILL(); f_6c7801(); if (g_unwind) return; RELOAD();
/* 7f7648: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f764b: lea ebx, [esi + 0x78] */
  ebx = (uint32_t)(esi + 0x78u);
/* 7f764e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f764f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7650: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 7f7656: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f7658u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7658: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f765b: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 7f765e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f765f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7660: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f7662u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7662: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7665: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7f7668: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f766a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f766cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f766c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f766f: lea ebx, [esi + 0x84] */
  ebx = (uint32_t)(esi + 0x84u);
/* 7f7675: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7676: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7677: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f7679u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7679: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f767c: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 7f767f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f7680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7681: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f7683u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7683: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7686: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7f7689: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f768a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f768b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f768du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f768d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7690: lea ebx, [esi + 0x90] */
  ebx = (uint32_t)(esi + 0x90u);
/* 7f7696: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7697: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7698: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f769eu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f769e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f76a1: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 7f76a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f76a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f76a6: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f76acu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f76ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f76af: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7f76b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f76b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f76b4: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f76bau); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f76ba: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 7f76bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f76c0: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f76c3: jge 0x7f76f1 */
  if ((sf == of)) goto L_7f76f1;
L_7f76c5: /* 7f76c5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f76c8: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x7f76ceu); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 7f76ce: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7f76d1: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f76d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f76d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f76d6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7f76da: call 0x6c67cb */
  esp -= 4; W32(esp, 0x7f76dfu); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 7f76df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f76e2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7f76e5: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f76e9: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x7f76efu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 7f76ef: jmp 0x7f76f4 */
  goto L_7f76f4;
L_7f76f1: /* 7f76f1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_7f76f4: /* 7f76f4: lea eax, [esi + 0x9c] */
  eax = (uint32_t)(esi + 0x9cu);
/* 7f76fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f76fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f76fc: call 0x6c67cb */
  esp -= 4; W32(esp, 0x7f7701u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 7f7701: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7704: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 7f770a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f770b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f770c: call 0x6ca182 */
  esp -= 4; W32(esp, 0x7f7711u); SPILL(); f_6ca182(); if (g_unwind) return; RELOAD();
/* 7f7711: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7714: lea edx, [esi + 0xb4] */
  edx = (uint32_t)(esi + 0xb4u);
/* 7f771a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f771b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f771c: call 0x6c67cb */
  esp -= 4; W32(esp, 0x7f7721u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 7f7721: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7724: lea eax, [esi + 0xc0] */
  eax = (uint32_t)(esi + 0xc0u);
/* 7f772a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f772b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f772c: call 0x6c66ef */
  esp -= 4; W32(esp, 0x7f7731u); SPILL(); f_6c66ef(); if (g_unwind) return; RELOAD();
/* 7f7731: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7734: lea ecx, [esi + 0xcc] */
  ecx = (uint32_t)(esi + 0xccu);
/* 7f773a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f773b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f773c: call 0x6c7b49 */
  esp -= 4; W32(esp, 0x7f7741u); SPILL(); f_6c7b49(); if (g_unwind) return; RELOAD();
/* 7f7741: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7744: lea edx, [esi + 0xd8] */
  edx = (uint32_t)(esi + 0xd8u);
/* 7f774a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f774b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f774c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f774eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f774e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7751: lea eax, [esi + 0xec] */
  eax = (uint32_t)(esi + 0xecu);
/* 7f7757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7758: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7759: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f775bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f775b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f775e: lea ecx, [esi + 0xdc] */
  ecx = (uint32_t)(esi + 0xdcu);
/* 7f7764: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f7765: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7766: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f7768u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7768: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f776b: lea edx, [esi + 0xe0] */
  edx = (uint32_t)(esi + 0xe0u);
/* 7f7771: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f7772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7773: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f7779u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f7779: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f777c: lea ecx, [esi + 0xe4] */
  ecx = (uint32_t)(esi + 0xe4u);
/* 7f7782: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f7783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7784: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f7786u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7786: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7789: lea edx, [esi + 0xe8] */
  edx = (uint32_t)(esi + 0xe8u);
/* 7f778f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f7790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7791: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f7793u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7793: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 7f7796: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7799: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f779c: jl 0x7f77bf */
  if ((sf != of)) goto L_7f77bf;
L_7f779e: /* 7f779e: lea eax, [esi + 0xf0] */
  eax = (uint32_t)(esi + 0xf0u);
/* 7f77a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f77a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f77a6: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7f77acu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7f77ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f77af: lea ecx, [esi + 0xf4] */
  ecx = (uint32_t)(esi + 0xf4u);
/* 7f77b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f77b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f77b7: call 0x6c505b */
  esp -= 4; W32(esp, 0x7f77bcu); SPILL(); f_6c505b(); if (g_unwind) return; RELOAD();
/* 7f77bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f77bf: /* 7f77bf: cmp dword ptr [esi + 0x58], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f77c3: jl 0x7f77d2 */
  if ((sf != of)) goto L_7f77d2;
L_7f77c5: /* 7f77c5: add esi, 0x12c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7f77cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f77cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f77cd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f77cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f77cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f77d2: /* 7f77d2: mov ecx, ebx */
  ecx = ebx;
/* 7f77d4: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x7f77dau); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 7f77da: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f77dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f77de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f77df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f77e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f77e7: mov esp, ebp */
  esp = ebp;
/* 7f77e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f77ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f77ed(void) {
  LOAD_REGS();
L_7f77ed: /* 7f77ed: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f77f0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f77f5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f77f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f77f9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7f77fc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7801u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f7801(); return;
}

void f_7f7801(void) {
  LOAD_REGS();
L_7f7801: /* 7f7801: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7f7807: push 0xa11bf4 */
  { uint32_t v = 0xa11bf4u; esp -= 4; W32(esp, v); }
/* 7f780c: push 0xadfdb8 */
  { uint32_t v = 0xadfdb8u; esp -= 4; W32(esp, v); }
/* 7f7811: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f7813u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7813: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f7816: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7819: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f781b: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7f7821u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7f7821: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7822: push 0xadfdc0 */
  { uint32_t v = 0xadfdc0u; esp -= 4; W32(esp, v); }
/* 7f7827: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f7829u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7829: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f782c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f782e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f7830: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7835u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f7835: guest_badaddr(0x7f7835); return;
}

void f_7f78f0(void) {
  LOAD_REGS();
L_7f78f0: /* 7f78f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f78f1: mov esi, ecx */
  esi = ecx;
/* 7f78f3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7f78f9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7f78f9: mov dword ptr [esi], 0x9f4450 */
  W32((uint32_t)(esi), 0x9f4450u);
/* 7f78ff: mov eax, esi */
  eax = esi;
/* 7f7901: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7902: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7920(void) {
  LOAD_REGS();
L_7f7920: /* 7f7920: mov eax, dword ptr [0xcfa40c] */
  eax = R32((uint32_t)(0xcfa40cu));
/* 7f7925: test byte ptr [eax], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7928: jne 0x7f7930 */
  if (!zf) goto L_7f7930;
L_7f792a: /* 7f792a: jmp dword ptr [0xcfa29c] */
  SPILL(); f_4e1519(); return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */
L_7f7930: /* 7f7930: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f7950(void) {
  LOAD_REGS();
L_7f7950: /* 7f7950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f7951: mov ebp, esp */
  ebp = esp;
/* 7f7953: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f7955: push 0x9d1830 */
  { uint32_t v = 0x9d1830u; esp -= 4; W32(esp, v); }
/* 7f795a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f7960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7961: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f7968: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f796b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f796c: mov eax, ecx */
  eax = ecx;
/* 7f796e: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 7f7971: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7973: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7974: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7975: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f7978: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f797f: je 0x7f798f */
  if (zf) goto L_7f798f;
L_7f7981: /* 7f7981: test byte ptr [eax + 0x30], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x30u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7985: je 0x7f798f */
  if (zf) goto L_7f798f;
L_7f7987: /* 7f7987: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7989: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f798fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f798f: /* 7f798f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f7992: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f7993: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7994: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f799b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f799c: mov esp, ebp */
  esp = ebp;
/* 7f799e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f799f: ret  */
  esp += 4; SPILL(); return;
}

void f_7f79a0(void) {
  LOAD_REGS();
L_7f79a0: /* 7f79a0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f79a3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f79a8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7f79ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f79ac: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7f79af: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f79b4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f79b4(); return;
}

void f_7f79b4(void) {
  LOAD_REGS();
L_7f79b4: /* 7f79b4: push 0xa11c24 */
  { uint32_t v = 0xa11c24u; esp -= 4; W32(esp, v); }
/* 7f79b9: push 0xadfdf8 */
  { uint32_t v = 0xadfdf8u; esp -= 4; W32(esp, v); }
/* 7f79be: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f79c4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f79c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f79c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f79c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f79cb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f79d0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f79d0: guest_badaddr(0x7f79d0); return;
}

void f_7f7a10(void) {
  LOAD_REGS();
L_7f7a10: /* 7f7a10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7a11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7a12: mov esi, ecx */
  esi = ecx;
/* 7f7a14: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 7f7a17: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7a19: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 7f7a1b: je 0x7f7a2a */
  if (zf) goto L_7f7a2a;
L_7f7a1d: /* 7f7a1d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7a1f: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x7f7a25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7a25: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 7f7a27: or bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7f7a2a: /* 7f7a2a: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7f7a2d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7a2f: je 0x7f7a3b */
  if (zf) goto L_7f7a3b;
L_7f7a31: /* 7f7a31: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f7a33: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7f7a39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7a39: or bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7f7a3b: /* 7f7a3b: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7f7a3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7a40: je 0x7f7a4c */
  if (zf) goto L_7f7a4c;
L_7f7a42: /* 7f7a42: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7a44: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x7f7a4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7a4a: or bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7f7a4c: /* 7f7a4c: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7f7a4f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7a51: je 0x7f7a5d */
  if (zf) goto L_7f7a5d;
L_7f7a53: /* 7f7a53: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f7a55: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7f7a5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7a5b: or bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7f7a5d: /* 7f7a5d: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 7f7a60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7a62: je 0x7f7a6e */
  if (zf) goto L_7f7a6e;
L_7f7a64: /* 7f7a64: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7a66: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x7f7a6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7a6c: or bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7f7a6e: /* 7f7a6e: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 7f7a71: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7a73: je 0x7f7a7f */
  if (zf) goto L_7f7a7f;
L_7f7a75: /* 7f7a75: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f7a77: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7f7a7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7a7d: or bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7f7a7f: /* 7f7a7f: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 7f7a82: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7a84: je 0x7f7a90 */
  if (zf) goto L_7f7a90;
L_7f7a86: /* 7f7a86: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7a88: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x7f7a8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7a8e: or bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7f7a90: /* 7f7a90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7a91: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 7f7a93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f7a94: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7ad0(void) {
  LOAD_REGS();
L_7f7ad0: /* 7f7ad0: mov al, byte ptr [ecx + 0x58] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x58u))) & 0xffu);
/* 7f7ad3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7ad5: jne 0x7f7ade */
  if (!zf) goto L_7f7ade;
L_7f7ad7: /* 7f7ad7: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 7f7ada: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7adc: jne 0x7f7af1 */
  if (!zf) goto L_7f7af1;
L_7f7ade: /* 7f7ade: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f7ae0: je 0x7f7af1 */
  if (zf) goto L_7f7af1;
L_7f7ae2: /* 7f7ae2: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f7ae4: je 0x7f7af1 */
  if (zf) goto L_7f7af1;
L_7f7ae6: /* 7f7ae6: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f7ae8: je 0x7f7af1 */
  if (zf) goto L_7f7af1;
L_7f7aea: /* 7f7aea: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f7aec: je 0x7f7af1 */
  if (zf) goto L_7f7af1;
L_7f7aee: /* 7f7aee: xor eax, eax */
  eax = 0;
/* 7f7af0: ret  */
  esp += 4; SPILL(); return;
L_7f7af1: /* 7f7af1: mov eax, 1 */
  eax = 0x1u;
/* 7f7af6: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7b10(void) {
  LOAD_REGS();
L_7f7b10: /* 7f7b10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7b11: mov esi, ecx */
  esi = ecx;
/* 7f7b13: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 7f7b16: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b18: je 0x7f7b26 */
  if (zf) goto L_7f7b26;
L_7f7b1a: /* 7f7b1a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7b1c: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7f7b22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7b22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b24: jne 0x7f7b98 */
  if (!zf) goto L_7f7b98;
L_7f7b26: /* 7f7b26: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7f7b29: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b2b: je 0x7f7b39 */
  if (zf) goto L_7f7b39;
L_7f7b2d: /* 7f7b2d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f7b2f: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7f7b35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7b35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b37: jne 0x7f7b98 */
  if (!zf) goto L_7f7b98;
L_7f7b39: /* 7f7b39: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7f7b3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b3e: je 0x7f7b4c */
  if (zf) goto L_7f7b4c;
L_7f7b40: /* 7f7b40: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7b42: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7f7b48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7b48: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b4a: jne 0x7f7b98 */
  if (!zf) goto L_7f7b98;
L_7f7b4c: /* 7f7b4c: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7f7b4f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b51: je 0x7f7b5f */
  if (zf) goto L_7f7b5f;
L_7f7b53: /* 7f7b53: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f7b55: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7f7b5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7b5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b5d: jne 0x7f7b98 */
  if (!zf) goto L_7f7b98;
L_7f7b5f: /* 7f7b5f: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 7f7b62: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b64: je 0x7f7b72 */
  if (zf) goto L_7f7b72;
L_7f7b66: /* 7f7b66: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7b68: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7f7b6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7b6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b70: jne 0x7f7b98 */
  if (!zf) goto L_7f7b98;
L_7f7b72: /* 7f7b72: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 7f7b75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b77: je 0x7f7b85 */
  if (zf) goto L_7f7b85;
L_7f7b79: /* 7f7b79: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f7b7b: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7f7b81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7b81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b83: jne 0x7f7b98 */
  if (!zf) goto L_7f7b98;
L_7f7b85: /* 7f7b85: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 7f7b88: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b8a: je 0x7f7b9f */
  if (zf) goto L_7f7b9f;
L_7f7b8c: /* 7f7b8c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7b8e: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7f7b94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7b94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7b96: je 0x7f7b9f */
  if (zf) goto L_7f7b9f;
L_7f7b98: /* 7f7b98: mov eax, 1 */
  eax = 0x1u;
/* 7f7b9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7b9e: ret  */
  esp += 4; SPILL(); return;
L_7f7b9f: /* 7f7b9f: xor eax, eax */
  eax = 0;
/* 7f7ba1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7ba2: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7be0(void) {
  LOAD_REGS();
L_7f7be0: /* 7f7be0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7be2: jmp dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); SPILL(); call_ind(t); return; }
}

void f_7f7c00(void) {
  LOAD_REGS();
L_7f7c00: /* 7f7c00: mov eax, ecx */
  eax = ecx;
/* 7f7c02: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7f7c05: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7c07: je 0x7f7c0e */
  if (zf) goto L_7f7c0e;
L_7f7c09: /* 7f7c09: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7c0b: jmp dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); SPILL(); call_ind(t); return; }
L_7f7c0e: /* 7f7c0e: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 7f7c11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7c13: je 0x7f7c1c */
  if (zf) goto L_7f7c1c;
L_7f7c15: /* 7f7c15: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f7c17: mov ecx, eax */
  ecx = eax;
/* 7f7c19: jmp dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); SPILL(); call_ind(t); return; }
L_7f7c1c: /* 7f7c1c: xor eax, eax */
  eax = 0;
/* 7f7c1e: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7c30(void) {
  LOAD_REGS();
L_7f7c30: /* 7f7c30: mov eax, ecx */
  eax = ecx;
/* 7f7c32: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7f7c35: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7c37: je 0x7f7c3e */
  if (zf) goto L_7f7c3e;
L_7f7c39: /* 7f7c39: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7c3b: jmp dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); SPILL(); call_ind(t); return; }
L_7f7c3e: /* 7f7c3e: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 7f7c41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7c43: je 0x7f7c4c */
  if (zf) goto L_7f7c4c;
L_7f7c45: /* 7f7c45: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f7c47: mov ecx, eax */
  ecx = eax;
/* 7f7c49: jmp dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); SPILL(); call_ind(t); return; }
L_7f7c4c: /* 7f7c4c: xor eax, eax */
  eax = 0;
/* 7f7c4e: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7c60(void) {
  LOAD_REGS();
L_7f7c60: /* 7f7c60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f7c61: mov ebp, esp */
  ebp = esp;
/* 7f7c63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f7c65: push 0x9d1840 */
  { uint32_t v = 0x9d1840u; esp -= 4; W32(esp, v); }
/* 7f7c6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f7c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7c71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f7c78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f7c7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7c7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7c7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7c7e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f7c81: mov esi, ecx */
  esi = ecx;
/* 7f7c83: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f7c8a: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x7f7c90u); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
L_7f7c90: /* 7f7c90: mov ecx, esi */
  ecx = esi;
/* 7f7c92: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f7c98u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f7c98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7c9a: je 0x7f7ca8 */
  if (zf) goto L_7f7ca8;
L_7f7c9c: /* 7f7c9c: mov ecx, esi */
  ecx = esi;
/* 7f7c9e: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f7ca4u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f7ca4: mov esi, eax */
  esi = eax;
/* 7f7ca6: jmp 0x7f7c90 */
  goto L_7f7c90;
L_7f7ca8: /* 7f7ca8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7caa: je 0x7f7cc6 */
  if (zf) goto L_7f7cc6;
L_7f7cac: /* 7f7cac: call dword ptr [0xcfaab0] */
  esp -= 4; W32(esp, 0x7f7cb2u); SPILL(); f_4e303f(); if (g_unwind) return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */ RELOAD();
/* 7f7cb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7cb3: mov ecx, esi */
  ecx = esi;
/* 7f7cb5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f7cbbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f7cbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7cbd: je 0x7f7cc6 */
  if (zf) goto L_7f7cc6;
L_7f7cbf: /* 7f7cbf: mov dword ptr [esi + 0x34], 1 */
  W32((uint32_t)(esi + 0x34u), 0x1u);
L_7f7cc6: /* 7f7cc6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f7cc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f7cca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7ccb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f7cd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f7cd3: mov esp, ebp */
  esp = ebp;
/* 7f7cd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f7cd6: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7cd7(void) {
  LOAD_REGS();
L_7f7cd7: /* 7f7cd7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f7cda: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f7cdf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f7ce2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f7ce3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f7ce6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7cebu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f7ceb(); return;
}

void f_7f7ceb(void) {
  LOAD_REGS();
L_7f7ceb: /* 7f7ceb: push 0xa11c60 */
  { uint32_t v = 0xa11c60u; esp -= 4; W32(esp, v); }
/* 7f7cf0: push 0xadfed8 */
  { uint32_t v = 0xadfed8u; esp -= 4; W32(esp, v); }
/* 7f7cf5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f7cfbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f7cfb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7cfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f7d00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f7d02: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7d07u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f7d07: guest_badaddr(0x7f7d07); return;
}

void f_7f7d40(void) {
  LOAD_REGS();
L_7f7d40: /* 7f7d40: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 7f7d43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7d45: jne 0x7f7d51 */
  if (!zf) goto L_7f7d51;
L_7f7d47: /* 7f7d47: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 7f7d4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7d4c: jne 0x7f7d51 */
  if (!zf) goto L_7f7d51;
L_7f7d4e: /* 7f7d4e: xor eax, eax */
  eax = 0;
/* 7f7d50: ret  */
  esp += 4; SPILL(); return;
L_7f7d51: /* 7f7d51: mov eax, 1 */
  eax = 0x1u;
/* 7f7d56: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7d70(void) {
  LOAD_REGS();
L_7f7d70: /* 7f7d70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f7d71: mov ebp, esp */
  ebp = esp;
/* 7f7d73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f7d75: push 0x9d1850 */
  { uint32_t v = 0x9d1850u; esp -= 4; W32(esp, v); }
/* 7f7d7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f7d80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7d81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f7d88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f7d8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7d8c: mov eax, ecx */
  eax = ecx;
/* 7f7d8e: test byte ptr [eax + 0x30], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x30u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7d92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7d93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7d94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f7d97: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f7d9e: je 0x7f7e14 */
  if (zf) goto L_7f7e14;
L_7f7da0: /* 7f7da0: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 7f7da3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7da5: je 0x7f7dc0 */
  if (zf) goto L_7f7dc0;
L_7f7da7: /* 7f7da7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7da9: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f7dafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7daf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f7db2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f7db9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f7dba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7dbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f7dbc: mov esp, ebp */
  esp = ebp;
/* 7f7dbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f7dbf: ret  */
  esp += 4; SPILL(); return;
L_7f7dc0: /* 7f7dc0: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 7f7dc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7dc5: je 0x7f7e12 */
  if (zf) goto L_7f7e12;
L_7f7dc7: /* 7f7dc7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f7dc9: mov ecx, eax */
  ecx = eax;
/* 7f7dcb: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7f7dd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7dd1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f7dd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f7ddb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f7ddc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7ddd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f7dde: mov esp, ebp */
  esp = ebp;
/* 7f7de0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f7de1: ret  */
  esp += 4; SPILL(); return;
L_7f7e12: /* 7f7e12: xor eax, eax */
  eax = 0;
L_7f7e14: /* 7f7e14: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f7e17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f7e18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7e19: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f7e20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f7e21: mov esp, ebp */
  esp = ebp;
/* 7f7e23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f7e24: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7de2(void) {
  LOAD_REGS();
L_7f7de2: /* 7f7de2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f7de5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f7dea: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f7ded: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f7dee: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f7df1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7df6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f7df6(); return;
}

void f_7f7df6(void) {
  LOAD_REGS();
L_7f7df6: /* 7f7df6: push 0xa11c9c */
  { uint32_t v = 0xa11c9cu; esp -= 4; W32(esp, v); }
/* 7f7dfb: push 0xadfee0 */
  { uint32_t v = 0xadfee0u; esp -= 4; W32(esp, v); }
/* 7f7e00: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f7e06u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f7e06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7e09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f7e0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f7e0d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7e12u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7f7e12: xor eax, eax */
  eax = 0;
/* 7f7e14: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f7e17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f7e18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7e19: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f7e20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f7e21: mov esp, ebp */
  esp = ebp;
/* 7f7e23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f7e24: ret  */
  esp += 4; SPILL(); return;
}

void f_7f7e60(void) {
  LOAD_REGS();
L_7f7e60: /* 7f7e60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f7e61: mov ebp, esp */
  ebp = esp;
/* 7f7e63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f7e65: push 0x9d1860 */
  { uint32_t v = 0x9d1860u; esp -= 4; W32(esp, v); }
/* 7f7e6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f7e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7e71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f7e78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f7e7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7e7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7e7d: mov esi, ecx */
  esi = ecx;
/* 7f7e7f: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 7f7e82: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7e84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7e85: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f7e88: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f7e8f: je 0x7f7ea6 */
  if (zf) goto L_7f7ea6;
L_7f7e91: /* 7f7e91: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7e93: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f7e99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7e99: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f7e9c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f7e9e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7e9f: mov ecx, eax */
  ecx = eax;
/* 7f7ea1: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7f7ea4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7ea4: jmp 0x7f7ea9 */
  goto L_7f7ea9;
L_7f7ea6: /* 7f7ea6: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_7f7ea9: /* 7f7ea9: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7f7eac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7eae: je 0x7f7ec0 */
  if (zf) goto L_7f7ec0;
L_7f7eb0: /* 7f7eb0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7eb2: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f7eb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7eb8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f7eba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7ebb: mov ecx, eax */
  ecx = eax;
/* 7f7ebd: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7f7ec0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f7ec0: /* 7f7ec0: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7f7ec3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7ec5: je 0x7f7ed7 */
  if (zf) goto L_7f7ed7;
L_7f7ec7: /* 7f7ec7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7ec9: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f7ecfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7ecf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f7ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7ed2: mov ecx, eax */
  ecx = eax;
/* 7f7ed4: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7f7ed7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f7ed7: /* 7f7ed7: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7f7eda: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7edc: je 0x7f7eee */
  if (zf) goto L_7f7eee;
L_7f7ede: /* 7f7ede: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7ee0: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f7ee6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7ee6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f7ee8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7ee9: mov ecx, eax */
  ecx = eax;
/* 7f7eeb: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7f7eeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f7eee: /* 7f7eee: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 7f7ef1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7ef3: je 0x7f7f05 */
  if (zf) goto L_7f7f05;
L_7f7ef5: /* 7f7ef5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7ef7: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f7efdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7efd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f7eff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7f00: mov ecx, eax */
  ecx = eax;
/* 7f7f02: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7f7f05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f7f05: /* 7f7f05: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 7f7f08: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7f0a: je 0x7f7f1c */
  if (zf) goto L_7f7f1c;
L_7f7f0c: /* 7f7f0c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7f0e: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f7f14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7f14: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f7f16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7f17: mov ecx, eax */
  ecx = eax;
/* 7f7f19: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7f7f1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f7f1c: /* 7f7f1c: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 7f7f1f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f7f21: je 0x7f7f33 */
  if (zf) goto L_7f7f33;
L_7f7f23: /* 7f7f23: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f7f25: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f7f2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f7f2b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f7f2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7f2e: mov ecx, eax */
  ecx = eax;
/* 7f7f30: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7f7f33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f7f33: /* 7f7f33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f7f36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f7f37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f7f38: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f7f3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f7f40: mov esp, ebp */
  esp = ebp;
/* 7f7f42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f7f43: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f7f46(void) {
  LOAD_REGS();
L_7f7f46: /* 7f7f46: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f7f49: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f7f4e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f7f51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f7f52: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f7f55: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7f5au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f7f5a(); return;
}

void f_7f7f5a(void) {
  LOAD_REGS();
L_7f7f5a: /* 7f7f5a: push 0xa11cd4 */
  { uint32_t v = 0xa11cd4u; esp -= 4; W32(esp, v); }
/* 7f7f5f: push 0xadfee8 */
  { uint32_t v = 0xadfee8u; esp -= 4; W32(esp, v); }
/* 7f7f64: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f7f6au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f7f6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f7f6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f7f6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f7f71: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f7f76u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f7f76: guest_badaddr(0x7f7f76); return;
}

void f_7f7fd0(void) {
  LOAD_REGS();
L_7f7fd0: /* 7f7fd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f7fd1: mov ebp, esp */
  ebp = esp;
/* 7f7fd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f7fd5: push 0x9d1870 */
  { uint32_t v = 0x9d1870u; esp -= 4; W32(esp, v); }
/* 7f7fda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f7fe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f7fe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f7fe8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f7feb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f7fec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f7fed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f7fee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f7ff1: mov esi, ecx */
  esi = ecx;
/* 7f7ff3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f7ffa: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x7f8000u); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
L_7f8000: /* 7f8000: mov ecx, esi */
  ecx = esi;
/* 7f8002: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f8008u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f8008: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f800a: je 0x7f8018 */
  if (zf) goto L_7f8018;
L_7f800c: /* 7f800c: mov ecx, esi */
  ecx = esi;
/* 7f800e: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f8014u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f8014: mov esi, eax */
  esi = eax;
/* 7f8016: jmp 0x7f8000 */
  goto L_7f8000;
L_7f8018: /* 7f8018: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f801a: je 0x7f8036 */
  if (zf) goto L_7f8036;
L_7f801c: /* 7f801c: call dword ptr [0xcfaab0] */
  esp -= 4; W32(esp, 0x7f8022u); SPILL(); f_4e303f(); if (g_unwind) return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */ RELOAD();
/* 7f8022: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f8023: mov ecx, esi */
  ecx = esi;
/* 7f8025: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f802bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f802b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f802d: je 0x7f8036 */
  if (zf) goto L_7f8036;
L_7f802f: /* 7f802f: mov dword ptr [esi + 0x34], 1 */
  W32((uint32_t)(esi + 0x34u), 0x1u);
L_7f8036: /* 7f8036: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f8039: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f803a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f803b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f8042: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f8043: mov esp, ebp */
  esp = ebp;
/* 7f8045: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f8046: ret  */
  esp += 4; SPILL(); return;
}

void f_7f8047(void) {
  LOAD_REGS();
L_7f8047: /* 7f8047: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f804a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f804f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f8052: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f8053: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f8056: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f805bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f805b(); return;
}

void f_7f805b(void) {
  LOAD_REGS();
L_7f805b: /* 7f805b: push 0xa11d10 */
  { uint32_t v = 0xa11d10u; esp -= 4; W32(esp, v); }
/* 7f8060: push 0xadff08 */
  { uint32_t v = 0xadff08u; esp -= 4; W32(esp, v); }
/* 7f8065: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f806bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f806b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f806e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f8070: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f8072: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f8077u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f8077: guest_badaddr(0x7f8077); return;
}

void f_7f80b0(void) {
  LOAD_REGS();
L_7f80b0: /* 7f80b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f80b1: mov ebp, esp */
  ebp = esp;
/* 7f80b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f80b5: push 0x9d1880 */
  { uint32_t v = 0x9d1880u; esp -= 4; W32(esp, v); }
/* 7f80ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f80c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f80c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f80c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f80cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f80cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f80cd: mov esi, ecx */
  esi = ecx;
/* 7f80cf: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7f80d2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f80d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f80d5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f80d8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f80df: je 0x7f80f6 */
  if (zf) goto L_7f80f6;
L_7f80e1: /* 7f80e1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f80e3: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f80e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f80e9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f80ec: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f80ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f80ef: mov ecx, eax */
  ecx = eax;
/* 7f80f1: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7f80f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f80f4: jmp 0x7f80f9 */
  goto L_7f80f9;
L_7f80f6: /* 7f80f6: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_7f80f9: /* 7f80f9: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7f80fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f80fe: je 0x7f8110 */
  if (zf) goto L_7f8110;
L_7f8100: /* 7f8100: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f8102: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f8108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8108: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f810a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f810b: mov ecx, eax */
  ecx = eax;
/* 7f810d: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7f8110u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f8110: /* 7f8110: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7f8113: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8115: je 0x7f8131 */
  if (zf) goto L_7f8131;
L_7f8117: /* 7f8117: cmp ecx, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f811a: je 0x7f8131 */
  if (zf) goto L_7f8131;
L_7f811c: /* 7f811c: cmp ecx, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f811f: je 0x7f8131 */
  if (zf) goto L_7f8131;
L_7f8121: /* 7f8121: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f8123: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7f8129u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8129: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f812b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f812c: mov ecx, eax */
  ecx = eax;
/* 7f812e: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7f8131u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7f8131: /* 7f8131: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f8134: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f8135: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f8136: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f813d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f813e: mov esp, ebp */
  esp = ebp;
/* 7f8140: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f8141: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f8144(void) {
  LOAD_REGS();
L_7f8144: /* 7f8144: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f8147: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f814c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f814f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f8150: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f8153: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f8158u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f8158(); return;
}

void f_7f8158(void) {
  LOAD_REGS();
L_7f8158: /* 7f8158: push 0xa11d50 */
  { uint32_t v = 0xa11d50u; esp -= 4; W32(esp, v); }
/* 7f815d: push 0xadff10 */
  { uint32_t v = 0xadff10u; esp -= 4; W32(esp, v); }
/* 7f8162: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f8168u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f8168: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f816b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f816d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f816f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f8174u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f8174: guest_badaddr(0x7f8174); return;
}

void f_7f81c0(void) {
  LOAD_REGS();
L_7f81c0: /* 7f81c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f81c1: mov ebp, esp */
  ebp = esp;
/* 7f81c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f81c5: push 0x9d1890 */
  { uint32_t v = 0x9d1890u; esp -= 4; W32(esp, v); }
/* 7f81ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f81d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f81d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f81d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f81db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f81dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f81dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f81de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f81e1: mov esi, ecx */
  esi = ecx;
/* 7f81e3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f81ea: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x7f81f0u); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
L_7f81f0: /* 7f81f0: mov ecx, esi */
  ecx = esi;
/* 7f81f2: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f81f8u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f81f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f81fa: je 0x7f8208 */
  if (zf) goto L_7f8208;
L_7f81fc: /* 7f81fc: mov ecx, esi */
  ecx = esi;
/* 7f81fe: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f8204u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f8204: mov esi, eax */
  esi = eax;
/* 7f8206: jmp 0x7f81f0 */
  goto L_7f81f0;
L_7f8208: /* 7f8208: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f820a: je 0x7f8226 */
  if (zf) goto L_7f8226;
L_7f820c: /* 7f820c: call dword ptr [0xcfaab0] */
  esp -= 4; W32(esp, 0x7f8212u); SPILL(); f_4e303f(); if (g_unwind) return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */ RELOAD();
/* 7f8212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f8213: mov ecx, esi */
  ecx = esi;
/* 7f8215: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f821bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f821b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f821d: je 0x7f8226 */
  if (zf) goto L_7f8226;
L_7f821f: /* 7f821f: mov dword ptr [esi + 0x34], 1 */
  W32((uint32_t)(esi + 0x34u), 0x1u);
L_7f8226: /* 7f8226: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f8229: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f822a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f822b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f8232: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f8233: mov esp, ebp */
  esp = ebp;
/* 7f8235: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f8236: ret  */
  esp += 4; SPILL(); return;
}

void f_7f8237(void) {
  LOAD_REGS();
L_7f8237: /* 7f8237: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f823a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f823f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f8242: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f8243: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f8246: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f824bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f824b(); return;
}

void f_7f824b(void) {
  LOAD_REGS();
L_7f824b: /* 7f824b: push 0xa11d90 */
  { uint32_t v = 0xa11d90u; esp -= 4; W32(esp, v); }
/* 7f8250: push 0xadff98 */
  { uint32_t v = 0xadff98u; esp -= 4; W32(esp, v); }
/* 7f8255: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f825bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f825b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f825e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f8260: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f8262: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f8267u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f8267: guest_badaddr(0x7f8267); return;
}

void f_7f82a0(void) {
  LOAD_REGS();
L_7f82a0: /* 7f82a0: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7f82a3: xor eax, eax */
  eax = 0;
/* 7f82a5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f82a7: je 0x7f82ae */
  if (zf) goto L_7f82ae;
L_7f82a9: /* 7f82a9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f82ab: jmp dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); SPILL(); call_ind(t); return; }
L_7f82ae: /* 7f82ae: ret  */
  esp += 4; SPILL(); return;
}

void f_7f82c0(void) {
  LOAD_REGS();
L_7f82c0: /* 7f82c0: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7f82c3: xor eax, eax */
  eax = 0;
/* 7f82c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f82c7: je 0x7f82ce */
  if (zf) goto L_7f82ce;
L_7f82c9: /* 7f82c9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f82cb: jmp dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); SPILL(); call_ind(t); return; }
L_7f82ce: /* 7f82ce: ret  */
  esp += 4; SPILL(); return;
}

void f_7f82e0(void) {
  LOAD_REGS();
L_7f82e0: /* 7f82e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f82e1: mov esi, ecx */
  esi = ecx;
/* 7f82e3: cmp byte ptr [esi + 0x3c], 7 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7f82e7: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 7f82ea: ja 0x7f8319 */
  if ((!cf && !zf)) goto L_7f8319;
L_7f82ec: /* 7f82ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 7f82ee: je 0x7f8309 */
  if (zf) goto L_7f8309;
L_7f82f0: /* 7f82f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f82f2: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x7f82f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f82f8: mov cl, byte ptr [esi + 0x3c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3cu))) & 0xffu);
/* 7f82fb: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 7f82fe: mov eax, 1 */
  eax = 0x1u;
/* 7f8303: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 7f8305: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f8306: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7f8308: ret  */
  esp += 4; SPILL(); return;
L_7f8309: /* 7f8309: mov cl, byte ptr [esi + 0x3c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3cu))) & 0xffu);
/* 7f830c: mov edx, 1 */
  edx = 0x1u;
/* 7f8311: mov eax, edx */
  eax = edx;
/* 7f8313: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 7f8315: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f8316: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7f8318: ret  */
  esp += 4; SPILL(); return;
L_7f8319: /* 7f8319: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f831b: je 0x7f832a */
  if (zf) goto L_7f832a;
L_7f831d: /* 7f831d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f831f: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7f8325u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8325: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 7f8328: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f8329: ret  */
  esp += 4; SPILL(); return;
L_7f832a: /* 7f832a: mov eax, 1 */
  eax = 0x1u;
/* 7f832f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f8330: ret  */
  esp += 4; SPILL(); return;
}

void f_7f8360(void) {
  LOAD_REGS();
L_7f8360: /* 7f8360: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7f8363: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8365: je 0x7f836c */
  if (zf) goto L_7f836c;
L_7f8367: /* 7f8367: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f8369: jmp dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); SPILL(); call_ind(t); return; }
L_7f836c: /* 7f836c: mov eax, 1 */
  eax = 0x1u;
/* 7f8371: ret  */
  esp += 4; SPILL(); return;
}

void f_7f8390(void) {
  LOAD_REGS();
L_7f8390: /* 7f8390: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7f8393: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8395: je 0x7f839c */
  if (zf) goto L_7f839c;
L_7f8397: /* 7f8397: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f8399: jmp dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); SPILL(); call_ind(t); return; }
L_7f839c: /* 7f839c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f83b0(void) {
  LOAD_REGS();
L_7f83b0: /* 7f83b0: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f83b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f83b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f83b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f83b6: mov esi, ecx */
  esi = ecx;
/* 7f83b8: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 7f83bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f83bd: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 7f83c0: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x7f83c6u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 7f83c6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f83ca: fmul dword ptr [esi + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x50u)));
/* 7f83cd: mov edi, dword ptr [0xcfa3dc] */
  edi = R32((uint32_t)(0xcfa3dcu));
/* 7f83d3: fmul dword ptr [esp + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x64u)));
/* 7f83d7: fmul dword ptr [0xa11dd4] */
  ST0 = ST0 * (F32((uint32_t)(0xa11dd4u)));
/* 7f83dd: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 7f83e1: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7f83e5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7f83e9: fmul dword ptr [esi + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x50u)));
/* 7f83ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f83ed: fmul dword ptr [esp + 0x68] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x68u)));
/* 7f83f1: fmul dword ptr [0xa11dd4] */
  ST0 = ST0 * (F32((uint32_t)(0xa11dd4u)));
/* 7f83f7: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 7f83fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f83fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f83fd: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 7f8401: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f8405: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f8409: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f840a: fsubr dword ptr [esp + 0x14] */
  ST0 = (F32((uint32_t)(esp + 0x14u))) - ST0;
/* 7f840e: fmul dword ptr [0xa11dd0] */
  ST0 = ST0 * (F32((uint32_t)(0xa11dd0u)));
/* 7f8414: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7f8418: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7f841au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f841a: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 7f841e: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7f8422: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7f8426: lea ebx, [esi + 0x54] */
  ebx = (uint32_t)(esi + 0x54u);
/* 7f8429: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* 7f8431: fsubr dword ptr [esp + 0x6c] */
  ST0 = (F32((uint32_t)(esp + 0x6cu))) - ST0;
/* 7f8435: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 7f843d: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 7f8445: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 7f844d: fmul dword ptr [0xa11dd0] */
  ST0 = ST0 * (F32((uint32_t)(0xa11dd0u)));
/* 7f8453: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 7f8457: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 7f845f: mov dword ptr [esp + 0x3c], 0x3f800000 */
  W32((uint32_t)(esp + 0x3cu), 0x3f800000u);
/* 7f8467: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 7f846f: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 7f8477: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 7f847b: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 7f8483: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 7f848b: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 7f8493: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 7f849b: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 7f84a3: mov dword ptr [esp + 0x64], 0x3f800000 */
  W32((uint32_t)(esp + 0x64u), 0x3f800000u);
/* 7f84ab: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f84b0: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* 7f84b4: mov edi, ebx */
  edi = ebx;
/* 7f84b6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f84b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f84bb: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7f84bf: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f84c5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7f84c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f84c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f84c7: mov eax, ebx */
  eax = ebx;
/* 7f84c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f84ca: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f84cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f8520(void) {
  LOAD_REGS();
L_7f8520: /* 7f8520: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f8523: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f8524: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f8525: mov esi, ecx */
  esi = ecx;
/* 7f8527: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f8529: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f852a: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7f852du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f852d: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 7f8531: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7f8535: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f8537: mov ecx, esi */
  ecx = esi;
/* 7f8539: fdivr dword ptr [esi + 0x90] */
  ST0 = (F32((uint32_t)(esi + 0x90u))) / ST0;
/* 7f853f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7f8543: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7f8546u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8546: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 7f854a: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7f854e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7f8552: lea ebx, [esi + 0x44] */
  ebx = (uint32_t)(esi + 0x44u);
/* 7f8555: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7f855d: fdivr dword ptr [esi + 0x8c] */
  ST0 = (F32((uint32_t)(esi + 0x8cu))) / ST0;
/* 7f8563: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7f856b: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 7f8573: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 7f857b: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 7f8583: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 7f858b: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 7f858f: mov dword ptr [esp + 0x3c], 0x3f800000 */
  W32((uint32_t)(esp + 0x3cu), 0x3f800000u);
/* 7f8597: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 7f859f: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 7f85a7: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 7f85af: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 7f85b7: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 7f85bf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f85c4: mov edi, ebx */
  edi = ebx;
/* 7f85c6: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7f85cc: fdiv dword ptr [esi + 0x88] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x88u)));
/* 7f85d2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7f85d8: fdiv dword ptr [esi + 0x84] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x84u)));
/* 7f85de: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* 7f85e2: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7f85e6: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 7f85ea: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 7f85ee: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f85f0: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 7f85f4: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f85fau); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7f85fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f85fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f85fc: mov eax, ebx */
  eax = ebx;
/* 7f85fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f85ff: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f8602: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f8650(void) {
  LOAD_REGS();
L_7f8650: /* 7f8650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f8651: mov ebp, esp */
  ebp = esp;
/* 7f8653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f8655: push 0x9d18a0 */
  { uint32_t v = 0x9d18a0u; esp -= 4; W32(esp, v); }
/* 7f865a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f8660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f8661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f8668: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f866b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f866c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f866d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f866e: xor edi, edi */
  edi = 0;
/* 7f8670: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f8673: mov esi, ecx */
  esi = ecx;
/* 7f8675: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f8678: call 0x6cb505 */
  esp -= 4; W32(esp, 0x7f867du); SPILL(); f_6cb505(); if (g_unwind) return; RELOAD();
/* 7f867d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f8680: mov dword ptr [esi + 0xac], edi */
  W32((uint32_t)(esi + 0xacu), edi);
/* 7f8686: mov dword ptr [esi + 0xa8], edi */
  W32((uint32_t)(esi + 0xa8u), edi);
/* 7f868c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f868d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f868e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f8695: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f8696: mov esp, ebp */
  esp = ebp;
/* 7f8698: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f8699: ret  */
  esp += 4; SPILL(); return;
}

void f_7f869a(void) {
  LOAD_REGS();
L_7f869a: /* 7f869a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f869d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f86a2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f86a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f86a6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f86a9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f86aeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f86ae(); return;
}

void f_7f86ae(void) {
  LOAD_REGS();
L_7f86ae: /* 7f86ae: push 0xa11dd8 */
  { uint32_t v = 0xa11dd8u; esp -= 4; W32(esp, v); }
/* 7f86b3: push 0xae0080 */
  { uint32_t v = 0xae0080u; esp -= 4; W32(esp, v); }
/* 7f86b8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f86beu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f86be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f86c1: xor edi, edi */
  edi = 0;
/* 7f86c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f86c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f86c5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f86cau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f86ca: guest_badaddr(0x7f86ca); return;
}

void f_7f86f0(void) {
  LOAD_REGS();
L_7f86f0: /* 7f86f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f86f1: mov ebp, esp */
  ebp = esp;
/* 7f86f3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 7f86f6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f86f8: push 0x9d18d1 */
  { uint32_t v = 0x9d18d1u; esp -= 4; W32(esp, v); }
/* 7f86fd: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f8703: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f8704: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f870b: sub esp, 0x118 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x118u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f8711: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7f8714: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f8715: mov ebx, ecx */
  ebx = ecx;
/* 7f8717: fmul dword ptr [ebx + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x44u)));
/* 7f871a: movzx eax, byte ptr [ebx + 0x5c] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x5cu)));
/* 7f871e: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7f8721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f8722: mov esi, dword ptr [0xcfa350] */
  esi = R32((uint32_t)(0xcfa350u));
/* 7f8728: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7f872c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7f872f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f8730: fmul dword ptr [ebx + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x48u)));
/* 7f8733: lea edi, [ebx + 0x68] */
  edi = (uint32_t)(ebx + 0x68u);
/* 7f8736: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f873b: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 7f873f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f8741: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7f8745: mov esi, dword ptr [0xcfa3dc] */
  esi = R32((uint32_t)(0xcfa3dcu));
/* 7f874b: ja 0x7f8893 */
  if ((!cf && !zf)) goto L_7f8893;
L_7f8751: /* 7f8751: jmp dword ptr [eax*4 + 0x7f8c1c] */
  switch (R32((uint32_t)(eax*4 + 0x7f8c1cu))) {
    case 0x7f8758u: goto L_7f8758;
    case 0x7f87ebu: goto L_7f87eb;
    case 0x7f881cu: goto L_7f881c;
    case 0x7f8853u: goto L_7f8853;
    case 0x7f88a7u: goto L_7f88a7;
    case 0x7f893au: goto L_7f893a;
    case 0x7f896bu: goto L_7f896b;
    case 0x7f8989u: goto L_7f8989;
    default: guest_badjump(0x7f8751, R32((uint32_t)(eax*4 + 0x7f8c1cu))); return;
  }
L_7f8758: /* 7f8758: fld dword ptr [ebx + 0xa8] */
  { double v = F32((uint32_t)(ebx + 0xa8u)); FPUSH(v); }
/* 7f875e: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 7f8762: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7f8768: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f876a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f876d: jnp 0x7f8786 */
  if (!pf) goto L_7f8786;
L_7f876f: /* 7f876f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7f8773: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7f8779: fcomp dword ptr [ebx + 0xa8] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0xa8u)));
  FPOP();
/* 7f877f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f8781: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f8784: jp 0x7f879d */
  if (pf) goto L_7f879d;
L_7f8786: /* 7f8786: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f8787: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f8789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8789: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f878d: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f8791: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f8794: fadd dword ptr [ebx + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4cu)));
/* 7f8797: fstp dword ptr [ebx + 0xa8] */
  WF32((uint32_t)(ebx + 0xa8u), ST0); FPOP();
L_7f879d: /* 7f879d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7f87a1: fsub dword ptr [ebx + 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xa8u)));
/* 7f87a7: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7f87ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f87af: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f87b2: jne 0x7f87da */
  if (!zf) goto L_7f87da;
L_7f87b4: /* 7f87b4: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7f87bau); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7f87ba: fmul dword ptr [ebx + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x54u)));
/* 7f87bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f87be: fstp dword ptr [ebx + 0xb0] */
  WF32((uint32_t)(ebx + 0xb0u), ST0); FPOP();
/* 7f87c4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f87c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f87c6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f87ca: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f87ce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f87d1: fadd dword ptr [ebx + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4cu)));
/* 7f87d4: fstp dword ptr [ebx + 0xa8] */
  WF32((uint32_t)(ebx + 0xa8u), ST0); FPOP();
L_7f87da: /* 7f87da: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 7f87e0: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 7f87e6: jmp 0x7f8893 */
  goto L_7f8893;
L_7f87eb: /* 7f87eb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7f87ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f87f0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f87f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f87f2: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f87f6: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f87fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f87fb: fsubr dword ptr [esp + 0x20] */
  ST0 = (F32((uint32_t)(esp + 0x20u))) - ST0;
/* 7f87ff: fadd dword ptr [ebx + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4cu)));
/* 7f8802: fmul qword ptr [0xa0e970] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e970u)));
/* 7f8808: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7f880b: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7f8811u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7f8811: fmul dword ptr [ebx + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x54u)));
/* 7f8814: fstp dword ptr [ebx + 0x88] */
  WF32((uint32_t)(ebx + 0x88u), ST0); FPOP();
/* 7f881a: jmp 0x7f8890 */
  goto L_7f8890;
L_7f881c: /* 7f881c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7f8820: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f8821: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f8823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8823: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f8827: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f882b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f882c: fsubr dword ptr [esp + 0x20] */
  ST0 = (F32((uint32_t)(esp + 0x20u))) - ST0;
/* 7f8830: fadd dword ptr [ebx + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4cu)));
/* 7f8833: fmul qword ptr [0xa0e970] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e970u)));
/* 7f8839: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7f883c: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7f8842u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7f8842: fmul dword ptr [ebx + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x54u)));
/* 7f8845: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 7f8849: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7f884f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7f8851: jmp 0x7f8890 */
  goto L_7f8890;
L_7f8853: /* 7f8853: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7f8857: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f8858: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f885au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f885a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f885e: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f8862: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f8863: fsubr dword ptr [esp + 0x20] */
  ST0 = (F32((uint32_t)(esp + 0x20u))) - ST0;
/* 7f8867: fmul qword ptr [0xa11e28] */
  ST0 = ST0 * (F64((uint32_t)(0xa11e28u)));
/* 7f886d: fld dword ptr [ebx + 0x4c] */
  { double v = F32((uint32_t)(ebx + 0x4cu)); FPUSH(v); }
/* 7f8870: fmul qword ptr [0xa0e970] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e970u)));
/* 7f8876: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7f8878: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7f887b: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7f8881u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7f8881: fmul dword ptr [ebx + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x54u)));
/* 7f8884: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7f8888: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7f888e: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
L_7f8890: /* 7f8890: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f8893: /* 7f8893: movzx eax, byte ptr [ebx + 0x5d] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x5du)));
/* 7f8897: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7f889a: ja 0x7f89c6 */
  if ((!cf && !zf)) goto L_7f89c6;
L_7f88a0: /* 7f88a0: jmp dword ptr [eax*4 + 0x7f8c2c] */
  switch (R32((uint32_t)(eax*4 + 0x7f8c2cu))) {
    case 0x7f88a7u: goto L_7f88a7;
    case 0x7f893au: goto L_7f893a;
    case 0x7f896bu: goto L_7f896b;
    case 0x7f8989u: goto L_7f8989;
    default: guest_badjump(0x7f88a0, R32((uint32_t)(eax*4 + 0x7f8c2cu))); return;
  }
L_7f88a7: /* 7f88a7: fld dword ptr [ebx + 0xac] */
  { double v = F32((uint32_t)(ebx + 0xacu)); FPUSH(v); }
/* 7f88ad: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7f88b1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7f88b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f88b9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f88bc: jnp 0x7f88d5 */
  if (!pf) goto L_7f88d5;
L_7f88be: /* 7f88be: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f88c2: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7f88c8: fcomp dword ptr [ebx + 0xa8] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0xa8u)));
  FPOP();
/* 7f88ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f88d0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f88d3: jp 0x7f88ec */
  if (pf) goto L_7f88ec;
L_7f88d5: /* 7f88d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f88d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f88d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f88d8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f88dc: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f88e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f88e3: fadd dword ptr [ebx + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x50u)));
/* 7f88e6: fstp dword ptr [ebx + 0xac] */
  WF32((uint32_t)(ebx + 0xacu), ST0); FPOP();
L_7f88ec: /* 7f88ec: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f88f0: fsub dword ptr [ebx + 0xac] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xacu)));
/* 7f88f6: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7f88fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f88fe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8901: jne 0x7f8929 */
  if (!zf) goto L_7f8929;
L_7f8903: /* 7f8903: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7f8909u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7f8909: fmul dword ptr [ebx + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x58u)));
/* 7f890c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f890d: fstp dword ptr [ebx + 0xb4] */
  WF32((uint32_t)(ebx + 0xb4u), ST0); FPOP();
/* 7f8913: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f8915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8915: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f8919: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f891d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f8920: fadd dword ptr [ebx + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x50u)));
/* 7f8923: fstp dword ptr [ebx + 0xac] */
  WF32((uint32_t)(ebx + 0xacu), ST0); FPOP();
L_7f8929: /* 7f8929: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 7f892f: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 7f8935: jmp 0x7f89c6 */
  goto L_7f89c6;
L_7f893a: /* 7f893a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7f893e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f893f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f8941u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8941: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f8945: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f8949: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f894a: fsubr dword ptr [esp + 0x1c] */
  ST0 = (F32((uint32_t)(esp + 0x1cu))) - ST0;
/* 7f894e: fadd dword ptr [ebx + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x50u)));
/* 7f8951: fmul qword ptr [0xa0e970] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e970u)));
/* 7f8957: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7f895a: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7f8960u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7f8960: fmul dword ptr [ebx + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x58u)));
/* 7f8963: fstp dword ptr [ebx + 0x8c] */
  WF32((uint32_t)(ebx + 0x8cu), ST0); FPOP();
/* 7f8969: jmp 0x7f89c3 */
  goto L_7f89c3;
L_7f896b: /* 7f896b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 7f896f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f8970: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f8972u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8972: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f8976: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f897a: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* 7f897e: fadd dword ptr [ebx + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x50u)));
/* 7f8981: fmul qword ptr [0xa0e970] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e970u)));
/* 7f8987: jmp 0x7f89ad */
  goto L_7f89ad;
L_7f8989: /* 7f8989: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7f898d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f898e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f8990u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8990: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f8994: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f8998: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* 7f899c: fmul qword ptr [0xa11e28] */
  ST0 = ST0 * (F64((uint32_t)(0xa11e28u)));
/* 7f89a2: fld dword ptr [ebx + 0x50] */
  { double v = F32((uint32_t)(ebx + 0x50u)); FPUSH(v); }
/* 7f89a5: fmul qword ptr [0xa0e970] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e970u)));
/* 7f89ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
L_7f89ad: /* 7f89ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f89ae: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7f89b1: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7f89b7u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7f89b7: fmul dword ptr [ebx + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x58u)));
/* 7f89ba: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7f89c0: fstp dword ptr [ebx + 0x7c] */
  WF32((uint32_t)(ebx + 0x7cu), ST0); FPOP();
L_7f89c3: /* 7f89c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f89c6: /* 7f89c6: fld dword ptr [ebx + 0x60] */
  { double v = F32((uint32_t)(ebx + 0x60u)); FPUSH(v); }
/* 7f89c9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f89cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f89d1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f89d4: jp 0x7f89ea */
  if (pf) goto L_7f89ea;
L_7f89d6: /* 7f89d6: fld dword ptr [ebx + 0x64] */
  { double v = F32((uint32_t)(ebx + 0x64u)); FPUSH(v); }
/* 7f89d9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f89df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f89e1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f89e4: jnp 0x7f8bff */
  if (!pf) goto L_7f8bff;
L_7f89ea: /* 7f89ea: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f89ec: mov ecx, ebx */
  ecx = ebx;
/* 7f89ee: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7f89f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f89f1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7f89f5: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7f89f9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7f89fb: mov ecx, ebx */
  ecx = ebx;
/* 7f89fd: fdivr dword ptr [ebx + 0x60] */
  ST0 = (F32((uint32_t)(ebx + 0x60u))) / ST0;
/* 7f8a00: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7f8a04: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7f8a07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f8a07: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7f8a0b: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7f8a0f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7f8a13: mov dword ptr [esp + 0x60], 0x3f800000 */
  W32((uint32_t)(esp + 0x60u), 0x3f800000u);
/* 7f8a1b: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 7f8a23: fdivr dword ptr [ebx + 0x64] */
  ST0 = (F32((uint32_t)(ebx + 0x64u))) / ST0;
/* 7f8a26: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 7f8a2e: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 7f8a36: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 7f8a3e: mov dword ptr [esp + 0x74], 0x3f800000 */
  W32((uint32_t)(esp + 0x74u), 0x3f800000u);
/* 7f8a46: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 7f8a4e: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 7f8a56: mov dword ptr [esp + 0x80], ecx */
  W32((uint32_t)(esp + 0x80u), ecx);
/* 7f8a5d: mov dword ptr [esp + 0x88], 0x3f800000 */
  W32((uint32_t)(esp + 0x88u), 0x3f800000u);
/* 7f8a68: mov dword ptr [esp + 0x8c], 0 */
  W32((uint32_t)(esp + 0x8cu), 0x0u);
/* 7f8a73: mov dword ptr [esp + 0x90], 0 */
  W32((uint32_t)(esp + 0x90u), 0x0u);
/* 7f8a7e: mov dword ptr [esp + 0x94], 0 */
  W32((uint32_t)(esp + 0x94u), 0x0u);
/* 7f8a89: mov dword ptr [esp + 0x98], 0 */
  W32((uint32_t)(esp + 0x98u), 0x0u);
/* 7f8a94: mov dword ptr [esp + 0x9c], 0x3f800000 */
  W32((uint32_t)(esp + 0x9cu), 0x3f800000u);
/* 7f8a9f: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 7f8aa3: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 7f8aaa: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f8aae: fchs  */
  ST0 = -ST0;
/* 7f8ab0: mov dword ptr [esp + 0x12c], 0 */
  W32((uint32_t)(esp + 0x12cu), 0x0u);
/* 7f8abb: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7f8abf: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 7f8ac7: fchs  */
  ST0 = -ST0;
/* 7f8ac9: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 7f8ad1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7f8ad3: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 7f8adb: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 7f8adf: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 7f8ae7: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 7f8aef: mov dword ptr [esp + 0x34], 0x3f800000 */
  W32((uint32_t)(esp + 0x34u), 0x3f800000u);
/* 7f8af7: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 7f8afb: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 7f8b03: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 7f8b0b: mov dword ptr [esp + 0x48], 0x3f800000 */
  W32((uint32_t)(esp + 0x48u), 0x3f800000u);
/* 7f8b13: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 7f8b1b: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 7f8b23: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 7f8b2b: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 7f8b33: mov dword ptr [esp + 0x5c], 0x3f800000 */
  W32((uint32_t)(esp + 0x5cu), 0x3f800000u);
/* 7f8b3b: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 7f8b3f: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f8b42: mov edi, esp */
  edi = esp;
/* 7f8b44: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f8b49: mov esi, ebx */
  esi = ebx;
/* 7f8b4b: lea edx, [esp + 0x120] */
  edx = (uint32_t)(esp + 0x120u);
/* 7f8b52: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f8b54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f8b55: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 7f8b59: mov byte ptr [esp + 0x170], 1 */
  W8((uint32_t)(esp + 0x170u), 0x1u);
/* 7f8b61: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7f8b67u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7f8b67: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f8b6a: mov edi, esp */
  edi = esp;
/* 7f8b6c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f8b71: lea esi, [esp + 0xa0] */
  esi = (uint32_t)(esp + 0xa0u);
/* 7f8b78: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f8b7a: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 7f8b81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f8b82: mov ecx, eax */
  ecx = eax;
/* 7f8b84: mov byte ptr [esp + 0x170], 2 */
  W8((uint32_t)(esp + 0x170u), 0x2u);
/* 7f8b8c: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7f8b92u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7f8b92: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f8b97: mov esi, eax */
  esi = eax;
/* 7f8b99: mov edi, ebx */
  edi = ebx;
/* 7f8b9b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f8b9d: lea ecx, [esp + 0xa0] */
  ecx = (uint32_t)(esp + 0xa0u);
/* 7f8ba4: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f8baau); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7f8baa: lea ecx, [esp + 0xe0] */
  ecx = (uint32_t)(esp + 0xe0u);
/* 7f8bb1: mov byte ptr [esp + 0x12c], 1 */
  W8((uint32_t)(esp + 0x12cu), 0x1u);
/* 7f8bb9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f8bbfu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7f8bbf: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7f8bc3: mov byte ptr [esp + 0x12c], 0 */
  W8((uint32_t)(esp + 0x12cu), 0x0u);
/* 7f8bcb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f8bd1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7f8bd1: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 7f8bd5: mov dword ptr [esp + 0x12c], 0xffffffff */
  W32((uint32_t)(esp + 0x12cu), 0xffffffffu);
/* 7f8be0: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f8be6u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7f8be6: mov eax, ebx */
  eax = ebx;
/* 7f8be8: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 7f8bef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f8bf6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f8bf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f8bf8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f8bf9: mov esp, ebp */
  esp = ebp;
/* 7f8bfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f8bfc: ret 4 */
  esp += 8; SPILL(); return;
L_7f8bff: /* 7f8bff: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 7f8c06: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7f8c0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f8c0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f8c0c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f8c13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f8c14: mov esp, ebp */
  esp = ebp;
/* 7f8c16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f8c17: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f8da0(void) {
  LOAD_REGS();
L_7f8da0: /* 7f8da0: movzx eax, byte ptr [ecx + 0x44] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x44u)));
/* 7f8da4: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7f8da7: je 0x7f8db5 */
  if (zf) goto L_7f8db5;
L_7f8da9: /* 7f8da9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7f8daa: jne 0x7f8db9 */
  if (!zf) goto L_7f8db9;
L_7f8dac: /* 7f8dac: mov byte ptr [ecx + 0x3c], 0xb */
  W8((uint32_t)(ecx + 0x3cu), 0xbu);
/* 7f8db0: xor eax, eax */
  eax = 0;
/* 7f8db2: ret 4 */
  esp += 8; SPILL(); return;
L_7f8db5: /* 7f8db5: mov byte ptr [ecx + 0x3c], 0xa */
  W8((uint32_t)(ecx + 0x3cu), 0xau);
L_7f8db9: /* 7f8db9: xor eax, eax */
  eax = 0;
/* 7f8dbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f8dd0(void) {
  LOAD_REGS();
L_7f8dd0: /* 7f8dd0: mov al, byte ptr [ecx + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3cu))) & 0xffu);
/* 7f8dd3: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f8dd5: je 0x7f8dee */
  if (zf) goto L_7f8dee;
L_7f8dd7: /* 7f8dd7: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f8dd9: je 0x7f8dee */
  if (zf) goto L_7f8dee;
L_7f8ddb: /* 7f8ddb: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f8ddd: je 0x7f8dee */
  if (zf) goto L_7f8dee;
L_7f8ddf: /* 7f8ddf: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f8de1: je 0x7f8dee */
  if (zf) goto L_7f8dee;
L_7f8de3: /* 7f8de3: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f8de5: je 0x7f8dee */
  if (zf) goto L_7f8dee;
L_7f8de7: /* 7f8de7: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7f8de9: je 0x7f8dee */
  if (zf) goto L_7f8dee;
L_7f8deb: /* 7f8deb: xor eax, eax */
  eax = 0;
/* 7f8ded: ret  */
  esp += 4; SPILL(); return;
L_7f8dee: /* 7f8dee: mov eax, 1 */
  eax = 0x1u;
/* 7f8df3: ret  */
  esp += 4; SPILL(); return;
}

void f_7f8e10(void) {
  LOAD_REGS();
L_7f8e10: /* 7f8e10: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f8e12: jmp dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); SPILL(); call_ind(t); return; }
}

void f_7f8e30(void) {
  LOAD_REGS();
L_7f8e30: /* 7f8e30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f8e31: mov ebp, esp */
  ebp = esp;
/* 7f8e33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f8e35: push 0x9d18f0 */
  { uint32_t v = 0x9d18f0u; esp -= 4; W32(esp, v); }
/* 7f8e3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f8e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f8e41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f8e48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f8e4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f8e4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f8e4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f8e4e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f8e51: mov esi, ecx */
  esi = ecx;
/* 7f8e53: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f8e5a: call 0x6cb505 */
  esp -= 4; W32(esp, 0x7f8e5fu); SPILL(); f_6cb505(); if (g_unwind) return; RELOAD();
/* 7f8e5f: nop  */
L_7f8e60: /* 7f8e60: mov ecx, esi */
  ecx = esi;
/* 7f8e62: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f8e68u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f8e68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8e6a: je 0x7f8e78 */
  if (zf) goto L_7f8e78;
L_7f8e6c: /* 7f8e6c: mov ecx, esi */
  ecx = esi;
/* 7f8e6e: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7f8e74u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7f8e74: mov esi, eax */
  esi = eax;
/* 7f8e76: jmp 0x7f8e60 */
  goto L_7f8e60;
L_7f8e78: /* 7f8e78: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8e7a: je 0x7f8e96 */
  if (zf) goto L_7f8e96;
L_7f8e7c: /* 7f8e7c: call dword ptr [0xcfaab0] */
  esp -= 4; W32(esp, 0x7f8e82u); SPILL(); f_4e303f(); if (g_unwind) return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */ RELOAD();
/* 7f8e82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f8e83: mov ecx, esi */
  ecx = esi;
/* 7f8e85: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7f8e8bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7f8e8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8e8d: je 0x7f8e96 */
  if (zf) goto L_7f8e96;
L_7f8e8f: /* 7f8e8f: mov dword ptr [esi + 0x34], 1 */
  W32((uint32_t)(esi + 0x34u), 0x1u);
L_7f8e96: /* 7f8e96: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f8e99: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f8e9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f8e9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f8ea2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f8ea3: mov esp, ebp */
  esp = ebp;
/* 7f8ea5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f8ea6: ret  */
  esp += 4; SPILL(); return;
}

void f_7f8ea7(void) {
  LOAD_REGS();
L_7f8ea7: /* 7f8ea7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f8eaa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f8eaf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f8eb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f8eb3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f8eb6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f8ebbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f8ebb(); return;
}

void f_7f8ebb(void) {
  LOAD_REGS();
L_7f8ebb: /* 7f8ebb: push 0xa11e34 */
  { uint32_t v = 0xa11e34u; esp -= 4; W32(esp, v); }
/* 7f8ec0: push 0xae0114 */
  { uint32_t v = 0xae0114u; esp -= 4; W32(esp, v); }
/* 7f8ec5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f8ecbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f8ecb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f8ece: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f8ed0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f8ed2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f8ed7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f8ed7: guest_badaddr(0x7f8ed7); return;
}

void f_7f8f10(void) {
  LOAD_REGS();
L_7f8f10: /* 7f8f10: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7f8f13: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8f15: je 0x7f8f1c */
  if (zf) goto L_7f8f1c;
L_7f8f17: /* 7f8f17: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f8f19: jmp dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); SPILL(); call_ind(t); return; }
L_7f8f1c: /* 7f8f1c: mov eax, 1 */
  eax = 0x1u;
/* 7f8f21: ret  */
  esp += 4; SPILL(); return;
}

void f_7f8f40(void) {
  LOAD_REGS();
L_7f8f40: /* 7f8f40: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7f8f43: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8f45: je 0x7f8f4c */
  if (zf) goto L_7f8f4c;
L_7f8f47: /* 7f8f47: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f8f49: jmp dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); SPILL(); call_ind(t); return; }
L_7f8f4c: /* 7f8f4c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f8f60(void) {
  LOAD_REGS();
L_7f8f60: /* 7f8f60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f8f61: mov ebp, esp */
  ebp = esp;
/* 7f8f63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f8f65: push 0x9d1900 */
  { uint32_t v = 0x9d1900u; esp -= 4; W32(esp, v); }
/* 7f8f6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f8f70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f8f71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f8f78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f8f7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f8f7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f8f7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f8f7e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7f8f81: mov esi, ecx */
  esi = ecx;
/* 7f8f83: mov ecx, edi */
  ecx = edi;
/* 7f8f85: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f8f88: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f8f8f: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x7f8f95u); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 7f8f95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8f97: je 0x7f8fa0 */
  if (zf) goto L_7f8fa0;
L_7f8f99: /* 7f8f99: mov dword ptr [esi + 0x38], 0 */
  W32((uint32_t)(esi + 0x38u), 0x0u);
L_7f8fa0: /* 7f8fa0: mov eax, dword ptr [0xcfa40c] */
  eax = R32((uint32_t)(0xcfa40cu));
/* 7f8fa5: test byte ptr [eax], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f8fa8: jne 0x7f8fb3 */
  if (!zf) goto L_7f8fb3;
L_7f8faa: /* 7f8faa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f8fab: mov ecx, esi */
  ecx = esi;
/* 7f8fad: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x7f8fb3u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
L_7f8fb3: /* 7f8fb3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f8fb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f8fb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f8fb8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f8fbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f8fc0: mov esp, ebp */
  esp = ebp;
/* 7f8fc2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f8fc3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f8fc6(void) {
  LOAD_REGS();
L_7f8fc6: /* 7f8fc6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f8fc9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f8fce: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7f8fd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f8fd2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7f8fd5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f8fdau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f8fda(); return;
}

void f_7f8fda(void) {
  LOAD_REGS();
L_7f8fda: /* 7f8fda: push 0xa11e78 */
  { uint32_t v = 0xa11e78u; esp -= 4; W32(esp, v); }
/* 7f8fdf: push 0xae016c */
  { uint32_t v = 0xae016cu; esp -= 4; W32(esp, v); }
/* 7f8fe4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f8feau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f8fea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f8fed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f8fef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f8ff1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f8ff6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f8ff6: guest_badaddr(0x7f8ff6); return;
}

void f_7f9030(void) {
  LOAD_REGS();
L_7f9030: /* 7f9030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f9031: mov ebp, esp */
  ebp = esp;
/* 7f9033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f9035: push 0x9d1910 */
  { uint32_t v = 0x9d1910u; esp -= 4; W32(esp, v); }
/* 7f903a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f9040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f9048: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f904b: fld dword ptr [ecx + 0x9c] */
  { double v = F32((uint32_t)(ecx + 0x9cu)); FPUSH(v); }
/* 7f9051: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f9052: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f9058: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9059: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f905a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f905d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f9064: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f9066: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f9069: jp 0x7f9073 */
  if (pf) goto L_7f9073;
L_7f906b: /* 7f906b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7f9071: jmp 0x7f90bb */
  goto L_7f90bb;
L_7f9073: /* 7f9073: fld dword ptr [ecx + 0x98] */
  { double v = F32((uint32_t)(ecx + 0x98u)); FPUSH(v); }
/* 7f9079: mov al, byte ptr [ecx + 0xa0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xa0u))) & 0xffu);
/* 7f907f: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9081: fdiv dword ptr [ecx + 0x50] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x50u)));
/* 7f9084: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7f9087: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7f908a: fsub dword ptr [ecx + 0x9c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x9cu)));
/* 7f9090: je 0x7f90ac */
  if (zf) goto L_7f90ac;
L_7f9092: /* 7f9092: fsubr dword ptr [ebp - 0x14] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffecu))) - ST0;
/* 7f9095: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7f909b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f909d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f90a0: jp 0x7f90bb */
  if (pf) goto L_7f90bb;
L_7f90a2: /* 7f90a2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7f90a4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7f90aa: jmp 0x7f90bb */
  goto L_7f90bb;
L_7f90ac: /* 7f90ac: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 7f90af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f90b1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f90b4: jne 0x7f90bb */
  if (!zf) goto L_7f90bb;
L_7f90b6: /* 7f90b6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7f90b8: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_7f90bb: /* 7f90bb: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7f90c0: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f90c3: je 0x7f90cf */
  if (zf) goto L_7f90cf;
L_7f90c5: /* 7f90c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f90c8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7f90ca: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 7f90cd: jmp 0x7f90d2 */
  goto L_7f90d2;
L_7f90cf: /* 7f90cf: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_7f90d2: /* 7f90d2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f90d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f90d6: call 0x6c2833 */
  esp -= 4; W32(esp, 0x7f90dbu); SPILL(); f_6c2833(); if (g_unwind) return; RELOAD();
/* 7f90db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f90de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f90df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f90e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f90e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f90e8: mov esp, ebp */
  esp = ebp;
/* 7f90ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f90eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f90ee(void) {
  LOAD_REGS();
L_7f90ee: /* 7f90ee: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f90f1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f90f6: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7f90f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f90fa: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f90fd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f9102u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f9102(); return;
}

void f_7f9102(void) {
  LOAD_REGS();
L_7f9102: /* 7f9102: push 0xa11ec0 */
  { uint32_t v = 0xa11ec0u; esp -= 4; W32(esp, v); }
/* 7f9107: push 0xadffd0 */
  { uint32_t v = 0xadffd0u; esp -= 4; W32(esp, v); }
/* 7f910c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f9112u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f9112: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9115: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9117: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9119: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f911eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f911e: guest_badaddr(0x7f911e); return;
}

void f_7f9160(void) {
  LOAD_REGS();
L_7f9160: /* 7f9160: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f9162: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f9168: push 0x9d1941 */
  { uint32_t v = 0x9d1941u; esp -= 4; W32(esp, v); }
/* 7f916d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f916e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f9175: sub esp, 0x1f4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1f4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f917b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f917c: mov ebx, ecx */
  ebx = ecx;
/* 7f917e: movzx eax, byte ptr [ebx + 0x84] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x84u)));
/* 7f9185: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7f9186: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f9187: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9188: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f9189: je 0x7f932e */
  if (zf) goto L_7f932e;
L_7f918f: /* 7f918f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7f9190: je 0x7f91d3 */
  if (zf) goto L_7f91d3;
L_7f9192: /* 7f9192: lea eax, [ebx + 0x88] */
  eax = (uint32_t)(ebx + 0x88u);
/* 7f9198: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7f919a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f919d: mov ecx, esp */
  ecx = esp;
/* 7f919f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7f91a1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7f91a4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7f91a7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7f91aa: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7f91ad: lea ecx, [esp + 0x190] */
  ecx = (uint32_t)(esp + 0x190u);
/* 7f91b4: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7f91b9u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7f91b9: lea ebp, [ebx + 0x44] */
  ebp = (uint32_t)(ebx + 0x44u);
/* 7f91bc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f91c1: mov esi, eax */
  esi = eax;
/* 7f91c3: mov edi, ebp */
  edi = ebp;
/* 7f91c5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f91c7: lea ecx, [esp + 0x184] */
  ecx = (uint32_t)(esp + 0x184u);
/* 7f91ce: jmp 0x7f939e */
  goto L_7f939e;
L_7f91d3: /* 7f91d3: fild dword ptr [ebx + 0xa0] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0xa0u)); FPUSH(v); }
/* 7f91d9: mov esi, dword ptr [0xcfa3dc] */
  esi = R32((uint32_t)(0xcfa3dcu));
/* 7f91df: fmul dword ptr [esp + 0x214] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x214u)));
/* 7f91e6: fmul dword ptr [0xa11f0c] */
  ST0 = ST0 * (F32((uint32_t)(0xa11f0cu)));
/* 7f91ec: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7f91f0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7f91f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f91f5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f91f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f91f7: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 7f91fb: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 7f91ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f9200: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* 7f9204: fiadd dword ptr [ebx + 0xb8] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebx + 0xb8u)));
/* 7f920a: fmul qword ptr [0xa0e970] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e970u)));
/* 7f9210: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7f9213: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7f9219u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7f9219: fimul dword ptr [ebx + 0xac] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebx + 0xacu)));
/* 7f921f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 7f9223: fild dword ptr [ebx + 0xa4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0xa4u)); FPUSH(v); }
/* 7f9229: fmul dword ptr [esp + 0x21c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x21cu)));
/* 7f9230: fmul dword ptr [0xa11f0c] */
  ST0 = ST0 * (F32((uint32_t)(0xa11f0cu)));
/* 7f9236: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7f923a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7f923e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f923f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f9241u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f9241: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7f9245: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 7f9249: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f924c: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* 7f9250: fiadd dword ptr [ebx + 0xbc] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebx + 0xbcu)));
/* 7f9256: fmul qword ptr [0xa0e970] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e970u)));
/* 7f925c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7f925f: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7f9265u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7f9265: fimul dword ptr [ebx + 0xb0] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebx + 0xb0u)));
/* 7f926b: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7f926f: fild dword ptr [ebx + 0xa8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0xa8u)); FPUSH(v); }
/* 7f9275: fmul dword ptr [esp + 0x21c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x21cu)));
/* 7f927c: fmul dword ptr [0xa11f0c] */
  ST0 = ST0 * (F32((uint32_t)(0xa11f0cu)));
/* 7f9282: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7f9286: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7f928a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f928b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7f928du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f928d: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7f9291: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 7f9295: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9298: fsubr dword ptr [esp + 0x18] */
  ST0 = (F32((uint32_t)(esp + 0x18u))) - ST0;
/* 7f929c: fiadd dword ptr [ebx + 0xc0] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebx + 0xc0u)));
/* 7f92a2: fmul qword ptr [0xa0e970] */
  ST0 = ST0 * (F64((uint32_t)(0xa0e970u)));
/* 7f92a8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7f92ab: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x7f92b1u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 7f92b1: fimul dword ptr [ebx + 0xb4] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebx + 0xb4u)));
/* 7f92b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f92ba: call 0x99c958 */
  esp -= 4; W32(esp, 0x7f92bfu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7f92bf: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 7f92c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f92c4: call 0x99c958 */
  esp -= 4; W32(esp, 0x7f92c9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7f92c9: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7f92cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f92ce: call 0x99c958 */
  esp -= 4; W32(esp, 0x7f92d3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7f92d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f92d4: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 7f92db: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7f92e1u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7f92e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f92e2: lea ecx, [esp + 0xb0] */
  ecx = (uint32_t)(esp + 0xb0u);
/* 7f92e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f92ea: lea ecx, [ebx + 0x88] */
  ecx = (uint32_t)(ebx + 0x88u);
/* 7f92f0: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x7f92f6u); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7f92f6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7f92f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f92fb: mov edx, esp */
  edx = esp;
/* 7f92fd: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7f92ff: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7f9302: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7f9305: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7f9308: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7f930b: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 7f9312: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7f9317u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7f9317: lea ebp, [ebx + 0x44] */
  ebp = (uint32_t)(ebx + 0x44u);
/* 7f931a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f931f: mov esi, eax */
  esi = eax;
/* 7f9321: mov edi, ebp */
  edi = ebp;
/* 7f9323: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f9325: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 7f932c: jmp 0x7f939e */
  goto L_7f939e;
L_7f932e: /* 7f932e: mov ecx, dword ptr [esp + 0x214] */
  ecx = R32((uint32_t)(esp + 0x214u));
/* 7f9335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f9336: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 7f933a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f933b: lea ecx, [ebx + 0x88] */
  ecx = (uint32_t)(ebx + 0x88u);
/* 7f9341: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x7f9347u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 7f9347: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7f934b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7f934f: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7f9353: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f9356: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7f935b: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7f9361: mov esi, esp */
  esi = esp;
/* 7f9363: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7f9365: and edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7f936b: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7f936e: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 7f9372: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 7f9379: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 7f937d: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7f9381: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7f9384: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7f9389u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7f9389: lea ebp, [ebx + 0x44] */
  ebp = (uint32_t)(ebx + 0x44u);
/* 7f938c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f9391: mov esi, eax */
  esi = eax;
/* 7f9393: mov edi, ebp */
  edi = ebp;
/* 7f9395: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f9397: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
L_7f939e: /* 7f939e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f93a4u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7f93a4: fld dword ptr [ebx + 0x98] */
  { double v = F32((uint32_t)(ebx + 0x98u)); FPUSH(v); }
/* 7f93aa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f93b0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f93b2: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f93b5: jp 0x7f93ce */
  if (pf) goto L_7f93ce;
L_7f93b7: /* 7f93b7: fld dword ptr [ebx + 0x9c] */
  { double v = F32((uint32_t)(ebx + 0x9cu)); FPUSH(v); }
/* 7f93bd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f93c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f93c5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f93c8: jnp 0x7f95d5 */
  if (!pf) goto L_7f95d5;
L_7f93ce: /* 7f93ce: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7f93d0: mov ecx, ebx */
  ecx = ebx;
/* 7f93d2: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7f93d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f93d5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f93d9: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f93dd: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7f93df: mov ecx, ebx */
  ecx = ebx;
/* 7f93e1: fdivr dword ptr [ebx + 0x98] */
  ST0 = (F32((uint32_t)(ebx + 0x98u))) / ST0;
/* 7f93e7: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7f93eb: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7f93eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f93ee: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7f93f2: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f93f6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7f93fa: mov dword ptr [esp + 0x2c], 0x3f800000 */
  W32((uint32_t)(esp + 0x2cu), 0x3f800000u);
/* 7f9402: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 7f940a: fdivr dword ptr [ebx + 0x9c] */
  ST0 = (F32((uint32_t)(ebx + 0x9cu))) / ST0;
/* 7f9410: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 7f9418: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 7f9420: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 7f9428: mov dword ptr [esp + 0x40], 0x3f800000 */
  W32((uint32_t)(esp + 0x40u), 0x3f800000u);
/* 7f9430: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 7f9438: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 7f9440: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 7f9444: mov dword ptr [esp + 0x54], 0x3f800000 */
  W32((uint32_t)(esp + 0x54u), 0x3f800000u);
/* 7f944c: mov dword ptr [esp + 0x58], 0 */
  W32((uint32_t)(esp + 0x58u), 0x0u);
/* 7f9454: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 7f945c: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 7f9464: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 7f946c: mov dword ptr [esp + 0x68], 0x3f800000 */
  W32((uint32_t)(esp + 0x68u), 0x3f800000u);
/* 7f9474: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 7f9478: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 7f947c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7f9480: fchs  */
  ST0 = -ST0;
/* 7f9482: mov dword ptr [esp + 0x20c], 0 */
  W32((uint32_t)(esp + 0x20cu), 0x0u);
/* 7f948d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7f9491: mov dword ptr [esp + 0x6c], 0x3f800000 */
  W32((uint32_t)(esp + 0x6cu), 0x3f800000u);
/* 7f9499: fchs  */
  ST0 = -ST0;
/* 7f949b: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 7f94a3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7f94a5: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 7f94ad: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 7f94b4: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 7f94bc: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 7f94c4: mov dword ptr [esp + 0x80], 0x3f800000 */
  W32((uint32_t)(esp + 0x80u), 0x3f800000u);
/* 7f94cf: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 7f94d6: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* 7f94e1: mov dword ptr [esp + 0x88], 0 */
  W32((uint32_t)(esp + 0x88u), 0x0u);
/* 7f94ec: mov dword ptr [esp + 0x94], 0x3f800000 */
  W32((uint32_t)(esp + 0x94u), 0x3f800000u);
/* 7f94f7: mov dword ptr [esp + 0x98], 0 */
  W32((uint32_t)(esp + 0x98u), 0x0u);
/* 7f9502: mov dword ptr [esp + 0x9c], 0 */
  W32((uint32_t)(esp + 0x9cu), 0x0u);
/* 7f950d: mov dword ptr [esp + 0xa0], 0 */
  W32((uint32_t)(esp + 0xa0u), 0x0u);
/* 7f9518: mov dword ptr [esp + 0xa4], 0 */
  W32((uint32_t)(esp + 0xa4u), 0x0u);
/* 7f9523: mov dword ptr [esp + 0xa8], 0x3f800000 */
  W32((uint32_t)(esp + 0xa8u), 0x3f800000u);
/* 7f952e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f9531: mov edi, esp */
  edi = esp;
/* 7f9533: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f9538: mov esi, ebp */
  esi = ebp;
/* 7f953a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f953c: lea ecx, [esp + 0x204] */
  ecx = (uint32_t)(esp + 0x204u);
/* 7f9543: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f9544: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 7f9546: lea ecx, [esp + 0xb0] */
  ecx = (uint32_t)(esp + 0xb0u);
/* 7f954d: mov byte ptr [esp + 0x250], bl */
  W8((uint32_t)(esp + 0x250u), (ebx & 0xffu));
/* 7f9554: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7f955au); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7f955a: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f955d: mov edi, esp */
  edi = esp;
/* 7f955f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f9564: lea esi, [esp + 0x6c] */
  esi = (uint32_t)(esp + 0x6cu);
/* 7f9568: lea edx, [esp + 0x184] */
  edx = (uint32_t)(esp + 0x184u);
/* 7f956f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f9571: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9572: mov ecx, eax */
  ecx = eax;
/* 7f9574: mov byte ptr [esp + 0x250], 2 */
  W8((uint32_t)(esp + 0x250u), 0x2u);
/* 7f957c: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7f9582u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7f9582: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7f9587: mov esi, eax */
  esi = eax;
/* 7f9589: mov edi, ebp */
  edi = ebp;
/* 7f958b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7f958d: lea ecx, [esp + 0x144] */
  ecx = (uint32_t)(esp + 0x144u);
/* 7f9594: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f959au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7f959a: lea ecx, [esp + 0x1c4] */
  ecx = (uint32_t)(esp + 0x1c4u);
/* 7f95a1: mov byte ptr [esp + 0x20c], bl */
  W8((uint32_t)(esp + 0x20cu), (ebx & 0xffu));
/* 7f95a8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f95aeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7f95ae: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 7f95b2: mov byte ptr [esp + 0x20c], 0 */
  W8((uint32_t)(esp + 0x20cu), 0x0u);
/* 7f95ba: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f95c0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7f95c0: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 7f95c4: mov dword ptr [esp + 0x20c], 0xffffffff */
  W32((uint32_t)(esp + 0x20cu), 0xffffffffu);
/* 7f95cf: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7f95d5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_7f95d5: /* 7f95d5: mov ecx, dword ptr [esp + 0x204] */
  ecx = R32((uint32_t)(esp + 0x204u));
/* 7f95dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f95dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f95de: mov eax, ebp */
  eax = ebp;
/* 7f95e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f95e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f95e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f95e9: add esp, 0x200 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f95ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f9730(void) {
  LOAD_REGS();
L_7f9730: /* 7f9730: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f9731: mov ebp, esp */
  ebp = esp;
/* 7f9733: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f9735: push 0x9d1960 */
  { uint32_t v = 0x9d1960u; esp -= 4; W32(esp, v); }
/* 7f973a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f9740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9741: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f9748: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f974b: fld dword ptr [ecx + 0xc0] */
  { double v = F32((uint32_t)(ecx + 0xc0u)); FPUSH(v); }
/* 7f9751: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f9752: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7f9758: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9759: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f975a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f975d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f9764: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f9766: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f9769: jp 0x7f9773 */
  if (pf) goto L_7f9773;
L_7f976b: /* 7f976b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7f9771: jmp 0x7f97d3 */
  goto L_7f97d3;
L_7f9773: /* 7f9773: fld dword ptr [ecx + 0x48] */
  { double v = F32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* 7f9776: fld dword ptr [ecx + 0x44] */
  { double v = F32((uint32_t)(ecx + 0x44u)); FPUSH(v); }
/* 7f9779: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7f977c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7f977e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f9780: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9783: jne 0x7f978a */
  if (!zf) goto L_7f978a;
L_7f9785: /* 7f9785: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7f9787: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_7f978a: /* 7f978a: fld dword ptr [ecx + 0xbc] */
  { double v = F32((uint32_t)(ecx + 0xbcu)); FPUSH(v); }
/* 7f9790: mov al, byte ptr [ecx + 0xc4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xc4u))) & 0xffu);
/* 7f9796: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9798: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 7f979a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7f979d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7f979f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7f97a2: fsub dword ptr [ecx + 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xc0u)));
/* 7f97a8: je 0x7f97c4 */
  if (zf) goto L_7f97c4;
L_7f97aa: /* 7f97aa: fsubr dword ptr [ebp - 0x14] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffecu))) - ST0;
/* 7f97ad: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7f97b3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f97b5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7f97b8: jp 0x7f97d3 */
  if (pf) goto L_7f97d3;
L_7f97ba: /* 7f97ba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7f97bc: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7f97c2: jmp 0x7f97d3 */
  goto L_7f97d3;
L_7f97c4: /* 7f97c4: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 7f97c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7f97c9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7f97cc: jne 0x7f97d3 */
  if (!zf) goto L_7f97d3;
L_7f97ce: /* 7f97ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7f97d0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_7f97d3: /* 7f97d3: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7f97d8: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f97db: je 0x7f97e7 */
  if (zf) goto L_7f97e7;
L_7f97dd: /* 7f97dd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7f97e0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7f97e2: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 7f97e5: jmp 0x7f97ea */
  goto L_7f97ea;
L_7f97e7: /* 7f97e7: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_7f97ea: /* 7f97ea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7f97ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f97ee: call 0x6c66cc */
  esp -= 4; W32(esp, 0x7f97f3u); SPILL(); f_6c66cc(); if (g_unwind) return; RELOAD();
/* 7f97f3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f97f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f97f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f97f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f97ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f9800: mov esp, ebp */
  esp = ebp;
/* 7f9802: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f9803: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f9806(void) {
  LOAD_REGS();
L_7f9806: /* 7f9806: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7f9809: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f980e: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7f9811: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9812: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7f9815: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f981au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f981a(); return;
}

void f_7f981a(void) {
  LOAD_REGS();
L_7f981a: /* 7f981a: push 0xa11f10 */
  { uint32_t v = 0xa11f10u; esp -= 4; W32(esp, v); }
/* 7f981f: push 0xae0048 */
  { uint32_t v = 0xae0048u; esp -= 4; W32(esp, v); }
/* 7f9824: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f982au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f982a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f982d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f982f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9831: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f9836u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f9836: guest_badaddr(0x7f9836); return;
}

void f_7f9890(void) {
  LOAD_REGS();
L_7f9890: /* 7f9890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9891: mov esi, ecx */
  esi = ecx;
/* 7f9893: call 0x6cb505 */
  esp -= 4; W32(esp, 0x7f9898u); SPILL(); f_6cb505(); if (g_unwind) return; RELOAD();
/* 7f9898: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 7f989b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f989d: jge 0x7f98a9 */
  if ((sf == of)) goto L_7f98a9;
L_7f989f: /* 7f989f: xor eax, eax */
  eax = 0;
/* 7f98a1: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 7f98a4: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* 7f98a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f98a8: ret  */
  esp += 4; SPILL(); return;
L_7f98a9: /* 7f98a9: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f98ac: jl 0x7f98b3 */
  if ((sf != of)) goto L_7f98b3;
L_7f98ae: /* 7f98ae: mov eax, 7 */
  eax = 0x7u;
L_7f98b3: /* 7f98b3: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 7f98b6: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* 7f98b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f98ba: ret  */
  esp += 4; SPILL(); return;
}

void f_7f98d0(void) {
  LOAD_REGS();
L_7f98d0: /* 7f98d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f98d1: mov ebp, esp */
  ebp = esp;
/* 7f98d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f98d5: push 0x9d1970 */
  { uint32_t v = 0x9d1970u; esp -= 4; W32(esp, v); }
/* 7f98da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f98e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f98e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f98e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f98eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f98ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f98ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f98ee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f98f1: mov esi, ecx */
  esi = ecx;
/* 7f98f3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f98fa: call 0x6cb505 */
  esp -= 4; W32(esp, 0x7f98ffu); SPILL(); f_6cb505(); if (g_unwind) return; RELOAD();
/* 7f98ff: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 7f9902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f9904: jl 0x7f9925 */
  if ((sf != of)) goto L_7f9925;
L_7f9906: /* 7f9906: cmp eax, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f9909: jge 0x7f9925 */
  if ((sf == of)) goto L_7f9925;
L_7f990b: /* 7f990b: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7f990e: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 7f9911: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 7f9914: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f9917: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f991e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f991f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9920: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f9921: mov esp, ebp */
  esp = ebp;
/* 7f9923: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f9924: ret  */
  esp += 4; SPILL(); return;
L_7f9925: /* 7f9925: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f9928: xor eax, eax */
  eax = 0;
/* 7f992a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f992b: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 7f992e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f992f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f9936: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f9937: mov esp, ebp */
  esp = ebp;
/* 7f9939: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f993a: ret  */
  esp += 4; SPILL(); return;
}

void f_7f993b(void) {
  LOAD_REGS();
L_7f993b: /* 7f993b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f993e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f9943: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7f9946: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9947: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7f994a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f994fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f994f(); return;
}

void f_7f994f(void) {
  LOAD_REGS();
L_7f994f: /* 7f994f: push 0xa11f68 */
  { uint32_t v = 0xa11f68u; esp -= 4; W32(esp, v); }
/* 7f9954: push 0xae013c */
  { uint32_t v = 0xae013cu; esp -= 4; W32(esp, v); }
/* 7f9959: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f995fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f995f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9962: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9964: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9966: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f996bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f996b: guest_badaddr(0x7f996b); return;
}

void f_7f99a0(void) {
  LOAD_REGS();
L_7f99a0: /* 7f99a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f99a1: mov ebp, esp */
  ebp = esp;
/* 7f99a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f99a5: push 0x9d1980 */
  { uint32_t v = 0x9d1980u; esp -= 4; W32(esp, v); }
/* 7f99aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f99b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f99b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f99b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f99bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f99bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f99bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f99be: xor edi, edi */
  edi = 0;
/* 7f99c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f99c3: mov esi, ecx */
  esi = ecx;
/* 7f99c5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7f99c8: call 0x6cb505 */
  esp -= 4; W32(esp, 0x7f99cdu); SPILL(); f_6cb505(); if (g_unwind) return; RELOAD();
/* 7f99cd: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* 7f99d0: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* 7f99d3: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* 7f99d6: xor eax, eax */
  eax = 0;
L_7f99d8: /* 7f99d8: cmp eax, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f99db: jge 0x7f9a20 */
  if ((sf == of)) goto L_7f9a20;
L_7f99dd: /* 7f99dd: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 7f99e0: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7f99e3: fld dword ptr [edx + ecx*4 + 4] */
  { double v = F32((uint32_t)(edx + ecx*4 + 0x4u)); FPUSH(v); }
/* 7f99e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f99e8: fadd dword ptr [esi + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x58u)));
/* 7f99eb: fstp dword ptr [esi + 0x58] */
  WF32((uint32_t)(esi + 0x58u), ST0); FPOP();
/* 7f99ee: jmp 0x7f99d8 */
  goto L_7f99d8;
L_7f9a20: /* 7f9a20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f9a23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f9a24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9a25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f9a2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f9a2d: mov esp, ebp */
  esp = ebp;
/* 7f9a2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f9a30: ret  */
  esp += 4; SPILL(); return;
}

void f_7f99f0(void) {
  LOAD_REGS();
L_7f99f0: /* 7f99f0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f99f3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f99f8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f99fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f99fc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f99ff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f9a04u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f9a04(); return;
}

void f_7f9a04(void) {
  LOAD_REGS();
L_7f9a04: /* 7f9a04: push 0xa11fb8 */
  { uint32_t v = 0xa11fb8u; esp -= 4; W32(esp, v); }
/* 7f9a09: push 0xae0164 */
  { uint32_t v = 0xae0164u; esp -= 4; W32(esp, v); }
/* 7f9a0e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f9a14u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f9a14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9a17: xor edi, edi */
  edi = 0;
/* 7f9a19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f9a1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f9a1b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f9a20u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7f9a20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f9a23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f9a24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9a25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f9a2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f9a2d: mov esp, ebp */
  esp = ebp;
/* 7f9a2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f9a30: ret  */
  esp += 4; SPILL(); return;
}

void f_7f9a70(void) {
  LOAD_REGS();
L_7f9a70: /* 7f9a70: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7f9a73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9a74: xor eax, eax */
  eax = 0;
/* 7f9a76: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7f9a78: jle 0x7f9a8e */
  if ((zf || sf != of)) goto L_7f9a8e;
L_7f9a7a: /* 7f9a7a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7f9a7e: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7f9a80: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_7f9a82: /* 7f9a82: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f9a84: je 0x7f9a91 */
  if (zf) goto L_7f9a91;
L_7f9a86: /* 7f9a86: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f9a87: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7f9a8a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f9a8c: jl 0x7f9a82 */
  if ((sf != of)) goto L_7f9a82;
L_7f9a8e: /* 7f9a8e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_7f9a91: /* 7f9a91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9a92: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f9ab0(void) {
  LOAD_REGS();
L_7f9ab0: /* 7f9ab0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7f9ab3: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7f9ab9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f9abb: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7f9abe: ret  */
  esp += 4; SPILL(); return;
}

void f_7f9ad0(void) {
  LOAD_REGS();
L_7f9ad0: /* 7f9ad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9ad1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7f9ad5: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 7f9ada: mov ecx, esi */
  ecx = esi;
/* 7f9adc: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7f9ae2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7f9ae2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9ae4: jne 0x7f9afe */
  if (!zf) goto L_7f9afe;
L_7f9ae6: /* 7f9ae6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7f9aeb: push 0xae0338 */
  { uint32_t v = 0xae0338u; esp -= 4; W32(esp, v); }
/* 7f9af0: push 0xae037c */
  { uint32_t v = 0xae037cu; esp -= 4; W32(esp, v); }
/* 7f9af5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f9afbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f9afb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f9afe: /* 7f9afe: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7f9b02: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f9b05: jne 0x7f9b0d */
  if (!zf) goto L_7f9b0d;
L_7f9b07: /* 7f9b07: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7f9b0du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7f9b0d: /* 7f9b0d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7f9b13: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f9b15: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7f9b19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9b1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9b1c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7f9b20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9b22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f9b23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9b24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9b25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9b26: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7f9b2cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7f9b2c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9b2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9b30: ret  */
  esp += 4; SPILL(); return;
}

void f_7f9b60(void) {
  LOAD_REGS();
L_7f9b60: /* 7f9b60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9b61: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7f9b65: push 0xb88550 */
  { uint32_t v = 0xb88550u; esp -= 4; W32(esp, v); }
/* 7f9b6a: mov ecx, esi */
  ecx = esi;
/* 7f9b6c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7f9b72u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7f9b72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9b74: jne 0x7f9b8e */
  if (!zf) goto L_7f9b8e;
L_7f9b76: /* 7f9b76: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7f9b7b: push 0xae03a0 */
  { uint32_t v = 0xae03a0u; esp -= 4; W32(esp, v); }
/* 7f9b80: push 0xae03e4 */
  { uint32_t v = 0xae03e4u; esp -= 4; W32(esp, v); }
/* 7f9b85: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f9b8bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f9b8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f9b8e: /* 7f9b8e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7f9b92: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f9b95: jne 0x7f9b9d */
  if (!zf) goto L_7f9b9d;
L_7f9b97: /* 7f9b97: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7f9b9du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7f9b9d: /* 7f9b9d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7f9ba3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f9ba5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7f9ba9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9bab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9bac: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7f9bb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9bb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f9bb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9bb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9bb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9bb6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7f9bbcu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7f9bbc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9bbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9bc0: ret  */
  esp += 4; SPILL(); return;
}

void f_7f9bf0(void) {
  LOAD_REGS();
L_7f9bf0: /* 7f9bf0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7f9bf4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7f9bf8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7f9bfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9bfd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f9bfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9bff: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7f9c04: call dword ptr [0xcfa8a4] */
  esp -= 4; W32(esp, 0x7f9c0au); SPILL(); f_4e3c65(); if (g_unwind) return; /* Core!?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7f9c0a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9c0d: ret  */
  esp += 4; SPILL(); return;
}

void f_7f9c20(void) {
  LOAD_REGS();
L_7f9c20: /* 7f9c20: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7f9c24: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7f9c28: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7f9c2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9c2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f9c2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9c2f: push 0xb8c390 */
  { uint32_t v = 0xb8c390u; esp -= 4; W32(esp, v); }
/* 7f9c34: call dword ptr [0xcfa8a4] */
  esp -= 4; W32(esp, 0x7f9c3au); SPILL(); f_4e3c65(); if (g_unwind) return; /* Core!?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7f9c3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9c3d: ret  */
  esp += 4; SPILL(); return;
}

void f_7f9c50(void) {
  LOAD_REGS();
L_7f9c50: /* 7f9c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9c51: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7f9c55: push 0xb8c390 */
  { uint32_t v = 0xb8c390u; esp -= 4; W32(esp, v); }
/* 7f9c5a: mov ecx, esi */
  ecx = esi;
/* 7f9c5c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7f9c62u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7f9c62: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9c64: jne 0x7f9c7e */
  if (!zf) goto L_7f9c7e;
L_7f9c66: /* 7f9c66: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7f9c6b: push 0xae0408 */
  { uint32_t v = 0xae0408u; esp -= 4; W32(esp, v); }
/* 7f9c70: push 0xae044c */
  { uint32_t v = 0xae044cu; esp -= 4; W32(esp, v); }
/* 7f9c75: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7f9c7bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7f9c7b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7f9c7e: /* 7f9c7e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7f9c82: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f9c85: jne 0x7f9c8d */
  if (!zf) goto L_7f9c8d;
L_7f9c87: /* 7f9c87: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7f9c8du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7f9c8d: /* 7f9c8d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7f9c93: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f9c95: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7f9c99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9c9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9c9c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7f9ca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9ca2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f9ca3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9ca4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9ca5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9ca6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7f9cacu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7f9cac: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9caf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9cb0: ret  */
  esp += 4; SPILL(); return;
}

void f_7f9ce0(void) {
  LOAD_REGS();
L_7f9ce0: /* 7f9ce0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f9ce1: mov ebp, esp */
  ebp = esp;
/* 7f9ce3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f9ce5: push 0x9d1990 */
  { uint32_t v = 0x9d1990u; esp -= 4; W32(esp, v); }
/* 7f9cea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f9cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9cf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f9cf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f9cfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f9cfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9cfd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7f9d00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f9d01: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f9d04: mov edi, ecx */
  edi = ecx;
/* 7f9d06: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f9d0d: xor eax, eax */
  eax = 0;
/* 7f9d0f: nop  */
L_7f9d10: /* 7f9d10: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7f9d13: jge 0x7f9d39 */
  if ((sf == of)) goto L_7f9d39;
L_7f9d15: /* 7f9d15: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7f9d17: cmp dword ptr [ecx + eax*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f9d1a: je 0x7f9d1f */
  if (zf) goto L_7f9d1f;
L_7f9d1c: /* 7f9d1c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7f9d1d: jmp 0x7f9d10 */
  goto L_7f9d10;
L_7f9d1f: /* 7f9d1f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7f9d22: je 0x7f9d39 */
  if (zf) goto L_7f9d39;
L_7f9d24: /* 7f9d24: xor eax, eax */
  eax = 0;
/* 7f9d26: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f9d29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f9d30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f9d31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9d32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f9d33: mov esp, ebp */
  esp = ebp;
/* 7f9d35: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f9d36: ret 4 */
  esp += 8; SPILL(); return;
L_7f9d39: /* 7f9d39: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7f9d3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9d3e: je 0x7f9d6a */
  if (zf) goto L_7f9d6a;
L_7f9d40: /* 7f9d40: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f9d42: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f9d44: mov ecx, esi */
  ecx = esi;
/* 7f9d46: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f9d4cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f9d4c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7f9d4e: mov ebx, eax */
  ebx = eax;
/* 7f9d50: mov dword ptr [edx + ebx*4], edi */
  W32((uint32_t)(edx + ebx*4), edi);
/* 7f9d53: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7f9d56: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f9d58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9d59: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7f9d5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f9d5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9d5e: je 0x7f9d24 */
  if (zf) goto L_7f9d24;
L_7f9d60: /* 7f9d60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f9d62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f9d63: mov ecx, esi */
  ecx = esi;
/* 7f9d65: call 0x6c9750 */
  esp -= 4; W32(esp, 0x7f9d6au); SPILL(); f_6c9750(); if (g_unwind) return; RELOAD();
L_7f9d6a: /* 7f9d6a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f9d6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f9d6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9d6f: mov eax, 1 */
  eax = 0x1u;
/* 7f9d74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f9d7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f9d7c: mov esp, ebp */
  esp = ebp;
/* 7f9d7e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f9d7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f9d82(void) {
  LOAD_REGS();
L_7f9d82: /* 7f9d82: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f9d85: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f9d8a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7f9d8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7f9d8e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7f9d91: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f9d96u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f9d96(); return;
}

void f_7f9d96(void) {
  LOAD_REGS();
L_7f9d96: /* 7f9d96: push 0xa12010 */
  { uint32_t v = 0xa12010u; esp -= 4; W32(esp, v); }
/* 7f9d9b: push 0xadfdf0 */
  { uint32_t v = 0xadfdf0u; esp -= 4; W32(esp, v); }
/* 7f9da0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f9da6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f9da6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9da9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9dab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9dad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f9db2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f9db2: guest_badaddr(0x7f9db2); return;
}

void f_7f9e00(void) {
  LOAD_REGS();
L_7f9e00: /* 7f9e00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f9e01: mov ebp, esp */
  ebp = esp;
/* 7f9e03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f9e05: push 0x9d19a0 */
  { uint32_t v = 0x9d19a0u; esp -= 4; W32(esp, v); }
/* 7f9e0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f9e10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9e11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f9e18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f9e1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f9e1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9e1d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7f9e20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f9e21: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f9e24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9e25: mov edi, ecx */
  edi = ecx;
/* 7f9e27: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f9e2e: call 0x6caf60 */
  esp -= 4; W32(esp, 0x7f9e33u); SPILL(); f_6caf60(); if (g_unwind) return; RELOAD();
/* 7f9e33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9e35: jne 0x7f9e4c */
  if (!zf) goto L_7f9e4c;
L_7f9e37: /* 7f9e37: xor eax, eax */
  eax = 0;
/* 7f9e39: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f9e3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f9e43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f9e44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9e45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f9e46: mov esp, ebp */
  esp = ebp;
/* 7f9e48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f9e49: ret 4 */
  esp += 8; SPILL(); return;
L_7f9e4c: /* 7f9e4c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f9e4e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f9e50: mov ecx, esi */
  ecx = esi;
/* 7f9e52: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f9e58u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f9e58: mov ebx, eax */
  ebx = eax;
/* 7f9e5a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f9e5c: mov dword ptr [eax + ebx*4], edi */
  W32((uint32_t)(eax + ebx*4), edi);
/* 7f9e5f: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 7f9e62: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9e64: je 0x7f9e70 */
  if (zf) goto L_7f9e70;
L_7f9e66: /* 7f9e66: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f9e68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9e69: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7f9e6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f9e6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9e6e: je 0x7f9e37 */
  if (zf) goto L_7f9e37;
L_7f9e70: /* 7f9e70: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 7f9e73: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9e75: je 0x7f9e81 */
  if (zf) goto L_7f9e81;
L_7f9e77: /* 7f9e77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f9e79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9e7a: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7f9e7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f9e7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9e7f: je 0x7f9e37 */
  if (zf) goto L_7f9e37;
L_7f9e81: /* 7f9e81: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 7f9e84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9e86: je 0x7f9e92 */
  if (zf) goto L_7f9e92;
L_7f9e88: /* 7f9e88: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f9e8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9e8b: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7f9e8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f9e8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9e90: je 0x7f9e37 */
  if (zf) goto L_7f9e37;
L_7f9e92: /* 7f9e92: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 7f9e95: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9e97: je 0x7f9ea3 */
  if (zf) goto L_7f9ea3;
L_7f9e99: /* 7f9e99: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f9e9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9e9c: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7f9e9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f9e9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9ea1: je 0x7f9e37 */
  if (zf) goto L_7f9e37;
L_7f9ea3: /* 7f9ea3: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 7f9ea6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9ea8: je 0x7f9eb4 */
  if (zf) goto L_7f9eb4;
L_7f9eaa: /* 7f9eaa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f9eac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9ead: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7f9eb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f9eb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9eb2: je 0x7f9e37 */
  if (zf) goto L_7f9e37;
L_7f9eb4: /* 7f9eb4: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 7f9eb7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9eb9: je 0x7f9ec9 */
  if (zf) goto L_7f9ec9;
L_7f9ebb: /* 7f9ebb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7f9ebd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9ebe: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7f9ec1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f9ec1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9ec3: je 0x7f9e37 */
  if (zf) goto L_7f9e37;
L_7f9ec9: /* 7f9ec9: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 7f9ecc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9ece: je 0x7f9ede */
  if (zf) goto L_7f9ede;
L_7f9ed0: /* 7f9ed0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f9ed2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9ed3: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7f9ed6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f9ed6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9ed8: je 0x7f9e37 */
  if (zf) goto L_7f9e37;
L_7f9ede: /* 7f9ede: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f9ee0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f9ee1: mov ecx, esi */
  ecx = esi;
/* 7f9ee3: call 0x6c9750 */
  esp -= 4; W32(esp, 0x7f9ee8u); SPILL(); f_6c9750(); if (g_unwind) return; RELOAD();
/* 7f9ee8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f9eeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f9eec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9eed: mov eax, 1 */
  eax = 0x1u;
/* 7f9ef2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f9ef9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f9efa: mov esp, ebp */
  esp = ebp;
/* 7f9efc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f9efd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7f9f00(void) {
  LOAD_REGS();
L_7f9f00: /* 7f9f00: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7f9f03: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7f9f08: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7f9f0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7f9f0c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7f9f0f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f9f14u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7f9f14(); return;
}

void f_7f9f14(void) {
  LOAD_REGS();
L_7f9f14: /* 7f9f14: push 0xa12068 */
  { uint32_t v = 0xa12068u; esp -= 4; W32(esp, v); }
/* 7f9f19: push 0xadfed0 */
  { uint32_t v = 0xadfed0u; esp -= 4; W32(esp, v); }
/* 7f9f1e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7f9f24u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7f9f24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7f9f27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9f29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7f9f2b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7f9f30u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7f9f30: guest_badaddr(0x7f9f30); return;
}

void f_7f9f90(void) {
  LOAD_REGS();
L_7f9f90: /* 7f9f90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7f9f91: mov ebp, esp */
  ebp = esp;
/* 7f9f93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7f9f95: push 0x9d19b0 */
  { uint32_t v = 0x9d19b0u; esp -= 4; W32(esp, v); }
/* 7f9f9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7f9fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7f9fa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7f9fa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7f9fab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7f9fac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9fad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7f9fb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7f9fb1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7f9fb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9fb5: mov edi, ecx */
  edi = ecx;
/* 7f9fb7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7f9fbe: call 0x6caf60 */
  esp -= 4; W32(esp, 0x7f9fc3u); SPILL(); f_6caf60(); if (g_unwind) return; RELOAD();
/* 7f9fc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9fc5: jne 0x7f9fdc */
  if (!zf) goto L_7f9fdc;
L_7f9fc7: /* 7f9fc7: xor eax, eax */
  eax = 0;
/* 7f9fc9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7f9fcc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7f9fd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7f9fd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7f9fd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7f9fd6: mov esp, ebp */
  esp = ebp;
/* 7f9fd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7f9fd9: ret 4 */
  esp += 8; SPILL(); return;
L_7f9fdc: /* 7f9fdc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7f9fde: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7f9fe0: mov ecx, esi */
  ecx = esi;
/* 7f9fe2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7f9fe8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7f9fe8: mov ebx, eax */
  ebx = eax;
/* 7f9fea: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7f9fec: mov dword ptr [eax + ebx*4], edi */
  W32((uint32_t)(eax + ebx*4), edi);
/* 7f9fef: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 7f9ff2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9ff4: je 0x7fa000 */
  if (zf) goto L_7fa000;
L_7f9ff6: /* 7f9ff6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7f9ff8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7f9ff9: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7f9ffcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7f9ffc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7f9ffe: je 0x7f9fc7 */
  if (zf) goto L_7f9fc7;
L_7fa000: /* 7fa000: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 7fa003: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa005: je 0x7fa011 */
  if (zf) goto L_7fa011;
L_7fa007: /* 7fa007: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fa009: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa00a: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7fa00du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fa00d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa00f: je 0x7f9fc7 */
  if (zf) goto L_7f9fc7;
L_7fa011: /* 7fa011: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 7fa014: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa016: je 0x7fa022 */
  if (zf) goto L_7fa022;
L_7fa018: /* 7fa018: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fa01a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa01b: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7fa01eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fa01e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa020: je 0x7f9fc7 */
  if (zf) goto L_7f9fc7;
L_7fa022: /* 7fa022: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa024: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa025: mov ecx, esi */
  ecx = esi;
/* 7fa027: call 0x6c9750 */
  esp -= 4; W32(esp, 0x7fa02cu); SPILL(); f_6c9750(); if (g_unwind) return; RELOAD();
/* 7fa02c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa02f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa030: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa031: mov eax, 1 */
  eax = 0x1u;
/* 7fa036: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa03d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa03e: mov esp, ebp */
  esp = ebp;
/* 7fa040: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa041: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fa044(void) {
  LOAD_REGS();
L_7fa044: /* 7fa044: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fa047: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fa04c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7fa04f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa050: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7fa053: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fa058u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fa058(); return;
}

void f_7fa058(void) {
  LOAD_REGS();
L_7fa058: /* 7fa058: push 0xa120b8 */
  { uint32_t v = 0xa120b8u; esp -= 4; W32(esp, v); }
/* 7fa05d: push 0xadff00 */
  { uint32_t v = 0xadff00u; esp -= 4; W32(esp, v); }
/* 7fa062: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fa068u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fa068: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa06b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa06d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa06f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fa074u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fa074: guest_badaddr(0x7fa074); return;
}

void f_7fa0c0(void) {
  LOAD_REGS();
L_7fa0c0: /* 7fa0c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fa0c1: mov ebp, esp */
  ebp = esp;
/* 7fa0c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fa0c5: push 0x9d19c0 */
  { uint32_t v = 0x9d19c0u; esp -= 4; W32(esp, v); }
/* 7fa0ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fa0d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa0d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fa0d8: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fa0db: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7fa0de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa0df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa0e0: mov esi, ecx */
  esi = ecx;
/* 7fa0e2: fadd dword ptr [esi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x44u)));
/* 7fa0e5: mov al, byte ptr [esi + 0x48] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x48u))) & 0xffu);
/* 7fa0e8: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7fa0ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fa0eb: fdiv dword ptr [esi + 0x40] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x40u)));
/* 7fa0ee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fa0f1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fa0f8: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7fa0fb: jne 0x7fa19b */
  if (!zf) goto L_7fa19b;
L_7fa101: /* 7fa101: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7fa104: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fa107: fmul qword ptr [0xa11e28] */
  ST0 = ST0 * (F64((uint32_t)(0xa11e28u)));
/* 7fa10d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7fa110: call dword ptr [0xcfa89c] */
  esp -= 4; W32(esp, 0x7fa116u); SPILL(); f_4e1807(); if (g_unwind) return; /* Core!?appCos@@YANN@Z */ RELOAD();
/* 7fa116: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7fa119: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa11c: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 7fa122: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa123: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7fa126: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7fa129: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7fa12f: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7fa132: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7fa138: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7fa13b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7fa13e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa13f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa140: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 7fa143: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x7fa148u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 7fa148: mov ecx, eax */
  ecx = eax;
/* 7fa14a: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x7fa150u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 7fa150: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7fa153: mov edi, eax */
  edi = eax;
/* 7fa155: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fa156: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 7fa159: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa15a: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 7fa15d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa15e: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7fa161: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x7fa166u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 7fa166: mov ecx, eax */
  ecx = eax;
/* 7fa168: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x7fa16eu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 7fa16e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fa16f: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 7fa172: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_7fa173: /* 7fa173: mov ecx, eax */
  ecx = eax;
/* 7fa175: call dword ptr [0xcfaab8] */
  esp -= 4; W32(esp, 0x7fa17bu); SPILL(); f_4e3b1b(); if (g_unwind) return; /* Core!??HFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7fa17b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7fa17e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa17f: mov ecx, esi */
  ecx = esi;
/* 7fa181: call 0x6c576d */
  esp -= 4; W32(esp, 0x7fa186u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 7fa186: mov eax, esi */
  eax = esi;
/* 7fa188: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa18b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa192: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa193: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa194: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa195: mov esp, ebp */
  esp = ebp;
/* 7fa197: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa198: ret 8 */
  esp += 12; SPILL(); return;
L_7fa19b: /* 7fa19b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa19d: jne 0x7fa24d */
  if (!zf) goto L_7fa24d;
L_7fa1a3: /* 7fa1a3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7fa1a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa1a7: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x7fa1adu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 7fa1ad: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa1b0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7fa1b3: and eax, 0x80000001 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000001u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 7fa1b8: jns 0x7fa1bf */
  if (!sf) goto L_7fa1bf;
L_7fa1ba: /* 7fa1ba: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7fa1bb: or eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7fa1be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
L_7fa1bf: /* 7fa1bf: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7fa1c2: fsubr dword ptr [ebp + 0xc] */
  ST0 = (F32((uint32_t)(ebp + 0xcu))) - ST0;
/* 7fa1c5: jne 0x7fa1cd */
  if (!zf) goto L_7fa1cd;
L_7fa1c7: /* 7fa1c7: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
L_7fa1cd: /* 7fa1cd: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7fa1d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa1d1: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7fa1d7: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7fa1da: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7fa1dd: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 7fa1e0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7fa1e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa1e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fa1e5: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 7fa1e8: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x7fa1edu); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 7fa1ed: mov ecx, eax */
  ecx = eax;
/* 7fa1ef: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x7fa1f5u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 7fa1f5: mov edi, eax */
  edi = eax;
/* 7fa1f7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7fa1fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa1fb: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7fa1fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa1ff: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 7fa202: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fa203: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7fa206: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x7fa20bu); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 7fa20b: mov ecx, eax */
  ecx = eax;
/* 7fa20d: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x7fa213u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 7fa213: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fa214: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7fa217: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa218: jmp 0x7fa173 */
  goto L_7fa173;
L_7fa24d: /* 7fa24d: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 7fa250: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fa253: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa254: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7fa256: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa259: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa25a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa261: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa262: mov esp, ebp */
  esp = ebp;
/* 7fa264: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa265: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7fa21d(void) {
  LOAD_REGS();
L_7fa21d: /* 7fa21d: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fa220: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fa225: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7fa228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa229: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7fa22c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fa231u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fa231(); return;
}

void f_7fa231(void) {
  LOAD_REGS();
L_7fa231: /* 7fa231: push 0xa1210c */
  { uint32_t v = 0xa1210cu; esp -= 4; W32(esp, v); }
/* 7fa236: push 0xadff70 */
  { uint32_t v = 0xadff70u; esp -= 4; W32(esp, v); }
/* 7fa23b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fa241u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fa241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa244: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa246: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa248: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fa24du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7fa24d: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 7fa250: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fa253: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa254: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7fa256: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa259: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa25a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa261: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa262: mov esp, ebp */
  esp = ebp;
/* 7fa264: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa265: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7fa2e0(void) {
  LOAD_REGS();
L_7fa2e0: /* 7fa2e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fa2e1: mov ebp, esp */
  ebp = esp;
/* 7fa2e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fa2e5: push 0x9d19d0 */
  { uint32_t v = 0x9d19d0u; esp -= 4; W32(esp, v); }
/* 7fa2ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fa2f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa2f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fa2f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fa2fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa2fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa2fd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7fa300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fa301: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fa304: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa305: mov edi, ecx */
  edi = ecx;
/* 7fa307: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fa30e: call 0x6caf60 */
  esp -= 4; W32(esp, 0x7fa313u); SPILL(); f_6caf60(); if (g_unwind) return; RELOAD();
/* 7fa313: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa315: jne 0x7fa32c */
  if (!zf) goto L_7fa32c;
L_7fa317: /* 7fa317: xor eax, eax */
  eax = 0;
/* 7fa319: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa31c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa323: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa324: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa325: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa326: mov esp, ebp */
  esp = ebp;
/* 7fa328: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa329: ret 4 */
  esp += 8; SPILL(); return;
L_7fa32c: /* 7fa32c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7fa32e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa330: mov ecx, esi */
  ecx = esi;
/* 7fa332: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7fa338u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7fa338: mov ebx, eax */
  ebx = eax;
/* 7fa33a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7fa33c: mov dword ptr [eax + ebx*4], edi */
  W32((uint32_t)(eax + ebx*4), edi);
/* 7fa33f: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 7fa342: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa344: je 0x7fa350 */
  if (zf) goto L_7fa350;
L_7fa346: /* 7fa346: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fa348: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa349: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7fa34cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fa34c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa34e: je 0x7fa317 */
  if (zf) goto L_7fa317;
L_7fa350: /* 7fa350: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa352: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa353: mov ecx, esi */
  ecx = esi;
/* 7fa355: call 0x6c9750 */
  esp -= 4; W32(esp, 0x7fa35au); SPILL(); f_6c9750(); if (g_unwind) return; RELOAD();
/* 7fa35a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa35d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa35e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa35f: mov eax, 1 */
  eax = 0x1u;
/* 7fa364: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa36b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa36c: mov esp, ebp */
  esp = ebp;
/* 7fa36e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa36f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fa372(void) {
  LOAD_REGS();
L_7fa372: /* 7fa372: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fa375: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fa37a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7fa37d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa37e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7fa381: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fa386u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fa386(); return;
}

void f_7fa386(void) {
  LOAD_REGS();
L_7fa386: /* 7fa386: push 0xa12140 */
  { uint32_t v = 0xa12140u; esp -= 4; W32(esp, v); }
/* 7fa38b: push 0xadff90 */
  { uint32_t v = 0xadff90u; esp -= 4; W32(esp, v); }
/* 7fa390: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fa396u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fa396: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa399: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa39b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa39d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fa3a2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fa3a2: guest_badaddr(0x7fa3a2); return;
}

void f_7fa3f0(void) {
  LOAD_REGS();
L_7fa3f0: /* 7fa3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fa3f1: mov ebp, esp */
  ebp = esp;
/* 7fa3f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fa3f5: push 0x9d19e0 */
  { uint32_t v = 0x9d19e0u; esp -= 4; W32(esp, v); }
/* 7fa3fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fa400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fa408: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fa40b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa40c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7fa40f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa410: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fa411: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fa414: xor edi, edi */
  edi = 0;
/* 7fa416: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa417: mov esi, ecx */
  esi = ecx;
/* 7fa419: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7fa41c: call 0x6c2b3a */
  esp -= 4; W32(esp, 0x7fa421u); SPILL(); f_6c2b3a(); if (g_unwind) return; RELOAD();
/* 7fa421: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fa423: jne 0x7fa43a */
  if (!zf) goto L_7fa43a;
L_7fa425: /* 7fa425: xor eax, eax */
  eax = 0;
/* 7fa427: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa42a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa431: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa432: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa433: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa434: mov esp, ebp */
  esp = ebp;
/* 7fa436: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa437: ret 4 */
  esp += 8; SPILL(); return;
L_7fa43a: /* 7fa43a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7fa43c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa43e: mov ecx, ebx */
  ecx = ebx;
/* 7fa440: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7fa446u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7fa446: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7fa448: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7fa44b: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 7fa44e: mov edi, edi */
  edi = edi;
L_7fa450: /* 7fa450: cmp edi, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fa453: jge 0x7fa46c */
  if ((sf == of)) goto L_7fa46c;
L_7fa455: /* 7fa455: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 7fa458: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 7fa45b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa45d: je 0x7fa469 */
  if (zf) goto L_7fa469;
L_7fa45f: /* 7fa45f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fa461: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa462: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7fa465u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fa465: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa467: je 0x7fa425 */
  if (zf) goto L_7fa425;
L_7fa469: /* 7fa469: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7fa46a: jmp 0x7fa450 */
  goto L_7fa450;
L_7fa46c: /* 7fa46c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7fa46f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa471: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa472: mov ecx, ebx */
  ecx = ebx;
/* 7fa474: call 0x6c9750 */
  esp -= 4; W32(esp, 0x7fa479u); SPILL(); f_6c9750(); if (g_unwind) return; RELOAD();
/* 7fa479: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa47c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa47d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa47e: mov eax, 1 */
  eax = 0x1u;
/* 7fa483: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa48a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa48b: mov esp, ebp */
  esp = ebp;
/* 7fa48d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa48e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fa491(void) {
  LOAD_REGS();
L_7fa491: /* 7fa491: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fa494: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fa499: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7fa49c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa49d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7fa4a0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fa4a5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fa4a5(); return;
}

void f_7fa4a5(void) {
  LOAD_REGS();
L_7fa4a5: /* 7fa4a5: push 0xa12198 */
  { uint32_t v = 0xa12198u; esp -= 4; W32(esp, v); }
/* 7fa4aa: push 0xae0134 */
  { uint32_t v = 0xae0134u; esp -= 4; W32(esp, v); }
/* 7fa4af: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fa4b5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fa4b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa4b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa4ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa4bc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fa4c1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fa4c1: guest_badaddr(0x7fa4c1); return;
}

void f_7fa510(void) {
  LOAD_REGS();
L_7fa510: /* 7fa510: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fa511: mov ebp, esp */
  ebp = esp;
/* 7fa513: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fa515: push 0x9d19f0 */
  { uint32_t v = 0x9d19f0u; esp -= 4; W32(esp, v); }
/* 7fa51a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fa520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa521: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fa528: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fa52b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa52c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7fa52f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa530: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fa531: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fa534: xor esi, esi */
  esi = 0;
/* 7fa536: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa537: mov edi, ecx */
  edi = ecx;
/* 7fa539: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7fa53c: call 0x6c2b3a */
  esp -= 4; W32(esp, 0x7fa541u); SPILL(); f_6c2b3a(); if (g_unwind) return; RELOAD();
/* 7fa541: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fa543: jne 0x7fa55a */
  if (!zf) goto L_7fa55a;
L_7fa545: /* 7fa545: xor eax, eax */
  eax = 0;
/* 7fa547: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa54a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa551: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa552: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa553: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa554: mov esp, ebp */
  esp = ebp;
/* 7fa556: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa557: ret 4 */
  esp += 8; SPILL(); return;
L_7fa55a: /* 7fa55a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7fa55c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa55e: mov ecx, ebx */
  ecx = ebx;
/* 7fa560: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7fa566u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7fa566: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7fa568: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7fa56b: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7fa56e: mov edi, edi */
  edi = edi;
L_7fa570: /* 7fa570: cmp esi, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fa573: jge 0x7fa58f */
  if ((sf == of)) goto L_7fa58f;
L_7fa575: /* 7fa575: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 7fa578: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 7fa57b: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 7fa57e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa580: je 0x7fa58c */
  if (zf) goto L_7fa58c;
L_7fa582: /* 7fa582: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fa584: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa585: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7fa588u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fa588: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa58a: je 0x7fa545 */
  if (zf) goto L_7fa545;
L_7fa58c: /* 7fa58c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7fa58d: jmp 0x7fa570 */
  goto L_7fa570;
L_7fa58f: /* 7fa58f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fa592: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa594: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa595: mov ecx, ebx */
  ecx = ebx;
/* 7fa597: call 0x6c9750 */
  esp -= 4; W32(esp, 0x7fa59cu); SPILL(); f_6c9750(); if (g_unwind) return; RELOAD();
/* 7fa59c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa59f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa5a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa5a1: mov eax, 1 */
  eax = 0x1u;
/* 7fa5a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa5ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa5ae: mov esp, ebp */
  esp = ebp;
/* 7fa5b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa5b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fa5b4(void) {
  LOAD_REGS();
L_7fa5b4: /* 7fa5b4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fa5b7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fa5bc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7fa5bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fa5c0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7fa5c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fa5c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fa5c8(); return;
}

void f_7fa5c8(void) {
  LOAD_REGS();
L_7fa5c8: /* 7fa5c8: push 0xa12200 */
  { uint32_t v = 0xa12200u; esp -= 4; W32(esp, v); }
/* 7fa5cd: push 0xae017c */
  { uint32_t v = 0xae017cu; esp -= 4; W32(esp, v); }
/* 7fa5d2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fa5d8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fa5d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa5db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa5dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa5df: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fa5e4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fa5e4: guest_badaddr(0x7fa5e4); return;
}

void f_7fa630(void) {
  LOAD_REGS();
L_7fa630: /* 7fa630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fa631: mov ebp, esp */
  ebp = esp;
/* 7fa633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fa635: push 0x9d1a51 */
  { uint32_t v = 0x9d1a51u; esp -= 4; W32(esp, v); }
/* 7fa63a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fa640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fa648: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fa64b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fa64c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa64d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fa64e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7fa651: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa653: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fa656: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fa65d: je 0x7fa81f */
  if (zf) goto L_7fa81f;
L_7fa663: /* 7fa663: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fa668: mov ecx, edi */
  ecx = edi;
/* 7fa66a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fa670u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fa670: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa672: je 0x7fa81f */
  if (zf) goto L_7fa81f;
L_7fa678: /* 7fa678: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 7fa67b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa67d: je 0x7fa81f */
  if (zf) goto L_7fa81f;
L_7fa683: /* 7fa683: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7fa686: and ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ebx = r;
  }
/* 7fa68c: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 7fa68f: mov esi, 0xae01cc */
  esi = 0xae01ccu;
/* 7fa694: jne 0x7fa69b */
  if (!zf) goto L_7fa69b;
L_7fa696: /* 7fa696: mov esi, 0xb860e8 */
  esi = 0xb860e8u;
L_7fa69b: /* 7fa69b: mov ecx, edi */
  ecx = edi;
/* 7fa69d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fa6a3u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fa6a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa6a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa6a5: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa6a8: push 0xae01d8 */
  { uint32_t v = 0xae01d8u; esp -= 4; W32(esp, v); }
/* 7fa6ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa6ae: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7fa6b4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7fa6b4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa6b7: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa6ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa6bb: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7fa6be: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fa6c2: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7fa6c8u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7fa6c8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa6ca: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7fa6ce: je 0x7fa6de */
  if (zf) goto L_7fa6de;
L_7fa6d0: /* 7fa6d0: push 0xae01f0 */
  { uint32_t v = 0xae01f0u; esp -= 4; W32(esp, v); }
/* 7fa6d5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7fa6d8: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x7fa6deu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
L_7fa6de: /* 7fa6de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7fa6e1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fa6e7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fa6e7: mov ebx, dword ptr [0xcfa8a4] */
  ebx = R32((uint32_t)(0xcfa8a4u));
/* 7fa6ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa6ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa6f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fa6f2: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fa6f7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7fa6f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fa6f9: mov esi, eax */
  esi = eax;
/* 7fa6fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa6fe: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa700: jne 0x7fa7f0 */
  if (!zf) goto L_7fa7f0;
L_7fa706: /* 7fa706: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 7fa709: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fa70fu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fa70f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa710: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7fa713: push 0xae0200 */
  { uint32_t v = 0xae0200u; esp -= 4; W32(esp, v); }
/* 7fa718: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fa719: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7fa71fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7fa71f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa722: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7fa725: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7fa729: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fa72fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fa72f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa731: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fa733: push 0xb8c390 */
  { uint32_t v = 0xb8c390u; esp -= 4; W32(esp, v); }
/* 7fa738: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7fa73au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fa73a: mov ebx, eax */
  ebx = eax;
/* 7fa73c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa73f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa741: jne 0x7fa797 */
  if (!zf) goto L_7fa797;
L_7fa743: /* 7fa743: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7fa746: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fa74cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fa74c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa74e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa74f: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7fa752: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7fa758u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7fa758: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 7fa75b: mov esi, eax */
  esi = eax;
/* 7fa75d: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7fa763u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7fa763: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fa765: push 0x80004 */
  { uint32_t v = 0x80004u; esp -= 4; W32(esp, v); }
/* 7fa76a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa76b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa76c: push 0xb8c390 */
  { uint32_t v = 0xb8c390u; esp -= 4; W32(esp, v); }
/* 7fa771: call 0x6c3a99 */
  esp -= 4; W32(esp, 0x7fa776u); SPILL(); f_6c3a99(); if (g_unwind) return; RELOAD();
/* 7fa776: mov ebx, eax */
  ebx = eax;
/* 7fa778: movzx eax, byte ptr [edi + 0x74] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x74u)));
/* 7fa77c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa77f: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7fa782: je 0x7fa78d */
  if (zf) goto L_7fa78d;
L_7fa784: /* 7fa784: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7fa785: jne 0x7fa791 */
  if (!zf) goto L_7fa791;
L_7fa787: /* 7fa787: mov byte ptr [ebx + 0x44], 0 */
  W8((uint32_t)(ebx + 0x44u), 0x0u);
/* 7fa78b: jmp 0x7fa791 */
  goto L_7fa791;
L_7fa78d: /* 7fa78d: mov byte ptr [ebx + 0x44], 1 */
  W8((uint32_t)(ebx + 0x44u), 0x1u);
L_7fa791: /* 7fa791: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 7fa794: mov dword ptr [ebx + 0x38], edx */
  W32((uint32_t)(ebx + 0x38u), edx);
L_7fa797: /* 7fa797: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa79a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fa7a0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fa7a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa7a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa7a3: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7fa7a6: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7fa7acu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7fa7ac: mov ecx, edi */
  ecx = edi;
/* 7fa7ae: mov esi, eax */
  esi = eax;
/* 7fa7b0: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7fa7b6u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7fa7b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fa7b8: push 0x80004 */
  { uint32_t v = 0x80004u; esp -= 4; W32(esp, v); }
/* 7fa7bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa7be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa7bf: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fa7c4: call 0x6cc630 */
  esp -= 4; W32(esp, 0x7fa7c9u); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 7fa7c9: mov esi, eax */
  esi = eax;
/* 7fa7cb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7fa7ce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa7d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa7d3: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 7fa7d6: mov dword ptr [esi + 0x40], ebx */
  W32((uint32_t)(esi + 0x40u), ebx);
/* 7fa7d9: je 0x7fa7e0 */
  if (zf) goto L_7fa7e0;
L_7fa7db: /* 7fa7db: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 7fa7de: jmp 0x7fa7e3 */
  goto L_7fa7e3;
L_7fa7e0: /* 7fa7e0: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
L_7fa7e3: /* 7fa7e3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7fa7e6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7fa7ea: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7fa7f0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7fa7f0: /* 7fa7f0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7fa7f3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fa7f7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7fa7fdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7fa7fd: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa800: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fa804: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7fa80au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7fa80a: mov eax, esi */
  eax = esi;
/* 7fa80c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa80f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa816: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa817: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa818: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa819: mov esp, ebp */
  esp = ebp;
/* 7fa81b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa81c: ret 8 */
  esp += 12; SPILL(); return;
L_7fa81f: /* 7fa81f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7fa822: test ebx, 0x400000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa828: je 0x7fa8ed */
  if (zf) goto L_7fa8ed;
L_7fa82e: /* 7fa82e: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa831: mov esi, 0xae0220 */
  esi = 0xae0220u;
/* 7fa836: jne 0x7fa83d */
  if (!zf) goto L_7fa83d;
L_7fa838: /* 7fa838: mov esi, 0xb860ec */
  esi = 0xb860ecu;
L_7fa83d: /* 7fa83d: mov ecx, edi */
  ecx = edi;
/* 7fa83f: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fa845u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fa845: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa846: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa847: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa84a: push 0xae0234 */
  { uint32_t v = 0xae0234u; esp -= 4; W32(esp, v); }
/* 7fa84f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fa850: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7fa856u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7fa856: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa859: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa85c: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7fa860: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fa866u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fa866: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa869: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fa86b: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fa870: call dword ptr [0xcfa8a4] */
  esp -= 4; W32(esp, 0x7fa876u); SPILL(); f_4e3c65(); if (g_unwind) return; /* Core!?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7fa876: mov esi, eax */
  esi = eax;
/* 7fa878: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa87b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa87d: jne 0x7fa8cb */
  if (!zf) goto L_7fa8cb;
L_7fa87f: /* 7fa87f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa882: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fa888u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fa888: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa88a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa88b: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7fa88e: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7fa894u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7fa894: mov ecx, edi */
  ecx = edi;
/* 7fa896: mov esi, eax */
  esi = eax;
/* 7fa898: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7fa89eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7fa89e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fa8a0: push 0x80004 */
  { uint32_t v = 0x80004u; esp -= 4; W32(esp, v); }
/* 7fa8a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa8a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa8a7: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fa8ac: call 0x6cc630 */
  esp -= 4; W32(esp, 0x7fa8b1u); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 7fa8b1: mov esi, eax */
  esi = eax;
/* 7fa8b3: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 7fa8b6: shr ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7fa8b9: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 7fa8bb: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7fa8be: mov eax, edx */
  eax = edx;
/* 7fa8c0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa8c3: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7fa8c5: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 7fa8c8: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
L_7fa8cb: /* 7fa8cb: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa8ce: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fa8d2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7fa8d8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7fa8d8: mov eax, esi */
  eax = esi;
/* 7fa8da: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa8dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa8e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa8e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa8e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa8e7: mov esp, ebp */
  esp = ebp;
/* 7fa8e9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa8ea: ret 8 */
  esp += 12; SPILL(); return;
L_7fa8ed: /* 7fa8ed: test bh, 0x10 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa8f0: je 0x7fa9b8 */
  if (zf) goto L_7fa9b8;
L_7fa8f6: /* 7fa8f6: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa8f9: mov esi, 0xae024c */
  esi = 0xae024cu;
/* 7fa8fe: jne 0x7fa905 */
  if (!zf) goto L_7fa905;
L_7fa900: /* 7fa900: mov esi, 0xb860f0 */
  esi = 0xb860f0u;
L_7fa905: /* 7fa905: mov ecx, edi */
  ecx = edi;
/* 7fa907: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fa90du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fa90d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa90e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa90f: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa912: push 0xae0260 */
  { uint32_t v = 0xae0260u; esp -= 4; W32(esp, v); }
/* 7fa917: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fa918: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7fa91eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7fa91e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa921: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa924: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7fa928: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fa92eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fa92e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa931: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fa933: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fa938: call dword ptr [0xcfa8a4] */
  esp -= 4; W32(esp, 0x7fa93eu); SPILL(); f_4e3c65(); if (g_unwind) return; /* Core!?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7fa93e: mov esi, eax */
  esi = eax;
/* 7fa940: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa943: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa945: jne 0x7fa996 */
  if (!zf) goto L_7fa996;
L_7fa947: /* 7fa947: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa94a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fa950u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fa950: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fa952: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa953: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7fa956: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7fa95cu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7fa95c: mov ecx, edi */
  ecx = edi;
/* 7fa95e: mov esi, eax */
  esi = eax;
/* 7fa960: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7fa966u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7fa966: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fa968: push 0x80004 */
  { uint32_t v = 0x80004u; esp -= 4; W32(esp, v); }
/* 7fa96d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fa96e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa96f: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fa974: call 0x6cc630 */
  esp -= 4; W32(esp, 0x7fa979u); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 7fa979: mov esi, eax */
  esi = eax;
/* 7fa97b: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 7fa97e: shr ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7fa981: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 7fa983: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7fa986: mov eax, edx */
  eax = edx;
/* 7fa988: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa98b: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7fa98d: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 7fa990: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 7fa993: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
L_7fa996: /* 7fa996: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa999: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fa99d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7fa9a3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7fa9a3: mov eax, esi */
  eax = esi;
/* 7fa9a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fa9a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fa9af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fa9b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fa9b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fa9b2: mov esp, ebp */
  esp = ebp;
/* 7fa9b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fa9b5: ret 8 */
  esp += 12; SPILL(); return;
L_7fa9b8: /* 7fa9b8: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa9bb: je 0x7faa87 */
  if (zf) goto L_7faa87;
L_7fa9c1: /* 7fa9c1: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fa9c4: mov esi, 0xae0278 */
  esi = 0xae0278u;
/* 7fa9c9: jne 0x7fa9d0 */
  if (!zf) goto L_7fa9d0;
L_7fa9cb: /* 7fa9cb: mov esi, 0xb860f4 */
  esi = 0xb860f4u;
L_7fa9d0: /* 7fa9d0: mov ecx, edi */
  ecx = edi;
/* 7fa9d2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fa9d8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fa9d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fa9d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa9da: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa9dd: push 0xae028c */
  { uint32_t v = 0xae028cu; esp -= 4; W32(esp, v); }
/* 7fa9e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fa9e3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7fa9e9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7fa9e9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fa9ec: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fa9ef: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7fa9f3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fa9f9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fa9f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fa9fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fa9fc: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fa9fe: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7faa03: call dword ptr [0xcfa8a4] */
  esp -= 4; W32(esp, 0x7faa09u); SPILL(); f_4e3c65(); if (g_unwind) return; /* Core!?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7faa09: mov esi, eax */
  esi = eax;
/* 7faa0b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7faa0e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7faa10: jne 0x7faa65 */
  if (!zf) goto L_7faa65;
L_7faa12: /* 7faa12: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7faa15: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7faa1bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7faa1b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7faa1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7faa1e: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7faa21: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7faa27u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7faa27: mov ecx, edi */
  ecx = edi;
/* 7faa29: mov esi, eax */
  esi = eax;
/* 7faa2b: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7faa31u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7faa31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7faa33: push 0x80004 */
  { uint32_t v = 0x80004u; esp -= 4; W32(esp, v); }
/* 7faa38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7faa39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7faa3a: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7faa3f: call 0x6cc630 */
  esp -= 4; W32(esp, 0x7faa44u); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 7faa44: mov esi, eax */
  esi = eax;
/* 7faa46: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 7faa49: shr ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7faa4c: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 7faa4e: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7faa51: mov eax, edx */
  eax = edx;
/* 7faa53: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7faa56: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7faa58: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 7faa5b: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 7faa5e: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 7faa61: mov byte ptr [esi + 0x58], 1 */
  W8((uint32_t)(esi + 0x58u), 0x1u);
L_7faa65: /* 7faa65: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7faa68: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7faa6c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7faa72u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7faa72: mov eax, esi */
  eax = esi;
/* 7faa74: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7faa77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7faa7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7faa7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7faa80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7faa81: mov esp, ebp */
  esp = ebp;
/* 7faa83: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7faa84: ret 8 */
  esp += 12; SPILL(); return;
L_7faa87: /* 7faa87: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7faa8a: je 0x7fab53 */
  if (zf) goto L_7fab53;
L_7faa90: /* 7faa90: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7faa93: mov esi, 0xae02a4 */
  esi = 0xae02a4u;
/* 7faa98: jne 0x7faa9f */
  if (!zf) goto L_7faa9f;
L_7faa9a: /* 7faa9a: mov esi, 0xb860f8 */
  esi = 0xb860f8u;
L_7faa9f: /* 7faa9f: mov ecx, edi */
  ecx = edi;
/* 7faaa1: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7faaa7u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7faaa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7faaa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7faaa9: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7faaac: push 0xae02b8 */
  { uint32_t v = 0xae02b8u; esp -= 4; W32(esp, v); }
/* 7faab1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7faab2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7faab8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7faab8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7faabb: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7faabe: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7faac2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7faac8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7faac8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7faaca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7faacb: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7faacd: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7faad2: call dword ptr [0xcfa8a4] */
  esp -= 4; W32(esp, 0x7faad8u); SPILL(); f_4e3c65(); if (g_unwind) return; /* Core!?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7faad8: mov esi, eax */
  esi = eax;
/* 7faada: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7faadd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7faadf: jne 0x7fab31 */
  if (!zf) goto L_7fab31;
L_7faae1: /* 7faae1: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7faae4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7faaeau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7faaea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7faaec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7faaed: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7faaf0: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7faaf6u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7faaf6: mov ecx, edi */
  ecx = edi;
/* 7faaf8: mov esi, eax */
  esi = eax;
/* 7faafa: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7fab00u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7fab00: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fab02: push 0x80004 */
  { uint32_t v = 0x80004u; esp -= 4; W32(esp, v); }
/* 7fab07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fab08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fab09: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fab0e: call 0x6cc630 */
  esp -= 4; W32(esp, 0x7fab13u); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 7fab13: mov esi, eax */
  esi = eax;
/* 7fab15: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 7fab18: shr ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7fab1b: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 7fab1d: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7fab20: mov eax, edx */
  eax = edx;
/* 7fab22: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fab25: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7fab27: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 7fab2a: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 7fab2d: mov byte ptr [esi + 0x58], 2 */
  W8((uint32_t)(esi + 0x58u), 0x2u);
L_7fab31: /* 7fab31: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fab34: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fab38: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7fab3eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7fab3e: mov eax, esi */
  eax = esi;
/* 7fab40: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fab43: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fab4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fab4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fab4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fab4d: mov esp, ebp */
  esp = ebp;
/* 7fab4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fab50: ret 8 */
  esp += 12; SPILL(); return;
L_7fab53: /* 7fab53: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fab56: je 0x7fac19 */
  if (zf) goto L_7fac19;
L_7fab5c: /* 7fab5c: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fab5f: mov esi, 0xae02d8 */
  esi = 0xae02d8u;
/* 7fab64: jne 0x7fab6b */
  if (!zf) goto L_7fab6b;
L_7fab66: /* 7fab66: mov esi, 0xb860fc */
  esi = 0xb860fcu;
L_7fab6b: /* 7fab6b: mov ecx, edi */
  ecx = edi;
/* 7fab6d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fab73u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fab73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fab74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fab75: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fab78: push 0xae02ec */
  { uint32_t v = 0xae02ecu; esp -= 4; W32(esp, v); }
/* 7fab7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fab7e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7fab84u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7fab84: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fab87: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fab8a: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7fab8e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fab94u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fab94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fab96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fab97: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fab99: call 0x6c14f6 */
  esp -= 4; W32(esp, 0x7fab9eu); SPILL(); f_6c14f6(); if (g_unwind) return; RELOAD();
/* 7fab9e: mov esi, eax */
  esi = eax;
/* 7faba0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7faba3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7faba5: jne 0x7fabf7 */
  if (!zf) goto L_7fabf7;
L_7faba7: /* 7faba7: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fabaa: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fabb0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fabb0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fabb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fabb3: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7fabb6: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7fabbcu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7fabbc: mov ecx, edi */
  ecx = edi;
/* 7fabbe: mov esi, eax */
  esi = eax;
/* 7fabc0: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7fabc6u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7fabc6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fabc8: push 0x80004 */
  { uint32_t v = 0x80004u; esp -= 4; W32(esp, v); }
/* 7fabcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fabce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fabcf: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fabd4: call 0x6cc630 */
  esp -= 4; W32(esp, 0x7fabd9u); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 7fabd9: mov esi, eax */
  esi = eax;
/* 7fabdb: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 7fabde: shr ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7fabe1: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 7fabe3: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7fabe6: mov eax, edx */
  eax = edx;
/* 7fabe8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fabeb: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7fabed: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 7fabf0: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 7fabf3: mov byte ptr [esi + 0x58], 3 */
  W8((uint32_t)(esi + 0x58u), 0x3u);
L_7fabf7: /* 7fabf7: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fabfa: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fabfe: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7fac04u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7fac04: mov eax, esi */
  eax = esi;
/* 7fac06: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fac09: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fac10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fac11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fac12: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fac13: mov esp, ebp */
  esp = ebp;
/* 7fac15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fac16: ret 8 */
  esp += 12; SPILL(); return;
L_7fac19: /* 7fac19: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fac1c: je 0x7facfb */
  if (zf) goto L_7facfb;
L_7fac22: /* 7fac22: mov ecx, edi */
  ecx = edi;
/* 7fac24: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fac2au); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fac2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fac2b: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fac2e: push 0xae0310 */
  { uint32_t v = 0xae0310u; esp -= 4; W32(esp, v); }
/* 7fac33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fac34: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7fac3au); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7fac3a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fac3d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fac40: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7fac44: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fac4au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fac4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fac4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fac4d: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fac4f: call 0x6c14f6 */
  esp -= 4; W32(esp, 0x7fac54u); SPILL(); f_6c14f6(); if (g_unwind) return; RELOAD();
/* 7fac54: mov esi, eax */
  esi = eax;
/* 7fac56: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fac59: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fac5b: jne 0x7faca9 */
  if (!zf) goto L_7faca9;
L_7fac5d: /* 7fac5d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fac60: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7fac66u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7fac66: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fac68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fac69: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7fac6c: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7fac72u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7fac72: mov ecx, edi */
  ecx = edi;
/* 7fac74: mov esi, eax */
  esi = eax;
/* 7fac76: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7fac7cu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7fac7c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fac7e: push 0x80004 */
  { uint32_t v = 0x80004u; esp -= 4; W32(esp, v); }
/* 7fac83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fac84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fac85: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fac8a: call 0x6cc630 */
  esp -= 4; W32(esp, 0x7fac8fu); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 7fac8f: mov esi, eax */
  esi = eax;
/* 7fac91: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 7fac94: shr ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 7fac97: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 7fac99: and ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 7fac9c: mov eax, edx */
  eax = edx;
/* 7fac9e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7faca1: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7faca3: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 7faca6: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
L_7faca9: /* 7faca9: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7facac: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7facb0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7facb6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7facb6: mov eax, esi */
  eax = esi;
/* 7facb8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7facbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7facc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7facc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7facc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7facc5: mov esp, ebp */
  esp = ebp;
/* 7facc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7facc8: ret 8 */
  esp += 12; SPILL(); return;
L_7facfb: /* 7facfb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7facfe: mov eax, edi */
  eax = edi;
/* 7fad00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fad01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fad02: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fad09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fad0a: mov esp, ebp */
  esp = ebp;
/* 7fad0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fad0d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7faccb(void) {
  LOAD_REGS();
L_7faccb: /* 7faccb: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7facce: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7facd3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7facd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7facd7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7facda: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7facdfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7facdf(); return;
}

void f_7facdf(void) {
  LOAD_REGS();
L_7facdf: /* 7facdf: push 0xa12268 */
  { uint32_t v = 0xa12268u; esp -= 4; W32(esp, v); }
/* 7face4: push 0xae0330 */
  { uint32_t v = 0xae0330u; esp -= 4; W32(esp, v); }
/* 7face9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7facefu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7facef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7facf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7facf4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7facf6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7facfbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7facfb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7facfe: mov eax, edi */
  eax = edi;
/* 7fad00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fad01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fad02: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fad09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fad0a: mov esp, ebp */
  esp = ebp;
/* 7fad0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fad0d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7faed0(void) {
  LOAD_REGS();
L_7faed0: /* 7faed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7faed1: mov esi, ecx */
  esi = ecx;
/* 7faed3: mov dword ptr [esi], 0xb86100 */
  W32((uint32_t)(esi), 0xb86100u);
/* 7faed9: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 7faee0: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7faee5u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7faee5: mov eax, esi */
  eax = esi;
/* 7faee7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7faee8: ret  */
  esp += 4; SPILL(); return;
}

void f_7faf00(void) {
  LOAD_REGS();
L_7faf00: /* 7faf00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7faf01: mov ebp, esp */
  ebp = esp;
/* 7faf03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7faf05: push 0x9d1a80 */
  { uint32_t v = 0x9d1a80u; esp -= 4; W32(esp, v); }
/* 7faf0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7faf10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7faf11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7faf18: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7faf1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7faf1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7faf1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7faf1e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7faf21: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7faf24: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7faf2b: mov dword ptr [ebp - 0x20], 0xb86100 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xb86100u);
/* 7faf32: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
/* 7faf39: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7faf3eu); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7faf3e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7faf41: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
L_7faf44: /* 7faf44: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7faf49: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7faf4c: jge 0x7fafbe */
  if ((sf == of)) goto L_7fafbe;
L_7faf4e: /* 7faf4e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7faf50: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7faf53: and dword ptr [eax + 0x30], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x30u), r);
  }
/* 7faf57: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7faf5d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7faf5f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7faf62: and dword ptr [eax + 0x30], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x30u), r);
  }
L_7faf66: /* 7faf66: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7faf6b: jmp 0x7faf70 */
  goto L_7faf70;
L_7faf70: /* 7faf70: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7faf73: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7faf74: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7faf76: jge 0x7fafbe */
  if ((sf == of)) goto L_7fafbe;
L_7faf78: /* 7faf78: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7faf7a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7faf7d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7faf7f: je 0x7faf70 */
  if (zf) goto L_7faf70;
L_7faf81: /* 7faf81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7faf82: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7faf88u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7faf88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7faf8a: je 0x7faf66 */
  if (zf) goto L_7faf66;
L_7faf8c: /* 7faf8c: jmp 0x7faf44 */
  goto L_7faf44;
L_7fafbe: /* 7fafbe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fafc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fafc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fafc3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fafca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fafcb: mov esp, ebp */
  esp = ebp;
/* 7fafcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fafce: ret  */
  esp += 4; SPILL(); return;
}

void f_7faf6d(void) {
  LOAD_REGS();
  goto L_7faf6d;
L_7faf44: /* 7faf44: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7faf49: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7faf4c: jge 0x7fafbe */
  if ((sf == of)) goto L_7fafbe;
L_7faf4e: /* 7faf4e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7faf50: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7faf53: and dword ptr [eax + 0x30], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x30u), r);
  }
/* 7faf57: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7faf5d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7faf5f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7faf62: and dword ptr [eax + 0x30], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x30u), r);
  }
L_7faf66: /* 7faf66: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7faf6b: jmp 0x7faf70 */
  goto L_7faf70;
L_7faf6d: /* 7faf6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7faf70: /* 7faf70: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7faf73: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7faf74: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7faf76: jge 0x7fafbe */
  if ((sf == of)) goto L_7fafbe;
L_7faf78: /* 7faf78: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7faf7a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7faf7d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7faf7f: je 0x7faf70 */
  if (zf) goto L_7faf70;
L_7faf81: /* 7faf81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7faf82: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7faf88u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7faf88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7faf8a: je 0x7faf66 */
  if (zf) goto L_7faf66;
L_7faf8c: /* 7faf8c: jmp 0x7faf44 */
  goto L_7faf44;
L_7fafbe: /* 7fafbe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fafc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fafc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fafc3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fafca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fafcb: mov esp, ebp */
  esp = ebp;
/* 7fafcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fafce: ret  */
  esp += 4; SPILL(); return;
}

void f_7faf8e(void) {
  LOAD_REGS();
L_7faf8e: /* 7faf8e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7faf91: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7faf96: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7faf99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7faf9a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7faf9d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fafa2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fafa2(); return;
}

void f_7fafa2(void) {
  LOAD_REGS();
L_7fafa2: /* 7fafa2: push 0xa122c4 */
  { uint32_t v = 0xa122c4u; esp -= 4; W32(esp, v); }
/* 7fafa7: push 0xadfe00 */
  { uint32_t v = 0xadfe00u; esp -= 4; W32(esp, v); }
/* 7fafac: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fafb2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fafb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fafb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fafb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fafb9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fafbeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7fafbe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fafc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fafc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fafc3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fafca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fafcb: mov esp, ebp */
  esp = ebp;
/* 7fafcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fafce: ret  */
  esp += 4; SPILL(); return;
}

void f_7fb010(void) {
  LOAD_REGS();
L_7fb010: /* 7fb010: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fb011: mov ebp, esp */
  ebp = esp;
/* 7fb013: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb015: push 0x9d1a90 */
  { uint32_t v = 0x9d1a90u; esp -= 4; W32(esp, v); }
/* 7fb01a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fb020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fb021: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fb028: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fb02b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fb02c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb02d: mov esi, ecx */
  esi = ecx;
/* 7fb02f: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 7fb032: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fb033: xor edi, edi */
  edi = 0;
/* 7fb035: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb038: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fb03b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7fb03e: jne 0x7fb14b */
  if (!zf) goto L_7fb14b;
L_7fb044: /* 7fb044: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 7fb047: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 7fb04a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb04c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb04f: jne 0x7fb059 */
  if (!zf) goto L_7fb059;
L_7fb051: /* 7fb051: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* 7fb054: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* 7fb057: jmp 0x7fb075 */
  goto L_7fb075;
L_7fb059: /* 7fb059: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 7fb05c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7fb062: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb064: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb067: jne 0x7fb075 */
  if (!zf) goto L_7fb075;
L_7fb069: /* 7fb069: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7fb06c: fsub dword ptr [esi + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x54u)));
/* 7fb06f: fadd dword ptr [esi + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x50u)));
/* 7fb072: fstp dword ptr [esi + 0x50] */
  WF32((uint32_t)(esi + 0x50u), ST0); FPOP();
L_7fb075: /* 7fb075: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb078: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fb07b: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 7fb07e: je 0x7fb0d4 */
  if (zf) goto L_7fb0d4;
L_7fb080: /* 7fb080: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* 7fb083: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7fb089: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb08b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb08e: jne 0x7fb0d4 */
  if (!zf) goto L_7fb0d4;
L_7fb090: /* 7fb090: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb093: fcomp dword ptr [esi + 0x58] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x58u)));
  FPOP();
/* 7fb096: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb098: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb09b: jne 0x7fb0d4 */
  if (!zf) goto L_7fb0d4;
L_7fb09d: /* 7fb09d: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb0a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fb0a1: fdiv dword ptr [esi + 0x58] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x58u)));
/* 7fb0a4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7fb0a7: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x7fb0adu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 7fb0ad: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7fb0b0: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7fb0b3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb0b6: fmul dword ptr [esi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x58u)));
/* 7fb0b9: fsubr dword ptr [esi + 0x50] */
  ST0 = (F32((uint32_t)(esi + 0x50u))) - ST0;
L_7fb0bc: /* 7fb0bc: fstp dword ptr [esi + 0x50] */
  WF32((uint32_t)(esi + 0x50u), ST0); FPOP();
/* 7fb0bf: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb0c2: fcomp dword ptr [esi + 0x58] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x58u)));
  FPOP();
/* 7fb0c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb0c7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb0ca: jne 0x7fb0d4 */
  if (!zf) goto L_7fb0d4;
L_7fb0cc: /* 7fb0cc: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb0cf: fsub dword ptr [esi + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x58u)));
/* 7fb0d2: jmp 0x7fb0bc */
  goto L_7fb0bc;
L_7fb0d4: /* 7fb0d4: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7fb0db: jmp 0x7fb0e0 */
  goto L_7fb0e0;
L_7fb0e0: /* 7fb0e0: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 7fb0e3: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fb0e5: jge 0x7fb14b */
  if ((sf == of)) goto L_7fb14b;
L_7fb0e7: /* 7fb0e7: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb0ea: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 7fb0ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb0ef: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb0f2: jne 0x7fb28f */
  if (!zf) goto L_7fb28f;
L_7fb0f8: /* 7fb0f8: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7fb0fb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7fb0fe: lea ebx, [edi + edi*2] */
  ebx = (uint32_t)(edi + edi*2);
/* 7fb101: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 7fb104: fadd dword ptr [ecx + ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + ebx + 0x4u)));
/* 7fb108: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7fb10a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7fb10d: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb110: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 7fb113: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb115: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7fb118: jnp 0x7fb12d */
  if (!pf) goto L_7fb12d;
L_7fb11a: /* 7fb11a: test byte ptr [esi + 0x4c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb11e: jne 0x7fb28f */
  if (!zf) goto L_7fb28f;
L_7fb124: /* 7fb124: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7fb125: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fb127: jne 0x7fb28f */
  if (!zf) goto L_7fb28f;
L_7fb12d: /* 7fb12d: movzx eax, byte ptr [ecx + 8] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x8u)));
/* 7fb131: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7fb134: je 0x7fb146 */
  if (zf) goto L_7fb146;
L_7fb136: /* 7fb136: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7fb137: jne 0x7fb14b */
  if (!zf) goto L_7fb14b;
L_7fb139: /* 7fb139: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb13c: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 7fb13f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb141: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb144: jne 0x7fb17a */
  if (!zf) goto L_7fb17a;
L_7fb146: /* 7fb146: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fb148: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
L_7fb14b: /* 7fb14b: mov esi, dword ptr [esi + 0x38] */
  esi = R32((uint32_t)(esi + 0x38u));
/* 7fb14e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb150: je 0x7fb167 */
  if (zf) goto L_7fb167;
L_7fb152: /* 7fb152: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fb154: mov ecx, esi */
  ecx = esi;
/* 7fb156: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7fb15cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fb15c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7fb15f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7fb161: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fb162: mov ecx, eax */
  ecx = eax;
/* 7fb164: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7fb167u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7fb167: /* 7fb167: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fb16a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fb16b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb16c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fb173: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fb174: mov esp, ebp */
  esp = ebp;
/* 7fb176: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fb177: ret 4 */
  esp += 8; SPILL(); return;
L_7fb17a: /* 7fb17a: mov eax, dword ptr [0xb9091c] */
  eax = R32((uint32_t)(0xb9091cu));
/* 7fb17f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb181: jne 0x7fb1b7 */
  if (!zf) goto L_7fb1b7;
L_7fb183: /* 7fb183: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fb186: mov ecx, esp */
  ecx = esp;
/* 7fb188: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7fb18b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb18d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fb193u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fb193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb195: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 7fb19a: call 0x6c9b4c */
  esp -= 4; W32(esp, 0x7fb19fu); SPILL(); f_6c9b4c(); if (g_unwind) return; RELOAD();
/* 7fb19f: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7fb1a5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb1a8: push 0xb9091c */
  { uint32_t v = 0xb9091cu; esp -= 4; W32(esp, v); }
/* 7fb1ad: mov dword ptr [0xb9091c], eax */
  W32((uint32_t)(0xb9091cu), eax);
/* 7fb1b2: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7fb1b7u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_7fb1b7: /* 7fb1b7: mov eax, dword ptr [0xb90918] */
  eax = R32((uint32_t)(0xb90918u));
/* 7fb1bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb1be: jne 0x7fb20c */
  if (!zf) goto L_7fb20c;
L_7fb1c0: /* 7fb1c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb1c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fb1c3: mov ecx, esp */
  ecx = esp;
/* 7fb1c5: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7fb1c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb1ca: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fb1d0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fb1d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb1d2: push 0xb88550 */
  { uint32_t v = 0xb88550u; esp -= 4; W32(esp, v); }
/* 7fb1d7: call 0x6cbb22 */
  esp -= 4; W32(esp, 0x7fb1dcu); SPILL(); f_6cbb22(); if (g_unwind) return; RELOAD();
/* 7fb1dc: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7fb1e2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb1e5: push 0xb90918 */
  { uint32_t v = 0xb90918u; esp -= 4; W32(esp, v); }
/* 7fb1ea: mov dword ptr [0xb90918], eax */
  W32((uint32_t)(0xb90918u), eax);
/* 7fb1ef: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7fb1f4u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 7fb1f4: mov eax, dword ptr [0xb90918] */
  eax = R32((uint32_t)(0xb90918u));
/* 7fb1f9: mov ecx, dword ptr [0xb9091c] */
  ecx = R32((uint32_t)(0xb9091cu));
/* 7fb1ff: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 7fb202: mov edx, dword ptr [0xb90918] */
  edx = R32((uint32_t)(0xb90918u));
/* 7fb208: mov byte ptr [edx + 0x38], 5 */
  W8((uint32_t)(edx + 0x38u), 0x5u);
L_7fb20c: /* 7fb20c: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb20f: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 7fb212: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7fb215: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fb216: fdiv dword ptr [eax + ebx + 4] */
  ST0 = ST0 / (F32((uint32_t)(eax + ebx + 0x4u)));
/* 7fb21a: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 7fb220: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7fb223: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7fb229u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7fb229: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb22c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7fb22e: mov ecx, 0xff */
  ecx = 0xffu;
/* 7fb233: jge 0x7fb239 */
  if ((sf == of)) goto L_7fb239;
L_7fb235: /* 7fb235: xor eax, eax */
  eax = 0;
/* 7fb237: jmp 0x7fb23f */
  goto L_7fb23f;
L_7fb239: /* 7fb239: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fb23b: jl 0x7fb23f */
  if ((sf != of)) goto L_7fb23f;
L_7fb23d: /* 7fb23d: mov eax, ecx */
  eax = ecx;
L_7fb23f: /* 7fb23f: mov edx, dword ptr [0xb9091c] */
  edx = R32((uint32_t)(0xb9091cu));
/* 7fb245: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 7fb248: mov byte ptr [ebp - 0x14], cl */
  W8((uint32_t)(ebp + 0xffffffecu), (ecx & 0xffu));
/* 7fb24b: mov byte ptr [ebp - 0x13], cl */
  W8((uint32_t)(ebp + 0xffffffedu), (ecx & 0xffu));
/* 7fb24e: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 7fb251: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fb254: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 7fb257: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7fb259: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* 7fb25c: jge 0x7fb262 */
  if ((sf == of)) goto L_7fb262;
L_7fb25e: /* 7fb25e: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 7fb261: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_7fb262: /* 7fb262: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7fb265: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7fb268: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7fb26b: mov eax, dword ptr [0xb90918] */
  eax = R32((uint32_t)(0xb90918u));
/* 7fb270: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 7fb273: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7fb276: mov edx, dword ptr [ebx + ecx] */
  edx = R32((uint32_t)(ebx + ecx));
/* 7fb279: mov eax, dword ptr [0xb90918] */
  eax = R32((uint32_t)(0xb90918u));
/* 7fb27e: mov dword ptr [eax + 0x40], edx */
  W32((uint32_t)(eax + 0x40u), edx);
/* 7fb281: mov ecx, dword ptr [0xb90918] */
  ecx = R32((uint32_t)(0xb90918u));
/* 7fb287: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 7fb28a: jmp 0x7fb14b */
  goto L_7fb14b;
L_7fb28f: /* 7fb28f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7fb292: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7fb295: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7fb298: fadd dword ptr [ecx + eax*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax*4 + 0x4u)));
/* 7fb29c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7fb29d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7fb2a0: jmp 0x7fb0e0 */
  goto L_7fb0e0;
}

void f_7fb0dd(void) {
  LOAD_REGS();
L_7fb0dd: /* 7fb0dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7fb0e0: /* 7fb0e0: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 7fb0e3: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fb0e5: jge 0x7fb14b */
  if ((sf == of)) goto L_7fb14b;
L_7fb0e7: /* 7fb0e7: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb0ea: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 7fb0ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb0ef: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb0f2: jne 0x7fb28f */
  if (!zf) goto L_7fb28f;
L_7fb0f8: /* 7fb0f8: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7fb0fb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7fb0fe: lea ebx, [edi + edi*2] */
  ebx = (uint32_t)(edi + edi*2);
/* 7fb101: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 7fb104: fadd dword ptr [ecx + ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + ebx + 0x4u)));
/* 7fb108: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7fb10a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7fb10d: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb110: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 7fb113: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb115: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7fb118: jnp 0x7fb12d */
  if (!pf) goto L_7fb12d;
L_7fb11a: /* 7fb11a: test byte ptr [esi + 0x4c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb11e: jne 0x7fb28f */
  if (!zf) goto L_7fb28f;
L_7fb124: /* 7fb124: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7fb125: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fb127: jne 0x7fb28f */
  if (!zf) goto L_7fb28f;
L_7fb12d: /* 7fb12d: movzx eax, byte ptr [ecx + 8] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x8u)));
/* 7fb131: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7fb134: je 0x7fb146 */
  if (zf) goto L_7fb146;
L_7fb136: /* 7fb136: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7fb137: jne 0x7fb14b */
  if (!zf) goto L_7fb14b;
L_7fb139: /* 7fb139: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb13c: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 7fb13f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fb141: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb144: jne 0x7fb17a */
  if (!zf) goto L_7fb17a;
L_7fb146: /* 7fb146: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fb148: mov dword ptr [esi + 0x38], edx */
  W32((uint32_t)(esi + 0x38u), edx);
L_7fb14b: /* 7fb14b: mov esi, dword ptr [esi + 0x38] */
  esi = R32((uint32_t)(esi + 0x38u));
/* 7fb14e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb150: je 0x7fb167 */
  if (zf) goto L_7fb167;
L_7fb152: /* 7fb152: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fb154: mov ecx, esi */
  ecx = esi;
/* 7fb156: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7fb15cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fb15c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7fb15f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7fb161: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fb162: mov ecx, eax */
  ecx = eax;
/* 7fb164: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7fb167u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7fb167: /* 7fb167: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fb16a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fb16b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb16c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fb173: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fb174: mov esp, ebp */
  esp = ebp;
/* 7fb176: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fb177: ret 4 */
  esp += 8; SPILL(); return;
L_7fb17a: /* 7fb17a: mov eax, dword ptr [0xb9091c] */
  eax = R32((uint32_t)(0xb9091cu));
/* 7fb17f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb181: jne 0x7fb1b7 */
  if (!zf) goto L_7fb1b7;
L_7fb183: /* 7fb183: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fb186: mov ecx, esp */
  ecx = esp;
/* 7fb188: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7fb18b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb18d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fb193u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fb193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb195: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 7fb19a: call 0x6c9b4c */
  esp -= 4; W32(esp, 0x7fb19fu); SPILL(); f_6c9b4c(); if (g_unwind) return; RELOAD();
/* 7fb19f: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7fb1a5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb1a8: push 0xb9091c */
  { uint32_t v = 0xb9091cu; esp -= 4; W32(esp, v); }
/* 7fb1ad: mov dword ptr [0xb9091c], eax */
  W32((uint32_t)(0xb9091cu), eax);
/* 7fb1b2: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7fb1b7u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_7fb1b7: /* 7fb1b7: mov eax, dword ptr [0xb90918] */
  eax = R32((uint32_t)(0xb90918u));
/* 7fb1bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb1be: jne 0x7fb20c */
  if (!zf) goto L_7fb20c;
L_7fb1c0: /* 7fb1c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb1c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fb1c3: mov ecx, esp */
  ecx = esp;
/* 7fb1c5: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7fb1c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb1ca: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fb1d0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fb1d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb1d2: push 0xb88550 */
  { uint32_t v = 0xb88550u; esp -= 4; W32(esp, v); }
/* 7fb1d7: call 0x6cbb22 */
  esp -= 4; W32(esp, 0x7fb1dcu); SPILL(); f_6cbb22(); if (g_unwind) return; RELOAD();
/* 7fb1dc: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7fb1e2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb1e5: push 0xb90918 */
  { uint32_t v = 0xb90918u; esp -= 4; W32(esp, v); }
/* 7fb1ea: mov dword ptr [0xb90918], eax */
  W32((uint32_t)(0xb90918u), eax);
/* 7fb1ef: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7fb1f4u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 7fb1f4: mov eax, dword ptr [0xb90918] */
  eax = R32((uint32_t)(0xb90918u));
/* 7fb1f9: mov ecx, dword ptr [0xb9091c] */
  ecx = R32((uint32_t)(0xb9091cu));
/* 7fb1ff: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 7fb202: mov edx, dword ptr [0xb90918] */
  edx = R32((uint32_t)(0xb90918u));
/* 7fb208: mov byte ptr [edx + 0x38], 5 */
  W8((uint32_t)(edx + 0x38u), 0x5u);
L_7fb20c: /* 7fb20c: fld dword ptr [esi + 0x50] */
  { double v = F32((uint32_t)(esi + 0x50u)); FPUSH(v); }
/* 7fb20f: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 7fb212: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7fb215: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fb216: fdiv dword ptr [eax + ebx + 4] */
  ST0 = ST0 / (F32((uint32_t)(eax + ebx + 0x4u)));
/* 7fb21a: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 7fb220: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7fb223: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7fb229u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7fb229: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb22c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7fb22e: mov ecx, 0xff */
  ecx = 0xffu;
/* 7fb233: jge 0x7fb239 */
  if ((sf == of)) goto L_7fb239;
L_7fb235: /* 7fb235: xor eax, eax */
  eax = 0;
/* 7fb237: jmp 0x7fb23f */
  goto L_7fb23f;
L_7fb239: /* 7fb239: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fb23b: jl 0x7fb23f */
  if ((sf != of)) goto L_7fb23f;
L_7fb23d: /* 7fb23d: mov eax, ecx */
  eax = ecx;
L_7fb23f: /* 7fb23f: mov edx, dword ptr [0xb9091c] */
  edx = R32((uint32_t)(0xb9091cu));
/* 7fb245: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 7fb248: mov byte ptr [ebp - 0x14], cl */
  W8((uint32_t)(ebp + 0xffffffecu), (ecx & 0xffu));
/* 7fb24b: mov byte ptr [ebp - 0x13], cl */
  W8((uint32_t)(ebp + 0xffffffedu), (ecx & 0xffu));
/* 7fb24e: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 7fb251: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fb254: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 7fb257: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7fb259: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* 7fb25c: jge 0x7fb262 */
  if ((sf == of)) goto L_7fb262;
L_7fb25e: /* 7fb25e: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 7fb261: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_7fb262: /* 7fb262: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7fb265: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7fb268: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 7fb26b: mov eax, dword ptr [0xb90918] */
  eax = R32((uint32_t)(0xb90918u));
/* 7fb270: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 7fb273: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7fb276: mov edx, dword ptr [ebx + ecx] */
  edx = R32((uint32_t)(ebx + ecx));
/* 7fb279: mov eax, dword ptr [0xb90918] */
  eax = R32((uint32_t)(0xb90918u));
/* 7fb27e: mov dword ptr [eax + 0x40], edx */
  W32((uint32_t)(eax + 0x40u), edx);
/* 7fb281: mov ecx, dword ptr [0xb90918] */
  ecx = R32((uint32_t)(0xb90918u));
/* 7fb287: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 7fb28a: jmp 0x7fb14b */
  goto L_7fb14b;
L_7fb28f: /* 7fb28f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7fb292: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 7fb295: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7fb298: fadd dword ptr [ecx + eax*4 + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax*4 + 0x4u)));
/* 7fb29c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7fb29d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7fb2a0: jmp 0x7fb0e0 */
  goto L_7fb0e0;
}

void f_7fb2a5(void) {
  LOAD_REGS();
L_7fb2a5: /* 7fb2a5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fb2a8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fb2ad: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7fb2b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fb2b1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7fb2b4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fb2b9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fb2b9(); return;
}

void f_7fb2b9(void) {
  LOAD_REGS();
L_7fb2b9: /* 7fb2b9: push 0xa12308 */
  { uint32_t v = 0xa12308u; esp -= 4; W32(esp, v); }
/* 7fb2be: push 0xae0174 */
  { uint32_t v = 0xae0174u; esp -= 4; W32(esp, v); }
/* 7fb2c3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fb2c9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fb2c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb2cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb2ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb2d0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fb2d5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fb2d5: guest_badaddr(0x7fb2d5); return;
}

void f_7fb3a0(void) {
  LOAD_REGS();
L_7fb3a0: /* 7fb3a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb3a2: push 0x9d1ac1 */
  { uint32_t v = 0x9d1ac1u; esp -= 4; W32(esp, v); }
/* 7fb3a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fb3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fb3ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fb3b5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fb3b8: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 7fb3bc: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 7fb3c4: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7fb3cau); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7fb3ca: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 7fb3ce: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fb3d1: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* 7fb3d9: jne 0x7fb3e2 */
  if (!zf) goto L_7fb3e2;
L_7fb3db: /* 7fb3db: push 0xae0950 */
  { uint32_t v = 0xae0950u; esp -= 4; W32(esp, v); }
/* 7fb3e0: jmp 0x7fb40b */
  goto L_7fb40b;
L_7fb3e2: /* 7fb3e2: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fb3e5: jne 0x7fb3ee */
  if (!zf) goto L_7fb3ee;
L_7fb3e7: /* 7fb3e7: push 0xae096c */
  { uint32_t v = 0xae096cu; esp -= 4; W32(esp, v); }
/* 7fb3ec: jmp 0x7fb40b */
  goto L_7fb40b;
L_7fb3ee: /* 7fb3ee: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fb3f1: jne 0x7fb3fa */
  if (!zf) goto L_7fb3fa;
L_7fb3f3: /* 7fb3f3: push 0xae0980 */
  { uint32_t v = 0xae0980u; esp -= 4; W32(esp, v); }
/* 7fb3f8: jmp 0x7fb40b */
  goto L_7fb40b;
L_7fb3fa: /* 7fb3fa: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fb3fd: jne 0x7fb406 */
  if (!zf) goto L_7fb406;
L_7fb3ff: /* 7fb3ff: push 0xae099c */
  { uint32_t v = 0xae099cu; esp -= 4; W32(esp, v); }
/* 7fb404: jmp 0x7fb40b */
  goto L_7fb40b;
L_7fb406: /* 7fb406: push 0xae09a8 */
  { uint32_t v = 0xae09a8u; esp -= 4; W32(esp, v); }
L_7fb40b: /* 7fb40b: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7fb40f: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7fb415u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7fb415: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb416: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 7fb41a: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7fb41e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fb41f: mov ecx, esi */
  ecx = esi;
/* 7fb421: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7fb427u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7fb427: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7fb42b: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* 7fb433: mov byte ptr [esp + 0x1c], 0 */
  W8((uint32_t)(esp + 0x1cu), 0x0u);
/* 7fb438: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7fb43eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7fb43e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7fb442: mov eax, esi */
  eax = esi;
/* 7fb444: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb445: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fb44c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb44f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7fb490(void) {
  LOAD_REGS();
L_7fb490: /* 7fb490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb491: mov esi, ecx */
  esi = ecx;
/* 7fb493: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7fb499u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7fb499: mov eax, esi */
  eax = esi;
/* 7fb49b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb49c: ret  */
  esp += 4; SPILL(); return;
}

void f_7fb4b0(void) {
  LOAD_REGS();
L_7fb4b0: /* 7fb4b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7fb4b4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb4b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb4b7: je 0x7fb4dc */
  if (zf) goto L_7fb4dc;
L_7fb4b9: /* 7fb4b9: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 7fb4bf: xor eax, eax */
  eax = 0;
/* 7fb4c1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7fb4c3: jle 0x7fb4dc */
  if ((zf || sf != of)) goto L_7fb4dc;
L_7fb4c5: /* 7fb4c5: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* 7fb4cb: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7fb4cf: nop  */
L_7fb4d0: /* 7fb4d0: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fb4d2: je 0x7fb4df */
  if (zf) goto L_7fb4df;
L_7fb4d4: /* 7fb4d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fb4d5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7fb4d8: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fb4da: jl 0x7fb4d0 */
  if ((sf != of)) goto L_7fb4d0;
L_7fb4dc: /* 7fb4dc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_7fb4df: /* 7fb4df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb4e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7fb500(void) {
  LOAD_REGS();
L_7fb500: /* 7fb500: mov ecx, dword ptr [ecx + 0x5c] */
  ecx = R32((uint32_t)(ecx + 0x5cu));
/* 7fb503: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb505: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb506: je 0x7fb524 */
  if (zf) goto L_7fb524;
L_7fb508: /* 7fb508: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 7fb50b: xor eax, eax */
  eax = 0;
/* 7fb50d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7fb50f: jle 0x7fb524 */
  if ((zf || sf != of)) goto L_7fb524;
L_7fb511: /* 7fb511: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 7fb514: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
L_7fb518: /* 7fb518: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fb51a: je 0x7fb527 */
  if (zf) goto L_7fb527;
L_7fb51c: /* 7fb51c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fb51d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7fb520: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fb522: jl 0x7fb518 */
  if ((sf != of)) goto L_7fb518;
L_7fb524: /* 7fb524: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_7fb527: /* 7fb527: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb528: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fb540(void) {
  LOAD_REGS();
L_7fb540: /* 7fb540: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fb541: mov ebp, esp */
  ebp = esp;
/* 7fb543: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb545: push 0x9d1ae0 */
  { uint32_t v = 0x9d1ae0u; esp -= 4; W32(esp, v); }
/* 7fb54a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fb550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fb551: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fb558: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fb55b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fb55c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb55d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7fb560: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb562: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fb563: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fb566: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fb56d: jne 0x7fb584 */
  if (!zf) goto L_7fb584;
L_7fb56f: /* 7fb56f: xor eax, eax */
  eax = 0;
/* 7fb571: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fb574: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fb57b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fb57c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb57d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fb57e: mov esp, ebp */
  esp = ebp;
/* 7fb580: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fb581: ret 8 */
  esp += 12; SPILL(); return;
L_7fb584: /* 7fb584: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7fb587: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fb588: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb589: call 0x6c8706 */
  esp -= 4; W32(esp, 0x7fb58eu); SPILL(); f_6c8706(); if (g_unwind) return; RELOAD();
/* 7fb58e: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 7fb594: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7fb595: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fb597: jge 0x7fb5b6 */
  if ((sf == of)) goto L_7fb5b6;
L_7fb599: /* 7fb599: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 7fb59f: mov eax, dword ptr [edx + eax*4 + 4] */
  eax = R32((uint32_t)(edx + eax*4 + 0x4u));
/* 7fb5a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fb5a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fb5ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fb5ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb5af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fb5b0: mov esp, ebp */
  esp = ebp;
/* 7fb5b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fb5b3: ret 8 */
  esp += 12; SPILL(); return;
L_7fb5b6: /* 7fb5b6: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7fb5bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fb5bf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7fb5c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fb5c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb5c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fb5ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fb5cb: mov esp, ebp */
  esp = ebp;
/* 7fb5cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fb5ce: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7fb5d1(void) {
  LOAD_REGS();
L_7fb5d1: /* 7fb5d1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fb5d4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fb5d9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7fb5dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fb5dd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7fb5e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fb5e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fb5e5(); return;
}

void f_7fb5e5(void) {
  LOAD_REGS();
L_7fb5e5: /* 7fb5e5: push 0xa1235c */
  { uint32_t v = 0xa1235cu; esp -= 4; W32(esp, v); }
/* 7fb5ea: push 0xae0938 */
  { uint32_t v = 0xae0938u; esp -= 4; W32(esp, v); }
/* 7fb5ef: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fb5f5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fb5f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb5f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb5fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb5fc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fb601u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fb601: guest_badaddr(0x7fb601); return;
}

void f_7fb650(void) {
  LOAD_REGS();
L_7fb650: /* 7fb650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fb651: mov ebp, esp */
  ebp = esp;
/* 7fb653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb655: push 0x9d1af0 */
  { uint32_t v = 0x9d1af0u; esp -= 4; W32(esp, v); }
/* 7fb65a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fb660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fb661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fb668: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fb66b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fb66c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb66d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7fb670: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb672: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fb673: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fb676: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fb67d: jne 0x7fb694 */
  if (!zf) goto L_7fb694;
L_7fb67f: /* 7fb67f: xor eax, eax */
  eax = 0;
/* 7fb681: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fb684: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fb68b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fb68c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb68d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fb68e: mov esp, ebp */
  esp = ebp;
/* 7fb690: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fb691: ret 8 */
  esp += 12; SPILL(); return;
L_7fb694: /* 7fb694: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7fb697: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fb698: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb699: call 0x6c8706 */
  esp -= 4; W32(esp, 0x7fb69eu); SPILL(); f_6c8706(); if (g_unwind) return; RELOAD();
/* 7fb69e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7fb6a0: jle 0x7fb6bf */
  if ((zf || sf != of)) goto L_7fb6bf;
L_7fb6a2: /* 7fb6a2: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7fb6a8: mov eax, dword ptr [ecx + eax*4 - 4] */
  eax = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* 7fb6ac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fb6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fb6b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fb6b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb6b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fb6b9: mov esp, ebp */
  esp = ebp;
/* 7fb6bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fb6bc: ret 8 */
  esp += 12; SPILL(); return;
L_7fb6bf: /* 7fb6bf: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* 7fb6c5: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7fb6cb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fb6ce: mov eax, dword ptr [eax + edx*4 - 4] */
  eax = R32((uint32_t)(eax + edx*4 + 0xfffffffcu));
/* 7fb6d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fb6d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb6d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fb6db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fb6dc: mov esp, ebp */
  esp = ebp;
/* 7fb6de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fb6df: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7fb6e2(void) {
  LOAD_REGS();
L_7fb6e2: /* 7fb6e2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fb6e5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fb6ea: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7fb6ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fb6ee: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7fb6f1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fb6f6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fb6f6(); return;
}

void f_7fb6f6(void) {
  LOAD_REGS();
L_7fb6f6: /* 7fb6f6: push 0xa123a4 */
  { uint32_t v = 0xa123a4u; esp -= 4; W32(esp, v); }
/* 7fb6fb: push 0xae0948 */
  { uint32_t v = 0xae0948u; esp -= 4; W32(esp, v); }
/* 7fb700: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fb706u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fb706: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb709: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb70b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb70d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fb712u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fb712: guest_badaddr(0x7fb712); return;
}

void f_7fb760(void) {
  LOAD_REGS();
L_7fb760: /* 7fb760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb761: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7fb765: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb767: je 0x7fb77e */
  if (zf) goto L_7fb77e;
L_7fb769: /* 7fb769: push 0xcda028 */
  { uint32_t v = 0xcda028u; esp -= 4; W32(esp, v); }
/* 7fb76e: mov ecx, esi */
  ecx = esi;
/* 7fb770: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fb776u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fb776: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb778: je 0x7fb77e */
  if (zf) goto L_7fb77e;
L_7fb77a: /* 7fb77a: mov eax, esi */
  eax = esi;
/* 7fb77c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb77d: ret  */
  esp += 4; SPILL(); return;
L_7fb77e: /* 7fb77e: xor eax, eax */
  eax = 0;
/* 7fb780: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb781: ret  */
  esp += 4; SPILL(); return;
}

void f_7fb7a0(void) {
  LOAD_REGS();
L_7fb7a0: /* 7fb7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb7a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7fb7a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb7a7: je 0x7fb7be */
  if (zf) goto L_7fb7be;
L_7fb7a9: /* 7fb7a9: push 0xcdba18 */
  { uint32_t v = 0xcdba18u; esp -= 4; W32(esp, v); }
/* 7fb7ae: mov ecx, esi */
  ecx = esi;
/* 7fb7b0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fb7b6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fb7b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb7b8: je 0x7fb7be */
  if (zf) goto L_7fb7be;
L_7fb7ba: /* 7fb7ba: mov eax, esi */
  eax = esi;
/* 7fb7bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb7bd: ret  */
  esp += 4; SPILL(); return;
L_7fb7be: /* 7fb7be: xor eax, eax */
  eax = 0;
/* 7fb7c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb7c1: ret  */
  esp += 4; SPILL(); return;
}

void f_7fb7e0(void) {
  LOAD_REGS();
L_7fb7e0: /* 7fb7e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb7e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7fb7e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb7e7: je 0x7fb7fe */
  if (zf) goto L_7fb7fe;
L_7fb7e9: /* 7fb7e9: push 0xcdb4e8 */
  { uint32_t v = 0xcdb4e8u; esp -= 4; W32(esp, v); }
/* 7fb7ee: mov ecx, esi */
  ecx = esi;
/* 7fb7f0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fb7f6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fb7f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb7f8: je 0x7fb7fe */
  if (zf) goto L_7fb7fe;
L_7fb7fa: /* 7fb7fa: mov eax, esi */
  eax = esi;
/* 7fb7fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb7fd: ret  */
  esp += 4; SPILL(); return;
L_7fb7fe: /* 7fb7fe: xor eax, eax */
  eax = 0;
/* 7fb800: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fb801: ret  */
  esp += 4; SPILL(); return;
}

void f_7fb820(void) {
  LOAD_REGS();
L_7fb820: /* 7fb820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fb821: mov ebp, esp */
  ebp = esp;
/* 7fb823: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb825: push 0x9d1b00 */
  { uint32_t v = 0x9d1b00u; esp -= 4; W32(esp, v); }
/* 7fb82a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fb830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fb831: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fb838: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fb83b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fb83c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fb83d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fb83e: mov edi, dword ptr [0xcfa8a4] */
  edi = R32((uint32_t)(0xcfa8a4u));
/* 7fb844: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fb847: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb849: push 0xae0638 */
  { uint32_t v = 0xae0638u; esp -= 4; W32(esp, v); }
/* 7fb84e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb850: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb855: mov ebx, ecx */
  ebx = ecx;
/* 7fb857: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fb85e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7fb860u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fb860: mov esi, eax */
  esi = eax;
/* 7fb862: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb865: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb867: je 0x7fb87a */
  if (zf) goto L_7fb87a;
L_7fb869: /* 7fb869: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb86e: mov ecx, esi */
  ecx = esi;
/* 7fb870: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fb876u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fb876: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb878: jne 0x7fb87c */
  if (!zf) goto L_7fb87c;
L_7fb87a: /* 7fb87a: xor esi, esi */
  esi = 0;
L_7fb87c: /* 7fb87c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb87e: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 7fb881: jne 0x7fb898 */
  if (!zf) goto L_7fb898;
L_7fb883: /* 7fb883: push 0x23 */
  { uint32_t v = 0x23u; esp -= 4; W32(esp, v); }
/* 7fb885: push 0xae0660 */
  { uint32_t v = 0xae0660u; esp -= 4; W32(esp, v); }
/* 7fb88a: push 0xae0674 */
  { uint32_t v = 0xae0674u; esp -= 4; W32(esp, v); }
/* 7fb88f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fb895u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fb895: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fb898: /* 7fb898: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb89a: push 0xae0680 */
  { uint32_t v = 0xae0680u; esp -= 4; W32(esp, v); }
/* 7fb89f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb8a1: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb8a6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7fb8a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fb8a8: mov esi, eax */
  esi = eax;
/* 7fb8aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb8ad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb8af: je 0x7fb8c2 */
  if (zf) goto L_7fb8c2;
L_7fb8b1: /* 7fb8b1: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb8b6: mov ecx, esi */
  ecx = esi;
/* 7fb8b8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fb8beu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fb8be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb8c0: jne 0x7fb8c4 */
  if (!zf) goto L_7fb8c4;
L_7fb8c2: /* 7fb8c2: xor esi, esi */
  esi = 0;
L_7fb8c4: /* 7fb8c4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb8c6: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 7fb8c9: jne 0x7fb8e0 */
  if (!zf) goto L_7fb8e0;
L_7fb8cb: /* 7fb8cb: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7fb8cd: push 0xae06ac */
  { uint32_t v = 0xae06acu; esp -= 4; W32(esp, v); }
/* 7fb8d2: push 0xae06c0 */
  { uint32_t v = 0xae06c0u; esp -= 4; W32(esp, v); }
/* 7fb8d7: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fb8ddu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fb8dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fb8e0: /* 7fb8e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb8e2: push 0xae06cc */
  { uint32_t v = 0xae06ccu; esp -= 4; W32(esp, v); }
/* 7fb8e7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb8e9: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb8ee: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7fb8f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fb8f0: mov esi, eax */
  esi = eax;
/* 7fb8f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb8f5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb8f7: je 0x7fb90a */
  if (zf) goto L_7fb90a;
L_7fb8f9: /* 7fb8f9: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb8fe: mov ecx, esi */
  ecx = esi;
/* 7fb900: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fb906u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fb906: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb908: jne 0x7fb90c */
  if (!zf) goto L_7fb90c;
L_7fb90a: /* 7fb90a: xor esi, esi */
  esi = 0;
L_7fb90c: /* 7fb90c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb90e: mov dword ptr [ebx + 0xc], esi */
  W32((uint32_t)(ebx + 0xcu), esi);
/* 7fb911: jne 0x7fb928 */
  if (!zf) goto L_7fb928;
L_7fb913: /* 7fb913: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* 7fb915: push 0xae0704 */
  { uint32_t v = 0xae0704u; esp -= 4; W32(esp, v); }
/* 7fb91a: push 0xae0718 */
  { uint32_t v = 0xae0718u; esp -= 4; W32(esp, v); }
/* 7fb91f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fb925u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fb925: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fb928: /* 7fb928: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb92a: push 0xae0724 */
  { uint32_t v = 0xae0724u; esp -= 4; W32(esp, v); }
/* 7fb92f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb931: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb936: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7fb938u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fb938: mov esi, eax */
  esi = eax;
/* 7fb93a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb93d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb93f: je 0x7fb952 */
  if (zf) goto L_7fb952;
L_7fb941: /* 7fb941: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb946: mov ecx, esi */
  ecx = esi;
/* 7fb948: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fb94eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fb94e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb950: jne 0x7fb954 */
  if (!zf) goto L_7fb954;
L_7fb952: /* 7fb952: xor esi, esi */
  esi = 0;
L_7fb954: /* 7fb954: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb956: mov dword ptr [ebx + 0x10], esi */
  W32((uint32_t)(ebx + 0x10u), esi);
/* 7fb959: jne 0x7fb970 */
  if (!zf) goto L_7fb970;
L_7fb95b: /* 7fb95b: push 0x26 */
  { uint32_t v = 0x26u; esp -= 4; W32(esp, v); }
/* 7fb95d: push 0xae0754 */
  { uint32_t v = 0xae0754u; esp -= 4; W32(esp, v); }
/* 7fb962: push 0xae0768 */
  { uint32_t v = 0xae0768u; esp -= 4; W32(esp, v); }
/* 7fb967: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fb96du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fb96d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fb970: /* 7fb970: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb972: push 0xae0778 */
  { uint32_t v = 0xae0778u; esp -= 4; W32(esp, v); }
/* 7fb977: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb979: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb97e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7fb980u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fb980: mov esi, eax */
  esi = eax;
/* 7fb982: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb985: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb987: je 0x7fb99a */
  if (zf) goto L_7fb99a;
L_7fb989: /* 7fb989: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb98e: mov ecx, esi */
  ecx = esi;
/* 7fb990: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fb996u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fb996: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb998: jne 0x7fb99c */
  if (!zf) goto L_7fb99c;
L_7fb99a: /* 7fb99a: xor esi, esi */
  esi = 0;
L_7fb99c: /* 7fb99c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb99e: mov dword ptr [ebx + 0x14], esi */
  W32((uint32_t)(ebx + 0x14u), esi);
/* 7fb9a1: jne 0x7fb9b8 */
  if (!zf) goto L_7fb9b8;
L_7fb9a3: /* 7fb9a3: push 0x27 */
  { uint32_t v = 0x27u; esp -= 4; W32(esp, v); }
/* 7fb9a5: push 0xae07a8 */
  { uint32_t v = 0xae07a8u; esp -= 4; W32(esp, v); }
/* 7fb9aa: push 0xae07bc */
  { uint32_t v = 0xae07bcu; esp -= 4; W32(esp, v); }
/* 7fb9af: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fb9b5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fb9b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fb9b8: /* 7fb9b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fb9ba: push 0xae07cc */
  { uint32_t v = 0xae07ccu; esp -= 4; W32(esp, v); }
/* 7fb9bf: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fb9c1: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb9c6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7fb9c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fb9c8: mov esi, eax */
  esi = eax;
/* 7fb9ca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fb9cd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb9cf: je 0x7fb9e2 */
  if (zf) goto L_7fb9e2;
L_7fb9d1: /* 7fb9d1: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fb9d6: mov ecx, esi */
  ecx = esi;
/* 7fb9d8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fb9deu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fb9de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb9e0: jne 0x7fb9e4 */
  if (!zf) goto L_7fb9e4;
L_7fb9e2: /* 7fb9e2: xor esi, esi */
  esi = 0;
L_7fb9e4: /* 7fb9e4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fb9e6: mov dword ptr [ebx + 0x18], esi */
  W32((uint32_t)(ebx + 0x18u), esi);
/* 7fb9e9: jne 0x7fba00 */
  if (!zf) goto L_7fba00;
L_7fb9eb: /* 7fb9eb: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7fb9ed: push 0xae07f4 */
  { uint32_t v = 0xae07f4u; esp -= 4; W32(esp, v); }
/* 7fb9f2: push 0xae0808 */
  { uint32_t v = 0xae0808u; esp -= 4; W32(esp, v); }
/* 7fb9f7: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fb9fdu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fb9fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fba00: /* 7fba00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fba02: push 0xae0814 */
  { uint32_t v = 0xae0814u; esp -= 4; W32(esp, v); }
/* 7fba07: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fba09: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fba0e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7fba10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fba10: mov esi, eax */
  esi = eax;
/* 7fba12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fba15: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fba17: je 0x7fba2a */
  if (zf) goto L_7fba2a;
L_7fba19: /* 7fba19: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fba1e: mov ecx, esi */
  ecx = esi;
/* 7fba20: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fba26u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fba26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fba28: jne 0x7fba2c */
  if (!zf) goto L_7fba2c;
L_7fba2a: /* 7fba2a: xor esi, esi */
  esi = 0;
L_7fba2c: /* 7fba2c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fba2e: mov dword ptr [ebx + 0x1c], esi */
  W32((uint32_t)(ebx + 0x1cu), esi);
/* 7fba31: jne 0x7fba48 */
  if (!zf) goto L_7fba48;
L_7fba33: /* 7fba33: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 7fba35: push 0xae083c */
  { uint32_t v = 0xae083cu; esp -= 4; W32(esp, v); }
/* 7fba3a: push 0xae0850 */
  { uint32_t v = 0xae0850u; esp -= 4; W32(esp, v); }
/* 7fba3f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fba45u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fba45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fba48: /* 7fba48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fba4a: push 0xae085c */
  { uint32_t v = 0xae085cu; esp -= 4; W32(esp, v); }
/* 7fba4f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fba51: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fba56: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7fba58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fba58: mov esi, eax */
  esi = eax;
/* 7fba5a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fba5d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fba5f: je 0x7fba72 */
  if (zf) goto L_7fba72;
L_7fba61: /* 7fba61: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fba66: mov ecx, esi */
  ecx = esi;
/* 7fba68: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fba6eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fba70: jne 0x7fba74 */
  if (!zf) goto L_7fba74;
L_7fba72: /* 7fba72: xor esi, esi */
  esi = 0;
L_7fba74: /* 7fba74: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fba76: mov dword ptr [ebx + 0x20], esi */
  W32((uint32_t)(ebx + 0x20u), esi);
/* 7fba79: jne 0x7fba90 */
  if (!zf) goto L_7fba90;
L_7fba7b: /* 7fba7b: push 0x2a */
  { uint32_t v = 0x2au; esp -= 4; W32(esp, v); }
/* 7fba7d: push 0xae0888 */
  { uint32_t v = 0xae0888u; esp -= 4; W32(esp, v); }
/* 7fba82: push 0xae089c */
  { uint32_t v = 0xae089cu; esp -= 4; W32(esp, v); }
/* 7fba87: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fba8du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fba8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fba90: /* 7fba90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fba92: push 0xae08ac */
  { uint32_t v = 0xae08acu; esp -= 4; W32(esp, v); }
/* 7fba97: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fba99: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fba9e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7fbaa0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fbaa0: mov esi, eax */
  esi = eax;
/* 7fbaa2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fbaa5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbaa7: je 0x7fbaba */
  if (zf) goto L_7fbaba;
L_7fbaa9: /* 7fbaa9: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7fbaae: mov ecx, esi */
  ecx = esi;
/* 7fbab0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fbab6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fbab6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbab8: jne 0x7fbabc */
  if (!zf) goto L_7fbabc;
L_7fbaba: /* 7fbaba: xor esi, esi */
  esi = 0;
L_7fbabc: /* 7fbabc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbabe: mov dword ptr [ebx + 0x24], esi */
  W32((uint32_t)(ebx + 0x24u), esi);
/* 7fbac1: jne 0x7fbad8 */
  if (!zf) goto L_7fbad8;
L_7fbac3: /* 7fbac3: push 0x2b */
  { uint32_t v = 0x2bu; esp -= 4; W32(esp, v); }
/* 7fbac5: push 0xae08e0 */
  { uint32_t v = 0xae08e0u; esp -= 4; W32(esp, v); }
/* 7fbaca: push 0xae08f4 */
  { uint32_t v = 0xae08f4u; esp -= 4; W32(esp, v); }
/* 7fbacf: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fbad5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fbad5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fbad8: /* 7fbad8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fbadb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fbadc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fbadd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fbae4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fbae5: mov esp, ebp */
  esp = ebp;
/* 7fbae7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fbae8: ret  */
  esp += 4; SPILL(); return;
}

void f_7fbae9(void) {
  LOAD_REGS();
L_7fbae9: /* 7fbae9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fbaec: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fbaf1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7fbaf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fbaf5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7fbaf8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fbafdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fbafd(); return;
}

void f_7fbafd(void) {
  LOAD_REGS();
L_7fbafd: /* 7fbafd: push 0xa123ec */
  { uint32_t v = 0xa123ecu; esp -= 4; W32(esp, v); }
/* 7fbb02: push 0xae0908 */
  { uint32_t v = 0xae0908u; esp -= 4; W32(esp, v); }
/* 7fbb07: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fbb0du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fbb0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fbb10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fbb12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fbb14: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fbb19u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fbb19: guest_badaddr(0x7fbb19); return;
}

void f_7fbbe0(void) {
  LOAD_REGS();
L_7fbbe0: /* 7fbbe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fbbe1: mov ebp, esp */
  ebp = esp;
/* 7fbbe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fbbe5: push 0x9d1b10 */
  { uint32_t v = 0x9d1b10u; esp -= 4; W32(esp, v); }
/* 7fbbea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fbbf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fbbf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fbbf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fbbfb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7fbbfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fbbff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fbc00: mov esi, ecx */
  esi = ecx;
/* 7fbc02: xor ecx, ecx */
  ecx = 0;
/* 7fbc04: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fbc06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fbc07: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fbc0a: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 7fbc0d: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 7fbc10: je 0x7fbc38 */
  if (zf) goto L_7fbc38;
L_7fbc12: /* 7fbc12: cmp dword ptr [eax + 0x340], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x340u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fbc18: je 0x7fbc38 */
  if (zf) goto L_7fbc38;
L_7fbc1a: /* 7fbc1a: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7fbc20: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7fbc22: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fbc24: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 7fbc27: je 0x7fbc3b */
  if (zf) goto L_7fbc3b;
L_7fbc29: /* 7fbc29: cmp dword ptr [eax + 0x40], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fbc2c: je 0x7fbc3b */
  if (zf) goto L_7fbc3b;
L_7fbc2e: /* 7fbc2e: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7fbc31: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fbc33: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 7fbc36: jmp 0x7fbc3e */
  goto L_7fbc3e;
L_7fbc38: /* 7fbc38: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
L_7fbc3b: /* 7fbc3b: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
L_7fbc3e: /* 7fbc3e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7fbc41: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fbc43: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7fbc48: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fbc4a: push 0x37 */
  { uint32_t v = 0x37u; esp -= 4; W32(esp, v); }
/* 7fbc4c: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x7fbc52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fbc52: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 7fbc55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fbc58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fbc59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fbc5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fbc61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fbc62: mov esp, ebp */
  esp = ebp;
/* 7fbc64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fbc65: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7fbc68(void) {
  LOAD_REGS();
L_7fbc68: /* 7fbc68: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fbc6b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fbc70: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7fbc73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fbc74: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7fbc77: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fbc7cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fbc7c(); return;
}

void f_7fbc7c(void) {
  LOAD_REGS();
L_7fbc7c: /* 7fbc7c: push 0xa1241c */
  { uint32_t v = 0xa1241cu; esp -= 4; W32(esp, v); }
/* 7fbc81: push 0xae0918 */
  { uint32_t v = 0xae0918u; esp -= 4; W32(esp, v); }
/* 7fbc86: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fbc8cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fbc8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fbc8f: xor ecx, ecx */
  ecx = 0;
/* 7fbc91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fbc92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fbc93: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fbc98u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fbc98: guest_badaddr(0x7fbc98); return;
}

void f_7fbcd0(void) {
  LOAD_REGS();
L_7fbcd0: /* 7fbcd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fbcd1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7fbcd5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbcd7: je 0x7fbd0e */
  if (zf) goto L_7fbd0e;
L_7fbcd9: /* 7fbcd9: push 0xcdba18 */
  { uint32_t v = 0xcdba18u; esp -= 4; W32(esp, v); }
/* 7fbcde: mov ecx, esi */
  ecx = esi;
/* 7fbce0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fbce6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fbce6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbce8: je 0x7fbcf0 */
  if (zf) goto L_7fbcf0;
L_7fbcea: /* 7fbcea: xor eax, eax */
  eax = 0;
/* 7fbcec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fbced: ret 4 */
  esp += 8; SPILL(); return;
L_7fbcf0: /* 7fbcf0: push 0xcdb4e8 */
  { uint32_t v = 0xcdb4e8u; esp -= 4; W32(esp, v); }
/* 7fbcf5: mov ecx, esi */
  ecx = esi;
/* 7fbcf7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fbcfdu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fbcfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbcff: je 0x7fbd0e */
  if (zf) goto L_7fbd0e;
L_7fbd01: /* 7fbd01: mov eax, esi */
  eax = esi;
/* 7fbd03: movzx eax, byte ptr [eax + 0x88] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x88u)));
/* 7fbd0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fbd0b: ret 4 */
  esp += 8; SPILL(); return;
L_7fbd0e: /* 7fbd0e: xor eax, eax */
  eax = 0;
/* 7fbd10: movzx eax, byte ptr [eax + 0x88] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x88u)));
/* 7fbd17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fbd18: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fbd40(void) {
  LOAD_REGS();
L_7fbd40: /* 7fbd40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fbd41: mov ebp, esp */
  ebp = esp;
/* 7fbd43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fbd45: push 0x9d1b20 */
  { uint32_t v = 0x9d1b20u; esp -= 4; W32(esp, v); }
/* 7fbd4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fbd50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fbd51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fbd58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fbd5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fbd5c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7fbd5f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbd61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fbd62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fbd63: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fbd66: mov edi, ecx */
  edi = ecx;
/* 7fbd68: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fbd6f: jne 0x7fbd86 */
  if (!zf) goto L_7fbd86;
L_7fbd71: /* 7fbd71: xor eax, eax */
  eax = 0;
/* 7fbd73: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fbd76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fbd7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fbd7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fbd7f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fbd80: mov esp, ebp */
  esp = ebp;
/* 7fbd82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fbd83: ret 8 */
  esp += 12; SPILL(); return;
L_7fbd86: /* 7fbd86: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7fbd89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_7fbd8a: /* 7fbd8a: mov ecx, edi */
  ecx = edi;
/* 7fbd8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fbd8d: call 0x6ca5d8 */
  esp -= 4; W32(esp, 0x7fbd92u); SPILL(); f_6ca5d8(); if (g_unwind) return; RELOAD();
/* 7fbd92: mov esi, eax */
  esi = eax;
/* 7fbd94: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbd96: je 0x7fbda9 */
  if (zf) goto L_7fbda9;
L_7fbd98: /* 7fbd98: push 0xcdb4e8 */
  { uint32_t v = 0xcdb4e8u; esp -= 4; W32(esp, v); }
/* 7fbd9d: mov ecx, esi */
  ecx = esi;
/* 7fbd9f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fbda5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fbda5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbda7: jne 0x7fbdaf */
  if (!zf) goto L_7fbdaf;
L_7fbda9: /* 7fbda9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7fbdac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fbdad: jmp 0x7fbd8a */
  goto L_7fbd8a;
L_7fbdaf: /* 7fbdaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fbdb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fbdb3: mov eax, esi */
  eax = esi;
/* 7fbdb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fbdb6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fbdbd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fbdbe: mov esp, ebp */
  esp = ebp;
/* 7fbdc0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fbdc1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7fbdc4(void) {
  LOAD_REGS();
L_7fbdc4: /* 7fbdc4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fbdc7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fbdcc: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7fbdcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fbdd0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7fbdd3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fbdd8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fbdd8(); return;
}

void f_7fbdd8(void) {
  LOAD_REGS();
L_7fbdd8: /* 7fbdd8: push 0xa12460 */
  { uint32_t v = 0xa12460u; esp -= 4; W32(esp, v); }
/* 7fbddd: push 0xae0940 */
  { uint32_t v = 0xae0940u; esp -= 4; W32(esp, v); }
/* 7fbde2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fbde8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fbde8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fbdeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fbded: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fbdef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fbdf4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fbdf4: guest_badaddr(0x7fbdf4); return;
}

void f_7fbe30(void) {
  LOAD_REGS();
L_7fbe30: /* 7fbe30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fbe31: mov ebp, esp */
  ebp = esp;
/* 7fbe33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fbe35: push 0x9d1b39 */
  { uint32_t v = 0x9d1b39u; esp -= 4; W32(esp, v); }
/* 7fbe3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fbe40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fbe41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fbe48: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fbe4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fbe4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fbe4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fbe4e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fbe51: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7fbe54: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7fbe57: xor edi, edi */
  edi = 0;
/* 7fbe59: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7fbe5c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fbe60: mov dword ptr [ecx + 0x40], edi */
  W32((uint32_t)(ecx + 0x40u), edi);
L_7fbe63: /* 7fbe63: cmp edi, dword ptr [ebx + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fbe66: jge 0x7fbed8 */
  if ((sf == of)) goto L_7fbed8;
L_7fbe68: /* 7fbe68: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7fbe6b: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7fbe6e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbe70: je 0x7fbed5 */
  if (zf) goto L_7fbed5;
L_7fbe72: /* 7fbe72: push 0xcda028 */
  { uint32_t v = 0xcda028u; esp -= 4; W32(esp, v); }
/* 7fbe77: mov ecx, esi */
  ecx = esi;
/* 7fbe79: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fbe7fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fbe7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbe81: je 0x7fbed5 */
  if (zf) goto L_7fbed5;
L_7fbe83: /* 7fbe83: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 7fbe89: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x7fbe8fu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 7fbe8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fbe90: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 7fbe93: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x7fbe99u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 7fbe99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbe9b: je 0x7fbed5 */
  if (zf) goto L_7fbed5;
L_7fbe9d: /* 7fbe9d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7fbea0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fbea3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fbea4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fbea5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fbea6: mov dword ptr [ecx + 0x40], esi */
  W32((uint32_t)(ecx + 0x40u), esi);
/* 7fbea9: call 0x6c36a2 */
  esp -= 4; W32(esp, 0x7fbeaeu); SPILL(); f_6c36a2(); if (g_unwind) return; RELOAD();
/* 7fbeae: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 7fbeb1: mov esi, eax */
  esi = eax;
/* 7fbeb3: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7fbeba: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7fbec0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7fbec0: mov eax, esi */
  eax = esi;
/* 7fbec2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fbec5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fbecc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fbecd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fbece: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fbecf: mov esp, ebp */
  esp = ebp;
/* 7fbed1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fbed2: ret 0x14 */
  esp += 24; SPILL(); return;
L_7fbed5: /* 7fbed5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7fbed6: jmp 0x7fbe63 */
  goto L_7fbe63;
L_7fbed8: /* 7fbed8: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 7fbedb: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 7fbee2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7fbee8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7fbee8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fbeeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fbeec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fbeed: xor eax, eax */
  eax = 0;
/* 7fbeef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fbef6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fbef7: mov esp, ebp */
  esp = ebp;
/* 7fbef9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fbefa: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7fbefd(void) {
  LOAD_REGS();
L_7fbefd: /* 7fbefd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fbf00: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fbf05: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7fbf08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fbf09: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7fbf0c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fbf11u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fbf11(); return;
}

void f_7fbf11(void) {
  LOAD_REGS();
L_7fbf11: /* 7fbf11: push 0xa124b8 */
  { uint32_t v = 0xa124b8u; esp -= 4; W32(esp, v); }
/* 7fbf16: push 0xae0910 */
  { uint32_t v = 0xae0910u; esp -= 4; W32(esp, v); }
/* 7fbf1b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fbf21u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fbf21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fbf24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fbf26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fbf28: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fbf2du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fbf2d: guest_badaddr(0x7fbf2d); return;
}

void f_7fbf70(void) {
  LOAD_REGS();
L_7fbf70: /* 7fbf70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fbf71: mov ebp, esp */
  ebp = esp;
/* 7fbf73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fbf75: push 0x9d1b58 */
  { uint32_t v = 0x9d1b58u; esp -= 4; W32(esp, v); }
/* 7fbf7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fbf80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fbf81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fbf88: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fbf8b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fbf8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fbf8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fbf90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fbf91: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7fbf94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fbf97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fbf98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fbf99: mov ebx, ecx */
  ebx = ecx;
/* 7fbf9b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fbfa2: call 0x6ca5d8 */
  esp -= 4; W32(esp, 0x7fbfa7u); SPILL(); f_6ca5d8(); if (g_unwind) return; RELOAD();
/* 7fbfa7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbfa9: mov esi, eax */
  esi = eax;
/* 7fbfab: je 0x7fc175 */
  if (zf) goto L_7fc175;
L_7fbfb1: /* 7fbfb1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbfb3: je 0x7fc175 */
  if (zf) goto L_7fc175;
L_7fbfb9: /* 7fbfb9: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fbfbb: je 0x7fc175 */
  if (zf) goto L_7fc175;
L_7fbfc1: /* 7fbfc1: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7fbfc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbfc6: je 0x7fc175 */
  if (zf) goto L_7fc175;
L_7fbfcc: /* 7fbfcc: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 7fbfcf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fbfd1: je 0x7fc175 */
  if (zf) goto L_7fc175;
L_7fbfd7: /* 7fbfd7: mov ecx, dword ptr [0xcfa1e0] */
  ecx = R32((uint32_t)(0xcfa1e0u));
/* 7fbfdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fbfde: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7fbfe0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7fbfe2: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 7fbfe5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fbfe6: call 0x6c7ad6 */
  esp -= 4; W32(esp, 0x7fbfebu); SPILL(); f_6c7ad6(); if (g_unwind) return; RELOAD();
/* 7fbfeb: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7fbfee: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fbff3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fbff5: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 7fbff8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7fbffb: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 7fbffe: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 7fc001: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7fc004: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7fc00a: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 7fc00d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fc00f: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7fc012: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fc015: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7fc018: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fc01b: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7fc01e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc01f: mov ecx, ebx */
  ecx = ebx;
/* 7fc021: call 0x6c851c */
  esp -= 4; W32(esp, 0x7fc026u); SPILL(); f_6c851c(); if (g_unwind) return; RELOAD();
/* 7fc026: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc028: jne 0x7fc0e4 */
  if (!zf) goto L_7fc0e4;
L_7fc02e: /* 7fc02e: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7fc031: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7fc034: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7fc037: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7fc03a: fsub dword ptr [ebp - 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7fc03d: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7fc040: fsub dword ptr [ebp - 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 7fc043: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7fc046: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7fc049: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7fc04c: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7fc052u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7fc052: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7fc055: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7fc058: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7fc05b: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 7fc05e: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7fc064u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7fc064: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7fc067: fmul dword ptr [0xa12538] */
  ST0 = ST0 * (F32((uint32_t)(0xa12538u)));
/* 7fc06d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7fc06f: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7fc072: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7fc074: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7fc077: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7fc07a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7fc07c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7fc07f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7fc082: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7fc084: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7fc087: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7fc089: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7fc08c: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 7fc08f: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7fc092: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 7fc095: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7fc098: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 7fc09b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7fc09e: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7fc0a1: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7fc0a4: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7fc0a7: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7fc0aa: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7fc0ad: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7fc0b0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fc0b3: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7fc0b6: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7fc0b9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7fc0bb: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7fc0be: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7fc0c1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7fc0c3: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7fc0c6: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7fc0c9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7fc0cb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7fc0ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7fc0d0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7fc0d3: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7fc0d6: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7fc0d9: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 7fc0dc: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7fc0df: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7fc0e2: jmp 0x7fc134 */
  goto L_7fc134;
L_7fc0e4: /* 7fc0e4: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7fc0e7: fld dword ptr [edi + 0x54] */
  { double v = F32((uint32_t)(edi + 0x54u)); FPUSH(v); }
/* 7fc0ea: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7fc0f0: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fc0f5: fld dword ptr [edi + 0x50] */
  { double v = F32((uint32_t)(edi + 0x50u)); FPUSH(v); }
/* 7fc0f8: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7fc0fb: fld dword ptr [edi + 0x4c] */
  { double v = F32((uint32_t)(edi + 0x4cu)); FPUSH(v); }
/* 7fc0fe: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7fc100: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7fc103: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7fc106: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7fc109: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 7fc10c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7fc10f: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7fc112: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7fc115: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fc118: fld dword ptr [esi + 0x60] */
  { double v = F32((uint32_t)(esi + 0x60u)); FPUSH(v); }
/* 7fc11b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fc120: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7fc123: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7fc126: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7fc129: fld dword ptr [esi + 0x5c] */
  { double v = F32((uint32_t)(esi + 0x5cu)); FPUSH(v); }
/* 7fc12c: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7fc12f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7fc131: fadd dword ptr [esi + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x58u)));
L_7fc134: /* 7fc134: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7fc137: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7fc13a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7fc13d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7fc140: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7fc143: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 7fc146: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7fc149: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fc14c: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7fc14f: mov dword ptr [ebp + 0xc], 0x9f4028 */
  W32((uint32_t)(ebp + 0xcu), 0x9f4028u);
/* 7fc156: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7fc159: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc15a: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 7fc15c: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7fc15f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fc160: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7fc163: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fc167: call 0x6c379c */
  esp -= 4; W32(esp, 0x7fc16cu); SPILL(); f_6c379c(); if (g_unwind) return; RELOAD();
/* 7fc16c: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7fc16f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7fc172: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
L_7fc175: /* 7fc175: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fc178: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fc179: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc17a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fc181: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fc182: mov esp, ebp */
  esp = ebp;
/* 7fc184: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fc185: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7fc188(void) {
  LOAD_REGS();
L_7fc188: /* 7fc188: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fc18b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fc190: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7fc193: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fc194: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7fc197: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fc19cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fc19c(); return;
}

void f_7fc19c(void) {
  LOAD_REGS();
L_7fc19c: /* 7fc19c: push 0xa124f8 */
  { uint32_t v = 0xa124f8u; esp -= 4; W32(esp, v); }
/* 7fc1a1: push 0xae0930 */
  { uint32_t v = 0xae0930u; esp -= 4; W32(esp, v); }
/* 7fc1a6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fc1acu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fc1ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc1af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc1b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc1b3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fc1b8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fc1b8: guest_badaddr(0x7fc1b8); return;
}

void f_7fc260(void) {
  LOAD_REGS();
L_7fc260: /* 7fc260: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc261: mov esi, ecx */
  esi = ecx;
/* 7fc263: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7fc266: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7fc26cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7fc26c: mov eax, esi */
  eax = esi;
/* 7fc26e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc26f: ret  */
  esp += 4; SPILL(); return;
}

void f_7fc280(void) {
  LOAD_REGS();
L_7fc280: /* 7fc280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc281: mov esi, ecx */
  esi = ecx;
/* 7fc283: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7fc286: mov dword ptr [esi], 0xa064b8 */
  W32((uint32_t)(esi), 0xa064b8u);
/* 7fc28c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7fc292u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7fc292: xor eax, eax */
  eax = 0;
/* 7fc294: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 7fc297: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 7fc29a: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 7fc29d: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 7fc2a0: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 7fc2a3: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 7fc2a6: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 7fc2a9: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 7fc2ac: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 7fc2af: mov eax, esi */
  eax = esi;
/* 7fc2b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc2b2: ret  */
  esp += 4; SPILL(); return;
}

void f_7fc2d0(void) {
  LOAD_REGS();
L_7fc2d0: /* 7fc2d0: mov dword ptr [ecx], 0xa064b8 */
  W32((uint32_t)(ecx), 0xa064b8u);
/* 7fc2d6: add ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7fc2d9: jmp 0x6c900c */
  SPILL(); f_6c900c(); return;
}

void f_7fc2f0(void) {
  LOAD_REGS();
L_7fc2f0: /* 7fc2f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7fc2f4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7fc2f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc2f7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7fc2fdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7fc2fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fc310(void) {
  LOAD_REGS();
L_7fc310: /* 7fc310: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7fc314: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7fc316: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc317: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7fc31du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7fc31d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fc330(void) {
  LOAD_REGS();
L_7fc330: /* 7fc330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc331: mov esi, ecx */
  esi = ecx;
/* 7fc333: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc335: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7fc338: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 7fc33e: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fc344u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fc344: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 7fc34b: mov eax, esi */
  eax = esi;
/* 7fc34d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc34e: ret  */
  esp += 4; SPILL(); return;
}

void f_7fc360(void) {
  LOAD_REGS();
L_7fc360: /* 7fc360: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7fc364: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7fc368: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fc36a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fc36b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7fc36eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc36e: ret  */
  esp += 4; SPILL(); return;
}

void f_7fc380(void) {
  LOAD_REGS();
L_7fc380: /* 7fc380: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fc381: mov ebp, esp */
  ebp = esp;
/* 7fc383: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fc385: push 0x9d1b70 */
  { uint32_t v = 0x9d1b70u; esp -= 4; W32(esp, v); }
/* 7fc38a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fc390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc391: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fc398: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fc39b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fc39c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc39d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7fc3a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fc3a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fc3a4: mov edi, ecx */
  edi = ecx;
/* 7fc3a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc3a7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7fc3aa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fc3b1: call 0x6c974b */
  esp -= 4; W32(esp, 0x7fc3b6u); SPILL(); f_6c974b(); if (g_unwind) return; RELOAD();
/* 7fc3b6: mov ecx, esi */
  ecx = esi;
/* 7fc3b8: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x7fc3beu); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 7fc3be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc3c0: jne 0x7fc3cd */
  if (!zf) goto L_7fc3cd;
L_7fc3c2: /* 7fc3c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7fc3c4: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7fc3c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fc3c8: mov ecx, esi */
  ecx = esi;
/* 7fc3ca: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7fc3cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7fc3cd: /* 7fc3cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fc3d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fc3d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc3d2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fc3d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fc3da: mov esp, ebp */
  esp = ebp;
/* 7fc3dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fc3dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fc3e0(void) {
  LOAD_REGS();
L_7fc3e0: /* 7fc3e0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fc3e3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fc3e8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7fc3eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fc3ec: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7fc3ef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fc3f4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fc3f4(); return;
}

void f_7fc3f4(void) {
  LOAD_REGS();
L_7fc3f4: /* 7fc3f4: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7fc3fa: push 0xa1253c */
  { uint32_t v = 0xa1253cu; esp -= 4; W32(esp, v); }
/* 7fc3ff: push 0xae0a84 */
  { uint32_t v = 0xae0a84u; esp -= 4; W32(esp, v); }
/* 7fc404: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7fc406u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc406: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fc409: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc40c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc40e: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7fc414u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7fc414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc415: push 0xae0a8c */
  { uint32_t v = 0xae0a8cu; esp -= 4; W32(esp, v); }
/* 7fc41a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7fc41cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc41c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc41f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc421: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc423: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fc428u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fc428: guest_badaddr(0x7fc428); return;
}

void f_7fc460(void) {
  LOAD_REGS();
L_7fc460: /* 7fc460: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fc461: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fc462: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 7fc466: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc469: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fc46a: mov edi, ecx */
  edi = ecx;
/* 7fc46c: jne 0x7fc47e */
  if (!zf) goto L_7fc47e;
L_7fc46e: /* 7fc46e: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 7fc471: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc473: lea esi, [edi + 0x54] */
  esi = (uint32_t)(edi + 0x54u);
/* 7fc476: jne 0x7fc553 */
  if (!zf) goto L_7fc553;
L_7fc47c: /* 7fc47c: jmp 0x7fc4ee */
  goto L_7fc4ee;
L_7fc47e: /* 7fc47e: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 7fc484: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc487: je 0x7fc499 */
  if (zf) goto L_7fc499;
L_7fc489: /* 7fc489: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 7fc48c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc48e: lea esi, [edi + 0x54] */
  esi = (uint32_t)(edi + 0x54u);
/* 7fc491: jne 0x7fc553 */
  if (!zf) goto L_7fc553;
L_7fc497: /* 7fc497: jmp 0x7fc4ee */
  goto L_7fc4ee;
L_7fc499: /* 7fc499: mov ecx, dword ptr [ebp + 0xec] */
  ecx = R32((uint32_t)(ebp + 0xecu));
/* 7fc49f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc4a1: lea esi, [ebp + 0xec] */
  esi = (uint32_t)(ebp + 0xecu);
/* 7fc4a7: je 0x7fc4ee */
  if (zf) goto L_7fc4ee;
L_7fc4a9: /* 7fc4a9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fc4ab: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7fc4b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc4b1: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fc4b3: jne 0x7fc4c7 */
  if (!zf) goto L_7fc4c7;
L_7fc4b5: /* 7fc4b5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fc4b7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fc4b9: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7fc4bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc4bf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fc4c1: je 0x7fc551 */
  if (zf) goto L_7fc551;
L_7fc4c7: /* 7fc4c7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fc4c9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fc4cb: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x7fc4d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc4d1: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc4d3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fc4d5: jne 0x7fc4e4 */
  if (!zf) goto L_7fc4e4;
L_7fc4d7: /* 7fc4d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc4d9: je 0x7fc4ee */
  if (zf) goto L_7fc4ee;
L_7fc4db: /* 7fc4db: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fc4dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fc4df: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7fc4e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc4e2: jmp 0x7fc4ee */
  goto L_7fc4ee;
L_7fc4e4: /* 7fc4e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fc4e6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7fc4e8: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x7fc4eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7fc4ee: /* 7fc4ee: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7fc4f0: mov ecx, edi */
  ecx = edi;
/* 7fc4f2: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7fc4f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc4f8: mov ebx, eax */
  ebx = eax;
/* 7fc4fa: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc4fc: jne 0x7fc503 */
  if (!zf) goto L_7fc503;
L_7fc4fe: /* 7fc4fe: mov ebx, 0xb90920 */
  ebx = 0xb90920u;
L_7fc503: /* 7fc503: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7fc508: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fc50a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc50c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fc50d: mov ecx, ebx */
  ecx = ebx;
/* 7fc50f: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7fc515u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7fc515: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc516: push 0x84004 */
  { uint32_t v = 0x84004u; esp -= 4; W32(esp, v); }
/* 7fc51b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fc51c: mov ecx, esp */
  ecx = esp;
/* 7fc51e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc520: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fc526u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fc526: mov ecx, edi */
  ecx = edi;
/* 7fc528: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7fc52eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7fc52e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc52f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fc530: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7fc536u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7fc536: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc539: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7fc53b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7fc53d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fc53e: mov ecx, eax */
  ecx = eax;
/* 7fc540: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7fc546u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc546: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7fc548: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fc54a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fc54b: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7fc551u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7fc551: /* 7fc551: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
L_7fc553: /* 7fc553: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fc554: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc555: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fc556: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fc557: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fc5a0(void) {
  LOAD_REGS();
L_7fc5a0: /* 7fc5a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc5a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fc5a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7fc5a6: mov ecx, edi */
  ecx = edi;
/* 7fc5a8: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7fc5aeu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7fc5ae: cmp eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fc5b1: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 7fc5b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc5b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fc5b7: jge 0x7fc5d7 */
  if ((sf == of)) goto L_7fc5d7;
L_7fc5b9: /* 7fc5b9: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 7fc5c0: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x7fc5c6u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 7fc5c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7fc5c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc5cb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7fc5ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc5cf: mov ecx, eax */
  ecx = eax;
/* 7fc5d1: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x7fc5d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc5d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fc5d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc5d6: ret  */
  esp += 4; SPILL(); return;
L_7fc5d7: /* 7fc5d7: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x7fc5ddu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 7fc5dd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7fc5df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc5e2: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7fc5e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fc5e6: mov ecx, eax */
  ecx = eax;
/* 7fc5e8: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x7fc5ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc5eb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7fc5ed: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7fc5f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc5f1: mov ecx, eax */
  ecx = eax;
/* 7fc5f3: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7fc5f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc5f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fc5f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc5f8: ret  */
  esp += 4; SPILL(); return;
}

void f_7fc620(void) {
  LOAD_REGS();
L_7fc620: /* 7fc620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fc621: mov ebp, esp */
  ebp = esp;
/* 7fc623: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fc625: push 0x9d1b80 */
  { uint32_t v = 0x9d1b80u; esp -= 4; W32(esp, v); }
/* 7fc62a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fc630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc631: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fc638: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fc63b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fc63c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7fc63f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc640: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fc641: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7fc644: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fc647: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7fc649: xor esi, esi */
  esi = 0;
/* 7fc64b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fc64c: mov ecx, edi */
  ecx = edi;
/* 7fc64e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7fc651: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7fc657u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7fc657: mov ecx, ebx */
  ecx = ebx;
/* 7fc659: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7fc65fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7fc65f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fc661: je 0x7fc6b8 */
  if (zf) goto L_7fc6b8;
L_7fc663: /* 7fc663: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7fc666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc667: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fc668: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7fc66eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7fc66e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fc671: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc674: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fc675: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7fc677: mov ecx, edi */
  ecx = edi;
/* 7fc679: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7fc67fu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7fc67f: nop  */
L_7fc680: /* 7fc680: cmp esi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fc683: jge 0x7fc6db */
  if ((sf == of)) goto L_7fc6db;
L_7fc685: /* 7fc685: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7fc687: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fc689: mov ecx, edi */
  ecx = edi;
/* 7fc68b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7fc691u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7fc691: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7fc693: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7fc696: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc698: je 0x7fc6ab */
  if (zf) goto L_7fc6ab;
L_7fc69a: /* 7fc69a: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7fc6a0u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7fc6a0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7fc6a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc6a3: mov ecx, ebx */
  ecx = ebx;
/* 7fc6a5: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x7fc6a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc6a8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7fc6a9: jmp 0x7fc680 */
  goto L_7fc680;
L_7fc6ab: /* 7fc6ab: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7fc6ad: xor eax, eax */
  eax = 0;
/* 7fc6af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc6b0: mov ecx, ebx */
  ecx = ebx;
/* 7fc6b2: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x7fc6b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc6b5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7fc6b6: jmp 0x7fc680 */
  goto L_7fc680;
L_7fc6b8: /* 7fc6b8: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 7fc6bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc6bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fc6bd: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7fc6c3u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7fc6c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fc6c6: /* 7fc6c6: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fc6c9: jge 0x7fc6db */
  if ((sf == of)) goto L_7fc6db;
L_7fc6cb: /* 7fc6cb: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7fc6cd: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7fc6cf: lea edx, [ecx + esi*4] */
  edx = (uint32_t)(ecx + esi*4);
/* 7fc6d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fc6d3: mov ecx, ebx */
  ecx = ebx;
/* 7fc6d5: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x7fc6d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fc6d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7fc6d9: jmp 0x7fc6c6 */
  goto L_7fc6c6;
L_7fc6db: /* 7fc6db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fc6de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fc6df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc6e0: mov eax, ebx */
  eax = ebx;
/* 7fc6e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fc6e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fc6ea: mov esp, ebp */
  esp = ebp;
/* 7fc6ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fc6ed: ret  */
  esp += 4; SPILL(); return;
}

void f_7fc6ee(void) {
  LOAD_REGS();
L_7fc6ee: /* 7fc6ee: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fc6f1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fc6f6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7fc6f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fc6fa: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7fc6fd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fc702u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fc702(); return;
}

void f_7fc702(void) {
  LOAD_REGS();
L_7fc702: /* 7fc702: push 0xa12564 */
  { uint32_t v = 0xa12564u; esp -= 4; W32(esp, v); }
/* 7fc707: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7fc70c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fc712u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fc712: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc715: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc717: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc719: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fc71eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fc71e: guest_badaddr(0x7fc71e); return;
}

void f_7fc760(void) {
  LOAD_REGS();
L_7fc760: /* 7fc760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc761: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7fc765: push 0xce46b8 */
  { uint32_t v = 0xce46b8u; esp -= 4; W32(esp, v); }
/* 7fc76a: mov ecx, esi */
  ecx = esi;
/* 7fc76c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7fc772u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7fc772: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc774: jne 0x7fc78e */
  if (!zf) goto L_7fc78e;
L_7fc776: /* 7fc776: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7fc77b: push 0xae0ab0 */
  { uint32_t v = 0xae0ab0u; esp -= 4; W32(esp, v); }
/* 7fc780: push 0xae0af4 */
  { uint32_t v = 0xae0af4u; esp -= 4; W32(esp, v); }
/* 7fc785: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fc78bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fc78b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fc78e: /* 7fc78e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7fc792: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fc795: jne 0x7fc79d */
  if (!zf) goto L_7fc79d;
L_7fc797: /* 7fc797: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7fc79du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7fc79d: /* 7fc79d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7fc7a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fc7a5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7fc7a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc7ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fc7ac: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7fc7b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc7b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fc7b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fc7b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc7b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc7b6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7fc7bcu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7fc7bc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc7bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc7c0: ret  */
  esp += 4; SPILL(); return;
}
