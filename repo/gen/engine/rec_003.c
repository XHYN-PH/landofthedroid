#include "recomp.h"
#include "rec_mod.h"

void f_6e2b00(void) {
  LOAD_REGS();
L_6e2b00: /* 6e2b00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2b04: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2b20(void) {
  LOAD_REGS();
L_6e2b20: /* 6e2b20: mov eax, 0xb60d38 */
  eax = 0xb60d38u;
/* 6e2b25: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2b40(void) {
  LOAD_REGS();
L_6e2b40: /* 6e2b40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2b45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2b47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e2b4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e2b4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2b51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2b53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2b54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e2b58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2b5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e2b5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2b5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2b5d: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 6e2b62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e2b68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e2b68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e2b6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2b80(void) {
  LOAD_REGS();
L_6e2b80: /* 6e2b80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2b84: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2ba0(void) {
  LOAD_REGS();
L_6e2ba0: /* 6e2ba0: mov eax, dword ptr [0xb7e484] */
  eax = R32((uint32_t)(0xb7e484u));
/* 6e2ba5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2ba6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e2ba7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2ba9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2bab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2bad: mov esi, ecx */
  esi = ecx;
/* 6e2baf: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2bb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2bb2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2bb8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2bb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2bb9: mov ecx, esi */
  ecx = esi;
/* 6e2bbb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e2bbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e2bbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e2bbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2bc0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2be0(void) {
  LOAD_REGS();
L_6e2be0: /* 6e2be0: mov eax, dword ptr [0xb7e4e0] */
  eax = R32((uint32_t)(0xb7e4e0u));
/* 6e2be5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2be6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e2be7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2be9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2bed: mov esi, ecx */
  esi = ecx;
/* 6e2bef: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2bf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2bf2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2bf8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2bf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2bf9: mov ecx, esi */
  ecx = esi;
/* 6e2bfb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e2bfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e2bfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e2bff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2c00: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2c20(void) {
  LOAD_REGS();
L_6e2c20: /* 6e2c20: mov eax, 0xb207f8 */
  eax = 0xb207f8u;
/* 6e2c25: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2c40(void) {
  LOAD_REGS();
L_6e2c40: /* 6e2c40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2c45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2c47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e2c4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e2c4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2c51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2c54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e2c58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2c5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e2c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2c5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2c5d: push 0xb207f8 */
  { uint32_t v = 0xb207f8u; esp -= 4; W32(esp, v); }
/* 6e2c62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e2c68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e2c68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e2c6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2c80(void) {
  LOAD_REGS();
L_6e2c80: /* 6e2c80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2c84: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2ca0(void) {
  LOAD_REGS();
L_6e2ca0: /* 6e2ca0: mov eax, 0xcc8cb8 */
  eax = 0xcc8cb8u;
/* 6e2ca5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2cc0(void) {
  LOAD_REGS();
L_6e2cc0: /* 6e2cc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2cc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2cc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e2ccb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e2ccf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2cd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2cd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2cd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e2cd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2cda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e2cdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2cdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2cdd: push 0xcc8cb8 */
  { uint32_t v = 0xcc8cb8u; esp -= 4; W32(esp, v); }
/* 6e2ce2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e2ce8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e2ce8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e2ceb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2d00(void) {
  LOAD_REGS();
L_6e2d00: /* 6e2d00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2d04: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2d20(void) {
  LOAD_REGS();
L_6e2d20: /* 6e2d20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2d21: mov esi, ecx */
  esi = ecx;
/* 6e2d23: call 0x6c45ed */
  esp -= 4; W32(esp, 0x6e2d28u); SPILL(); f_6c45ed(); if (g_unwind) return; RELOAD();
/* 6e2d28: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 6e2d2a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6e2d2c: mov ecx, esi */
  ecx = esi;
/* 6e2d2e: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x6e2d34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e2d34: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 6e2d36: mov ecx, esi */
  ecx = esi;
/* 6e2d38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2d39: jmp dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); SPILL(); call_ind(t); return; }
}

void f_6e2d50(void) {
  LOAD_REGS();
L_6e2d50: /* 6e2d50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2d51: mov esi, ecx */
  esi = ecx;
/* 6e2d53: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 6e2d55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2d57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2d59: call dword ptr [eax + 0x10c] */
  { uint32_t t = R32((uint32_t)(eax + 0x10cu)); esp -= 4; W32(esp, 0x6e2d5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e2d5f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 6e2d61: mov ecx, esi */
  ecx = esi;
/* 6e2d63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2d64: jmp dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); SPILL(); call_ind(t); return; }
}

void f_6e2d80(void) {
  LOAD_REGS();
L_6e2d80: /* 6e2d80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2d81: mov esi, ecx */
  esi = ecx;
/* 6e2d83: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 6e2d89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2d8a: lea ecx, [esi + 0x4bc] */
  ecx = (uint32_t)(esi + 0x4bcu);
/* 6e2d90: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x6e2d96u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 6e2d96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e2d98: je 0x6e2db1 */
  if (zf) goto L_6e2db1;
L_6e2d9a: /* 6e2d9a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 6e2d9c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6e2d9e: mov ecx, esi */
  ecx = esi;
/* 6e2da0: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x6e2da6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e2da6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 6e2da8: mov ecx, esi */
  ecx = esi;
/* 6e2daa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2dab: jmp dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); SPILL(); call_ind(t); return; }
L_6e2db1: /* 6e2db1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2db2: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2dd0(void) {
  LOAD_REGS();
L_6e2dd0: /* 6e2dd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2dd1: mov esi, ecx */
  esi = ecx;
/* 6e2dd3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 6e2dd5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 6e2dd7: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x6e2dddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e2ddd: mov ecx, esi */
  ecx = esi;
/* 6e2ddf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2de0: jmp 0x6c1ee7 */
  SPILL(); f_6c1ee7(); return;
}

void f_6e2e00(void) {
  LOAD_REGS();
L_6e2e00: /* 6e2e00: cmp byte ptr [ecx + 0x50], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x50u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 6e2e04: jne 0x6e2e0e */
  if (!zf) goto L_6e2e0e;
L_6e2e06: /* 6e2e06: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6e2e08: call dword ptr [eax + 0x19c] */
  { uint32_t t = R32((uint32_t)(eax + 0x19cu)); esp -= 4; W32(esp, 0x6e2e0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e2e0e: /* 6e2e0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e2e30(void) {
  LOAD_REGS();
L_6e2e30: /* 6e2e30: mov eax, 0xcc6848 */
  eax = 0xcc6848u;
/* 6e2e35: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2e50(void) {
  LOAD_REGS();
L_6e2e50: /* 6e2e50: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2e55: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2e57: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e2e5b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e2e5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2e61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2e63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2e64: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e2e68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2e6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e2e6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2e6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2e6d: push 0xcc6848 */
  { uint32_t v = 0xcc6848u; esp -= 4; W32(esp, v); }
/* 6e2e72: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e2e78u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e2e78: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e2e7b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2e90(void) {
  LOAD_REGS();
L_6e2e90: /* 6e2e90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2e94: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2eb0(void) {
  LOAD_REGS();
L_6e2eb0: /* 6e2eb0: mov eax, dword ptr [0xb7e41c] */
  eax = R32((uint32_t)(0xb7e41cu));
/* 6e2eb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2eb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e2eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2eb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2ebb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2ebd: mov esi, ecx */
  esi = ecx;
/* 6e2ebf: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2ec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2ec2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2ec8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2ec8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2ec9: mov ecx, esi */
  ecx = esi;
/* 6e2ecb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e2eceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e2ece: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e2ecf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2ed0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2ef0(void) {
  LOAD_REGS();
L_6e2ef0: /* 6e2ef0: mov eax, 0xcc5588 */
  eax = 0xcc5588u;
/* 6e2ef5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2f10(void) {
  LOAD_REGS();
L_6e2f10: /* 6e2f10: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2f15: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2f17: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e2f1b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e2f1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2f21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2f23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2f24: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e2f28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2f2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e2f2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2f2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2f2d: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 6e2f32: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e2f38u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e2f38: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e2f3b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2f50(void) {
  LOAD_REGS();
L_6e2f50: /* 6e2f50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2f54: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2f70(void) {
  LOAD_REGS();
L_6e2f70: /* 6e2f70: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6e2f74: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e2f76: je 0x6e2f7d */
  if (zf) goto L_6e2f7d;
L_6e2f78: /* 6e2f78: jmp 0x6c3f58 */
  SPILL(); f_6c3f58(); return;
L_6e2f7d: /* 6e2f7d: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2f90(void) {
  LOAD_REGS();
L_6e2f90: /* 6e2f90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2f94: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e2f97: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e2fb0(void) {
  LOAD_REGS();
L_6e2fb0: /* 6e2fb0: mov eax, 1 */
  eax = 0x1u;
/* 6e2fb5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2fd0(void) {
  LOAD_REGS();
L_6e2fd0: /* 6e2fd0: mov eax, 0xb80c70 */
  eax = 0xb80c70u;
/* 6e2fd5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2ff0(void) {
  LOAD_REGS();
L_6e2ff0: /* 6e2ff0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2ff5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2ff7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e2ffb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e2fff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3001: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3003: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3004: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3008: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e300a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e300b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e300c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e300d: push 0xb80c70 */
  { uint32_t v = 0xb80c70u; esp -= 4; W32(esp, v); }
/* 6e3012: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3018u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3018: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e301b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3030(void) {
  LOAD_REGS();
L_6e3030: /* 6e3030: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3034: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3050(void) {
  LOAD_REGS();
L_6e3050: /* 6e3050: mov eax, 0xb72fb8 */
  eax = 0xb72fb8u;
/* 6e3055: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3070(void) {
  LOAD_REGS();
L_6e3070: /* 6e3070: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3075: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3077: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e307b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e307f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3083: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3084: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e308a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e308b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e308c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e308d: push 0xb72fb8 */
  { uint32_t v = 0xb72fb8u; esp -= 4; W32(esp, v); }
/* 6e3092: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3098u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3098: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e309b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e30b0(void) {
  LOAD_REGS();
L_6e30b0: /* 6e30b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e30b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e30d0(void) {
  LOAD_REGS();
L_6e30d0: /* 6e30d0: mov eax, 0xb64648 */
  eax = 0xb64648u;
/* 6e30d5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e30f0(void) {
  LOAD_REGS();
L_6e30f0: /* 6e30f0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e30f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e30f7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e30fb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e30ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3101: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3103: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3104: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3108: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e310a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e310b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e310c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e310d: push 0xb64648 */
  { uint32_t v = 0xb64648u; esp -= 4; W32(esp, v); }
/* 6e3112: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3118u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3118: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e311b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3130(void) {
  LOAD_REGS();
L_6e3130: /* 6e3130: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3134: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3150(void) {
  LOAD_REGS();
L_6e3150: /* 6e3150: mov eax, 0xb72a88 */
  eax = 0xb72a88u;
/* 6e3155: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3170(void) {
  LOAD_REGS();
L_6e3170: /* 6e3170: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3175: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3177: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e317b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e317f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3181: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3183: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3184: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e318a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e318b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e318c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e318d: push 0xb72a88 */
  { uint32_t v = 0xb72a88u; esp -= 4; W32(esp, v); }
/* 6e3192: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3198u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3198: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e319b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e31b0(void) {
  LOAD_REGS();
L_6e31b0: /* 6e31b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e31b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e31d0(void) {
  LOAD_REGS();
L_6e31d0: /* 6e31d0: mov edx, dword ptr [0xb7e420] */
  edx = R32((uint32_t)(0xb7e420u));
/* 6e31d6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e31da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e31db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e31dc: mov esi, ecx */
  esi = ecx;
/* 6e31de: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e31e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e31e2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e31e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e31e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e31e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e31ea: mov ecx, esi */
  ecx = esi;
/* 6e31ec: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e31f0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e31f6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e31f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e31f7: mov ecx, esi */
  ecx = esi;
/* 6e31f9: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e31fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e31fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e31fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e31fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e3220(void) {
  LOAD_REGS();
L_6e3220: /* 6e3220: mov eax, 0xb6d788 */
  eax = 0xb6d788u;
/* 6e3225: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3240(void) {
  LOAD_REGS();
L_6e3240: /* 6e3240: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3245: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3247: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e324b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e324f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3251: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3253: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3254: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3258: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e325a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e325b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e325c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e325d: push 0xb6d788 */
  { uint32_t v = 0xb6d788u; esp -= 4; W32(esp, v); }
/* 6e3262: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3268u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3268: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e326b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3280(void) {
  LOAD_REGS();
L_6e3280: /* 6e3280: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3284: ret  */
  esp += 4; SPILL(); return;
}

void f_6e32a0(void) {
  LOAD_REGS();
L_6e32a0: /* 6e32a0: mov eax, 0xb64b78 */
  eax = 0xb64b78u;
/* 6e32a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e32c0(void) {
  LOAD_REGS();
L_6e32c0: /* 6e32c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e32c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e32c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e32cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e32cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e32d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e32d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e32d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e32d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e32da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e32db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e32dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e32dd: push 0xb64b78 */
  { uint32_t v = 0xb64b78u; esp -= 4; W32(esp, v); }
/* 6e32e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e32e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e32e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e32eb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3300(void) {
  LOAD_REGS();
L_6e3300: /* 6e3300: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3304: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3320(void) {
  LOAD_REGS();
L_6e3320: /* 6e3320: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e3323: mov edx, dword ptr [0xb7e424] */
  edx = R32((uint32_t)(0xb7e424u));
/* 6e3329: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e332d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e332e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e332f: mov esi, ecx */
  esi = ecx;
/* 6e3331: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e3333: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3335: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e3339: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e333a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e333c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e333d: mov ecx, esi */
  ecx = esi;
/* 6e333f: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 6e3347: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e334b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e3351u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e3351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3352: mov ecx, esi */
  ecx = esi;
/* 6e3354: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e3357u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e3357: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e335b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e335c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e335d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3360: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e3390(void) {
  LOAD_REGS();
L_6e3390: /* 6e3390: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e3393: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e3397: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e3398: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e3399: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e339b: mov esi, ecx */
  esi = ecx;
/* 6e339d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 6e33a1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e33a3: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6e33a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e33a8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6e33ac: mov eax, dword ptr [0xb7e4f0] */
  eax = R32((uint32_t)(0xb7e4f0u));
/* 6e33b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e33b3: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6e33b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e33b8: mov ecx, esi */
  ecx = esi;
/* 6e33ba: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 6e33c2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e33c8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e33c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e33c9: mov ecx, esi */
  ecx = esi;
/* 6e33cb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e33ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e33ce: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 6e33d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e33d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e33d4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e33d7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e3400(void) {
  LOAD_REGS();
L_6e3400: /* 6e3400: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e3403: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e3407: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e3408: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e3409: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e340b: mov esi, ecx */
  esi = ecx;
/* 6e340d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 6e3411: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e3413: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6e3417: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3418: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6e341c: mov eax, dword ptr [0xb7e3b0] */
  eax = R32((uint32_t)(0xb7e3b0u));
/* 6e3421: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3423: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6e3427: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3428: mov ecx, esi */
  ecx = esi;
/* 6e342a: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 6e3432: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e3438u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e3438: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3439: mov ecx, esi */
  ecx = esi;
/* 6e343b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e343eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e343e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e3442: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e3443: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e3444: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3447: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e3470(void) {
  LOAD_REGS();
L_6e3470: /* 6e3470: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e3473: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e3477: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e3478: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e3479: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e347b: mov esi, ecx */
  esi = ecx;
/* 6e347d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 6e3481: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e3483: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6e3487: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3488: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6e348c: mov eax, dword ptr [0xb7e3d4] */
  eax = R32((uint32_t)(0xb7e3d4u));
/* 6e3491: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3493: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6e3497: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3498: mov ecx, esi */
  ecx = esi;
/* 6e349a: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 6e34a2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e34a8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e34a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e34a9: mov ecx, esi */
  ecx = esi;
/* 6e34ab: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e34aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e34ae: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e34b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e34b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e34b4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e34b7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e34e0(void) {
  LOAD_REGS();
L_6e34e0: /* 6e34e0: mov eax, 0xb602d8 */
  eax = 0xb602d8u;
/* 6e34e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3500(void) {
  LOAD_REGS();
L_6e3500: /* 6e3500: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3505: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3507: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e350b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e350f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3511: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3513: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3514: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3518: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e351a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e351b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e351c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e351d: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 6e3522: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3528u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3528: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e352b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3540(void) {
  LOAD_REGS();
L_6e3540: /* 6e3540: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3544: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3560(void) {
  LOAD_REGS();
L_6e3560: /* 6e3560: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e3580(void) {
  LOAD_REGS();
L_6e3580: /* 6e3580: ret  */
  esp += 4; SPILL(); return;
}

void f_6e35a0(void) {
  LOAD_REGS();
L_6e35a0: /* 6e35a0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e35c0(void) {
  LOAD_REGS();
L_6e35c0: /* 6e35c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e35e0(void) {
  LOAD_REGS();
L_6e35e0: /* 6e35e0: xor eax, eax */
  eax = 0;
/* 6e35e2: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3600(void) {
  LOAD_REGS();
L_6e3600: /* 6e3600: mov eax, 0xb72558 */
  eax = 0xb72558u;
/* 6e3605: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3620(void) {
  LOAD_REGS();
L_6e3620: /* 6e3620: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3625: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3627: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e362b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e362f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3631: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3633: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3634: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3638: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e363a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e363b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e363c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e363d: push 0xb72558 */
  { uint32_t v = 0xb72558u; esp -= 4; W32(esp, v); }
/* 6e3642: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3648u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3648: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e364b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3660(void) {
  LOAD_REGS();
L_6e3660: /* 6e3660: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3664: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3680(void) {
  LOAD_REGS();
L_6e3680: /* 6e3680: mov eax, 0xb72028 */
  eax = 0xb72028u;
/* 6e3685: ret  */
  esp += 4; SPILL(); return;
}

void f_6e36a0(void) {
  LOAD_REGS();
L_6e36a0: /* 6e36a0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e36a5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e36a7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e36ab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e36af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e36b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e36b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e36b4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e36b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e36ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e36bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e36bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e36bd: push 0xb72028 */
  { uint32_t v = 0xb72028u; esp -= 4; W32(esp, v); }
/* 6e36c2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e36c8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e36c8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e36cb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e36e0(void) {
  LOAD_REGS();
L_6e36e0: /* 6e36e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e36e4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3700(void) {
  LOAD_REGS();
L_6e3700: /* 6e3700: mov eax, 0xb6c2c8 */
  eax = 0xb6c2c8u;
/* 6e3705: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3720(void) {
  LOAD_REGS();
L_6e3720: /* 6e3720: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3725: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3727: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e372b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e372f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3731: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3733: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3734: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3738: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e373a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e373b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e373c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e373d: push 0xb6c2c8 */
  { uint32_t v = 0xb6c2c8u; esp -= 4; W32(esp, v); }
/* 6e3742: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3748u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3748: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e374b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3760(void) {
  LOAD_REGS();
L_6e3760: /* 6e3760: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3764: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3780(void) {
  LOAD_REGS();
L_6e3780: /* 6e3780: mov eax, 0xb70108 */
  eax = 0xb70108u;
/* 6e3785: ret  */
  esp += 4; SPILL(); return;
}

void f_6e37a0(void) {
  LOAD_REGS();
L_6e37a0: /* 6e37a0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e37a5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e37a7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e37ab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e37af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e37b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e37b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e37b4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e37b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e37ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e37bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e37bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e37bd: push 0xb70108 */
  { uint32_t v = 0xb70108u; esp -= 4; W32(esp, v); }
/* 6e37c2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e37c8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e37c8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e37cb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e37e0(void) {
  LOAD_REGS();
L_6e37e0: /* 6e37e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e37e4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3800(void) {
  LOAD_REGS();
L_6e3800: /* 6e3800: mov eax, 0xb60808 */
  eax = 0xb60808u;
/* 6e3805: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3820(void) {
  LOAD_REGS();
L_6e3820: /* 6e3820: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3825: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3827: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e382b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e382f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3831: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3833: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3834: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3838: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e383a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e383b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e383c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e383d: push 0xb60808 */
  { uint32_t v = 0xb60808u; esp -= 4; W32(esp, v); }
/* 6e3842: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3848u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3848: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e384b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3860(void) {
  LOAD_REGS();
L_6e3860: /* 6e3860: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3864: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3880(void) {
  LOAD_REGS();
L_6e3880: /* 6e3880: mov eax, 0xb6bd98 */
  eax = 0xb6bd98u;
/* 6e3885: ret  */
  esp += 4; SPILL(); return;
}

void f_6e38a0(void) {
  LOAD_REGS();
L_6e38a0: /* 6e38a0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e38a5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e38a7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e38ab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e38af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e38b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e38b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e38b4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e38b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e38ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e38bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e38bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e38bd: push 0xb6bd98 */
  { uint32_t v = 0xb6bd98u; esp -= 4; W32(esp, v); }
/* 6e38c2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e38c8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e38c8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e38cb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e38e0(void) {
  LOAD_REGS();
L_6e38e0: /* 6e38e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e38e4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3900(void) {
  LOAD_REGS();
L_6e3900: /* 6e3900: mov eax, 0xb6fbd8 */
  eax = 0xb6fbd8u;
/* 6e3905: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3920(void) {
  LOAD_REGS();
L_6e3920: /* 6e3920: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3925: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3927: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e392b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e392f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3931: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3933: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3934: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3938: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e393a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e393b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e393c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e393d: push 0xb6fbd8 */
  { uint32_t v = 0xb6fbd8u; esp -= 4; W32(esp, v); }
/* 6e3942: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3948u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3948: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e394b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3960(void) {
  LOAD_REGS();
L_6e3960: /* 6e3960: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3964: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3980(void) {
  LOAD_REGS();
L_6e3980: /* 6e3980: mov eax, 0xb650a8 */
  eax = 0xb650a8u;
/* 6e3985: ret  */
  esp += 4; SPILL(); return;
}

void f_6e39a0(void) {
  LOAD_REGS();
L_6e39a0: /* 6e39a0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e39a5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e39a7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e39ab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e39af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e39b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e39b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e39b4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e39b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e39ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e39bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e39bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e39bd: push 0xb650a8 */
  { uint32_t v = 0xb650a8u; esp -= 4; W32(esp, v); }
/* 6e39c2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e39c8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e39c8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e39cb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e39e0(void) {
  LOAD_REGS();
L_6e39e0: /* 6e39e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e39e4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3a00(void) {
  LOAD_REGS();
L_6e3a00: /* 6e3a00: mov eax, 0xb64118 */
  eax = 0xb64118u;
/* 6e3a05: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3a20(void) {
  LOAD_REGS();
L_6e3a20: /* 6e3a20: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3a25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3a27: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3a2b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3a2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3a31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3a33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3a34: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3a38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3a3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3a3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3a3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3a3d: push 0xb64118 */
  { uint32_t v = 0xb64118u; esp -= 4; W32(esp, v); }
/* 6e3a42: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3a48u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3a48: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3a4b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3a60(void) {
  LOAD_REGS();
L_6e3a60: /* 6e3a60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3a64: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3a80(void) {
  LOAD_REGS();
L_6e3a80: /* 6e3a80: mov eax, 0xb63be8 */
  eax = 0xb63be8u;
/* 6e3a85: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3aa0(void) {
  LOAD_REGS();
L_6e3aa0: /* 6e3aa0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3aa5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3aa7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3aab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3aaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3ab1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3ab3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3ab4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3ab8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3aba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3abb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3abc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3abd: push 0xb63be8 */
  { uint32_t v = 0xb63be8u; esp -= 4; W32(esp, v); }
/* 6e3ac2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3ac8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3ac8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3acb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3ae0(void) {
  LOAD_REGS();
L_6e3ae0: /* 6e3ae0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3ae4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3b00(void) {
  LOAD_REGS();
L_6e3b00: /* 6e3b00: mov eax, ecx */
  eax = ecx;
/* 6e3b02: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3b20(void) {
  LOAD_REGS();
L_6e3b20: /* 6e3b20: mov eax, 0xb62c58 */
  eax = 0xb62c58u;
/* 6e3b25: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3b40(void) {
  LOAD_REGS();
L_6e3b40: /* 6e3b40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3b45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3b47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3b4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3b4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3b51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3b53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3b54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3b58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3b5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3b5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3b5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3b5d: push 0xb62c58 */
  { uint32_t v = 0xb62c58u; esp -= 4; W32(esp, v); }
/* 6e3b62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3b68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3b68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3b6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3b80(void) {
  LOAD_REGS();
L_6e3b80: /* 6e3b80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3b84: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3ba0(void) {
  LOAD_REGS();
L_6e3ba0: /* 6e3ba0: mov eax, 0xb62728 */
  eax = 0xb62728u;
/* 6e3ba5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3bc0(void) {
  LOAD_REGS();
L_6e3bc0: /* 6e3bc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3bc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3bc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3bcb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3bcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3bd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3bd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3bd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3bd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3bda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3bdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3bdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3bdd: push 0xb62728 */
  { uint32_t v = 0xb62728u; esp -= 4; W32(esp, v); }
/* 6e3be2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3be8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3be8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3beb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3c00(void) {
  LOAD_REGS();
L_6e3c00: /* 6e3c00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3c04: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3c20(void) {
  LOAD_REGS();
L_6e3c20: /* 6e3c20: mov eax, 0xb66568 */
  eax = 0xb66568u;
/* 6e3c25: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3c40(void) {
  LOAD_REGS();
L_6e3c40: /* 6e3c40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3c45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3c47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3c4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3c4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3c51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3c54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3c58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3c5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3c5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3c5d: push 0xb66568 */
  { uint32_t v = 0xb66568u; esp -= 4; W32(esp, v); }
/* 6e3c62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3c68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3c68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3c6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3c80(void) {
  LOAD_REGS();
L_6e3c80: /* 6e3c80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3c84: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3ca0(void) {
  LOAD_REGS();
L_6e3ca0: /* 6e3ca0: mov eax, 0xb66038 */
  eax = 0xb66038u;
/* 6e3ca5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3cc0(void) {
  LOAD_REGS();
L_6e3cc0: /* 6e3cc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3cc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3cc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3ccb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3ccf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3cd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3cd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3cd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3cd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3cda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3cdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3cdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3cdd: push 0xb66038 */
  { uint32_t v = 0xb66038u; esp -= 4; W32(esp, v); }
/* 6e3ce2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3ce8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3ce8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3ceb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3d00(void) {
  LOAD_REGS();
L_6e3d00: /* 6e3d00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3d04: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3d20(void) {
  LOAD_REGS();
L_6e3d20: /* 6e3d20: mov eax, 0xb5fda8 */
  eax = 0xb5fda8u;
/* 6e3d25: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3d40(void) {
  LOAD_REGS();
L_6e3d40: /* 6e3d40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3d45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3d47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3d4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3d4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3d51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3d53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3d54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3d58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3d5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3d5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3d5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3d5d: push 0xb5fda8 */
  { uint32_t v = 0xb5fda8u; esp -= 4; W32(esp, v); }
/* 6e3d62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3d68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3d68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3d6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3d80(void) {
  LOAD_REGS();
L_6e3d80: /* 6e3d80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3d84: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3da0(void) {
  LOAD_REGS();
L_6e3da0: /* 6e3da0: mov eax, 0xb68ee8 */
  eax = 0xb68ee8u;
/* 6e3da5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3dc0(void) {
  LOAD_REGS();
L_6e3dc0: /* 6e3dc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3dc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3dc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3dcb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3dcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3dd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3dd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3dd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3dd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3dda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3ddb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3ddc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3ddd: push 0xb68ee8 */
  { uint32_t v = 0xb68ee8u; esp -= 4; W32(esp, v); }
/* 6e3de2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3de8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3de8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3deb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3e00(void) {
  LOAD_REGS();
L_6e3e00: /* 6e3e00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3e04: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3e20(void) {
  LOAD_REGS();
L_6e3e20: /* 6e3e20: mov eax, dword ptr [0xb7e4a4] */
  eax = R32((uint32_t)(0xb7e4a4u));
/* 6e3e25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e3e26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e3e27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3e29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3e2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3e2d: mov esi, ecx */
  esi = ecx;
/* 6e3e2f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e3e31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3e32: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e3e38u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e3e38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3e39: mov ecx, esi */
  ecx = esi;
/* 6e3e3b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e3e3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e3e3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e3e3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e3e40: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3e60(void) {
  LOAD_REGS();
L_6e3e60: /* 6e3e60: mov eax, dword ptr [0xb7e4a0] */
  eax = R32((uint32_t)(0xb7e4a0u));
/* 6e3e65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e3e66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e3e67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3e69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3e6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3e6d: mov esi, ecx */
  esi = ecx;
/* 6e3e6f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e3e71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3e72: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e3e78u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e3e78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3e79: mov ecx, esi */
  ecx = esi;
/* 6e3e7b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e3e7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e3e7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e3e7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e3e80: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3ea0(void) {
  LOAD_REGS();
L_6e3ea0: /* 6e3ea0: mov eax, 0xb71af8 */
  eax = 0xb71af8u;
/* 6e3ea5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3ec0(void) {
  LOAD_REGS();
L_6e3ec0: /* 6e3ec0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3ec5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3ec7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3ecb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3ecf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3ed1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3ed3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3ed4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3ed8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3eda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3edc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3edd: push 0xb71af8 */
  { uint32_t v = 0xb71af8u; esp -= 4; W32(esp, v); }
/* 6e3ee2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3ee8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3ee8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3eeb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3f00(void) {
  LOAD_REGS();
L_6e3f00: /* 6e3f00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3f04: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3f20(void) {
  LOAD_REGS();
L_6e3f20: /* 6e3f20: mov eax, 0xb689b8 */
  eax = 0xb689b8u;
/* 6e3f25: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3f40(void) {
  LOAD_REGS();
L_6e3f40: /* 6e3f40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3f45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3f47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3f4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3f4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3f51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3f53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3f54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3f58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3f5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3f5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3f5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3f5d: push 0xb689b8 */
  { uint32_t v = 0xb689b8u; esp -= 4; W32(esp, v); }
/* 6e3f62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3f68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3f68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3f6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3f80(void) {
  LOAD_REGS();
L_6e3f80: /* 6e3f80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e3f84: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3fa0(void) {
  LOAD_REGS();
L_6e3fa0: /* 6e3fa0: mov eax, 0xb715c8 */
  eax = 0xb715c8u;
/* 6e3fa5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e3fc0(void) {
  LOAD_REGS();
L_6e3fc0: /* 6e3fc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e3fc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e3fc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e3fcb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e3fcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3fd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3fd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3fd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e3fd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e3fda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e3fdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e3fdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e3fdd: push 0xb715c8 */
  { uint32_t v = 0xb715c8u; esp -= 4; W32(esp, v); }
/* 6e3fe2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e3fe8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e3fe8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e3feb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4000(void) {
  LOAD_REGS();
L_6e4000: /* 6e4000: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e4004: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4020(void) {
  LOAD_REGS();
L_6e4020: /* 6e4020: mov eax, 0xb70b68 */
  eax = 0xb70b68u;
/* 6e4025: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4040(void) {
  LOAD_REGS();
L_6e4040: /* 6e4040: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e4045: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e4047: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e404b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e404f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4051: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4053: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4054: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e4058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e405a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e405b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e405c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e405d: push 0xb70b68 */
  { uint32_t v = 0xb70b68u; esp -= 4; W32(esp, v); }
/* 6e4062: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e4068u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e4068: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e406b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4080(void) {
  LOAD_REGS();
L_6e4080: /* 6e4080: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e4084: ret  */
  esp += 4; SPILL(); return;
}

void f_6e40a0(void) {
  LOAD_REGS();
L_6e40a0: /* 6e40a0: mov eax, dword ptr [0xb7e448] */
  eax = R32((uint32_t)(0xb7e448u));
/* 6e40a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e40a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e40a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e40a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e40ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e40ad: mov esi, ecx */
  esi = ecx;
/* 6e40af: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e40b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e40b2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e40b8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e40b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e40b9: mov ecx, esi */
  ecx = esi;
/* 6e40bb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e40beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e40be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e40bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e40c0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e40e0(void) {
  LOAD_REGS();
L_6e40e0: /* 6e40e0: mov eax, 0xb71098 */
  eax = 0xb71098u;
/* 6e40e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4100(void) {
  LOAD_REGS();
L_6e4100: /* 6e4100: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e4105: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e4107: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e410b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e410f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4111: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4113: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4114: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e4118: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e411a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e411b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e411c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e411d: push 0xb71098 */
  { uint32_t v = 0xb71098u; esp -= 4; W32(esp, v); }
/* 6e4122: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e4128u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e4128: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e412b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4140(void) {
  LOAD_REGS();
L_6e4140: /* 6e4140: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e4144: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4160(void) {
  LOAD_REGS();
L_6e4160: /* 6e4160: mov eax, 0xb6cd28 */
  eax = 0xb6cd28u;
/* 6e4165: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4180(void) {
  LOAD_REGS();
L_6e4180: /* 6e4180: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e4185: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e4187: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e418b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e418f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4191: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4193: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4194: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e4198: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e419a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e419b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e419c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e419d: push 0xb6cd28 */
  { uint32_t v = 0xb6cd28u; esp -= 4; W32(esp, v); }
/* 6e41a2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e41a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e41a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e41ab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e41c0(void) {
  LOAD_REGS();
L_6e41c0: /* 6e41c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e41c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e41e0(void) {
  LOAD_REGS();
L_6e41e0: /* 6e41e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e41e1: mov esi, ecx */
  esi = ecx;
/* 6e41e3: call 0x6c45ed */
  esp -= 4; W32(esp, 0x6e41e8u); SPILL(); f_6c45ed(); if (g_unwind) return; RELOAD();
/* 6e41e8: mov ecx, dword ptr [esi + 0x280] */
  ecx = R32((uint32_t)(esi + 0x280u));
/* 6e41ee: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e41f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e41f1: je 0x6e41f8 */
  if (zf) goto L_6e41f8;
L_6e41f3: /* 6e41f3: jmp 0x6c19d8 */
  SPILL(); f_6c19d8(); return;
L_6e41f8: /* 6e41f8: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4210(void) {
  LOAD_REGS();
L_6e4210: /* 6e4210: mov eax, 1 */
  eax = 0x1u;
/* 6e4215: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4230(void) {
  LOAD_REGS();
L_6e4230: /* 6e4230: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e4236: fld dword ptr [ecx + 0x294] */
  { double v = F32((uint32_t)(ecx + 0x294u)); FPUSH(v); }
/* 6e423c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e423d: mov esi, dword ptr [esp + 0xd4] */
  esi = R32((uint32_t)(esp + 0xd4u));
/* 6e4244: fchs  */
  ST0 = -ST0;
/* 6e4246: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 6e424c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 6e4250: fld dword ptr [ecx + 0x298] */
  { double v = F32((uint32_t)(ecx + 0x298u)); FPUSH(v); }
/* 6e4256: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4257: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e4258: fchs  */
  ST0 = -ST0;
/* 6e425a: lea edx, [ecx + 0x364] */
  edx = (uint32_t)(ecx + 0x364u);
/* 6e4260: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4261: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 6e4267: lea eax, [esp + 0x7c] */
  eax = (uint32_t)(esp + 0x7cu);
/* 6e426b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e426c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e426d: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e4273: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 6e4277: fld dword ptr [ecx - 0xb4] */
  { double v = F32((uint32_t)(ecx + 0xffffff4cu)); FPUSH(v); }
/* 6e427d: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 6e4281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4282: fchs  */
  ST0 = -ST0;
/* 6e4284: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4285: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 6e4289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e428a: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e4290: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 6e4294: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4295: lea eax, [esp + 0xc4] */
  eax = (uint32_t)(esp + 0xc4u);
/* 6e429c: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 6e42a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e42a1: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e42a4: call dword ptr [0xcfa2cc] */
  esp -= 4; W32(esp, 0x6e42aau); SPILL(); f_4e398b(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 6e42aa: mov ecx, eax */
  ecx = eax;
/* 6e42ac: call dword ptr [0xcfa2ec] */
  esp -= 4; W32(esp, 0x6e42b2u); SPILL(); f_4e17d0(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e42b2: mov ecx, eax */
  ecx = eax;
/* 6e42b4: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x6e42bau); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 6e42ba: mov ecx, eax */
  ecx = eax;
/* 6e42bc: call dword ptr [0xcfa2ec] */
  esp -= 4; W32(esp, 0x6e42c2u); SPILL(); f_4e17d0(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e42c2: mov ecx, eax */
  ecx = eax;
/* 6e42c4: call dword ptr [0xcfa2cc] */
  esp -= 4; W32(esp, 0x6e42cau); SPILL(); f_4e398b(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 6e42ca: mov eax, esi */
  eax = esi;
/* 6e42cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e42cd: add esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e42d3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e4310(void) {
  LOAD_REGS();
L_6e4310: /* 6e4310: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e4316: fld dword ptr [ecx + 0x294] */
  { double v = F32((uint32_t)(ecx + 0x294u)); FPUSH(v); }
/* 6e431c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e431d: mov esi, dword ptr [esp + 0xd4] */
  esi = R32((uint32_t)(esp + 0xd4u));
/* 6e4324: fchs  */
  ST0 = -ST0;
/* 6e4326: lea edx, [ecx + 0x350] */
  edx = (uint32_t)(ecx + 0x350u);
/* 6e432c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 6e4330: fld dword ptr [ecx + 0x298] */
  { double v = F32((uint32_t)(ecx + 0x298u)); FPUSH(v); }
/* 6e4336: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 6e433a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e433b: fchs  */
  ST0 = -ST0;
/* 6e433d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e433e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e433f: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 6e4345: lea eax, [esp + 0x7c] */
  eax = (uint32_t)(esp + 0x7cu);
/* 6e4349: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e434a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e434b: lea edx, [ecx + 0x364] */
  edx = (uint32_t)(ecx + 0x364u);
/* 6e4351: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 6e4355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4356: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4357: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e435d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 6e4361: fld dword ptr [ecx + 0x12c] */
  { double v = F32((uint32_t)(ecx + 0x12cu)); FPUSH(v); }
/* 6e4367: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 6e436b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e436c: fchs  */
  ST0 = -ST0;
/* 6e436e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e436f: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 6e4376: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4377: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e437d: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 6e4381: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e4384: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x6e438au); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 6e438a: mov ecx, eax */
  ecx = eax;
/* 6e438c: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x6e4392u); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e4392: mov ecx, eax */
  ecx = eax;
/* 6e4394: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x6e439au); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 6e439a: mov ecx, eax */
  ecx = eax;
/* 6e439c: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x6e43a2u); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e43a2: mov ecx, eax */
  ecx = eax;
/* 6e43a4: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x6e43aau); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 6e43aa: mov eax, esi */
  eax = esi;
/* 6e43ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e43ad: add esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e43b3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e43f0(void) {
  LOAD_REGS();
L_6e43f0: /* 6e43f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6e43f1: mov ebp, esp */
  ebp = esp;
/* 6e43f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e43f5: push 0x9c03a0 */
  { uint32_t v = 0x9c03a0u; esp -= 4; W32(esp, v); }
/* 6e43fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e4400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e4408: sub esp, 0xd0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e440e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e440f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e4410: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e4411: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 6e4414: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e4416: mov ebx, ecx */
  ebx = ecx;
/* 6e4418: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 6e441b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 6e441e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 6e4425: je 0x6e44d8 */
  if (zf) goto L_6e44d8;
L_6e442b: /* 6e442b: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e4431: lea eax, [ebx + 0x364] */
  eax = (uint32_t)(ebx + 0x364u);
/* 6e4437: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4438: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 6e443e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e443f: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e4442: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x6e4448u); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e4448: lea edx, [ebx + 0x17c] */
  edx = (uint32_t)(ebx + 0x17cu);
/* 6e444e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e444f: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 6e4452: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4453: mov ecx, eax */
  ecx = eax;
/* 6e4455: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x6e445bu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 6e445b: lea edx, [ebx + 0x350] */
  edx = (uint32_t)(ebx + 0x350u);
/* 6e4461: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4462: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 6e4465: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4466: mov ecx, eax */
  ecx = eax;
/* 6e4468: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x6e446eu); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e446e: mov esi, eax */
  esi = eax;
/* 6e4470: lea eax, [ebx + 0x350] */
  eax = (uint32_t)(ebx + 0x350u);
/* 6e4476: mov ecx, 0xc */
  ecx = 0xcu;
/* 6e447b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e447d: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e4483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4484: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 6e4487: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4488: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e448b: call dword ptr [0xcfa2ec] */
  esp -= 4; W32(esp, 0x6e4491u); SPILL(); f_4e17d0(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e4491: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 6e4497: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4498: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 6e449b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e449c: mov ecx, eax */
  ecx = eax;
/* 6e449e: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x6e44a4u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 6e44a4: lea edx, [ebx + 0x364] */
  edx = (uint32_t)(ebx + 0x364u);
/* 6e44aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e44ab: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 6e44b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e44b2: mov ecx, eax */
  ecx = eax;
/* 6e44b4: call dword ptr [0xcfa2ec] */
  esp -= 4; W32(esp, 0x6e44bau); SPILL(); f_4e17d0(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e44ba: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 6e44c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e44c1: mov ecx, eax */
  ecx = eax;
/* 6e44c3: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x6e44c9u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 6e44c9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 6e44cc: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6e44cf: mov ecx, 0xc */
  ecx = 0xcu;
/* 6e44d4: mov esi, eax */
  esi = eax;
/* 6e44d6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_6e44d8: /* 6e44d8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 6e44db: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e44dd: je 0x6e4593 */
  if (zf) goto L_6e4593;
L_6e44e3: /* 6e44e3: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e44e9: lea eax, [ebx + 0x350] */
  eax = (uint32_t)(ebx + 0x350u);
/* 6e44ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e44f0: lea edx, [ebp - 0xdc] */
  edx = (uint32_t)(ebp + 0xffffff24u);
/* 6e44f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e44f7: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e44fa: call dword ptr [0xcfa2ec] */
  esp -= 4; W32(esp, 0x6e4500u); SPILL(); f_4e17d0(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e4500: lea edx, [ebx + 0x17c] */
  edx = (uint32_t)(ebx + 0x17cu);
/* 6e4506: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4507: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 6e450a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e450b: mov ecx, eax */
  ecx = eax;
/* 6e450d: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x6e4513u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 6e4513: add ebx, 0x364 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x364u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 6e4519: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e451a: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 6e451d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e451e: mov ecx, eax */
  ecx = eax;
/* 6e4520: call dword ptr [0xcfa2ec] */
  esp -= 4; W32(esp, 0x6e4526u); SPILL(); f_4e17d0(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e4526: mov esi, eax */
  esi = eax;
/* 6e4528: mov ecx, 0xc */
  ecx = 0xcu;
/* 6e452d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e452f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e4535: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e4536: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 6e453c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e453d: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e4540: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x6e4546u); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e4546: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 6e4549: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e454f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4550: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 6e4553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4554: mov ecx, eax */
  ecx = eax;
/* 6e4556: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x6e455cu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 6e455c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 6e455f: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e4565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4566: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 6e4569: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e456a: mov ecx, eax */
  ecx = eax;
/* 6e456c: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x6e4572u); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 6e4572: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 6e4578: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4579: mov ecx, eax */
  ecx = eax;
/* 6e457b: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x6e4581u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 6e4581: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 6e4584: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 6e4587: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6e458a: mov ecx, 0xc */
  ecx = 0xcu;
/* 6e458f: mov esi, eax */
  esi = eax;
/* 6e4591: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_6e4593: /* 6e4593: lea ecx, [ebx + 0x350] */
  ecx = (uint32_t)(ebx + 0x350u);
/* 6e4599: call dword ptr [0xcfa2f4] */
  esp -= 4; W32(esp, 0x6e459fu); SPILL(); f_4e13e3(); if (g_unwind) return; /* Core!?Orientation@FScale@@QAEMXZ */ RELOAD();
/* 6e459f: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 6e45a2: lea ecx, [ebx + 0x364] */
  ecx = (uint32_t)(ebx + 0x364u);
/* 6e45a8: call dword ptr [0xcfa2f4] */
  esp -= 4; W32(esp, 0x6e45aeu); SPILL(); f_4e13e3(); if (g_unwind) return; /* Core!?Orientation@FScale@@QAEMXZ */ RELOAD();
/* 6e45ae: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 6e45b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 6e45b4: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 6e45b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e45b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e45b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e45c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e45c1: mov esp, ebp */
  esp = ebp;
/* 6e45c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6e45c4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e45c7(void) {
  LOAD_REGS();
L_6e45c7: /* 6e45c7: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 6e45ca: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 6e45cf: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 6e45d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e45d3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 6e45d6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6e45dbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_6e45db(); return;
}

void f_6e45db(void) {
  LOAD_REGS();
L_6e45db: /* 6e45db: push 0x9f48a4 */
  { uint32_t v = 0x9f48a4u; esp -= 4; W32(esp, v); }
/* 6e45e0: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 6e45e5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x6e45ebu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 6e45eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e45ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e45f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e45f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6e45f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_6e45f7: guest_badaddr(0x6e45f7); return;
}

void f_6e4690(void) {
  LOAD_REGS();
L_6e4690: /* 6e4690: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e4693: fld dword ptr [ecx + 0x294] */
  { double v = F32((uint32_t)(ecx + 0x294u)); FPUSH(v); }
/* 6e4699: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e469a: mov esi, dword ptr [esp + 0x74] */
  esi = R32((uint32_t)(esp + 0x74u));
/* 6e469e: fchs  */
  ST0 = -ST0;
/* 6e46a0: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 6e46a4: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 6e46aa: fld dword ptr [ecx + 0x298] */
  { double v = F32((uint32_t)(ecx + 0x298u)); FPUSH(v); }
/* 6e46b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e46b1: fchs  */
  ST0 = -ST0;
/* 6e46b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e46b4: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e46ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e46bb: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 6e46bf: fld dword ptr [ecx + 0x120] */
  { double v = F32((uint32_t)(ecx + 0x120u)); FPUSH(v); }
/* 6e46c5: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 6e46c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e46ca: fchs  */
  ST0 = -ST0;
/* 6e46cc: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e46d2: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 6e46d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e46d7: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 6e46db: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 6e46df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e46e0: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e46e3: call dword ptr [0xcfa2cc] */
  esp -= 4; W32(esp, 0x6e46e9u); SPILL(); f_4e398b(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 6e46e9: mov ecx, eax */
  ecx = eax;
/* 6e46eb: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x6e46f1u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 6e46f1: mov ecx, eax */
  ecx = eax;
/* 6e46f3: call dword ptr [0xcfa2cc] */
  esp -= 4; W32(esp, 0x6e46f9u); SPILL(); f_4e398b(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 6e46f9: mov eax, esi */
  eax = esi;
/* 6e46fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e46fc: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e46ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e4730(void) {
  LOAD_REGS();
L_6e4730: /* 6e4730: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e4733: fld dword ptr [ecx + 0x294] */
  { double v = F32((uint32_t)(ecx + 0x294u)); FPUSH(v); }
/* 6e4739: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e473a: mov esi, dword ptr [esp + 0x74] */
  esi = R32((uint32_t)(esp + 0x74u));
/* 6e473e: fchs  */
  ST0 = -ST0;
/* 6e4740: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 6e4744: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 6e4748: fld dword ptr [ecx + 0x298] */
  { double v = F32((uint32_t)(ecx + 0x298u)); FPUSH(v); }
/* 6e474e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e474f: fchs  */
  ST0 = -ST0;
/* 6e4751: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 6e4757: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e4758: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4759: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e475f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 6e4763: fld dword ptr [ecx + 0x12c] */
  { double v = F32((uint32_t)(ecx + 0x12cu)); FPUSH(v); }
/* 6e4769: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 6e476d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e476e: fchs  */
  ST0 = -ST0;
/* 6e4770: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4771: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 6e4775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4776: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e477c: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 6e4780: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e4783: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x6e4789u); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 6e4789: mov ecx, eax */
  ecx = eax;
/* 6e478b: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x6e4791u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 6e4791: mov ecx, eax */
  ecx = eax;
/* 6e4793: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x6e4799u); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 6e4799: mov eax, esi */
  eax = esi;
/* 6e479b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e479c: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e479f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e47d0(void) {
  LOAD_REGS();
L_6e47d0: /* 6e47d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6e47d1: mov ebp, esp */
  ebp = esp;
/* 6e47d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e47d5: push 0x9c03b0 */
  { uint32_t v = 0x9c03b0u; esp -= 4; W32(esp, v); }
/* 6e47da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e47e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e47e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e47e8: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e47eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e47ec: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 6e47ef: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e47f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e47f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e47f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 6e47f6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 6e47fd: je 0x6e4830 */
  if (zf) goto L_6e4830;
L_6e47ff: /* 6e47ff: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 6e4805: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6e4808: mov ecx, 0xc */
  ecx = 0xcu;
/* 6e480d: mov edi, ebx */
  edi = ebx;
/* 6e480f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e4811: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e4817: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 6e481a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e481b: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e481e: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x6e4824u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 6e4824: lea edi, [ebx + 0x30] */
  edi = (uint32_t)(ebx + 0x30u);
/* 6e4827: mov ecx, 0xc */
  ecx = 0xcu;
/* 6e482c: mov esi, eax */
  esi = eax;
/* 6e482e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_6e4830: /* 6e4830: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 6e4833: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e4835: je 0x6e4868 */
  if (zf) goto L_6e4868;
L_6e4837: /* 6e4837: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 6e483d: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6e4840: mov ecx, 0xc */
  ecx = 0xcu;
/* 6e4845: mov edi, ebx */
  edi = ebx;
/* 6e4847: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e4849: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 6e484c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e484d: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e4853: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e4856: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x6e485cu); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 6e485c: lea edi, [ebx + 0x30] */
  edi = (uint32_t)(ebx + 0x30u);
/* 6e485f: mov ecx, 0xc */
  ecx = 0xcu;
/* 6e4864: mov esi, eax */
  esi = eax;
/* 6e4866: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_6e4868: /* 6e4868: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 6e486b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 6e4871: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e4872: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e4873: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e487a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e487b: mov esp, ebp */
  esp = ebp;
/* 6e487d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6e487e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e4881(void) {
  LOAD_REGS();
L_6e4881: /* 6e4881: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 6e4884: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 6e4889: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 6e488c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e488d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 6e4890: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6e4895u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_6e4895(); return;
}

void f_6e4895(void) {
  LOAD_REGS();
L_6e4895: /* 6e4895: push 0x9f48dc */
  { uint32_t v = 0x9f48dcu; esp -= 4; W32(esp, v); }
/* 6e489a: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 6e489f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x6e48a5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 6e48a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e48a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e48aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e48ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6e48b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_6e48b1: guest_badaddr(0x6e48b1); return;
}

void f_6e4900(void) {
  LOAD_REGS();
L_6e4900: /* 6e4900: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6e4901: mov ebp, esp */
  ebp = esp;
/* 6e4903: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e4905: push 0x9c03c0 */
  { uint32_t v = 0x9c03c0u; esp -= 4; W32(esp, v); }
/* 6e490a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e4910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4911: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e4918: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e491b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e491c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e491d: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 6e4923: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e4924: mov edi, ecx */
  edi = ecx;
/* 6e4926: mov eax, dword ptr [edi + 0x280] */
  eax = R32((uint32_t)(edi + 0x280u));
/* 6e492c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e492e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 6e4931: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 6e4934: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 6e493b: jne 0x6e494e */
  if (!zf) goto L_6e494e;
L_6e493d: /* 6e493d: push 0x5f */
  { uint32_t v = 0x5fu; esp -= 4; W32(esp, v); }
/* 6e493f: push 0xac39b0 */
  { uint32_t v = 0xac39b0u; esp -= 4; W32(esp, v); }
/* 6e4944: push 0xac39a8 */
  { uint32_t v = 0xac39a8u; esp -= 4; W32(esp, v); }
/* 6e4949: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6e494bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e494b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e494e: /* 6e494e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 6e4951: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e4953: jne 0x6e4966 */
  if (!zf) goto L_6e4966;
L_6e4955: /* 6e4955: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 6e4957: push 0xac39b0 */
  { uint32_t v = 0xac39b0u; esp -= 4; W32(esp, v); }
/* 6e495c: push 0xac39a0 */
  { uint32_t v = 0xac39a0u; esp -= 4; W32(esp, v); }
/* 6e4961: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6e4963u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e4963: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e4966: /* 6e4966: mov eax, dword ptr [ebx + 0x280] */
  eax = R32((uint32_t)(ebx + 0x280u));
/* 6e496c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e496e: jne 0x6e4981 */
  if (!zf) goto L_6e4981;
L_6e4970: /* 6e4970: push 0x61 */
  { uint32_t v = 0x61u; esp -= 4; W32(esp, v); }
/* 6e4972: push 0xac39b0 */
  { uint32_t v = 0xac39b0u; esp -= 4; W32(esp, v); }
/* 6e4977: push 0xac3990 */
  { uint32_t v = 0xac3990u; esp -= 4; W32(esp, v); }
/* 6e497c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6e497eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e497e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e4981: /* 6e4981: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 6e4987: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 6e498d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6e498f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6e4991: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6e4994: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6e4997: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6e499a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6e499d: lea edx, [edi + 0x17c] */
  edx = (uint32_t)(edi + 0x17cu);
/* 6e49a3: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 6e49a9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6e49ab: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 6e49ad: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 6e49b0: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 6e49b3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6e49b6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6e49b9: lea eax, [edi + 0x294] */
  eax = (uint32_t)(edi + 0x294u);
/* 6e49bf: lea edx, [ebx + 0x294] */
  edx = (uint32_t)(ebx + 0x294u);
/* 6e49c5: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 6e49c7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6e49c9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 6e49cc: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6e49cf: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 6e49d2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 6e49d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 6e49d8: add edi, 0x350 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6e49de: lea esi, [ebx + 0x350] */
  esi = (uint32_t)(ebx + 0x350u);
/* 6e49e4: mov ecx, 5 */
  ecx = 0x5u;
/* 6e49e9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e49eb: lea edi, [eax + 0x364] */
  edi = (uint32_t)(eax + 0x364u);
/* 6e49f1: lea esi, [ebx + 0x364] */
  esi = (uint32_t)(ebx + 0x364u);
/* 6e49f7: mov ecx, 5 */
  ecx = 0x5u;
/* 6e49fc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e49fe: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 6e4a04: call 0x6c19d8 */
  esp -= 4; W32(esp, 0x6e4a09u); SPILL(); f_6c19d8(); if (g_unwind) return; RELOAD();
/* 6e4a09: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 6e4a0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e4a0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e4a0e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e4a15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e4a16: mov esp, ebp */
  esp = ebp;
/* 6e4a18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6e4a19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e4a1c(void) {
  LOAD_REGS();
L_6e4a1c: /* 6e4a1c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 6e4a1f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 6e4a24: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 6e4a27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4a28: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 6e4a2b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6e4a30u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_6e4a30(); return;
}

void f_6e4a30(void) {
  LOAD_REGS();
L_6e4a30: /* 6e4a30: push 0x9f490c */
  { uint32_t v = 0x9f490cu; esp -= 4; W32(esp, v); }
/* 6e4a35: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 6e4a3a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x6e4a40u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 6e4a40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e4a43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4a45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4a47: call 0x99caf8 */
  esp -= 4; W32(esp, 0x6e4a4cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_6e4a4c: guest_badaddr(0x6e4a4c); return;
}

void f_6e4ab0(void) {
  LOAD_REGS();
L_6e4ab0: /* 6e4ab0: mov eax, 0xb6dcb8 */
  eax = 0xb6dcb8u;
/* 6e4ab5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4ad0(void) {
  LOAD_REGS();
L_6e4ad0: /* 6e4ad0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e4ad5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e4ad7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e4adb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e4adf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4ae1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4ae3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4ae4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e4ae8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4aea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4aeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4aec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4aed: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 6e4af2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e4af8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e4af8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e4afb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4b10(void) {
  LOAD_REGS();
L_6e4b10: /* 6e4b10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e4b14: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4b30(void) {
  LOAD_REGS();
L_6e4b30: /* 6e4b30: mov eax, 1 */
  eax = 0x1u;
/* 6e4b35: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4b50(void) {
  LOAD_REGS();
L_6e4b50: /* 6e4b50: mov eax, 0xb6f6a8 */
  eax = 0xb6f6a8u;
/* 6e4b55: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4b70(void) {
  LOAD_REGS();
L_6e4b70: /* 6e4b70: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e4b75: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e4b77: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e4b7b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e4b7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4b81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4b83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4b84: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e4b88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4b8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4b8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4b8d: push 0xb6f6a8 */
  { uint32_t v = 0xb6f6a8u; esp -= 4; W32(esp, v); }
/* 6e4b92: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e4b98u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e4b98: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e4b9b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4bb0(void) {
  LOAD_REGS();
L_6e4bb0: /* 6e4bb0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e4bb4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4bd0(void) {
  LOAD_REGS();
L_6e4bd0: /* 6e4bd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4bd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e4bd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e4bd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4bd4: mov esi, ecx */
  esi = ecx;
/* 6e4bd6: mov ecx, esp */
  ecx = esp;
/* 6e4bd8: push 0x14f */
  { uint32_t v = 0x14fu; esp -= 4; W32(esp, v); }
/* 6e4bdd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e4be3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e4be3: mov ecx, esi */
  ecx = esi;
/* 6e4be5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e4bebu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e4beb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e4bed: je 0x6e4c17 */
  if (zf) goto L_6e4c17;
L_6e4bef: /* 6e4bef: mov edx, dword ptr [0xb7e2f8] */
  edx = R32((uint32_t)(0xb7e2f8u));
/* 6e4bf5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e4bf9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e4bfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4bfd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e4c01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4c02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4c04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4c05: mov ecx, esi */
  ecx = esi;
/* 6e4c07: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e4c0b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e4c11u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e4c11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4c12: mov ecx, esi */
  ecx = esi;
/* 6e4c14: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e4c17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e4c17: /* 6e4c17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e4c18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e4c19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e4c1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e4c40(void) {
  LOAD_REGS();
L_6e4c40: /* 6e4c40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4c41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e4c42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e4c43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4c44: mov esi, ecx */
  esi = ecx;
/* 6e4c46: mov ecx, esp */
  ecx = esp;
/* 6e4c48: push 0x14c */
  { uint32_t v = 0x14cu; esp -= 4; W32(esp, v); }
/* 6e4c4d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e4c53u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e4c53: mov ecx, esi */
  ecx = esi;
/* 6e4c55: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e4c5bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e4c5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e4c5d: je 0x6e4c87 */
  if (zf) goto L_6e4c87;
L_6e4c5f: /* 6e4c5f: mov edx, dword ptr [0xb7e2f0] */
  edx = R32((uint32_t)(0xb7e2f0u));
/* 6e4c65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e4c69: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e4c6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4c6d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e4c71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4c72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4c74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4c75: mov ecx, esi */
  ecx = esi;
/* 6e4c77: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e4c7b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e4c81u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e4c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4c82: mov ecx, esi */
  ecx = esi;
/* 6e4c84: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e4c87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e4c87: /* 6e4c87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e4c88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e4c89: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e4c8a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e4cb0(void) {
  LOAD_REGS();
L_6e4cb0: /* 6e4cb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4cb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e4cb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e4cb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4cb4: mov esi, ecx */
  esi = ecx;
/* 6e4cb6: mov ecx, esp */
  ecx = esp;
/* 6e4cb8: push 0x169 */
  { uint32_t v = 0x169u; esp -= 4; W32(esp, v); }
/* 6e4cbd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e4cc3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e4cc3: mov ecx, esi */
  ecx = esi;
/* 6e4cc5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e4ccbu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e4ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e4ccd: je 0x6e4cf7 */
  if (zf) goto L_6e4cf7;
L_6e4ccf: /* 6e4ccf: mov edx, dword ptr [0xb7e350] */
  edx = R32((uint32_t)(0xb7e350u));
/* 6e4cd5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e4cd9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e4cdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4cdd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e4ce1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4ce2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4ce4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4ce5: mov ecx, esi */
  ecx = esi;
/* 6e4ce7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e4ceb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e4cf1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e4cf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4cf2: mov ecx, esi */
  ecx = esi;
/* 6e4cf4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e4cf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e4cf7: /* 6e4cf7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e4cf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e4cf9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e4cfa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e4d20(void) {
  LOAD_REGS();
L_6e4d20: /* 6e4d20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4d21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e4d22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e4d23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4d24: mov esi, ecx */
  esi = ecx;
/* 6e4d26: mov ecx, esp */
  ecx = esp;
/* 6e4d28: push 0x168 */
  { uint32_t v = 0x168u; esp -= 4; W32(esp, v); }
/* 6e4d2d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e4d33u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e4d33: mov ecx, esi */
  ecx = esi;
/* 6e4d35: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e4d3bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e4d3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e4d3d: je 0x6e4d67 */
  if (zf) goto L_6e4d67;
L_6e4d3f: /* 6e4d3f: mov edx, dword ptr [0xb7e34c] */
  edx = R32((uint32_t)(0xb7e34cu));
/* 6e4d45: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e4d49: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e4d4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4d4d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e4d51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4d52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4d54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4d55: mov ecx, esi */
  ecx = esi;
/* 6e4d57: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e4d5b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e4d61u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e4d61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4d62: mov ecx, esi */
  ecx = esi;
/* 6e4d64: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e4d67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e4d67: /* 6e4d67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e4d68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e4d69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e4d6a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e4d90(void) {
  LOAD_REGS();
L_6e4d90: /* 6e4d90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4d91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e4d92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e4d93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4d94: mov esi, ecx */
  esi = ecx;
/* 6e4d96: mov ecx, esp */
  ecx = esp;
/* 6e4d98: push 0x167 */
  { uint32_t v = 0x167u; esp -= 4; W32(esp, v); }
/* 6e4d9d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e4da3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e4da3: mov ecx, esi */
  ecx = esi;
/* 6e4da5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e4dabu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e4dab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e4dad: je 0x6e4dd7 */
  if (zf) goto L_6e4dd7;
L_6e4daf: /* 6e4daf: mov edx, dword ptr [0xb7e348] */
  edx = R32((uint32_t)(0xb7e348u));
/* 6e4db5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e4db9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e4dbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4dbd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e4dc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4dc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4dc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4dc5: mov ecx, esi */
  ecx = esi;
/* 6e4dc7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e4dcb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e4dd1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e4dd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4dd2: mov ecx, esi */
  ecx = esi;
/* 6e4dd4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e4dd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e4dd7: /* 6e4dd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e4dd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e4dd9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e4dda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e4e00(void) {
  LOAD_REGS();
L_6e4e00: /* 6e4e00: mov eax, 0xb6e1e8 */
  eax = 0xb6e1e8u;
/* 6e4e05: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4e20(void) {
  LOAD_REGS();
L_6e4e20: /* 6e4e20: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e4e25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e4e27: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e4e2b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e4e2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4e31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4e33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4e34: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e4e38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4e3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4e3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4e3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4e3d: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 6e4e42: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e4e48u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e4e48: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e4e4b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4e60(void) {
  LOAD_REGS();
L_6e4e60: /* 6e4e60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e4e64: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4e80(void) {
  LOAD_REGS();
L_6e4e80: /* 6e4e80: mov eax, 0xb6ec48 */
  eax = 0xb6ec48u;
/* 6e4e85: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4ea0(void) {
  LOAD_REGS();
L_6e4ea0: /* 6e4ea0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e4ea5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e4ea7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e4eab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e4eaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4eb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4eb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4eb4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e4eb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4eba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4ebb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4ebc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4ebd: push 0xb6ec48 */
  { uint32_t v = 0xb6ec48u; esp -= 4; W32(esp, v); }
/* 6e4ec2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e4ec8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e4ec8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e4ecb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4ee0(void) {
  LOAD_REGS();
L_6e4ee0: /* 6e4ee0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e4ee4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4f00(void) {
  LOAD_REGS();
L_6e4f00: /* 6e4f00: mov eax, 0xb6e718 */
  eax = 0xb6e718u;
/* 6e4f05: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4f20(void) {
  LOAD_REGS();
L_6e4f20: /* 6e4f20: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e4f25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e4f27: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e4f2b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e4f2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4f31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4f33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4f34: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e4f38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4f3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4f3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4f3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4f3d: push 0xb6e718 */
  { uint32_t v = 0xb6e718u; esp -= 4; W32(esp, v); }
/* 6e4f42: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e4f48u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e4f48: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e4f4b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4f60(void) {
  LOAD_REGS();
L_6e4f60: /* 6e4f60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e4f64: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4f80(void) {
  LOAD_REGS();
L_6e4f80: /* 6e4f80: mov eax, 0xb6c7f8 */
  eax = 0xb6c7f8u;
/* 6e4f85: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4fa0(void) {
  LOAD_REGS();
L_6e4fa0: /* 6e4fa0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e4fa5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e4fa7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e4fab: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e4faf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4fb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4fb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4fb4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e4fb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e4fba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e4fbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e4fbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e4fbd: push 0xb6c7f8 */
  { uint32_t v = 0xb6c7f8u; esp -= 4; W32(esp, v); }
/* 6e4fc2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e4fc8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e4fc8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e4fcb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e4fe0(void) {
  LOAD_REGS();
L_6e4fe0: /* 6e4fe0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e4fe4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5000(void) {
  LOAD_REGS();
L_6e5000: /* 6e5000: mov eax, 0xb6b868 */
  eax = 0xb6b868u;
/* 6e5005: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5020(void) {
  LOAD_REGS();
L_6e5020: /* 6e5020: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e5025: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e5027: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e502b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e502f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5031: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5033: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5034: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e5038: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e503a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e503b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e503c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e503d: push 0xb6b868 */
  { uint32_t v = 0xb6b868u; esp -= 4; W32(esp, v); }
/* 6e5042: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e5048u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e5048: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e504b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5060(void) {
  LOAD_REGS();
L_6e5060: /* 6e5060: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e5064: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5080(void) {
  LOAD_REGS();
L_6e5080: /* 6e5080: mov eax, dword ptr [0xb7e4ac] */
  eax = R32((uint32_t)(0xb7e4acu));
/* 6e5085: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5086: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5087: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5089: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e508b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e508d: mov esi, ecx */
  esi = ecx;
/* 6e508f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5092: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5098u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5098: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5099: mov ecx, esi */
  ecx = esi;
/* 6e509b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e509eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e509e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e509f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e50a0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e50c0(void) {
  LOAD_REGS();
L_6e50c0: /* 6e50c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e50c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e50c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e50c3: mov esi, ecx */
  esi = ecx;
/* 6e50c5: mov ecx, esp */
  ecx = esp;
/* 6e50c7: push 0x155 */
  { uint32_t v = 0x155u; esp -= 4; W32(esp, v); }
/* 6e50cc: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e50d2u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e50d2: mov ecx, esi */
  ecx = esi;
/* 6e50d4: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e50dau); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e50da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e50dc: je 0x6e50fa */
  if (zf) goto L_6e50fa;
L_6e50de: /* 6e50de: mov eax, dword ptr [0xb7e30c] */
  eax = R32((uint32_t)(0xb7e30cu));
/* 6e50e3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e50e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e50e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e50e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e50eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e50ec: mov ecx, esi */
  ecx = esi;
/* 6e50ee: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e50f4u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e50f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e50f5: mov ecx, esi */
  ecx = esi;
/* 6e50f7: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e50fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e50fa: /* 6e50fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e50fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e50fc: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5110(void) {
  LOAD_REGS();
L_6e5110: /* 6e5110: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5111: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5112: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5113: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5114: mov esi, ecx */
  esi = ecx;
/* 6e5116: mov ecx, esp */
  ecx = esp;
/* 6e5118: push 0x158 */
  { uint32_t v = 0x158u; esp -= 4; W32(esp, v); }
/* 6e511d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e5123u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e5123: mov ecx, esi */
  ecx = esi;
/* 6e5125: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e512bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e512b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e512d: je 0x6e5157 */
  if (zf) goto L_6e5157;
L_6e512f: /* 6e512f: mov edx, dword ptr [0xb7e318] */
  edx = R32((uint32_t)(0xb7e318u));
/* 6e5135: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e5139: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e513b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e513d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e5141: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5142: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5144: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e5145: mov ecx, esi */
  ecx = esi;
/* 6e5147: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e514b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5151u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5151: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5152: mov ecx, esi */
  ecx = esi;
/* 6e5154: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5157u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e5157: /* 6e5157: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5158: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5159: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e515a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5180(void) {
  LOAD_REGS();
L_6e5180: /* 6e5180: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5181: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5182: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5183: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5184: mov esi, ecx */
  esi = ecx;
/* 6e5186: mov ecx, esp */
  ecx = esp;
/* 6e5188: push 0x154 */
  { uint32_t v = 0x154u; esp -= 4; W32(esp, v); }
/* 6e518d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e5193u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e5193: mov ecx, esi */
  ecx = esi;
/* 6e5195: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e519bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e519b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e519d: je 0x6e51c7 */
  if (zf) goto L_6e51c7;
L_6e519f: /* 6e519f: mov edx, dword ptr [0xb7e308] */
  edx = R32((uint32_t)(0xb7e308u));
/* 6e51a5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e51a9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e51ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e51ad: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e51b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e51b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e51b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e51b5: mov ecx, esi */
  ecx = esi;
/* 6e51b7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e51bb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e51c1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e51c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e51c2: mov ecx, esi */
  ecx = esi;
/* 6e51c4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e51c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e51c7: /* 6e51c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e51c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e51c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e51ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e51f0(void) {
  LOAD_REGS();
L_6e51f0: /* 6e51f0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e51f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e51f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e51f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e51f6: mov esi, ecx */
  esi = ecx;
/* 6e51f8: mov ecx, esp */
  ecx = esp;
/* 6e51fa: push 0x156 */
  { uint32_t v = 0x156u; esp -= 4; W32(esp, v); }
/* 6e51ff: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e5205u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e5205: mov ecx, esi */
  ecx = esi;
/* 6e5207: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e520du); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e520d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e520f: je 0x6e5240 */
  if (zf) goto L_6e5240;
L_6e5211: /* 6e5211: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6e5215: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 6e5219: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e521b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e521d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6e5221: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e5222: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6e5226: mov eax, dword ptr [0xb7e310] */
  eax = R32((uint32_t)(0xb7e310u));
/* 6e522b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e522d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6e5231: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5232: mov ecx, esi */
  ecx = esi;
/* 6e5234: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e523au); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e523a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e523b: mov ecx, esi */
  ecx = esi;
/* 6e523d: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5240u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e5240: /* 6e5240: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5241: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5242: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e5245: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e5270(void) {
  LOAD_REGS();
L_6e5270: /* 6e5270: mov eax, dword ptr [0xb7e504] */
  eax = R32((uint32_t)(0xb7e504u));
/* 6e5275: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5276: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5277: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5279: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e527b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e527d: mov esi, ecx */
  esi = ecx;
/* 6e527f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5281: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5282: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5288u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5288: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5289: mov ecx, esi */
  ecx = esi;
/* 6e528b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e528eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e528e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e528f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5290: ret  */
  esp += 4; SPILL(); return;
}

void f_6e52b0(void) {
  LOAD_REGS();
L_6e52b0: /* 6e52b0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e52b3: mov edx, dword ptr [0xb7e42c] */
  edx = R32((uint32_t)(0xb7e42cu));
/* 6e52b9: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e52bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e52be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e52bf: mov esi, ecx */
  esi = ecx;
/* 6e52c1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e52c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e52c5: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e52c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e52ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e52cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e52cd: mov ecx, esi */
  ecx = esi;
/* 6e52cf: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 6e52d7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e52db: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e52e1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e52e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e52e2: mov ecx, esi */
  ecx = esi;
/* 6e52e4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e52e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e52e7: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 6e52eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e52ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e52ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e52f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5320(void) {
  LOAD_REGS();
L_6e5320: /* 6e5320: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e5323: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5324: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5325: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5326: mov esi, ecx */
  esi = ecx;
/* 6e5328: mov ecx, esp */
  ecx = esp;
/* 6e532a: push 0x16a */
  { uint32_t v = 0x16au; esp -= 4; W32(esp, v); }
/* 6e532f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e5335u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e5335: mov ecx, esi */
  ecx = esi;
/* 6e5337: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e533du); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e533d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e533f: je 0x6e5370 */
  if (zf) goto L_6e5370;
L_6e5341: /* 6e5341: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6e5345: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 6e5349: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e534b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e534d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6e5351: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e5352: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6e5356: mov eax, dword ptr [0xb7e354] */
  eax = R32((uint32_t)(0xb7e354u));
/* 6e535b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e535d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6e5361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5362: mov ecx, esi */
  ecx = esi;
/* 6e5364: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e536au); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e536a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e536b: mov ecx, esi */
  ecx = esi;
/* 6e536d: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5370u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e5370: /* 6e5370: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5371: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5372: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e5375: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e53a0(void) {
  LOAD_REGS();
L_6e53a0: /* 6e53a0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e53a3: mov edx, dword ptr [0xb7e500] */
  edx = R32((uint32_t)(0xb7e500u));
/* 6e53a9: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e53ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e53ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e53af: mov esi, ecx */
  esi = ecx;
/* 6e53b1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e53b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e53b5: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e53b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e53ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e53bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e53bd: mov ecx, esi */
  ecx = esi;
/* 6e53bf: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 6e53c7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e53cb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e53d1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e53d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e53d2: mov ecx, esi */
  ecx = esi;
/* 6e53d4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e53d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e53d7: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e53db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e53dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e53dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e53e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5410(void) {
  LOAD_REGS();
L_6e5410: /* 6e5410: mov eax, dword ptr [0xb7e4fc] */
  eax = R32((uint32_t)(0xb7e4fcu));
/* 6e5415: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5416: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5417: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5419: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e541b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e541d: mov esi, ecx */
  esi = ecx;
/* 6e541f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5421: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5422: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5428u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5428: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5429: mov ecx, esi */
  ecx = esi;
/* 6e542b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e542eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e542e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e542f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5430: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5450(void) {
  LOAD_REGS();
L_6e5450: /* 6e5450: mov eax, dword ptr [0xb7e4f8] */
  eax = R32((uint32_t)(0xb7e4f8u));
/* 6e5455: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5456: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5457: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5459: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e545b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e545d: mov esi, ecx */
  esi = ecx;
/* 6e545f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5461: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5462: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5468u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5468: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5469: mov ecx, esi */
  ecx = esi;
/* 6e546b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e546eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e546e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e546f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5470: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5490(void) {
  LOAD_REGS();
L_6e5490: /* 6e5490: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e5493: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5494: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5496: mov esi, ecx */
  esi = ecx;
/* 6e5498: mov ecx, esp */
  ecx = esp;
/* 6e549a: push 0x15c */
  { uint32_t v = 0x15cu; esp -= 4; W32(esp, v); }
/* 6e549f: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 6e54a7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e54adu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e54ad: mov ecx, esi */
  ecx = esi;
/* 6e54af: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e54b5u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e54b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e54b7: je 0x6e54e1 */
  if (zf) goto L_6e54e1;
L_6e54b9: /* 6e54b9: mov edx, dword ptr [0xb7e320] */
  edx = R32((uint32_t)(0xb7e320u));
/* 6e54bf: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6e54c3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e54c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e54c7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e54cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e54cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e54ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e54cf: mov ecx, esi */
  ecx = esi;
/* 6e54d1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e54d5: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e54dbu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e54db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e54dc: mov ecx, esi */
  ecx = esi;
/* 6e54de: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e54e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e54e1: /* 6e54e1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e54e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e54e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e54e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e54ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5510(void) {
  LOAD_REGS();
L_6e5510: /* 6e5510: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e5513: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5514: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5516: mov esi, ecx */
  esi = ecx;
/* 6e5518: mov ecx, esp */
  ecx = esp;
/* 6e551a: push 0x15f */
  { uint32_t v = 0x15fu; esp -= 4; W32(esp, v); }
/* 6e551f: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 6e5527: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e552du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e552d: mov ecx, esi */
  ecx = esi;
/* 6e552f: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e5535u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e5535: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e5537: je 0x6e5561 */
  if (zf) goto L_6e5561;
L_6e5539: /* 6e5539: mov edx, dword ptr [0xb7e32c] */
  edx = R32((uint32_t)(0xb7e32cu));
/* 6e553f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6e5543: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5545: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5547: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e554b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e554c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e554e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e554f: mov ecx, esi */
  ecx = esi;
/* 6e5551: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e5555: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e555bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e555b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e555c: mov ecx, esi */
  ecx = esi;
/* 6e555e: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5561u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e5561: /* 6e5561: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e5565: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5566: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5567: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e556a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5590(void) {
  LOAD_REGS();
L_6e5590: /* 6e5590: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e5593: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5594: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5596: mov esi, ecx */
  esi = ecx;
/* 6e5598: mov ecx, esp */
  ecx = esp;
/* 6e559a: push 0x15d */
  { uint32_t v = 0x15du; esp -= 4; W32(esp, v); }
/* 6e559f: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 6e55a7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e55adu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e55ad: mov ecx, esi */
  ecx = esi;
/* 6e55af: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e55b5u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e55b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e55b7: je 0x6e55e1 */
  if (zf) goto L_6e55e1;
L_6e55b9: /* 6e55b9: mov edx, dword ptr [0xb7e324] */
  edx = R32((uint32_t)(0xb7e324u));
/* 6e55bf: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6e55c3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e55c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e55c7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e55cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e55cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e55ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e55cf: mov ecx, esi */
  ecx = esi;
/* 6e55d1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e55d5: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e55dbu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e55db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e55dc: mov ecx, esi */
  ecx = esi;
/* 6e55de: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e55e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e55e1: /* 6e55e1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e55e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e55e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e55e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e55ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5610(void) {
  LOAD_REGS();
L_6e5610: /* 6e5610: mov eax, dword ptr [0xb7e388] */
  eax = R32((uint32_t)(0xb7e388u));
/* 6e5615: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5616: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5617: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5619: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e561b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e561d: mov esi, ecx */
  esi = ecx;
/* 6e561f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5621: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5622: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5628u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5628: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5629: mov ecx, esi */
  ecx = esi;
/* 6e562b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e562eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e562e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e562f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5630: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5650(void) {
  LOAD_REGS();
L_6e5650: /* 6e5650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5651: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5652: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5653: mov esi, ecx */
  esi = ecx;
/* 6e5655: mov ecx, esp */
  ecx = esp;
/* 6e5657: push 0x14d */
  { uint32_t v = 0x14du; esp -= 4; W32(esp, v); }
/* 6e565c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e5662u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e5662: mov ecx, esi */
  ecx = esi;
/* 6e5664: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e566au); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e566a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e566c: je 0x6e568a */
  if (zf) goto L_6e568a;
L_6e566e: /* 6e566e: mov eax, dword ptr [0xb7e2f4] */
  eax = R32((uint32_t)(0xb7e2f4u));
/* 6e5673: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5675: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5677: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5679: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e567b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e567c: mov ecx, esi */
  ecx = esi;
/* 6e567e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5684u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5684: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5685: mov ecx, esi */
  ecx = esi;
/* 6e5687: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e568au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e568a: /* 6e568a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e568b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e568c: ret  */
  esp += 4; SPILL(); return;
}

void f_6e56a0(void) {
  LOAD_REGS();
L_6e56a0: /* 6e56a0: mov eax, 0xb69e78 */
  eax = 0xb69e78u;
/* 6e56a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e56c0(void) {
  LOAD_REGS();
L_6e56c0: /* 6e56c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e56c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e56c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e56cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e56cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e56d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e56d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e56d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e56d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e56da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e56db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e56dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e56dd: push 0xb69e78 */
  { uint32_t v = 0xb69e78u; esp -= 4; W32(esp, v); }
/* 6e56e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e56e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e56e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e56eb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5700(void) {
  LOAD_REGS();
L_6e5700: /* 6e5700: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e5704: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5720(void) {
  LOAD_REGS();
L_6e5720: /* 6e5720: mov eax, ecx */
  eax = ecx;
/* 6e5722: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5740(void) {
  LOAD_REGS();
L_6e5740: /* 6e5740: mov eax, ecx */
  eax = ecx;
/* 6e5742: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5760(void) {
  LOAD_REGS();
L_6e5760: /* 6e5760: mov eax, ecx */
  eax = ecx;
/* 6e5762: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5780(void) {
  LOAD_REGS();
L_6e5780: /* 6e5780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5781: mov esi, ecx */
  esi = ecx;
/* 6e5783: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e5789u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e5789: mov eax, esi */
  eax = esi;
/* 6e578b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e578c: ret  */
  esp += 4; SPILL(); return;
}

void f_6e57a0(void) {
  LOAD_REGS();
L_6e57a0: /* 6e57a0: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e57c0(void) {
  LOAD_REGS();
L_6e57c0: /* 6e57c0: mov eax, ecx */
  eax = ecx;
/* 6e57c2: ret  */
  esp += 4; SPILL(); return;
}

void f_6e57e0(void) {
  LOAD_REGS();
L_6e57e0: /* 6e57e0: mov eax, dword ptr [0xb7e53c] */
  eax = R32((uint32_t)(0xb7e53cu));
/* 6e57e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e57e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e57e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e57e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e57eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e57ed: mov esi, ecx */
  esi = ecx;
/* 6e57ef: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e57f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e57f2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e57f8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e57f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e57f9: mov ecx, esi */
  ecx = esi;
/* 6e57fb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e57feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e57fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e57ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5800: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5820(void) {
  LOAD_REGS();
L_6e5820: /* 6e5820: mov edx, dword ptr [0xb7e4bc] */
  edx = R32((uint32_t)(0xb7e4bcu));
/* 6e5826: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e582a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e582b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e582c: mov esi, ecx */
  esi = ecx;
/* 6e582e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5830: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5832: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e5836: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5837: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5839: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e583a: mov ecx, esi */
  ecx = esi;
/* 6e583c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e5840: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5846u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5846: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5847: mov ecx, esi */
  ecx = esi;
/* 6e5849: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e584cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e584c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e584d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e584e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5870(void) {
  LOAD_REGS();
L_6e5870: /* 6e5870: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e5873: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 6e5877: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6e587b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e587c: mov esi, ecx */
  esi = ecx;
/* 6e587e: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 6e5882: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5883: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5885: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 6e5889: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e588b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e588f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5890: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 6e5894: mov edx, dword ptr [0xb7e4b8] */
  edx = R32((uint32_t)(0xb7e4b8u));
/* 6e589a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6e589e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 6e58a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e58a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e58a5: mov ecx, esi */
  ecx = esi;
/* 6e58a7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 6e58ab: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e58b1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e58b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e58b2: mov ecx, esi */
  ecx = esi;
/* 6e58b4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e58b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e58b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e58b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e58b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e58bc: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_6e58e0(void) {
  LOAD_REGS();
L_6e58e0: /* 6e58e0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e58e3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e58e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e58e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e58e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e58eb: mov esi, ecx */
  esi = ecx;
/* 6e58ed: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 6e58f1: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e58f3: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6e58f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e58f8: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6e58fc: mov eax, dword ptr [0xb7e50c] */
  eax = R32((uint32_t)(0xb7e50cu));
/* 6e5901: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5903: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6e5907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5908: mov ecx, esi */
  ecx = esi;
/* 6e590a: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5910u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5911: mov ecx, esi */
  ecx = esi;
/* 6e5913: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5916u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e5916: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5917: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5918: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e591b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e5930(void) {
  LOAD_REGS();
L_6e5930: /* 6e5930: mov edx, dword ptr [0xb7e494] */
  edx = R32((uint32_t)(0xb7e494u));
/* 6e5936: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e593a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e593b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e593c: mov esi, ecx */
  esi = ecx;
/* 6e593e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5940: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5942: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e5946: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5947: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5949: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e594a: mov ecx, esi */
  ecx = esi;
/* 6e594c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e5950: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5956u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5956: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5957: mov ecx, esi */
  ecx = esi;
/* 6e5959: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e595cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e595c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e595d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e595e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5980(void) {
  LOAD_REGS();
L_6e5980: /* 6e5980: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e5983: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e5987: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5988: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5989: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e598b: mov esi, ecx */
  esi = ecx;
/* 6e598d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 6e5991: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5993: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6e5997: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e5998: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6e599c: mov eax, dword ptr [0xb7e490] */
  eax = R32((uint32_t)(0xb7e490u));
/* 6e59a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e59a3: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6e59a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e59a8: mov ecx, esi */
  ecx = esi;
/* 6e59aa: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e59b0u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e59b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e59b1: mov ecx, esi */
  ecx = esi;
/* 6e59b3: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e59b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e59b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e59b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e59b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e59bb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e59d0(void) {
  LOAD_REGS();
L_6e59d0: /* 6e59d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e59d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e59d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e59d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e59d4: mov esi, ecx */
  esi = ecx;
/* 6e59d6: mov ecx, esp */
  ecx = esp;
/* 6e59d8: push 0x151 */
  { uint32_t v = 0x151u; esp -= 4; W32(esp, v); }
/* 6e59dd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e59e3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e59e3: mov ecx, esi */
  ecx = esi;
/* 6e59e5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e59ebu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e59eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e59ed: je 0x6e5a17 */
  if (zf) goto L_6e5a17;
L_6e59ef: /* 6e59ef: mov edx, dword ptr [0xb7e300] */
  edx = R32((uint32_t)(0xb7e300u));
/* 6e59f5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e59f9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e59fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e59fd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e5a01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5a02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5a04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e5a05: mov ecx, esi */
  ecx = esi;
/* 6e5a07: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e5a0b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5a11u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5a11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5a12: mov ecx, esi */
  ecx = esi;
/* 6e5a14: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5a17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e5a17: /* 6e5a17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5a18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5a19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e5a1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5a40(void) {
  LOAD_REGS();
L_6e5a40: /* 6e5a40: mov edx, dword ptr [0xb7e404] */
  edx = R32((uint32_t)(0xb7e404u));
/* 6e5a46: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e5a4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5a4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5a4c: mov esi, ecx */
  esi = ecx;
/* 6e5a4e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5a50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5a52: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e5a56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5a57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5a59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e5a5a: mov ecx, esi */
  ecx = esi;
/* 6e5a5c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e5a60: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5a66u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5a67: mov ecx, esi */
  ecx = esi;
/* 6e5a69: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5a6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e5a6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5a6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5a6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5a90(void) {
  LOAD_REGS();
L_6e5a90: /* 6e5a90: mov eax, dword ptr [0xb7e3e8] */
  eax = R32((uint32_t)(0xb7e3e8u));
/* 6e5a95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5a96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5a97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5a99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5a9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5a9d: mov esi, ecx */
  esi = ecx;
/* 6e5a9f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5aa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5aa2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5aa8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5aa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5aa9: mov ecx, esi */
  ecx = esi;
/* 6e5aab: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5aaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e5aae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5aaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5ab0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5ad0(void) {
  LOAD_REGS();
L_6e5ad0: /* 6e5ad0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e5ad3: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 6e5ad7: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 6e5adb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5adc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5add: mov esi, ecx */
  esi = ecx;
/* 6e5adf: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 6e5ae3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5ae5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5ae7: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 6e5aeb: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 6e5aef: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 6e5af3: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6e5af7: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 6e5afb: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 6e5aff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e5b00: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e5b04: mov eax, dword ptr [0xb7e3f0] */
  eax = R32((uint32_t)(0xb7e3f0u));
/* 6e5b09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5b0b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 6e5b0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5b10: mov ecx, esi */
  ecx = esi;
/* 6e5b12: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5b18u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5b18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5b19: mov ecx, esi */
  ecx = esi;
/* 6e5b1b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5b1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e5b1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5b1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5b20: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e5b23: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_6e5b50(void) {
  LOAD_REGS();
L_6e5b50: /* 6e5b50: mov eax, dword ptr [0xb7e414] */
  eax = R32((uint32_t)(0xb7e414u));
/* 6e5b55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5b56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5b57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5b59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5b5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5b5d: mov esi, ecx */
  esi = ecx;
/* 6e5b5f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5b61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5b62: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5b68u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5b69: mov ecx, esi */
  ecx = esi;
/* 6e5b6b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5b6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e5b6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5b6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5b70: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5b90(void) {
  LOAD_REGS();
L_6e5b90: /* 6e5b90: mov edx, dword ptr [0xb7e530] */
  edx = R32((uint32_t)(0xb7e530u));
/* 6e5b96: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e5b9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5b9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5b9c: mov esi, ecx */
  esi = ecx;
/* 6e5b9e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5ba0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5ba2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e5ba6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5ba7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5ba9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e5baa: mov ecx, esi */
  ecx = esi;
/* 6e5bac: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e5bb0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5bb6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5bb7: mov ecx, esi */
  ecx = esi;
/* 6e5bb9: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5bbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e5bbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5bbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5bbe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e5be0(void) {
  LOAD_REGS();
L_6e5be0: /* 6e5be0: mov eax, dword ptr [0xb7e554] */
  eax = R32((uint32_t)(0xb7e554u));
/* 6e5be5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5be6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e5be7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5be9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5beb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5bed: mov esi, ecx */
  esi = ecx;
/* 6e5bef: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e5bf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5bf2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e5bf8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e5bf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5bf9: mov ecx, esi */
  ecx = esi;
/* 6e5bfb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e5bfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e5bfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e5bff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5c00: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5c20(void) {
  LOAD_REGS();
L_6e5c20: /* 6e5c20: mov eax, 0xb6a8d8 */
  eax = 0xb6a8d8u;
/* 6e5c25: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5c40(void) {
  LOAD_REGS();
L_6e5c40: /* 6e5c40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e5c45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e5c47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e5c4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e5c4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5c51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5c54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e5c58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e5c5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e5c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5c5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5c5d: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 6e5c62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e5c68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e5c68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e5c6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5c80(void) {
  LOAD_REGS();
L_6e5c80: /* 6e5c80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e5c84: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5ca0(void) {
  LOAD_REGS();
L_6e5ca0: /* 6e5ca0: mov eax, 1 */
  eax = 0x1u;
/* 6e5ca5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5cc0(void) {
  LOAD_REGS();
L_6e5cc0: /* 6e5cc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e5cc2: push 0x9c03e5 */
  { uint32_t v = 0x9c03e5u; esp -= 4; W32(esp, v); }
/* 6e5cc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e5ccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5cce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e5cd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5cd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5cd7: mov esi, ecx */
  esi = ecx;
/* 6e5cd9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e5cdd: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e5ce3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e5ce3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 6e5ce6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e5cee: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e5cf4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e5cf4: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 6e5cf7: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6e5cfc: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e5d02u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e5d02: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e5d06: mov eax, esi */
  eax = esi;
/* 6e5d08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5d09: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e5d10: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e5d13: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5d40(void) {
  LOAD_REGS();
L_6e5d40: /* 6e5d40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e5d42: push 0x9c0415 */
  { uint32_t v = 0x9c0415u; esp -= 4; W32(esp, v); }
/* 6e5d47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e5d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5d4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e5d55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5d56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5d57: mov esi, ecx */
  esi = ecx;
/* 6e5d59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e5d5d: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 6e5d60: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6e5d68: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e5d6eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e5d6e: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 6e5d71: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6e5d76: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e5d7cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e5d7c: mov ecx, esi */
  ecx = esi;
/* 6e5d7e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e5d86: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e5d8cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e5d8c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e5d90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5d91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e5d98: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e5d9b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5dc0(void) {
  LOAD_REGS();
L_6e5dc0: /* 6e5dc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5dc1: mov esi, ecx */
  esi = ecx;
/* 6e5dc3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 6e5dc6: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6e5dccu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6e5dcc: mov eax, esi */
  eax = esi;
/* 6e5dce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5dcf: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5de0(void) {
  LOAD_REGS();
L_6e5de0: /* 6e5de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5de1: mov esi, ecx */
  esi = ecx;
/* 6e5de3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6e5de6: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e5decu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e5dec: mov eax, esi */
  eax = esi;
/* 6e5dee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5def: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5e00(void) {
  LOAD_REGS();
L_6e5e00: /* 6e5e00: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e5e03: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e5e20(void) {
  LOAD_REGS();
L_6e5e20: /* 6e5e20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e5e22: push 0x9c043c */
  { uint32_t v = 0x9c043cu; esp -= 4; W32(esp, v); }
/* 6e5e27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e5e2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5e2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e5e35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5e36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5e37: mov esi, ecx */
  esi = ecx;
/* 6e5e39: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6e5e3c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e5e40: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e5e46u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e5e46: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 6e5e49: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e5e51: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6e5e57u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6e5e57: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e5e5b: mov eax, esi */
  eax = esi;
/* 6e5e5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5e5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e5e65: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e5e68: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5e90(void) {
  LOAD_REGS();
L_6e5e90: /* 6e5e90: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e5e93: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e5eb0(void) {
  LOAD_REGS();
L_6e5eb0: /* 6e5eb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e5eb2: push 0x9c0459 */
  { uint32_t v = 0x9c0459u; esp -= 4; W32(esp, v); }
/* 6e5eb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e5ebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e5ebe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e5ec5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e5ec6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5ec7: mov esi, ecx */
  esi = ecx;
/* 6e5ec9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e5ecd: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e5ed3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e5ed3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e5ed6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e5ede: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6e5ee4u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6e5ee4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e5ee8: mov eax, esi */
  eax = esi;
/* 6e5eea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5eeb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e5ef2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e5ef5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5f20(void) {
  LOAD_REGS();
L_6e5f20: /* 6e5f20: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e5f40(void) {
  LOAD_REGS();
L_6e5f40: /* 6e5f40: mov eax, ecx */
  eax = ecx;
/* 6e5f42: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5f60(void) {
  LOAD_REGS();
L_6e5f60: /* 6e5f60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5f61: mov esi, ecx */
  esi = ecx;
/* 6e5f63: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e5f69u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e5f69: mov eax, esi */
  eax = esi;
/* 6e5f6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5f6c: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5f80(void) {
  LOAD_REGS();
L_6e5f80: /* 6e5f80: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e5fa0(void) {
  LOAD_REGS();
L_6e5fa0: /* 6e5fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5fa1: mov esi, ecx */
  esi = ecx;
/* 6e5fa3: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e5fa9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e5fa9: mov eax, esi */
  eax = esi;
/* 6e5fab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5fac: ret  */
  esp += 4; SPILL(); return;
}

void f_6e5fc0(void) {
  LOAD_REGS();
L_6e5fc0: /* 6e5fc0: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e5fe0(void) {
  LOAD_REGS();
L_6e5fe0: /* 6e5fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e5fe1: mov esi, ecx */
  esi = ecx;
/* 6e5fe3: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e5fe9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e5fe9: mov eax, esi */
  eax = esi;
/* 6e5feb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e5fec: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6000(void) {
  LOAD_REGS();
L_6e6000: /* 6e6000: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e6020(void) {
  LOAD_REGS();
L_6e6020: /* 6e6020: mov eax, 0xb5e8e8 */
  eax = 0xb5e8e8u;
/* 6e6025: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6040(void) {
  LOAD_REGS();
L_6e6040: /* 6e6040: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6045: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6047: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e604b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e604f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6051: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6053: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6054: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e605a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e605b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e605c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e605d: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 6e6062: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6068u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6068: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e606b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6080(void) {
  LOAD_REGS();
L_6e6080: /* 6e6080: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6084: ret  */
  esp += 4; SPILL(); return;
}

void f_6e60a0(void) {
  LOAD_REGS();
L_6e60a0: /* 6e60a0: mov eax, 0xb6a3a8 */
  eax = 0xb6a3a8u;
/* 6e60a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e60c0(void) {
  LOAD_REGS();
L_6e60c0: /* 6e60c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e60c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e60c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e60cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e60cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e60d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e60d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e60d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e60d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e60da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e60db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e60dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e60dd: push 0xb6a3a8 */
  { uint32_t v = 0xb6a3a8u; esp -= 4; W32(esp, v); }
/* 6e60e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e60e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e60e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e60eb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6100(void) {
  LOAD_REGS();
L_6e6100: /* 6e6100: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6104: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6120(void) {
  LOAD_REGS();
L_6e6120: /* 6e6120: mov eax, 0xb636b8 */
  eax = 0xb636b8u;
/* 6e6125: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6140(void) {
  LOAD_REGS();
L_6e6140: /* 6e6140: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6145: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6147: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e614b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e614f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6151: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6154: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6158: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e615a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e615b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e615c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e615d: push 0xb636b8 */
  { uint32_t v = 0xb636b8u; esp -= 4; W32(esp, v); }
/* 6e6162: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6168u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6168: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e616b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6180(void) {
  LOAD_REGS();
L_6e6180: /* 6e6180: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6184: ret  */
  esp += 4; SPILL(); return;
}

void f_6e61a0(void) {
  LOAD_REGS();
L_6e61a0: /* 6e61a0: mov eax, 0xb69948 */
  eax = 0xb69948u;
/* 6e61a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e61c0(void) {
  LOAD_REGS();
L_6e61c0: /* 6e61c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e61c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e61c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e61cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e61cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e61d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e61d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e61d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e61d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e61da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e61db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e61dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e61dd: push 0xb69948 */
  { uint32_t v = 0xb69948u; esp -= 4; W32(esp, v); }
/* 6e61e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e61e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e61e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e61eb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6200(void) {
  LOAD_REGS();
L_6e6200: /* 6e6200: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6204: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6220(void) {
  LOAD_REGS();
L_6e6220: /* 6e6220: mov eax, 0xb69418 */
  eax = 0xb69418u;
/* 6e6225: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6240(void) {
  LOAD_REGS();
L_6e6240: /* 6e6240: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6245: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6247: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e624b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e624f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6251: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6253: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6254: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6258: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e625a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e625b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e625c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e625d: push 0xb69418 */
  { uint32_t v = 0xb69418u; esp -= 4; W32(esp, v); }
/* 6e6262: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6268u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6268: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e626b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6280(void) {
  LOAD_REGS();
L_6e6280: /* 6e6280: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6284: ret  */
  esp += 4; SPILL(); return;
}

void f_6e62a0(void) {
  LOAD_REGS();
L_6e62a0: /* 6e62a0: mov eax, 0xb5d428 */
  eax = 0xb5d428u;
/* 6e62a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e62c0(void) {
  LOAD_REGS();
L_6e62c0: /* 6e62c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e62c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e62c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e62cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e62cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e62d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e62d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e62d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e62d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e62da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e62db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e62dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e62dd: push 0xb5d428 */
  { uint32_t v = 0xb5d428u; esp -= 4; W32(esp, v); }
/* 6e62e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e62e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e62e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e62eb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6300(void) {
  LOAD_REGS();
L_6e6300: /* 6e6300: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6304: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6320(void) {
  LOAD_REGS();
L_6e6320: /* 6e6320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e6321: mov esi, ecx */
  esi = ecx;
/* 6e6323: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x6e6329u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 6e6329: mov eax, esi */
  eax = esi;
/* 6e632b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e632c: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6340(void) {
  LOAD_REGS();
L_6e6340: /* 6e6340: jmp dword ptr [0xcfa304] */
  SPILL(); f_4e2397(); return; /* Core!??1FStringNoInit@@QAE@XZ */
}

void f_6e6360(void) {
  LOAD_REGS();
L_6e6360: /* 6e6360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e6361: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e6362: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e6366: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e6367: mov esi, ecx */
  esi = ecx;
/* 6e6369: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x6e636fu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 6e636f: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 6e6372: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 6e6375: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 6e6378: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 6e637b: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 6e637e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e637f: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 6e6382: mov eax, esi */
  eax = esi;
/* 6e6384: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e6385: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e63a0(void) {
  LOAD_REGS();
L_6e63a0: /* 6e63a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e63a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e63a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e63a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e63a7: mov esi, ecx */
  esi = ecx;
/* 6e63a9: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x6e63afu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 6e63af: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 6e63b2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 6e63b5: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 6e63b8: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 6e63bb: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 6e63be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e63bf: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 6e63c2: mov eax, esi */
  eax = esi;
/* 6e63c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e63c5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e63e0(void) {
  LOAD_REGS();
L_6e63e0: /* 6e63e0: mov edx, dword ptr [0xb7e3a4] */
  edx = R32((uint32_t)(0xb7e3a4u));
/* 6e63e6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e63ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e63eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e63ec: mov esi, ecx */
  esi = ecx;
/* 6e63ee: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e63f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e63f2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e63f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e63f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e63f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e63fa: mov ecx, esi */
  ecx = esi;
/* 6e63fc: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e6400: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e6406u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e6406: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6407: mov ecx, esi */
  ecx = esi;
/* 6e6409: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e640cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e640c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e640d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e640e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e6430(void) {
  LOAD_REGS();
L_6e6430: /* 6e6430: mov eax, dword ptr [0xb7e3fc] */
  eax = R32((uint32_t)(0xb7e3fcu));
/* 6e6435: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e6436: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e6437: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6439: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e643b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e643d: mov esi, ecx */
  esi = ecx;
/* 6e643f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e6441: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6442: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e6448u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e6448: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6449: mov ecx, esi */
  ecx = esi;
/* 6e644b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e644eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e644e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e644f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e6450: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6470(void) {
  LOAD_REGS();
L_6e6470: /* 6e6470: mov eax, dword ptr [0xb7e434] */
  eax = R32((uint32_t)(0xb7e434u));
/* 6e6475: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e6476: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e6477: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6479: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e647b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e647d: mov esi, ecx */
  esi = ecx;
/* 6e647f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e6481: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6482: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e6488u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e6488: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6489: mov ecx, esi */
  ecx = esi;
/* 6e648b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e648eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e648e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e648f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e6490: ret  */
  esp += 4; SPILL(); return;
}

void f_6e64b0(void) {
  LOAD_REGS();
L_6e64b0: /* 6e64b0: mov eax, 0xb655d8 */
  eax = 0xb655d8u;
/* 6e64b5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e64d0(void) {
  LOAD_REGS();
L_6e64d0: /* 6e64d0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e64d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e64d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e64db: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e64df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e64e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e64e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e64e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e64e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e64ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e64eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e64ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e64ed: push 0xb655d8 */
  { uint32_t v = 0xb655d8u; esp -= 4; W32(esp, v); }
/* 6e64f2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e64f8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e64f8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e64fb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6510(void) {
  LOAD_REGS();
L_6e6510: /* 6e6510: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6514: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6530(void) {
  LOAD_REGS();
L_6e6530: /* 6e6530: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e6532: push 0x9c0479 */
  { uint32_t v = 0x9c0479u; esp -= 4; W32(esp, v); }
/* 6e6537: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e653d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e653e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e6545: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e6547: mov esi, ecx */
  esi = ecx;
/* 6e6549: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e654d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e6553u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e6553: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e6556: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e655e: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e6564u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e6564: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e6568: mov eax, esi */
  eax = esi;
/* 6e656a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e656b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e6572: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6575: ret  */
  esp += 4; SPILL(); return;
}

void f_6e65a0(void) {
  LOAD_REGS();
L_6e65a0: /* 6e65a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e65a2: push 0x9c0499 */
  { uint32_t v = 0x9c0499u; esp -= 4; W32(esp, v); }
/* 6e65a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e65ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e65ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e65b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e65b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e65b7: mov esi, ecx */
  esi = ecx;
/* 6e65b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e65bd: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e65c0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e65c8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e65ceu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e65ce: mov ecx, esi */
  ecx = esi;
/* 6e65d0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e65d8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e65deu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e65de: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e65e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e65e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e65ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e65ed: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6610(void) {
  LOAD_REGS();
L_6e6610: /* 6e6610: mov eax, 0xb61cc8 */
  eax = 0xb61cc8u;
/* 6e6615: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6630(void) {
  LOAD_REGS();
L_6e6630: /* 6e6630: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6635: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6637: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e663b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e663f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6641: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6643: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6644: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6648: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e664a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e664b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e664c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e664d: push 0xb61cc8 */
  { uint32_t v = 0xb61cc8u; esp -= 4; W32(esp, v); }
/* 6e6652: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6658u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6658: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e665b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6670(void) {
  LOAD_REGS();
L_6e6670: /* 6e6670: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6674: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6690(void) {
  LOAD_REGS();
L_6e6690: /* 6e6690: mov eax, 1 */
  eax = 0x1u;
/* 6e6695: ret  */
  esp += 4; SPILL(); return;
}

void f_6e66b0(void) {
  LOAD_REGS();
L_6e66b0: /* 6e66b0: mov eax, 0xb61798 */
  eax = 0xb61798u;
/* 6e66b5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e66d0(void) {
  LOAD_REGS();
L_6e66d0: /* 6e66d0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e66d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e66d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e66db: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e66df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e66e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e66e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e66e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e66e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e66ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e66eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e66ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e66ed: push 0xb61798 */
  { uint32_t v = 0xb61798u; esp -= 4; W32(esp, v); }
/* 6e66f2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e66f8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e66f8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e66fb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6710(void) {
  LOAD_REGS();
L_6e6710: /* 6e6710: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6714: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6730(void) {
  LOAD_REGS();
L_6e6730: /* 6e6730: mov eax, 0xb5d958 */
  eax = 0xb5d958u;
/* 6e6735: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6750(void) {
  LOAD_REGS();
L_6e6750: /* 6e6750: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6755: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6757: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e675b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e675f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6761: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6763: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6764: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6768: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e676a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e676b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e676c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e676d: push 0xb5d958 */
  { uint32_t v = 0xb5d958u; esp -= 4; W32(esp, v); }
/* 6e6772: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6778u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6778: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e677b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6790(void) {
  LOAD_REGS();
L_6e6790: /* 6e6790: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6794: ret  */
  esp += 4; SPILL(); return;
}

void f_6e67b0(void) {
  LOAD_REGS();
L_6e67b0: /* 6e67b0: mov eax, 0xb5c498 */
  eax = 0xb5c498u;
/* 6e67b5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e67d0(void) {
  LOAD_REGS();
L_6e67d0: /* 6e67d0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e67d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e67d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e67db: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e67df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e67e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e67e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e67e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e67e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e67ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e67eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e67ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e67ed: push 0xb5c498 */
  { uint32_t v = 0xb5c498u; esp -= 4; W32(esp, v); }
/* 6e67f2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e67f8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e67f8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e67fb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6810(void) {
  LOAD_REGS();
L_6e6810: /* 6e6810: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6814: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6830(void) {
  LOAD_REGS();
L_6e6830: /* 6e6830: mov eax, 0xb20d28 */
  eax = 0xb20d28u;
/* 6e6835: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6850(void) {
  LOAD_REGS();
L_6e6850: /* 6e6850: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6855: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6857: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e685b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e685f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6861: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6863: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6864: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6868: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e686a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e686b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e686c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e686d: push 0xb20d28 */
  { uint32_t v = 0xb20d28u; esp -= 4; W32(esp, v); }
/* 6e6872: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6878u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6878: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e687b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6890(void) {
  LOAD_REGS();
L_6e6890: /* 6e6890: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6894: ret  */
  esp += 4; SPILL(); return;
}

void f_6e68b0(void) {
  LOAD_REGS();
L_6e68b0: /* 6e68b0: mov eax, 0xb1fd98 */
  eax = 0xb1fd98u;
/* 6e68b5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e68d0(void) {
  LOAD_REGS();
L_6e68d0: /* 6e68d0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e68d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e68d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e68db: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e68df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e68e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e68e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e68e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e68e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e68ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e68eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e68ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e68ed: push 0xb1fd98 */
  { uint32_t v = 0xb1fd98u; esp -= 4; W32(esp, v); }
/* 6e68f2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e68f8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e68f8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e68fb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6910(void) {
  LOAD_REGS();
L_6e6910: /* 6e6910: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6914: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6930(void) {
  LOAD_REGS();
L_6e6930: /* 6e6930: mov eax, 0xb202c8 */
  eax = 0xb202c8u;
/* 6e6935: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6950(void) {
  LOAD_REGS();
L_6e6950: /* 6e6950: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6955: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6957: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e695b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e695f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6961: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6963: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6964: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6968: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e696a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e696b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e696c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e696d: push 0xb202c8 */
  { uint32_t v = 0xb202c8u; esp -= 4; W32(esp, v); }
/* 6e6972: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6978u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6978: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e697b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e696b(void) {
  LOAD_REGS();
L_6e696b: /* 6e696b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e696c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e696d: push 0xb202c8 */
  { uint32_t v = 0xb202c8u; esp -= 4; W32(esp, v); }
/* 6e6972: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6978u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6978: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e697b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6990(void) {
  LOAD_REGS();
L_6e6990: /* 6e6990: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6994: ret  */
  esp += 4; SPILL(); return;
}

void f_6e69b0(void) {
  LOAD_REGS();
L_6e69b0: /* 6e69b0: mov edx, dword ptr [0xb7e450] */
  edx = R32((uint32_t)(0xb7e450u));
/* 6e69b6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e69ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e69bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e69bc: mov esi, ecx */
  esi = ecx;
/* 6e69be: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e69c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e69c2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e69c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e69c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e69c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e69ca: mov ecx, esi */
  ecx = esi;
/* 6e69cc: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e69d0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e69d6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e69d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e69d7: mov ecx, esi */
  ecx = esi;
/* 6e69d9: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e69dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e69dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e69dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e69de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e6a00(void) {
  LOAD_REGS();
L_6e6a00: /* 6e6a00: mov eax, 0xb1c480 */
  eax = 0xb1c480u;
/* 6e6a05: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6a20(void) {
  LOAD_REGS();
L_6e6a20: /* 6e6a20: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6a25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6a27: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6a2b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6a2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6a31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6a33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6a34: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6a38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6a3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6a3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6a3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6a3d: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 6e6a42: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6a48u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6a48: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6a4b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6a60(void) {
  LOAD_REGS();
L_6e6a60: /* 6e6a60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6a64: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6a80(void) {
  LOAD_REGS();
L_6e6a80: /* 6e6a80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e6aa0(void) {
  LOAD_REGS();
L_6e6aa0: /* 6e6aa0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6ac0(void) {
  LOAD_REGS();
L_6e6ac0: /* 6e6ac0: mov eax, 0xb1d940 */
  eax = 0xb1d940u;
/* 6e6ac5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6ae0(void) {
  LOAD_REGS();
L_6e6ae0: /* 6e6ae0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6ae5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6ae7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6aeb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6aef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6af1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6af3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6af4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6af8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6afa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6afb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6afc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6afd: push 0xb1d940 */
  { uint32_t v = 0xb1d940u; esp -= 4; W32(esp, v); }
/* 6e6b02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6b08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6b08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6b0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6b20(void) {
  LOAD_REGS();
L_6e6b20: /* 6e6b20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6b24: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6b40(void) {
  LOAD_REGS();
L_6e6b40: /* 6e6b40: mov eax, 0xb1d410 */
  eax = 0xb1d410u;
/* 6e6b45: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6b60(void) {
  LOAD_REGS();
L_6e6b60: /* 6e6b60: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6b65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6b67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6b6b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6b6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6b71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6b73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6b74: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6b78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6b7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6b7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6b7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6b7d: push 0xb1d410 */
  { uint32_t v = 0xb1d410u; esp -= 4; W32(esp, v); }
/* 6e6b82: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6b88u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6b88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6b8b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6ba0(void) {
  LOAD_REGS();
L_6e6ba0: /* 6e6ba0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6ba4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6bc0(void) {
  LOAD_REGS();
L_6e6bc0: /* 6e6bc0: mov eax, 0xb1cee0 */
  eax = 0xb1cee0u;
/* 6e6bc5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6be0(void) {
  LOAD_REGS();
L_6e6be0: /* 6e6be0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6be5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6be7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6beb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6bef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6bf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6bf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6bf4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6bf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6bfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6bfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6bfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6bfd: push 0xb1cee0 */
  { uint32_t v = 0xb1cee0u; esp -= 4; W32(esp, v); }
/* 6e6c02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6c08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6c08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6c0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6c20(void) {
  LOAD_REGS();
L_6e6c20: /* 6e6c20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6c24: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6c40(void) {
  LOAD_REGS();
L_6e6c40: /* 6e6c40: mov eax, 0xb1c9b0 */
  eax = 0xb1c9b0u;
/* 6e6c45: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6c60(void) {
  LOAD_REGS();
L_6e6c60: /* 6e6c60: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6c65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6c67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6c6b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6c6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6c71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6c73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6c74: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6c78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6c7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6c7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6c7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6c7d: push 0xb1c9b0 */
  { uint32_t v = 0xb1c9b0u; esp -= 4; W32(esp, v); }
/* 6e6c82: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6c88u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6c88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6c8b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6ca0(void) {
  LOAD_REGS();
L_6e6ca0: /* 6e6ca0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6ca4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6cc0(void) {
  LOAD_REGS();
L_6e6cc0: /* 6e6cc0: mov eax, 0xcc6208 */
  eax = 0xcc6208u;
/* 6e6cc5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6ce0(void) {
  LOAD_REGS();
L_6e6ce0: /* 6e6ce0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6ce5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6ce7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6ceb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6cef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6cf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6cf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6cf4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6cf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6cfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6cfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6cfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6cfd: push 0xcc6208 */
  { uint32_t v = 0xcc6208u; esp -= 4; W32(esp, v); }
/* 6e6d02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6d08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6d08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6d0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6d20(void) {
  LOAD_REGS();
L_6e6d20: /* 6e6d20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6d24: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6d40(void) {
  LOAD_REGS();
L_6e6d40: /* 6e6d40: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e6d60(void) {
  LOAD_REGS();
L_6e6d60: /* 6e6d60: mov eax, 0xceb690 */
  eax = 0xceb690u;
/* 6e6d65: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6d80(void) {
  LOAD_REGS();
L_6e6d80: /* 6e6d80: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6d85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6d87: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6d8b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6d8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6d91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6d93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6d94: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6d98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6d9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6d9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6d9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6d9d: push 0xceb690 */
  { uint32_t v = 0xceb690u; esp -= 4; W32(esp, v); }
/* 6e6da2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6da8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6da8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6dab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6dc0(void) {
  LOAD_REGS();
L_6e6dc0: /* 6e6dc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6dc4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6de0(void) {
  LOAD_REGS();
L_6e6de0: /* 6e6de0: mov eax, 0xce68c8 */
  eax = 0xce68c8u;
/* 6e6de5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6e00(void) {
  LOAD_REGS();
L_6e6e00: /* 6e6e00: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6e05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6e07: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6e0b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6e0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6e11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6e13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6e14: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6e18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6e1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6e1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6e1d: push 0xce68c8 */
  { uint32_t v = 0xce68c8u; esp -= 4; W32(esp, v); }
/* 6e6e22: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6e28u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6e28: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6e2b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6e40(void) {
  LOAD_REGS();
L_6e6e40: /* 6e6e40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6e44: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6e60(void) {
  LOAD_REGS();
L_6e6e60: /* 6e6e60: mov eax, 0xce6288 */
  eax = 0xce6288u;
/* 6e6e65: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6e80(void) {
  LOAD_REGS();
L_6e6e80: /* 6e6e80: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6e85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6e87: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6e8b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6e8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6e91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6e93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6e94: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6e98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6e9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6e9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6e9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6e9d: push 0xce6288 */
  { uint32_t v = 0xce6288u; esp -= 4; W32(esp, v); }
/* 6e6ea2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6ea8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6ea8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6eab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6ec0(void) {
  LOAD_REGS();
L_6e6ec0: /* 6e6ec0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6ec4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6ee0(void) {
  LOAD_REGS();
L_6e6ee0: /* 6e6ee0: mov eax, 0xb915a0 */
  eax = 0xb915a0u;
/* 6e6ee5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6f00(void) {
  LOAD_REGS();
L_6e6f00: /* 6e6f00: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6f05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6f07: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6f0b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6f0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6f11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6f14: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6f18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6f1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6f1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6f1d: push 0xb915a0 */
  { uint32_t v = 0xb915a0u; esp -= 4; W32(esp, v); }
/* 6e6f22: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6f28u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6f28: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6f2b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6f40(void) {
  LOAD_REGS();
L_6e6f40: /* 6e6f40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6f44: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6f60(void) {
  LOAD_REGS();
L_6e6f60: /* 6e6f60: mov eax, 0xb79300 */
  eax = 0xb79300u;
/* 6e6f65: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6f80(void) {
  LOAD_REGS();
L_6e6f80: /* 6e6f80: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e6f85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e6f87: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e6f8b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e6f8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6f91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6f93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6f94: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e6f98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e6f9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e6f9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e6f9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e6f9d: push 0xb79300 */
  { uint32_t v = 0xb79300u; esp -= 4; W32(esp, v); }
/* 6e6fa2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e6fa8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e6fa8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e6fab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6fc0(void) {
  LOAD_REGS();
L_6e6fc0: /* 6e6fc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e6fc4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e6fe0(void) {
  LOAD_REGS();
L_6e6fe0: /* 6e6fe0: mov eax, 0xce16f0 */
  eax = 0xce16f0u;
/* 6e6fe5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7000(void) {
  LOAD_REGS();
L_6e7000: /* 6e7000: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e7005: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e7007: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e700b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e700f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7011: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7013: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e7014: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e7018: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e701a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e701b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e701c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e701d: push 0xce16f0 */
  { uint32_t v = 0xce16f0u; esp -= 4; W32(esp, v); }
/* 6e7022: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e7028u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e7028: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e702b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7040(void) {
  LOAD_REGS();
L_6e7040: /* 6e7040: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e7044: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7060(void) {
  LOAD_REGS();
L_6e7060: /* 6e7060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e7062: push 0x9c04b8 */
  { uint32_t v = 0x9c04b8u; esp -= 4; W32(esp, v); }
/* 6e7067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e706d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e706e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e7075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e7076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7077: mov esi, ecx */
  esi = ecx;
/* 6e7079: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e707d: mov dword ptr [esi], 0x9f4950 */
  W32((uint32_t)(esi), 0x9f4950u);
/* 6e7083: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e708b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e7091u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e7091: mov ecx, esi */
  ecx = esi;
/* 6e7093: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e709b: call 0x6c1023 */
  esp -= 4; W32(esp, 0x6e70a0u); SPILL(); f_6c1023(); if (g_unwind) return; RELOAD();
/* 6e70a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e70a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e70a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e70ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e70af: ret  */
  esp += 4; SPILL(); return;
}

void f_6e70d0(void) {
  LOAD_REGS();
L_6e70d0: /* 6e70d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e70d1: mov esi, ecx */
  esi = ecx;
/* 6e70d3: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e70d8u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e70d8: mov dword ptr [esi], 0x9f4950 */
  W32((uint32_t)(esi), 0x9f4950u);
/* 6e70de: mov eax, esi */
  eax = esi;
/* 6e70e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e70e1: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7100(void) {
  LOAD_REGS();
L_6e7100: /* 6e7100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7101: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7102: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e7106: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7107: mov esi, ecx */
  esi = ecx;
/* 6e7109: call 0x6c5b4b */
  esp -= 4; W32(esp, 0x6e710eu); SPILL(); f_6c5b4b(); if (g_unwind) return; RELOAD();
/* 6e710e: mov dword ptr [esi], 0x9f4950 */
  W32((uint32_t)(esi), 0x9f4950u);
/* 6e7114: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6e7117: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6e711a: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6e711d: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6e7120: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 6e7123: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 6e7126: lea eax, [edi + 0x5c] */
  eax = (uint32_t)(edi + 0x5cu);
/* 6e7129: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6e712b: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 6e712e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6e7130: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6e7133: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6e7136: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6e7139: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6e713c: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 6e713f: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* 6e7142: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 6e7145: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 6e7148: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 6e714b: xor eax, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e714e: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 6e7151: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e7154: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7156: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 6e7159: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 6e715c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e715e: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e7161: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7163: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 6e7166: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 6e7169: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e716b: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e716e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7170: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 6e7173: mov edx, dword ptr [edi + 0x74] */
  edx = R32((uint32_t)(edi + 0x74u));
/* 6e7176: mov dword ptr [esi + 0x74], edx */
  W32((uint32_t)(esi + 0x74u), edx);
/* 6e7179: mov al, byte ptr [edi + 0x78] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x78u))) & 0xffu);
/* 6e717c: mov byte ptr [esi + 0x78], al */
  W8((uint32_t)(esi + 0x78u), (eax & 0xffu));
/* 6e717f: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 6e7182: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e7183: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 6e7186: mov eax, esi */
  eax = esi;
/* 6e7188: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7189: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e71c0(void) {
  LOAD_REGS();
L_6e71c0: /* 6e71c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e71c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e71c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e71c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e71c7: mov esi, ecx */
  esi = ecx;
/* 6e71c9: call 0x6caa33 */
  esp -= 4; W32(esp, 0x6e71ceu); SPILL(); f_6caa33(); if (g_unwind) return; RELOAD();
/* 6e71ce: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6e71d1: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6e71d4: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6e71d7: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6e71da: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 6e71dd: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 6e71e0: lea eax, [edi + 0x5c] */
  eax = (uint32_t)(edi + 0x5cu);
/* 6e71e3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6e71e5: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 6e71e8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6e71ea: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 6e71ed: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6e71f0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 6e71f3: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 6e71f6: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 6e71f9: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* 6e71fc: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* 6e71ff: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 6e7202: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* 6e7205: xor eax, dword ptr [edi + 0x70] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x70u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7208: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 6e720b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e720e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7210: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 6e7213: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 6e7216: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7218: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e721b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e721d: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 6e7220: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* 6e7223: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7225: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e7228: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e722a: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* 6e722d: mov edx, dword ptr [edi + 0x74] */
  edx = R32((uint32_t)(edi + 0x74u));
/* 6e7230: mov dword ptr [esi + 0x74], edx */
  W32((uint32_t)(esi + 0x74u), edx);
/* 6e7233: mov al, byte ptr [edi + 0x78] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x78u))) & 0xffu);
/* 6e7236: mov byte ptr [esi + 0x78], al */
  W8((uint32_t)(esi + 0x78u), (eax & 0xffu));
/* 6e7239: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 6e723c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e723d: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 6e7240: mov eax, esi */
  eax = esi;
/* 6e7242: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7243: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7280(void) {
  LOAD_REGS();
L_6e7280: /* 6e7280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7281: mov esi, ecx */
  esi = ecx;
/* 6e7283: call 0x6c4647 */
  esp -= 4; W32(esp, 0x6e7288u); SPILL(); f_6c4647(); if (g_unwind) return; RELOAD();
/* 6e7288: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e728d: je 0x6e729e */
  if (zf) goto L_6e729e;
L_6e728f: /* 6e728f: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 6e7294: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7295: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e729bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e729b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e729e: /* 6e729e: mov eax, esi */
  eax = esi;
/* 6e72a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e72a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e72c0(void) {
  LOAD_REGS();
L_6e72c0: /* 6e72c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e72c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e72c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e72c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e72c9: mov esi, ecx */
  esi = ecx;
/* 6e72cb: je 0x6e7300 */
  if (zf) goto L_6e7300;
L_6e72cd: /* 6e72cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e72d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e72d1: push 0x6c4647 */
  { uint32_t v = 0x6c4647u; esp -= 4; W32(esp, v); }
/* 6e72d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e72d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e72da: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 6e72df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e72e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e72e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e72e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e72e8: je 0x6e72f8 */
  if (zf) goto L_6e72f8;
L_6e72ea: /* 6e72ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e72f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e72f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e72f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e72f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e72f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e72f8: /* 6e72f8: mov eax, edi */
  eax = edi;
/* 6e72fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e72fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e72fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e72fd: ret 4 */
  esp += 8; SPILL(); return;
L_6e7300: /* 6e7300: mov ecx, esi */
  ecx = esi;
/* 6e7302: call 0x6c4647 */
  esp -= 4; W32(esp, 0x6e7307u); SPILL(); f_6c4647(); if (g_unwind) return; RELOAD();
/* 6e7307: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e730a: je 0x6e731b */
  if (zf) goto L_6e731b;
L_6e730c: /* 6e730c: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 6e7311: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7312: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e7318u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e7318: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e731b: /* 6e731b: mov eax, esi */
  eax = esi;
/* 6e731d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e731e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e731f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7350(void) {
  LOAD_REGS();
L_6e7350: /* 6e7350: mov eax, 0xce0a40 */
  eax = 0xce0a40u;
/* 6e7355: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7370(void) {
  LOAD_REGS();
L_6e7370: /* 6e7370: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e7375: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e7377: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e737b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e737f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7383: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e7384: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e7388: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e738a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e738b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e738c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e738d: push 0xce0a40 */
  { uint32_t v = 0xce0a40u; esp -= 4; W32(esp, v); }
/* 6e7392: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e7398u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e7398: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e739b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e73b0(void) {
  LOAD_REGS();
L_6e73b0: /* 6e73b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e73b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e73d0(void) {
  LOAD_REGS();
L_6e73d0: /* 6e73d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e73d2: push 0x9c04d8 */
  { uint32_t v = 0x9c04d8u; esp -= 4; W32(esp, v); }
/* 6e73d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e73dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e73de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e73e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e73e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e73e7: mov esi, ecx */
  esi = ecx;
/* 6e73e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e73ed: mov dword ptr [esi], 0x9f4a10 */
  W32((uint32_t)(esi), 0x9f4a10u);
/* 6e73f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e73fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e7401u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e7401: mov ecx, esi */
  ecx = esi;
/* 6e7403: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e740b: call 0x6c1023 */
  esp -= 4; W32(esp, 0x6e7410u); SPILL(); f_6c1023(); if (g_unwind) return; RELOAD();
/* 6e7410: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e7414: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7415: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e741c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e741f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7440(void) {
  LOAD_REGS();
L_6e7440: /* 6e7440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7441: mov esi, ecx */
  esi = ecx;
/* 6e7443: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e7448u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e7448: mov dword ptr [esi], 0x9f4a10 */
  W32((uint32_t)(esi), 0x9f4a10u);
/* 6e744e: mov eax, esi */
  eax = esi;
/* 6e7450: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7451: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7470(void) {
  LOAD_REGS();
L_6e7470: /* 6e7470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7471: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7472: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e7476: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7477: mov esi, ecx */
  esi = ecx;
/* 6e7479: call 0x6c5b4b */
  esp -= 4; W32(esp, 0x6e747eu); SPILL(); f_6c5b4b(); if (g_unwind) return; RELOAD();
/* 6e747e: mov dword ptr [esi], 0x9f4a10 */
  W32((uint32_t)(esi), 0x9f4a10u);
/* 6e7484: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6e7487: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6e748a: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6e748d: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6e7490: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 6e7493: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 6e7496: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 6e7499: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 6e749c: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 6e749f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e74a0: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 6e74a3: mov eax, esi */
  eax = esi;
/* 6e74a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e74a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e74c0(void) {
  LOAD_REGS();
L_6e74c0: /* 6e74c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e74c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e74c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e74c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e74c7: mov esi, ecx */
  esi = ecx;
/* 6e74c9: call 0x6caa33 */
  esp -= 4; W32(esp, 0x6e74ceu); SPILL(); f_6caa33(); if (g_unwind) return; RELOAD();
/* 6e74ce: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6e74d1: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6e74d4: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6e74d7: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6e74da: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 6e74dd: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 6e74e0: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 6e74e3: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 6e74e6: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 6e74e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e74ea: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 6e74ed: mov eax, esi */
  eax = esi;
/* 6e74ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e74f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7510(void) {
  LOAD_REGS();
L_6e7510: /* 6e7510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7511: mov esi, ecx */
  esi = ecx;
/* 6e7513: call 0x6cc3a6 */
  esp -= 4; W32(esp, 0x6e7518u); SPILL(); f_6cc3a6(); if (g_unwind) return; RELOAD();
/* 6e7518: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e751d: je 0x6e752b */
  if (zf) goto L_6e752b;
L_6e751f: /* 6e751f: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 6e7521: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7522: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e7528u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e7528: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e752b: /* 6e752b: mov eax, esi */
  eax = esi;
/* 6e752d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e752e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7550(void) {
  LOAD_REGS();
L_6e7550: /* 6e7550: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e7551: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e7555: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e7558: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7559: mov esi, ecx */
  esi = ecx;
/* 6e755b: je 0x6e758d */
  if (zf) goto L_6e758d;
L_6e755d: /* 6e755d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e7560: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7561: push 0x6cc3a6 */
  { uint32_t v = 0x6cc3a6u; esp -= 4; W32(esp, v); }
/* 6e7566: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e7569: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e756a: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 6e756c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e756d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e7572u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e7572: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e7575: je 0x6e7585 */
  if (zf) goto L_6e7585;
L_6e7577: /* 6e7577: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e757d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e757f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e7581: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7582: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e7585u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e7585: /* 6e7585: mov eax, edi */
  eax = edi;
/* 6e7587: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e7588: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7589: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e758a: ret 4 */
  esp += 8; SPILL(); return;
L_6e758d: /* 6e758d: mov ecx, esi */
  ecx = esi;
/* 6e758f: call 0x6cc3a6 */
  esp -= 4; W32(esp, 0x6e7594u); SPILL(); f_6cc3a6(); if (g_unwind) return; RELOAD();
/* 6e7594: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e7597: je 0x6e75a5 */
  if (zf) goto L_6e75a5;
L_6e7599: /* 6e7599: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 6e759b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e759c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e75a2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e75a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e75a5: /* 6e75a5: mov eax, esi */
  eax = esi;
/* 6e75a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e75a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e75a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e75d0(void) {
  LOAD_REGS();
L_6e75d0: /* 6e75d0: mov eax, ecx */
  eax = ecx;
/* 6e75d2: ret  */
  esp += 4; SPILL(); return;
}

void f_6e75f0(void) {
  LOAD_REGS();
L_6e75f0: /* 6e75f0: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e75f3: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_6e7610(void) {
  LOAD_REGS();
L_6e7610: /* 6e7610: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7611: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6e7615: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7616: mov eax, ecx */
  eax = ecx;
/* 6e7618: mov ecx, 0x12 */
  ecx = 0x12u;
/* 6e761d: mov edi, eax */
  edi = eax;
/* 6e761f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7621: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e7622: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7623: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7640(void) {
  LOAD_REGS();
L_6e7640: /* 6e7640: mov eax, 0xce9540 */
  eax = 0xce9540u;
/* 6e7645: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7660(void) {
  LOAD_REGS();
L_6e7660: /* 6e7660: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e7665: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e7667: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e766b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e766f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7671: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7673: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e7674: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e7678: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e767a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e767b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e767c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e767d: push 0xce9540 */
  { uint32_t v = 0xce9540u; esp -= 4; W32(esp, v); }
/* 6e7682: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e7688u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e7688: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e768b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e76a0(void) {
  LOAD_REGS();
L_6e76a0: /* 6e76a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e76a4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e76c0(void) {
  LOAD_REGS();
L_6e76c0: /* 6e76c0: mov eax, 0xcc91e8 */
  eax = 0xcc91e8u;
/* 6e76c5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e76e0(void) {
  LOAD_REGS();
L_6e76e0: /* 6e76e0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e76e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e76e7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e76eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e76ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e76f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e76f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e76f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e76f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e76fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e76fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e76fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e76fd: push 0xcc91e8 */
  { uint32_t v = 0xcc91e8u; esp -= 4; W32(esp, v); }
/* 6e7702: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e7708u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e7708: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e770b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7720(void) {
  LOAD_REGS();
L_6e7720: /* 6e7720: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e7724: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7740(void) {
  LOAD_REGS();
L_6e7740: /* 6e7740: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e7742: push 0x9c0513 */
  { uint32_t v = 0x9c0513u; esp -= 4; W32(esp, v); }
/* 6e7747: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e774d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e774e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e7755: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e7756: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7757: mov esi, ecx */
  esi = ecx;
/* 6e7759: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e775d: mov dword ptr [esi], 0x9f4ad0 */
  W32((uint32_t)(esi), 0x9f4ad0u);
/* 6e7763: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 6e776b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e7771u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e7771: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 6e7777: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6e777c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x6e7782u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 6e7782: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 6e7785: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6e778a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x6e7790u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 6e7790: mov ecx, esi */
  ecx = esi;
/* 6e7792: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e779a: call 0x6caf88 */
  esp -= 4; W32(esp, 0x6e779fu); SPILL(); f_6caf88(); if (g_unwind) return; RELOAD();
/* 6e779f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e77a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e77a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e77ab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e77ae: ret  */
  esp += 4; SPILL(); return;
}

void f_6e77d0(void) {
  LOAD_REGS();
L_6e77d0: /* 6e77d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e77d1: mov esi, ecx */
  esi = ecx;
/* 6e77d3: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e77d8u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e77d8: mov dword ptr [esi], 0x9f4ad0 */
  W32((uint32_t)(esi), 0x9f4ad0u);
/* 6e77de: mov eax, esi */
  eax = esi;
/* 6e77e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e77e1: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7800(void) {
  LOAD_REGS();
L_6e7800: /* 6e7800: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e7801: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6e7802: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6e7806: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7807: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7808: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6e7809: mov ebx, ecx */
  ebx = ecx;
/* 6e780b: call 0x6c7595 */
  esp -= 4; W32(esp, 0x6e7810u); SPILL(); f_6c7595(); if (g_unwind) return; RELOAD();
/* 6e7810: mov dword ptr [ebx], 0x9f4ad0 */
  W32((uint32_t)(ebx), 0x9f4ad0u);
/* 6e7816: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 6e7819: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* 6e781c: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* 6e781f: mov dword ptr [ebx + 0x3c], ecx */
  W32((uint32_t)(ebx + 0x3cu), ecx);
/* 6e7822: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* 6e7825: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
/* 6e7828: mov al, byte ptr [ebp + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* 6e782b: mov edx, dword ptr [ebx + 0xc8] */
  edx = R32((uint32_t)(ebx + 0xc8u));
/* 6e7831: mov byte ptr [ebx + 0x44], al */
  W8((uint32_t)(ebx + 0x44u), (eax & 0xffu));
/* 6e7834: mov cl, byte ptr [ebp + 0x45] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x45u))) & 0xffu);
/* 6e7837: mov eax, dword ptr [ebx + 0xc8] */
  eax = R32((uint32_t)(ebx + 0xc8u));
/* 6e783d: mov byte ptr [ebx + 0x45], cl */
  W8((uint32_t)(ebx + 0x45u), (ecx & 0xffu));
/* 6e7840: lea esi, [ebp + 0x48] */
  esi = (uint32_t)(ebp + 0x48u);
/* 6e7843: lea edi, [ebx + 0x48] */
  edi = (uint32_t)(ebx + 0x48u);
/* 6e7846: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6e784b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e784d: lea esi, [ebp + 0x88] */
  esi = (uint32_t)(ebp + 0x88u);
/* 6e7853: lea edi, [ebx + 0x88] */
  edi = (uint32_t)(ebx + 0x88u);
/* 6e7859: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6e785e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7860: xor edx, dword ptr [ebp + 0xc8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xc8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e7866: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e7869: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e786b: mov dword ptr [ebx + 0xc8], eax */
  W32((uint32_t)(ebx + 0xc8u), eax);
/* 6e7871: mov ecx, eax */
  ecx = eax;
/* 6e7873: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 6e7879: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e787b: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e787e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7880: mov dword ptr [ebx + 0xc8], eax */
  W32((uint32_t)(ebx + 0xc8u), eax);
/* 6e7886: mov ecx, dword ptr [ebp + 0xc8] */
  ecx = R32((uint32_t)(ebp + 0xc8u));
/* 6e788c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e788e: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e7891: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7893: mov dword ptr [ebx + 0xc8], ecx */
  W32((uint32_t)(ebx + 0xc8u), ecx);
/* 6e7899: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 6e789f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e78a1: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e78a4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e78a6: mov dword ptr [ebx + 0xc8], eax */
  W32((uint32_t)(ebx + 0xc8u), eax);
/* 6e78ac: mov ecx, dword ptr [ebp + 0xc8] */
  ecx = R32((uint32_t)(ebp + 0xc8u));
/* 6e78b2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e78b4: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e78b7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e78b9: mov dword ptr [ebx + 0xc8], ecx */
  W32((uint32_t)(ebx + 0xc8u), ecx);
/* 6e78bf: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 6e78c5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e78c7: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e78ca: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e78cc: mov dword ptr [ebx + 0xc8], eax */
  W32((uint32_t)(ebx + 0xc8u), eax);
/* 6e78d2: mov ecx, dword ptr [ebp + 0xc8] */
  ecx = R32((uint32_t)(ebp + 0xc8u));
/* 6e78d8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e78da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e78db: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e78de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e78df: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e78e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6e78e2: mov dword ptr [ebx + 0xc8], ecx */
  W32((uint32_t)(ebx + 0xc8u), ecx);
/* 6e78e8: mov eax, ebx */
  eax = ebx;
/* 6e78ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e78eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7930(void) {
  LOAD_REGS();
L_6e7930: /* 6e7930: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e7931: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6e7932: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6e7936: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7937: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7938: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6e7939: mov ebx, ecx */
  ebx = ecx;
/* 6e793b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e7941u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e7941: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 6e7944: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 6e7947: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 6e794a: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 6e794d: mov dword ptr [ebx + 0x2c], ecx */
  W32((uint32_t)(ebx + 0x2cu), ecx);
/* 6e7950: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 6e7953: mov edi, dword ptr [ebx + 0x30] */
  edi = R32((uint32_t)(ebx + 0x30u));
/* 6e7956: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e7958: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e795b: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 6e795d: mov dword ptr [ebx + 0x30], edi */
  W32((uint32_t)(ebx + 0x30u), edi);
/* 6e7960: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 6e7963: mov eax, edi */
  eax = edi;
/* 6e7965: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7967: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e796a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e796c: mov dword ptr [ebx + 0x30], ecx */
  W32((uint32_t)(ebx + 0x30u), ecx);
/* 6e796f: mov dl, byte ptr [ebp + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x34u))) & 0xffu);
/* 6e7972: mov byte ptr [ebx + 0x34], dl */
  W8((uint32_t)(ebx + 0x34u), (edx & 0xffu));
/* 6e7975: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 6e7978: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* 6e797b: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* 6e797e: mov dword ptr [ebx + 0x3c], ecx */
  W32((uint32_t)(ebx + 0x3cu), ecx);
/* 6e7981: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* 6e7984: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
/* 6e7987: mov al, byte ptr [ebp + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x44u))) & 0xffu);
/* 6e798a: mov edx, dword ptr [ebx + 0xc8] */
  edx = R32((uint32_t)(ebx + 0xc8u));
/* 6e7990: mov byte ptr [ebx + 0x44], al */
  W8((uint32_t)(ebx + 0x44u), (eax & 0xffu));
/* 6e7993: mov cl, byte ptr [ebp + 0x45] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x45u))) & 0xffu);
/* 6e7996: mov eax, dword ptr [ebx + 0xc8] */
  eax = R32((uint32_t)(ebx + 0xc8u));
/* 6e799c: mov byte ptr [ebx + 0x45], cl */
  W8((uint32_t)(ebx + 0x45u), (ecx & 0xffu));
/* 6e799f: lea esi, [ebp + 0x48] */
  esi = (uint32_t)(ebp + 0x48u);
/* 6e79a2: lea edi, [ebx + 0x48] */
  edi = (uint32_t)(ebx + 0x48u);
/* 6e79a5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6e79aa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e79ac: lea esi, [ebp + 0x88] */
  esi = (uint32_t)(ebp + 0x88u);
/* 6e79b2: lea edi, [ebx + 0x88] */
  edi = (uint32_t)(ebx + 0x88u);
/* 6e79b8: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6e79bd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e79bf: xor edx, dword ptr [ebp + 0xc8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xc8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e79c5: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e79c8: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e79ca: mov dword ptr [ebx + 0xc8], eax */
  W32((uint32_t)(ebx + 0xc8u), eax);
/* 6e79d0: mov ecx, eax */
  ecx = eax;
/* 6e79d2: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 6e79d8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e79da: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e79dd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e79df: mov dword ptr [ebx + 0xc8], eax */
  W32((uint32_t)(ebx + 0xc8u), eax);
/* 6e79e5: mov ecx, dword ptr [ebp + 0xc8] */
  ecx = R32((uint32_t)(ebp + 0xc8u));
/* 6e79eb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e79ed: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e79f0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e79f2: mov dword ptr [ebx + 0xc8], ecx */
  W32((uint32_t)(ebx + 0xc8u), ecx);
/* 6e79f8: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 6e79fe: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7a00: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e7a03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7a05: mov dword ptr [ebx + 0xc8], eax */
  W32((uint32_t)(ebx + 0xc8u), eax);
/* 6e7a0b: mov ecx, dword ptr [ebp + 0xc8] */
  ecx = R32((uint32_t)(ebp + 0xc8u));
/* 6e7a11: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7a13: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e7a16: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7a18: mov dword ptr [ebx + 0xc8], ecx */
  W32((uint32_t)(ebx + 0xc8u), ecx);
/* 6e7a1e: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 6e7a24: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7a26: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e7a29: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7a2b: mov dword ptr [ebx + 0xc8], eax */
  W32((uint32_t)(ebx + 0xc8u), eax);
/* 6e7a31: mov ecx, dword ptr [ebp + 0xc8] */
  ecx = R32((uint32_t)(ebp + 0xc8u));
/* 6e7a37: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7a39: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e7a3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e7a3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7a3e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7a40: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6e7a41: mov dword ptr [ebx + 0xc8], ecx */
  W32((uint32_t)(ebx + 0xc8u), ecx);
/* 6e7a47: mov eax, ebx */
  eax = ebx;
/* 6e7a49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e7a4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7aa0(void) {
  LOAD_REGS();
L_6e7aa0: /* 6e7aa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7aa1: mov esi, ecx */
  esi = ecx;
/* 6e7aa3: call 0x6c3904 */
  esp -= 4; W32(esp, 0x6e7aa8u); SPILL(); f_6c3904(); if (g_unwind) return; RELOAD();
/* 6e7aa8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e7aad: je 0x6e7abe */
  if (zf) goto L_6e7abe;
L_6e7aaf: /* 6e7aaf: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* 6e7ab4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7ab5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e7abbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e7abb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e7abe: /* 6e7abe: mov eax, esi */
  eax = esi;
/* 6e7ac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7ac1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7ae0(void) {
  LOAD_REGS();
L_6e7ae0: /* 6e7ae0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e7ae1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e7ae5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e7ae8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7ae9: mov esi, ecx */
  esi = ecx;
/* 6e7aeb: je 0x6e7b20 */
  if (zf) goto L_6e7b20;
L_6e7aed: /* 6e7aed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e7af0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7af1: push 0x6c3904 */
  { uint32_t v = 0x6c3904u; esp -= 4; W32(esp, v); }
/* 6e7af6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e7af9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e7afa: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* 6e7aff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7b00: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e7b05u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e7b05: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e7b08: je 0x6e7b18 */
  if (zf) goto L_6e7b18;
L_6e7b0a: /* 6e7b0a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e7b10: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e7b12: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e7b14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7b15: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e7b18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e7b18: /* 6e7b18: mov eax, edi */
  eax = edi;
/* 6e7b1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e7b1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7b1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e7b1d: ret 4 */
  esp += 8; SPILL(); return;
L_6e7b20: /* 6e7b20: mov ecx, esi */
  ecx = esi;
/* 6e7b22: call 0x6c3904 */
  esp -= 4; W32(esp, 0x6e7b27u); SPILL(); f_6c3904(); if (g_unwind) return; RELOAD();
/* 6e7b27: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e7b2a: je 0x6e7b3b */
  if (zf) goto L_6e7b3b;
L_6e7b2c: /* 6e7b2c: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* 6e7b31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7b32: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e7b38u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e7b38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e7b3b: /* 6e7b3b: mov eax, esi */
  eax = esi;
/* 6e7b3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7b3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e7b3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7b70(void) {
  LOAD_REGS();
L_6e7b70: /* 6e7b70: mov eax, 0xcc6d78 */
  eax = 0xcc6d78u;
/* 6e7b75: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7b90(void) {
  LOAD_REGS();
L_6e7b90: /* 6e7b90: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e7b95: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e7b97: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e7b9b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e7b9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7ba1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7ba3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e7ba4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e7ba8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7baa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e7bab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e7bac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e7bad: push 0xcc6d78 */
  { uint32_t v = 0xcc6d78u; esp -= 4; W32(esp, v); }
/* 6e7bb2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e7bb8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e7bb8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e7bbb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7bd0(void) {
  LOAD_REGS();
L_6e7bd0: /* 6e7bd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e7bd4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7bf0(void) {
  LOAD_REGS();
L_6e7bf0: /* 6e7bf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e7bf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7bf2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6e7bf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7bf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7bf8: mov ebx, ecx */
  ebx = ecx;
/* 6e7bfa: call 0x6c7595 */
  esp -= 4; W32(esp, 0x6e7bffu); SPILL(); f_6c7595(); if (g_unwind) return; RELOAD();
/* 6e7bff: mov dword ptr [ebx], 0x9f4b88 */
  W32((uint32_t)(ebx), 0x9f4b88u);
/* 6e7c05: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 6e7c08: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* 6e7c0b: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 6e7c0e: mov dword ptr [ebx + 0x3c], ecx */
  W32((uint32_t)(ebx + 0x3cu), ecx);
/* 6e7c11: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 6e7c14: mov edi, dword ptr [ebx + 0x60] */
  edi = R32((uint32_t)(ebx + 0x60u));
/* 6e7c17: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
/* 6e7c1a: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 6e7c1d: mov dword ptr [ebx + 0x44], eax */
  W32((uint32_t)(ebx + 0x44u), eax);
/* 6e7c20: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 6e7c23: mov dword ptr [ebx + 0x48], ecx */
  W32((uint32_t)(ebx + 0x48u), ecx);
/* 6e7c26: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 6e7c29: mov dword ptr [ebx + 0x4c], edx */
  W32((uint32_t)(ebx + 0x4cu), edx);
/* 6e7c2c: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 6e7c2f: mov dword ptr [ebx + 0x50], eax */
  W32((uint32_t)(ebx + 0x50u), eax);
/* 6e7c32: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 6e7c35: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 6e7c38: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 6e7c3b: mov dword ptr [ebx + 0x58], edx */
  W32((uint32_t)(ebx + 0x58u), edx);
/* 6e7c3e: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 6e7c41: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* 6e7c44: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 6e7c47: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7c49: mov eax, edi */
  eax = edi;
/* 6e7c4b: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e7c4e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7c50: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* 6e7c53: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 6e7c56: add esi, 0x68 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6e7c59: lea edi, [ebx + 0x68] */
  edi = (uint32_t)(ebx + 0x68u);
/* 6e7c5c: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* 6e7c5f: mov ecx, 0x98 */
  ecx = 0x98u;
/* 6e7c64: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7c66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e7c67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7c68: mov eax, ebx */
  eax = ebx;
/* 6e7c6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e7c6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7c90(void) {
  LOAD_REGS();
L_6e7c90: /* 6e7c90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e7c91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6e7c92: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6e7c96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7c97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7c98: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6e7c99: mov ebx, ecx */
  ebx = ecx;
/* 6e7c9b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e7ca1u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e7ca1: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 6e7ca4: mov edx, dword ptr [ebx + 0x30] */
  edx = R32((uint32_t)(ebx + 0x30u));
/* 6e7ca7: mov edi, dword ptr [ebx + 0x30] */
  edi = R32((uint32_t)(ebx + 0x30u));
/* 6e7caa: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 6e7cad: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 6e7cb0: mov dword ptr [ebx + 0x2c], ecx */
  W32((uint32_t)(ebx + 0x2cu), ecx);
/* 6e7cb3: xor edx, dword ptr [ebp + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e7cb6: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e7cb9: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 6e7cbb: mov dword ptr [ebx + 0x30], edi */
  W32((uint32_t)(ebx + 0x30u), edi);
/* 6e7cbe: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 6e7cc1: mov eax, edi */
  eax = edi;
/* 6e7cc3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7cc5: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e7cc8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7cca: mov dword ptr [ebx + 0x30], ecx */
  W32((uint32_t)(ebx + 0x30u), ecx);
/* 6e7ccd: mov dl, byte ptr [ebp + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x34u))) & 0xffu);
/* 6e7cd0: mov byte ptr [ebx + 0x34], dl */
  W8((uint32_t)(ebx + 0x34u), (edx & 0xffu));
/* 6e7cd3: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 6e7cd6: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* 6e7cd9: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* 6e7cdc: mov dword ptr [ebx + 0x3c], ecx */
  W32((uint32_t)(ebx + 0x3cu), ecx);
/* 6e7cdf: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* 6e7ce2: mov esi, dword ptr [ebx + 0x60] */
  esi = R32((uint32_t)(ebx + 0x60u));
/* 6e7ce5: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
/* 6e7ce8: mov eax, dword ptr [ebp + 0x44] */
  eax = R32((uint32_t)(ebp + 0x44u));
/* 6e7ceb: mov dword ptr [ebx + 0x44], eax */
  W32((uint32_t)(ebx + 0x44u), eax);
/* 6e7cee: mov ecx, dword ptr [ebp + 0x48] */
  ecx = R32((uint32_t)(ebp + 0x48u));
/* 6e7cf1: mov dword ptr [ebx + 0x48], ecx */
  W32((uint32_t)(ebx + 0x48u), ecx);
/* 6e7cf4: mov edx, dword ptr [ebp + 0x4c] */
  edx = R32((uint32_t)(ebp + 0x4cu));
/* 6e7cf7: mov dword ptr [ebx + 0x4c], edx */
  W32((uint32_t)(ebx + 0x4cu), edx);
/* 6e7cfa: mov eax, dword ptr [ebp + 0x50] */
  eax = R32((uint32_t)(ebp + 0x50u));
/* 6e7cfd: mov dword ptr [ebx + 0x50], eax */
  W32((uint32_t)(ebx + 0x50u), eax);
/* 6e7d00: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 6e7d03: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 6e7d06: mov edx, dword ptr [ebp + 0x58] */
  edx = R32((uint32_t)(ebp + 0x58u));
/* 6e7d09: mov dword ptr [ebx + 0x58], edx */
  W32((uint32_t)(ebx + 0x58u), edx);
/* 6e7d0c: mov eax, dword ptr [ebp + 0x5c] */
  eax = R32((uint32_t)(ebp + 0x5cu));
/* 6e7d0f: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* 6e7d12: mov ecx, dword ptr [ebp + 0x60] */
  ecx = R32((uint32_t)(ebp + 0x60u));
/* 6e7d15: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7d17: mov eax, esi */
  eax = esi;
/* 6e7d19: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e7d1c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7d1e: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* 6e7d21: mov edx, dword ptr [ebp + 0x64] */
  edx = R32((uint32_t)(ebp + 0x64u));
/* 6e7d24: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* 6e7d27: lea esi, [ebp + 0x68] */
  esi = (uint32_t)(ebp + 0x68u);
/* 6e7d2a: lea edi, [ebx + 0x68] */
  edi = (uint32_t)(ebx + 0x68u);
/* 6e7d2d: mov ecx, 0x13 */
  ecx = 0x13u;
/* 6e7d32: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7d34: lea esi, [ebp + 0xb4] */
  esi = (uint32_t)(ebp + 0xb4u);
/* 6e7d3a: lea edi, [ebx + 0xb4] */
  edi = (uint32_t)(ebx + 0xb4u);
/* 6e7d40: mov ecx, 0x13 */
  ecx = 0x13u;
/* 6e7d45: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7d47: lea esi, [ebp + 0x100] */
  esi = (uint32_t)(ebp + 0x100u);
/* 6e7d4d: lea edi, [ebx + 0x100] */
  edi = (uint32_t)(ebx + 0x100u);
/* 6e7d53: mov ecx, 0x13 */
  ecx = 0x13u;
/* 6e7d58: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7d5a: lea esi, [ebp + 0x14c] */
  esi = (uint32_t)(ebp + 0x14cu);
/* 6e7d60: lea edi, [ebx + 0x14c] */
  edi = (uint32_t)(ebx + 0x14cu);
/* 6e7d66: mov ecx, 0x13 */
  ecx = 0x13u;
/* 6e7d6b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7d6d: lea esi, [ebp + 0x198] */
  esi = (uint32_t)(ebp + 0x198u);
/* 6e7d73: lea edi, [ebx + 0x198] */
  edi = (uint32_t)(ebx + 0x198u);
/* 6e7d79: mov ecx, 0x13 */
  ecx = 0x13u;
/* 6e7d7e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7d80: lea esi, [ebp + 0x1e4] */
  esi = (uint32_t)(ebp + 0x1e4u);
/* 6e7d86: lea edi, [ebx + 0x1e4] */
  edi = (uint32_t)(ebx + 0x1e4u);
/* 6e7d8c: mov ecx, 0x13 */
  ecx = 0x13u;
/* 6e7d91: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7d93: lea esi, [ebp + 0x230] */
  esi = (uint32_t)(ebp + 0x230u);
/* 6e7d99: lea edi, [ebx + 0x230] */
  edi = (uint32_t)(ebx + 0x230u);
/* 6e7d9f: mov ecx, 0x13 */
  ecx = 0x13u;
/* 6e7da4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7da6: lea esi, [ebp + 0x27c] */
  esi = (uint32_t)(ebp + 0x27cu);
/* 6e7dac: lea edi, [ebx + 0x27c] */
  edi = (uint32_t)(ebx + 0x27cu);
/* 6e7db2: mov ecx, 0x13 */
  ecx = 0x13u;
/* 6e7db7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e7db9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e7dba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7dbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6e7dbc: mov eax, ebx */
  eax = ebx;
/* 6e7dbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e7dbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7e20(void) {
  LOAD_REGS();
L_6e7e20: /* 6e7e20: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e7e23: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_6e7e40(void) {
  LOAD_REGS();
L_6e7e40: /* 6e7e40: mov eax, ecx */
  eax = ecx;
/* 6e7e42: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7e60(void) {
  LOAD_REGS();
L_6e7e60: /* 6e7e60: mov eax, 0xb8d320 */
  eax = 0xb8d320u;
/* 6e7e65: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7e80(void) {
  LOAD_REGS();
L_6e7e80: /* 6e7e80: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e7e85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e7e87: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e7e8b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e7e8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7e91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7e93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e7e94: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e7e98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e7e9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e7e9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e7e9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e7e9d: push 0xb8d320 */
  { uint32_t v = 0xb8d320u; esp -= 4; W32(esp, v); }
/* 6e7ea2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e7ea8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e7ea8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e7eab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7ec0(void) {
  LOAD_REGS();
L_6e7ec0: /* 6e7ec0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e7ec4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7ee0(void) {
  LOAD_REGS();
L_6e7ee0: /* 6e7ee0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e7ee2: push 0x9c0538 */
  { uint32_t v = 0x9c0538u; esp -= 4; W32(esp, v); }
/* 6e7ee7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e7eed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e7eee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e7ef5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e7ef6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7ef7: mov esi, ecx */
  esi = ecx;
/* 6e7ef9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e7efd: mov dword ptr [esi], 0x9f4c40 */
  W32((uint32_t)(esi), 0x9f4c40u);
/* 6e7f03: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e7f0b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e7f11u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e7f11: mov ecx, esi */
  ecx = esi;
/* 6e7f13: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e7f1b: call 0x6caf88 */
  esp -= 4; W32(esp, 0x6e7f20u); SPILL(); f_6caf88(); if (g_unwind) return; RELOAD();
/* 6e7f20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e7f24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7f25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e7f2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e7f2f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7f50(void) {
  LOAD_REGS();
L_6e7f50: /* 6e7f50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7f51: mov esi, ecx */
  esi = ecx;
/* 6e7f53: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e7f58u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e7f58: mov dword ptr [esi], 0x9f4c40 */
  W32((uint32_t)(esi), 0x9f4c40u);
/* 6e7f5e: mov eax, esi */
  eax = esi;
/* 6e7f60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7f61: ret  */
  esp += 4; SPILL(); return;
}

void f_6e7f80(void) {
  LOAD_REGS();
L_6e7f80: /* 6e7f80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e7f84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7f85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e7f86: mov esi, ecx */
  esi = ecx;
/* 6e7f88: call 0x6c7595 */
  esp -= 4; W32(esp, 0x6e7f8du); SPILL(); f_6c7595(); if (g_unwind) return; RELOAD();
/* 6e7f8d: mov dword ptr [esi], 0x9f4c40 */
  W32((uint32_t)(esi), 0x9f4c40u);
/* 6e7f93: mov eax, esi */
  eax = esi;
/* 6e7f95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7f96: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e7fb0(void) {
  LOAD_REGS();
L_6e7fb0: /* 6e7fb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e7fb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7fb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e7fb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e7fb7: mov esi, ecx */
  esi = ecx;
/* 6e7fb9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e7fbfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e7fbf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6e7fc2: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6e7fc5: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6e7fc8: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6e7fcb: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6e7fce: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e7fd1: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6e7fd4: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e7fd7: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e7fd9: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6e7fdc: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6e7fdf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7fe1: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e7fe4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e7fe6: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6e7fe9: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6e7fec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e7fed: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6e7ff0: mov eax, esi */
  eax = esi;
/* 6e7ff2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e7ff3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8020(void) {
  LOAD_REGS();
L_6e8020: /* 6e8020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8021: mov esi, ecx */
  esi = ecx;
/* 6e8023: call 0x6c1dde */
  esp -= 4; W32(esp, 0x6e8028u); SPILL(); f_6c1dde(); if (g_unwind) return; RELOAD();
/* 6e8028: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e802d: je 0x6e803b */
  if (zf) goto L_6e803b;
L_6e802f: /* 6e802f: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6e8031: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8032: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e8038u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e8038: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e803b: /* 6e803b: mov eax, esi */
  eax = esi;
/* 6e803d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e803e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8060(void) {
  LOAD_REGS();
L_6e8060: /* 6e8060: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e8061: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e8065: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8068: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8069: mov esi, ecx */
  esi = ecx;
/* 6e806b: je 0x6e809d */
  if (zf) goto L_6e809d;
L_6e806d: /* 6e806d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e8070: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8071: push 0x6c1dde */
  { uint32_t v = 0x6c1ddeu; esp -= 4; W32(esp, v); }
/* 6e8076: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e8079: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e807a: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6e807c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e807d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e8082u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e8082: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8085: je 0x6e8095 */
  if (zf) goto L_6e8095;
L_6e8087: /* 6e8087: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e808d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e808f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e8091: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8092: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e8095u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e8095: /* 6e8095: mov eax, edi */
  eax = edi;
/* 6e8097: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e8098: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8099: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e809a: ret 4 */
  esp += 8; SPILL(); return;
L_6e809d: /* 6e809d: mov ecx, esi */
  ecx = esi;
/* 6e809f: call 0x6c1dde */
  esp -= 4; W32(esp, 0x6e80a4u); SPILL(); f_6c1dde(); if (g_unwind) return; RELOAD();
/* 6e80a4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e80a7: je 0x6e80b5 */
  if (zf) goto L_6e80b5;
L_6e80a9: /* 6e80a9: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6e80ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e80ac: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e80b2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e80b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e80b5: /* 6e80b5: mov eax, esi */
  eax = esi;
/* 6e80b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e80b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e80b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e80e0(void) {
  LOAD_REGS();
L_6e80e0: /* 6e80e0: mov eax, 0xb88a80 */
  eax = 0xb88a80u;
/* 6e80e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8100(void) {
  LOAD_REGS();
L_6e8100: /* 6e8100: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e8105: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e8107: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e810b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e810f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e8111: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e8113: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e8114: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e8118: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e811a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e811b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e811c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e811d: push 0xb88a80 */
  { uint32_t v = 0xb88a80u; esp -= 4; W32(esp, v); }
/* 6e8122: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e8128u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e8128: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e812b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8140(void) {
  LOAD_REGS();
L_6e8140: /* 6e8140: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e8144: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8160(void) {
  LOAD_REGS();
L_6e8160: /* 6e8160: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e8162: push 0x9c0558 */
  { uint32_t v = 0x9c0558u; esp -= 4; W32(esp, v); }
/* 6e8167: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e816d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e816e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e8175: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e8176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8177: mov esi, ecx */
  esi = ecx;
/* 6e8179: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e817d: mov dword ptr [esi], 0x9f4cf8 */
  W32((uint32_t)(esi), 0x9f4cf8u);
/* 6e8183: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e818b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e8191u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e8191: mov ecx, esi */
  ecx = esi;
/* 6e8193: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e819b: call 0x6caf88 */
  esp -= 4; W32(esp, 0x6e81a0u); SPILL(); f_6caf88(); if (g_unwind) return; RELOAD();
/* 6e81a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e81a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e81a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e81ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e81af: ret  */
  esp += 4; SPILL(); return;
}

void f_6e81d0(void) {
  LOAD_REGS();
L_6e81d0: /* 6e81d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e81d4: xor cl, cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 6e81d6: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 6e81d8: mov byte ptr [eax + 1], cl */
  W8((uint32_t)(eax + 0x1u), (ecx & 0xffu));
/* 6e81db: mov byte ptr [eax + 2], cl */
  W8((uint32_t)(eax + 0x2u), (ecx & 0xffu));
/* 6e81de: mov byte ptr [eax + 3], cl */
  W8((uint32_t)(eax + 0x3u), (ecx & 0xffu));
/* 6e81e1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e8200(void) {
  LOAD_REGS();
L_6e8200: /* 6e8200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8201: mov esi, ecx */
  esi = ecx;
/* 6e8203: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e8208u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e8208: mov dword ptr [esi], 0x9f4cf8 */
  W32((uint32_t)(esi), 0x9f4cf8u);
/* 6e820e: mov eax, esi */
  eax = esi;
/* 6e8210: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8211: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8230(void) {
  LOAD_REGS();
L_6e8230: /* 6e8230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e8234: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e8236: mov esi, ecx */
  esi = ecx;
/* 6e8238: call 0x6c7595 */
  esp -= 4; W32(esp, 0x6e823du); SPILL(); f_6c7595(); if (g_unwind) return; RELOAD();
/* 6e823d: mov dword ptr [esi], 0x9f4cf8 */
  W32((uint32_t)(esi), 0x9f4cf8u);
/* 6e8243: mov eax, esi */
  eax = esi;
/* 6e8245: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8246: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8260(void) {
  LOAD_REGS();
L_6e8260: /* 6e8260: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8261: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8262: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e8266: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8267: mov esi, ecx */
  esi = ecx;
/* 6e8269: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e826fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e826f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6e8272: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6e8275: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6e8278: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6e827b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6e827e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e8281: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6e8284: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e8287: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8289: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6e828c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6e828f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8291: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e8294: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8296: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6e8299: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6e829c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e829d: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6e82a0: mov eax, esi */
  eax = esi;
/* 6e82a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e82a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e82d0(void) {
  LOAD_REGS();
L_6e82d0: /* 6e82d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e82d1: mov esi, ecx */
  esi = ecx;
/* 6e82d3: call 0x6c9313 */
  esp -= 4; W32(esp, 0x6e82d8u); SPILL(); f_6c9313(); if (g_unwind) return; RELOAD();
/* 6e82d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e82dd: je 0x6e82eb */
  if (zf) goto L_6e82eb;
L_6e82df: /* 6e82df: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6e82e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e82e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e82e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e82e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e82eb: /* 6e82eb: mov eax, esi */
  eax = esi;
/* 6e82ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e82ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8310(void) {
  LOAD_REGS();
L_6e8310: /* 6e8310: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e8311: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e8315: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8318: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8319: mov esi, ecx */
  esi = ecx;
/* 6e831b: je 0x6e834d */
  if (zf) goto L_6e834d;
L_6e831d: /* 6e831d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e8320: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8321: push 0x6c9313 */
  { uint32_t v = 0x6c9313u; esp -= 4; W32(esp, v); }
/* 6e8326: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e8329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e832a: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6e832c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e832d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e8332u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e8332: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8335: je 0x6e8345 */
  if (zf) goto L_6e8345;
L_6e8337: /* 6e8337: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e833d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e833f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e8341: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8342: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e8345u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e8345: /* 6e8345: mov eax, edi */
  eax = edi;
/* 6e8347: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e8348: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8349: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e834a: ret 4 */
  esp += 8; SPILL(); return;
L_6e834d: /* 6e834d: mov ecx, esi */
  ecx = esi;
/* 6e834f: call 0x6c9313 */
  esp -= 4; W32(esp, 0x6e8354u); SPILL(); f_6c9313(); if (g_unwind) return; RELOAD();
/* 6e8354: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8357: je 0x6e8365 */
  if (zf) goto L_6e8365;
L_6e8359: /* 6e8359: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6e835b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e835c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e8362u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e8362: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e8365: /* 6e8365: mov eax, esi */
  eax = esi;
/* 6e8367: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8368: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e8369: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8390(void) {
  LOAD_REGS();
L_6e8390: /* 6e8390: mov eax, 0xb894e0 */
  eax = 0xb894e0u;
/* 6e8395: ret  */
  esp += 4; SPILL(); return;
}

void f_6e83b0(void) {
  LOAD_REGS();
L_6e83b0: /* 6e83b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e83b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e83b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e83bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e83bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e83c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e83c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e83c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e83c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e83ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e83cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e83cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e83cd: push 0xb894e0 */
  { uint32_t v = 0xb894e0u; esp -= 4; W32(esp, v); }
/* 6e83d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e83d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e83d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e83db: ret  */
  esp += 4; SPILL(); return;
}

void f_6e83f0(void) {
  LOAD_REGS();
L_6e83f0: /* 6e83f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e83f4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8410(void) {
  LOAD_REGS();
L_6e8410: /* 6e8410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e8412: push 0x9c0578 */
  { uint32_t v = 0x9c0578u; esp -= 4; W32(esp, v); }
/* 6e8417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e841d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e841e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e8425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e8426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8427: mov esi, ecx */
  esi = ecx;
/* 6e8429: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e842d: mov dword ptr [esi], 0x9f4db8 */
  W32((uint32_t)(esi), 0x9f4db8u);
/* 6e8433: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e843b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e8441u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e8441: mov ecx, esi */
  ecx = esi;
/* 6e8443: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e844b: call 0x6c9313 */
  esp -= 4; W32(esp, 0x6e8450u); SPILL(); f_6c9313(); if (g_unwind) return; RELOAD();
/* 6e8450: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e8454: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8455: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e845c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e845f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8480(void) {
  LOAD_REGS();
L_6e8480: /* 6e8480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8481: mov esi, ecx */
  esi = ecx;
/* 6e8483: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e8488u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e8488: mov dword ptr [esi], 0x9f4db8 */
  W32((uint32_t)(esi), 0x9f4db8u);
/* 6e848e: mov eax, esi */
  eax = esi;
/* 6e8490: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8491: ret  */
  esp += 4; SPILL(); return;
}

void f_6e84b0(void) {
  LOAD_REGS();
L_6e84b0: /* 6e84b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e84b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e84b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e84b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e84b7: mov esi, ecx */
  esi = ecx;
/* 6e84b9: call 0x6c7595 */
  esp -= 4; W32(esp, 0x6e84beu); SPILL(); f_6c7595(); if (g_unwind) return; RELOAD();
/* 6e84be: mov dword ptr [esi], 0x9f4db8 */
  W32((uint32_t)(esi), 0x9f4db8u);
/* 6e84c4: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e84c7: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e84ca: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6e84cd: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6e84d0: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6e84d3: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6e84d6: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6e84d9: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6e84dc: mov cl, byte ptr [edi + 0x48] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x48u))) & 0xffu);
/* 6e84df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e84e0: mov byte ptr [esi + 0x48], cl */
  W8((uint32_t)(esi + 0x48u), (ecx & 0xffu));
/* 6e84e3: mov eax, esi */
  eax = esi;
/* 6e84e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e84e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8500(void) {
  LOAD_REGS();
L_6e8500: /* 6e8500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8501: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8502: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e8506: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8507: mov esi, ecx */
  esi = ecx;
/* 6e8509: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e850fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e850f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6e8512: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6e8515: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6e8518: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6e851b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6e851e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e8521: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6e8524: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e8527: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8529: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6e852c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6e852f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8531: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e8534: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8536: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6e8539: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6e853c: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6e853f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e8542: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e8545: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6e8548: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6e854b: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6e854e: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6e8551: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6e8554: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6e8557: mov cl, byte ptr [edi + 0x48] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x48u))) & 0xffu);
/* 6e855a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e855b: mov byte ptr [esi + 0x48], cl */
  W8((uint32_t)(esi + 0x48u), (ecx & 0xffu));
/* 6e855e: mov eax, esi */
  eax = esi;
/* 6e8560: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8561: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8590(void) {
  LOAD_REGS();
L_6e8590: /* 6e8590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8591: mov esi, ecx */
  esi = ecx;
/* 6e8593: call 0x6c3daf */
  esp -= 4; W32(esp, 0x6e8598u); SPILL(); f_6c3daf(); if (g_unwind) return; RELOAD();
/* 6e8598: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e859d: je 0x6e85ab */
  if (zf) goto L_6e85ab;
L_6e859f: /* 6e859f: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6e85a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e85a2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e85a8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e85a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e85ab: /* 6e85ab: mov eax, esi */
  eax = esi;
/* 6e85ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e85ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e85d0(void) {
  LOAD_REGS();
L_6e85d0: /* 6e85d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e85d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e85d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e85d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e85d9: mov esi, ecx */
  esi = ecx;
/* 6e85db: je 0x6e860d */
  if (zf) goto L_6e860d;
L_6e85dd: /* 6e85dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e85e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e85e1: push 0x6c3daf */
  { uint32_t v = 0x6c3dafu; esp -= 4; W32(esp, v); }
/* 6e85e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e85e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e85ea: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6e85ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e85ed: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e85f2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e85f2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e85f5: je 0x6e8605 */
  if (zf) goto L_6e8605;
L_6e85f7: /* 6e85f7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e85fd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e85ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e8601: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8602: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e8605u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e8605: /* 6e8605: mov eax, edi */
  eax = edi;
/* 6e8607: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e8608: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8609: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e860a: ret 4 */
  esp += 8; SPILL(); return;
L_6e860d: /* 6e860d: mov ecx, esi */
  ecx = esi;
/* 6e860f: call 0x6c3daf */
  esp -= 4; W32(esp, 0x6e8614u); SPILL(); f_6c3daf(); if (g_unwind) return; RELOAD();
/* 6e8614: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8617: je 0x6e8625 */
  if (zf) goto L_6e8625;
L_6e8619: /* 6e8619: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 6e861b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e861c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e8622u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e8622: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e8625: /* 6e8625: mov eax, esi */
  eax = esi;
/* 6e8627: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8628: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e8629: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8650(void) {
  LOAD_REGS();
L_6e8650: /* 6e8650: mov eax, 0xb88fb0 */
  eax = 0xb88fb0u;
/* 6e8655: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8670(void) {
  LOAD_REGS();
L_6e8670: /* 6e8670: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e8675: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e8677: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e867b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e867f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e8681: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e8683: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e8684: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e8688: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e868a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e868b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e868c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e868d: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 6e8692: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e8698u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e8698: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e869b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e86b0(void) {
  LOAD_REGS();
L_6e86b0: /* 6e86b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e86b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e86d0(void) {
  LOAD_REGS();
L_6e86d0: /* 6e86d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e86d2: push 0x9c0598 */
  { uint32_t v = 0x9c0598u; esp -= 4; W32(esp, v); }
/* 6e86d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e86dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e86de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e86e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e86e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e86e7: mov esi, ecx */
  esi = ecx;
/* 6e86e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e86ed: mov dword ptr [esi], 0x9f4e78 */
  W32((uint32_t)(esi), 0x9f4e78u);
/* 6e86f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e86fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e8701u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e8701: mov ecx, esi */
  ecx = esi;
/* 6e8703: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e870b: call 0x6c9313 */
  esp -= 4; W32(esp, 0x6e8710u); SPILL(); f_6c9313(); if (g_unwind) return; RELOAD();
/* 6e8710: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e8714: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8715: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e871c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e871f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8740(void) {
  LOAD_REGS();
L_6e8740: /* 6e8740: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 6e8743: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e8747: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6e8749: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6e8760(void) {
  LOAD_REGS();
L_6e8760: /* 6e8760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8761: mov esi, ecx */
  esi = ecx;
/* 6e8763: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e8768u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e8768: mov dword ptr [esi], 0x9f4e78 */
  W32((uint32_t)(esi), 0x9f4e78u);
/* 6e876e: mov eax, esi */
  eax = esi;
/* 6e8770: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8771: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8790(void) {
  LOAD_REGS();
L_6e8790: /* 6e8790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8791: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8792: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e8796: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8797: mov esi, ecx */
  esi = ecx;
/* 6e8799: call 0x6c7595 */
  esp -= 4; W32(esp, 0x6e879eu); SPILL(); f_6c7595(); if (g_unwind) return; RELOAD();
/* 6e879e: mov dword ptr [esi], 0x9f4e78 */
  W32((uint32_t)(esi), 0x9f4e78u);
/* 6e87a4: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e87a7: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e87aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e87ab: mov eax, esi */
  eax = esi;
/* 6e87ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e87ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e87d0(void) {
  LOAD_REGS();
L_6e87d0: /* 6e87d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e87d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e87d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e87d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e87d7: mov esi, ecx */
  esi = ecx;
/* 6e87d9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e87dfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e87df: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6e87e2: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6e87e5: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6e87e8: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6e87eb: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6e87ee: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e87f1: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6e87f4: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e87f7: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e87f9: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6e87fc: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6e87ff: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8801: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e8804: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8806: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6e8809: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6e880c: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6e880f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e8812: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e8815: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e8816: mov eax, esi */
  eax = esi;
/* 6e8818: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8819: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8840(void) {
  LOAD_REGS();
L_6e8840: /* 6e8840: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8841: mov esi, ecx */
  esi = ecx;
/* 6e8843: call 0x6c5286 */
  esp -= 4; W32(esp, 0x6e8848u); SPILL(); f_6c5286(); if (g_unwind) return; RELOAD();
/* 6e8848: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e884d: je 0x6e885b */
  if (zf) goto L_6e885b;
L_6e884f: /* 6e884f: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 6e8851: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8852: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e8858u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e8858: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e885b: /* 6e885b: mov eax, esi */
  eax = esi;
/* 6e885d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e885e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8880(void) {
  LOAD_REGS();
L_6e8880: /* 6e8880: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e8881: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e8885: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8888: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8889: mov esi, ecx */
  esi = ecx;
/* 6e888b: je 0x6e88bd */
  if (zf) goto L_6e88bd;
L_6e888d: /* 6e888d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e8890: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8891: push 0x6c5286 */
  { uint32_t v = 0x6c5286u; esp -= 4; W32(esp, v); }
/* 6e8896: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e8899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e889a: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 6e889c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e889d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e88a2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e88a2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e88a5: je 0x6e88b5 */
  if (zf) goto L_6e88b5;
L_6e88a7: /* 6e88a7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e88ad: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e88af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e88b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e88b2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e88b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e88b5: /* 6e88b5: mov eax, edi */
  eax = edi;
/* 6e88b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e88b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e88b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e88ba: ret 4 */
  esp += 8; SPILL(); return;
L_6e88bd: /* 6e88bd: mov ecx, esi */
  ecx = esi;
/* 6e88bf: call 0x6c5286 */
  esp -= 4; W32(esp, 0x6e88c4u); SPILL(); f_6c5286(); if (g_unwind) return; RELOAD();
/* 6e88c4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e88c7: je 0x6e88d5 */
  if (zf) goto L_6e88d5;
L_6e88c9: /* 6e88c9: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 6e88cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e88cc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e88d2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e88d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e88d5: /* 6e88d5: mov eax, esi */
  eax = esi;
/* 6e88d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e88d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e88d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8900(void) {
  LOAD_REGS();
L_6e8900: /* 6e8900: mov eax, 0xb88020 */
  eax = 0xb88020u;
/* 6e8905: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8920(void) {
  LOAD_REGS();
L_6e8920: /* 6e8920: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e8925: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e8927: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e892b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e892f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e8931: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e8933: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e8934: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e8938: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e893a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e893b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e893c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e893d: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 6e8942: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e8948u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e8948: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e894b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8960(void) {
  LOAD_REGS();
L_6e8960: /* 6e8960: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e8964: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8980(void) {
  LOAD_REGS();
L_6e8980: /* 6e8980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e8982: push 0x9c05b8 */
  { uint32_t v = 0x9c05b8u; esp -= 4; W32(esp, v); }
/* 6e8987: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e898d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e898e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e8995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e8996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8997: mov esi, ecx */
  esi = ecx;
/* 6e8999: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e899d: mov dword ptr [esi], 0x9f4f38 */
  W32((uint32_t)(esi), 0x9f4f38u);
/* 6e89a3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e89ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e89b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e89b1: mov ecx, esi */
  ecx = esi;
/* 6e89b3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e89bb: call 0x6caf88 */
  esp -= 4; W32(esp, 0x6e89c0u); SPILL(); f_6caf88(); if (g_unwind) return; RELOAD();
/* 6e89c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e89c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e89c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e89cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e89cf: ret  */
  esp += 4; SPILL(); return;
}

void f_6e89f0(void) {
  LOAD_REGS();
L_6e89f0: /* 6e89f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e89f1: mov esi, ecx */
  esi = ecx;
/* 6e89f3: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e89f8u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e89f8: mov dword ptr [esi], 0x9f4f38 */
  W32((uint32_t)(esi), 0x9f4f38u);
/* 6e89fe: mov eax, esi */
  eax = esi;
/* 6e8a00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8a01: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8a20(void) {
  LOAD_REGS();
L_6e8a20: /* 6e8a20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8a21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8a22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e8a26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8a27: mov esi, ecx */
  esi = ecx;
/* 6e8a29: call 0x6c7595 */
  esp -= 4; W32(esp, 0x6e8a2eu); SPILL(); f_6c7595(); if (g_unwind) return; RELOAD();
/* 6e8a2e: mov dword ptr [esi], 0x9f4f38 */
  W32((uint32_t)(esi), 0x9f4f38u);
/* 6e8a34: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e8a37: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e8a3a: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6e8a3d: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6e8a40: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6e8a43: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6e8a46: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6e8a49: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6e8a4c: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6e8a4f: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6e8a52: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6e8a55: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 6e8a58: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6e8a5b: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6e8a5e: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6e8a61: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 6e8a64: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6e8a67: mov dl, byte ptr [edi + 0x58] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x58u))) & 0xffu);
/* 6e8a6a: mov byte ptr [esi + 0x58], dl */
  W8((uint32_t)(esi + 0x58u), (edx & 0xffu));
/* 6e8a6d: xor eax, dword ptr [edi + 0x5c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8a70: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 6e8a73: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e8a76: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8a78: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 6e8a7b: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 6e8a7e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8a80: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e8a83: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8a85: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 6e8a88: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 6e8a8b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8a8d: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e8a90: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8a92: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 6e8a95: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 6e8a98: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e8a9a: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e8a9d: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e8a9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e8aa0: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6e8aa3: mov eax, esi */
  eax = esi;
/* 6e8aa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8aa6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8ae0(void) {
  LOAD_REGS();
L_6e8ae0: /* 6e8ae0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8ae1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8ae2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e8ae6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8ae7: mov esi, ecx */
  esi = ecx;
/* 6e8ae9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e8aefu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e8aef: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6e8af2: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6e8af5: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6e8af8: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6e8afb: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6e8afe: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e8b01: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6e8b04: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e8b07: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8b09: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6e8b0c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6e8b0f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8b11: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e8b14: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8b16: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6e8b19: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6e8b1c: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6e8b1f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e8b22: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e8b25: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6e8b28: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6e8b2b: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6e8b2e: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6e8b31: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6e8b34: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6e8b37: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6e8b3a: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6e8b3d: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6e8b40: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 6e8b43: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6e8b46: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6e8b49: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6e8b4c: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 6e8b4f: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6e8b52: mov dl, byte ptr [edi + 0x58] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x58u))) & 0xffu);
/* 6e8b55: mov byte ptr [esi + 0x58], dl */
  W8((uint32_t)(esi + 0x58u), (edx & 0xffu));
/* 6e8b58: xor eax, dword ptr [edi + 0x5c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8b5b: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 6e8b5e: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e8b61: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8b63: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 6e8b66: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 6e8b69: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8b6b: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e8b6e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8b70: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 6e8b73: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 6e8b76: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8b78: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e8b7b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8b7d: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 6e8b80: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 6e8b83: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e8b85: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e8b88: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e8b8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e8b8b: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 6e8b8e: mov eax, esi */
  eax = esi;
/* 6e8b90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8b91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8bd0(void) {
  LOAD_REGS();
L_6e8bd0: /* 6e8bd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8bd1: mov esi, ecx */
  esi = ecx;
/* 6e8bd3: call 0x6cbbb8 */
  esp -= 4; W32(esp, 0x6e8bd8u); SPILL(); f_6cbbb8(); if (g_unwind) return; RELOAD();
/* 6e8bd8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8bdd: je 0x6e8beb */
  if (zf) goto L_6e8beb;
L_6e8bdf: /* 6e8bdf: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 6e8be1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8be2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e8be8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e8be8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e8beb: /* 6e8beb: mov eax, esi */
  eax = esi;
/* 6e8bed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8bee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8c10(void) {
  LOAD_REGS();
L_6e8c10: /* 6e8c10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e8c11: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e8c15: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8c18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8c19: mov esi, ecx */
  esi = ecx;
/* 6e8c1b: je 0x6e8c4d */
  if (zf) goto L_6e8c4d;
L_6e8c1d: /* 6e8c1d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e8c20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8c21: push 0x6cbbb8 */
  { uint32_t v = 0x6cbbb8u; esp -= 4; W32(esp, v); }
/* 6e8c26: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e8c29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e8c2a: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 6e8c2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8c2d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e8c32u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e8c32: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8c35: je 0x6e8c45 */
  if (zf) goto L_6e8c45;
L_6e8c37: /* 6e8c37: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e8c3d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e8c3f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e8c41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8c42: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e8c45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e8c45: /* 6e8c45: mov eax, edi */
  eax = edi;
/* 6e8c47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e8c48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8c49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e8c4a: ret 4 */
  esp += 8; SPILL(); return;
L_6e8c4d: /* 6e8c4d: mov ecx, esi */
  ecx = esi;
/* 6e8c4f: call 0x6cbbb8 */
  esp -= 4; W32(esp, 0x6e8c54u); SPILL(); f_6cbbb8(); if (g_unwind) return; RELOAD();
/* 6e8c54: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8c57: je 0x6e8c65 */
  if (zf) goto L_6e8c65;
L_6e8c59: /* 6e8c59: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 6e8c5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8c5c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e8c62u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e8c62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e8c65: /* 6e8c65: mov eax, esi */
  eax = esi;
/* 6e8c67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8c68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e8c69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8c90(void) {
  LOAD_REGS();
L_6e8c90: /* 6e8c90: mov eax, 0xb89a10 */
  eax = 0xb89a10u;
/* 6e8c95: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8cb0(void) {
  LOAD_REGS();
L_6e8cb0: /* 6e8cb0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e8cb5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e8cb7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e8cbb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e8cbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e8cc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e8cc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e8cc4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e8cc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e8cca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e8ccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e8ccc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e8ccd: push 0xb89a10 */
  { uint32_t v = 0xb89a10u; esp -= 4; W32(esp, v); }
/* 6e8cd2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e8cd8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e8cd8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e8cdb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8cf0(void) {
  LOAD_REGS();
L_6e8cf0: /* 6e8cf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e8cf4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8d10(void) {
  LOAD_REGS();
L_6e8d10: /* 6e8d10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e8d12: push 0x9c05d8 */
  { uint32_t v = 0x9c05d8u; esp -= 4; W32(esp, v); }
/* 6e8d17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e8d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e8d1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e8d25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e8d26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8d27: mov esi, ecx */
  esi = ecx;
/* 6e8d29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e8d2d: mov dword ptr [esi], 0x9f4ff0 */
  W32((uint32_t)(esi), 0x9f4ff0u);
/* 6e8d33: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e8d3b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e8d41u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e8d41: mov ecx, esi */
  ecx = esi;
/* 6e8d43: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e8d4b: call 0x6c9f16 */
  esp -= 4; W32(esp, 0x6e8d50u); SPILL(); f_6c9f16(); if (g_unwind) return; RELOAD();
/* 6e8d50: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e8d54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8d55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e8d5c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e8d5f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8d80(void) {
  LOAD_REGS();
L_6e8d80: /* 6e8d80: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 6e8d83: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8d85: je 0x6e8d93 */
  if (zf) goto L_6e8d93;
L_6e8d87: /* 6e8d87: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6e8d89: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x6e8d8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e8d8f: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 6e8d92: ret  */
  esp += 4; SPILL(); return;
L_6e8d93: /* 6e8d93: mov eax, 1 */
  eax = 0x1u;
/* 6e8d98: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8db0(void) {
  LOAD_REGS();
L_6e8db0: /* 6e8db0: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 6e8db3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8db5: je 0x6e8dbf */
  if (zf) goto L_6e8dbf;
L_6e8db7: /* 6e8db7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6e8db9: jmp dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); SPILL(); call_ind(t); return; }
L_6e8dbf: /* 6e8dbf: xor eax, eax */
  eax = 0;
/* 6e8dc1: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8de0(void) {
  LOAD_REGS();
L_6e8de0: /* 6e8de0: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 6e8de3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8de5: je 0x6e8def */
  if (zf) goto L_6e8def;
L_6e8de7: /* 6e8de7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6e8de9: jmp dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); SPILL(); call_ind(t); return; }
L_6e8def: /* 6e8def: xor eax, eax */
  eax = 0;
/* 6e8df1: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8e10(void) {
  LOAD_REGS();
L_6e8e10: /* 6e8e10: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 6e8e13: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8e15: je 0x6e8e1c */
  if (zf) goto L_6e8e1c;
L_6e8e17: /* 6e8e17: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6e8e19: jmp dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); SPILL(); call_ind(t); return; }
L_6e8e1c: /* 6e8e1c: xor eax, eax */
  eax = 0;
/* 6e8e1e: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8e30(void) {
  LOAD_REGS();
L_6e8e30: /* 6e8e30: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 6e8e33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8e35: je 0x6e8e3c */
  if (zf) goto L_6e8e3c;
L_6e8e37: /* 6e8e37: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6e8e39: jmp dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); SPILL(); call_ind(t); return; }
L_6e8e3c: /* 6e8e3c: xor eax, eax */
  eax = 0;
/* 6e8e3e: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8e50(void) {
  LOAD_REGS();
L_6e8e50: /* 6e8e50: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 6e8e53: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8e55: je 0x6e8e66 */
  if (zf) goto L_6e8e66;
L_6e8e57: /* 6e8e57: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6e8e59: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x6e8e5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e8e5f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6e8e61: mov ecx, eax */
  ecx = eax;
/* 6e8e63: jmp dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); SPILL(); call_ind(t); return; }
L_6e8e66: /* 6e8e66: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8e80(void) {
  LOAD_REGS();
L_6e8e80: /* 6e8e80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8e81: mov esi, ecx */
  esi = ecx;
/* 6e8e83: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e8e88u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e8e88: mov dword ptr [esi], 0x9f4ff0 */
  W32((uint32_t)(esi), 0x9f4ff0u);
/* 6e8e8e: mov eax, esi */
  eax = esi;
/* 6e8e90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8e91: ret  */
  esp += 4; SPILL(); return;
}

void f_6e8eb0(void) {
  LOAD_REGS();
L_6e8eb0: /* 6e8eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8eb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8eb2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e8eb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8eb7: mov esi, ecx */
  esi = ecx;
/* 6e8eb9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6e8ebfu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6e8ebf: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6e8ec2: mov dword ptr [esi], 0x9f4450 */
  W32((uint32_t)(esi), 0x9f4450u);
/* 6e8ec8: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6e8ecb: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6e8ece: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6e8ed1: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6e8ed4: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e8ed7: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6e8eda: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e8edd: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8edf: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6e8ee2: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6e8ee5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8ee7: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e8eea: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8eec: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6e8eef: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6e8ef2: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6e8ef5: mov dword ptr [esi], 0x9f4ff0 */
  W32((uint32_t)(esi), 0x9f4ff0u);
/* 6e8efb: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e8efe: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e8f01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e8f02: mov eax, esi */
  eax = esi;
/* 6e8f04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8f05: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8f30(void) {
  LOAD_REGS();
L_6e8f30: /* 6e8f30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8f31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8f32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e8f36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8f37: mov esi, ecx */
  esi = ecx;
/* 6e8f39: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e8f3fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e8f3f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6e8f42: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6e8f45: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6e8f48: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6e8f4b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6e8f4e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e8f51: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6e8f54: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e8f57: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e8f59: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6e8f5c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6e8f5f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8f61: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e8f64: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e8f66: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6e8f69: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6e8f6c: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6e8f6f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e8f72: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e8f75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e8f76: mov eax, esi */
  eax = esi;
/* 6e8f78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8f79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8fa0(void) {
  LOAD_REGS();
L_6e8fa0: /* 6e8fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8fa1: mov esi, ecx */
  esi = ecx;
/* 6e8fa3: call 0x6c1cc6 */
  esp -= 4; W32(esp, 0x6e8fa8u); SPILL(); f_6c1cc6(); if (g_unwind) return; RELOAD();
/* 6e8fa8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8fad: je 0x6e8fbb */
  if (zf) goto L_6e8fbb;
L_6e8faf: /* 6e8faf: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 6e8fb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8fb2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e8fb8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e8fb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e8fbb: /* 6e8fbb: mov eax, esi */
  eax = esi;
/* 6e8fbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e8fbe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e8fe0(void) {
  LOAD_REGS();
L_6e8fe0: /* 6e8fe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e8fe1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e8fe5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e8fe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8fe9: mov esi, ecx */
  esi = ecx;
/* 6e8feb: je 0x6e901d */
  if (zf) goto L_6e901d;
L_6e8fed: /* 6e8fed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e8ff0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e8ff1: push 0x6c1cc6 */
  { uint32_t v = 0x6c1cc6u; esp -= 4; W32(esp, v); }
/* 6e8ff6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e8ff9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e8ffa: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 6e8ffc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e8ffd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e9002u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e9002: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9005: je 0x6e9015 */
  if (zf) goto L_6e9015;
L_6e9007: /* 6e9007: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e900d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e900f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e9011: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9012: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e9015u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e9015: /* 6e9015: mov eax, edi */
  eax = edi;
/* 6e9017: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9018: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9019: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e901a: ret 4 */
  esp += 8; SPILL(); return;
L_6e901d: /* 6e901d: mov ecx, esi */
  ecx = esi;
/* 6e901f: call 0x6c1cc6 */
  esp -= 4; W32(esp, 0x6e9024u); SPILL(); f_6c1cc6(); if (g_unwind) return; RELOAD();
/* 6e9024: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9027: je 0x6e9035 */
  if (zf) goto L_6e9035;
L_6e9029: /* 6e9029: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 6e902b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e902c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e9032u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e9032: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e9035: /* 6e9035: mov eax, esi */
  eax = esi;
/* 6e9037: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9038: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e9039: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9060(void) {
  LOAD_REGS();
L_6e9060: /* 6e9060: mov eax, 0xb8e7e0 */
  eax = 0xb8e7e0u;
/* 6e9065: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9080(void) {
  LOAD_REGS();
L_6e9080: /* 6e9080: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e9085: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e9087: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e908b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e908f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9091: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9093: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9094: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e9098: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e909a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e909b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e909c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e909d: push 0xb8e7e0 */
  { uint32_t v = 0xb8e7e0u; esp -= 4; W32(esp, v); }
/* 6e90a2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e90a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e90a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e90ab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e90c0(void) {
  LOAD_REGS();
L_6e90c0: /* 6e90c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e90c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e90e0(void) {
  LOAD_REGS();
L_6e90e0: /* 6e90e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e90e2: push 0x9c05f8 */
  { uint32_t v = 0x9c05f8u; esp -= 4; W32(esp, v); }
/* 6e90e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e90ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e90ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e90f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e90f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e90f7: mov esi, ecx */
  esi = ecx;
/* 6e90f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e90fd: mov dword ptr [esi], 0x9f50a8 */
  W32((uint32_t)(esi), 0x9f50a8u);
/* 6e9103: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e910b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e9111u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e9111: mov ecx, esi */
  ecx = esi;
/* 6e9113: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e911b: call 0x6c1cc6 */
  esp -= 4; W32(esp, 0x6e9120u); SPILL(); f_6c1cc6(); if (g_unwind) return; RELOAD();
/* 6e9120: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e9124: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9125: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e912c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e912f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9150(void) {
  LOAD_REGS();
L_6e9150: /* 6e9150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9151: mov esi, ecx */
  esi = ecx;
/* 6e9153: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e9158u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e9158: mov dword ptr [esi], 0x9f50a8 */
  W32((uint32_t)(esi), 0x9f50a8u);
/* 6e915e: mov eax, esi */
  eax = esi;
/* 6e9160: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9161: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9180(void) {
  LOAD_REGS();
L_6e9180: /* 6e9180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9181: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9182: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e9186: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9187: mov esi, ecx */
  esi = ecx;
/* 6e9189: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6e918eu); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6e918e: mov dword ptr [esi], 0x9f50a8 */
  W32((uint32_t)(esi), 0x9f50a8u);
/* 6e9194: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 6e9197: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 6e919a: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 6e919d: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 6e91a0: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e91a2: mov eax, edi */
  eax = edi;
/* 6e91a4: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e91a7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e91a9: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6e91ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e91ad: mov eax, esi */
  eax = esi;
/* 6e91af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e91b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e91d0(void) {
  LOAD_REGS();
L_6e91d0: /* 6e91d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e91d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e91d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e91d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e91d7: mov esi, ecx */
  esi = ecx;
/* 6e91d9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e91dfu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e91df: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6e91e2: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6e91e5: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6e91e8: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6e91eb: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6e91ee: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e91f1: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6e91f4: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e91f7: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e91f9: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6e91fc: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6e91ff: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e9201: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e9204: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e9206: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6e9209: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6e920c: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6e920f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e9212: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e9215: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6e9218: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6e921b: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6e921e: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 6e9221: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e9223: mov eax, edi */
  eax = edi;
/* 6e9225: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e9228: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e922a: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6e922d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e922e: mov eax, esi */
  eax = esi;
/* 6e9230: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9231: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9260(void) {
  LOAD_REGS();
L_6e9260: /* 6e9260: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9261: mov esi, ecx */
  esi = ecx;
/* 6e9263: call 0x6cbf4b */
  esp -= 4; W32(esp, 0x6e9268u); SPILL(); f_6cbf4b(); if (g_unwind) return; RELOAD();
/* 6e9268: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e926d: je 0x6e927b */
  if (zf) goto L_6e927b;
L_6e926f: /* 6e926f: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6e9271: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9272: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e9278u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e9278: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e927b: /* 6e927b: mov eax, esi */
  eax = esi;
/* 6e927d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e927e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e92a0(void) {
  LOAD_REGS();
L_6e92a0: /* 6e92a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e92a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e92a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e92a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e92a9: mov esi, ecx */
  esi = ecx;
/* 6e92ab: je 0x6e92dd */
  if (zf) goto L_6e92dd;
L_6e92ad: /* 6e92ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e92b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e92b1: push 0x6cbf4b */
  { uint32_t v = 0x6cbf4bu; esp -= 4; W32(esp, v); }
/* 6e92b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e92b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e92ba: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6e92bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e92bd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e92c2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e92c2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e92c5: je 0x6e92d5 */
  if (zf) goto L_6e92d5;
L_6e92c7: /* 6e92c7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e92cd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e92cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e92d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e92d2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e92d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e92d5: /* 6e92d5: mov eax, edi */
  eax = edi;
/* 6e92d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e92d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e92d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e92da: ret 4 */
  esp += 8; SPILL(); return;
L_6e92dd: /* 6e92dd: mov ecx, esi */
  ecx = esi;
/* 6e92df: call 0x6cbf4b */
  esp -= 4; W32(esp, 0x6e92e4u); SPILL(); f_6cbf4b(); if (g_unwind) return; RELOAD();
/* 6e92e4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e92e7: je 0x6e92f5 */
  if (zf) goto L_6e92f5;
L_6e92e9: /* 6e92e9: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6e92eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e92ec: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e92f2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e92f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e92f5: /* 6e92f5: mov eax, esi */
  eax = esi;
/* 6e92f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e92f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e92f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9320(void) {
  LOAD_REGS();
L_6e9320: /* 6e9320: mov eax, ecx */
  eax = ecx;
/* 6e9322: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6e9326: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9327: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6e9329: mov edx, eax */
  edx = eax;
/* 6e932b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6e932d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6e9330: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6e9333: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6e9336: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 6e9339: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e933a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9350(void) {
  LOAD_REGS();
L_6e9350: /* 6e9350: mov eax, 0xb8e2b0 */
  eax = 0xb8e2b0u;
/* 6e9355: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9370(void) {
  LOAD_REGS();
L_6e9370: /* 6e9370: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e9375: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e9377: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e937b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e937f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9383: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9384: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e9388: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e938a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e938b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e938c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e938d: push 0xb8e2b0 */
  { uint32_t v = 0xb8e2b0u; esp -= 4; W32(esp, v); }
/* 6e9392: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e9398u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e9398: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e939b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e93b0(void) {
  LOAD_REGS();
L_6e93b0: /* 6e93b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e93b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e93d0(void) {
  LOAD_REGS();
L_6e93d0: /* 6e93d0: mov eax, 0xb8dd80 */
  eax = 0xb8dd80u;
/* 6e93d5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e93f0(void) {
  LOAD_REGS();
L_6e93f0: /* 6e93f0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e93f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e93f7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e93fb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e93ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9401: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9403: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9404: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e9408: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e940a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e940b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e940c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e940d: push 0xb8dd80 */
  { uint32_t v = 0xb8dd80u; esp -= 4; W32(esp, v); }
/* 6e9412: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e9418u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e9418: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e941b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9430(void) {
  LOAD_REGS();
L_6e9430: /* 6e9430: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e9434: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9450(void) {
  LOAD_REGS();
L_6e9450: /* 6e9450: mov eax, 0xb8d850 */
  eax = 0xb8d850u;
/* 6e9455: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9470(void) {
  LOAD_REGS();
L_6e9470: /* 6e9470: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e9475: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e9477: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e947b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e947f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9481: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9483: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9484: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e9488: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e948a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e948b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e948c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e948d: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 6e9492: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e9498u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e9498: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e949b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e94b0(void) {
  LOAD_REGS();
L_6e94b0: /* 6e94b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e94b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e94d0(void) {
  LOAD_REGS();
L_6e94d0: /* 6e94d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e94d2: push 0x9c0618 */
  { uint32_t v = 0x9c0618u; esp -= 4; W32(esp, v); }
/* 6e94d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e94dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e94de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e94e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e94e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e94e7: mov esi, ecx */
  esi = ecx;
/* 6e94e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e94ed: mov dword ptr [esi], 0x9f5160 */
  W32((uint32_t)(esi), 0x9f5160u);
/* 6e94f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e94fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e9501u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e9501: mov ecx, esi */
  ecx = esi;
/* 6e9503: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e950b: call 0x6c1cc6 */
  esp -= 4; W32(esp, 0x6e9510u); SPILL(); f_6c1cc6(); if (g_unwind) return; RELOAD();
/* 6e9510: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e9514: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9515: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e951c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e951f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9540(void) {
  LOAD_REGS();
L_6e9540: /* 6e9540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9541: mov esi, ecx */
  esi = ecx;
/* 6e9543: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e9548u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e9548: mov dword ptr [esi], 0x9f5160 */
  W32((uint32_t)(esi), 0x9f5160u);
/* 6e954e: mov eax, esi */
  eax = esi;
/* 6e9550: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9551: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9570(void) {
  LOAD_REGS();
L_6e9570: /* 6e9570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9571: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9572: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e9576: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9577: mov esi, ecx */
  esi = ecx;
/* 6e9579: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6e957eu); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6e957e: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 6e9581: mov dword ptr [esi], 0x9f5160 */
  W32((uint32_t)(esi), 0x9f5160u);
/* 6e9587: mov al, byte ptr [edi + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3cu))) & 0xffu);
/* 6e958a: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* 6e958d: xor ecx, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e9590: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 6e9593: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e9596: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e9598: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6e959b: mov ecx, eax */
  ecx = eax;
/* 6e959d: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6e95a0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e95a2: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e95a5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e95a7: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6e95aa: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 6e95ad: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e95af: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e95b2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e95b4: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 6e95b7: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6e95ba: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e95bc: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e95bf: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e95c1: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6e95c4: mov al, byte ptr [edi + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x44u))) & 0xffu);
/* 6e95c7: mov byte ptr [esi + 0x44], al */
  W8((uint32_t)(esi + 0x44u), (eax & 0xffu));
/* 6e95ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e95cb: mov eax, esi */
  eax = esi;
/* 6e95cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e95ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9600(void) {
  LOAD_REGS();
L_6e9600: /* 6e9600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9601: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9602: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e9606: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9607: mov esi, ecx */
  esi = ecx;
/* 6e9609: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e960fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e960f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6e9612: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6e9615: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6e9618: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6e961b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6e961e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e9621: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6e9624: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e9627: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e9629: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6e962c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6e962f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e9631: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e9634: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e9636: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6e9639: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6e963c: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6e963f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e9642: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 6e9645: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e9648: mov cl, byte ptr [edi + 0x3c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3cu))) & 0xffu);
/* 6e964b: mov byte ptr [esi + 0x3c], cl */
  W8((uint32_t)(esi + 0x3cu), (ecx & 0xffu));
/* 6e964e: xor edx, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e9651: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 6e9654: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e9657: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e9659: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6e965c: mov ecx, eax */
  ecx = eax;
/* 6e965e: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6e9661: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e9663: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e9666: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e9668: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6e966b: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 6e966e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e9670: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e9673: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e9675: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 6e9678: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6e967b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e967d: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e9680: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e9682: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6e9685: mov cl, byte ptr [edi + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x44u))) & 0xffu);
/* 6e9688: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9689: mov byte ptr [esi + 0x44], cl */
  W8((uint32_t)(esi + 0x44u), (ecx & 0xffu));
/* 6e968c: mov eax, esi */
  eax = esi;
/* 6e968e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e968f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e96d0(void) {
  LOAD_REGS();
L_6e96d0: /* 6e96d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e96d1: mov esi, ecx */
  esi = ecx;
/* 6e96d3: call 0x6c34ae */
  esp -= 4; W32(esp, 0x6e96d8u); SPILL(); f_6c34ae(); if (g_unwind) return; RELOAD();
/* 6e96d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e96dd: je 0x6e96eb */
  if (zf) goto L_6e96eb;
L_6e96df: /* 6e96df: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 6e96e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e96e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e96e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e96e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e96eb: /* 6e96eb: mov eax, esi */
  eax = esi;
/* 6e96ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e96ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9710(void) {
  LOAD_REGS();
L_6e9710: /* 6e9710: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e9711: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e9715: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9718: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9719: mov esi, ecx */
  esi = ecx;
/* 6e971b: je 0x6e974d */
  if (zf) goto L_6e974d;
L_6e971d: /* 6e971d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e9720: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9721: push 0x6c34ae */
  { uint32_t v = 0x6c34aeu; esp -= 4; W32(esp, v); }
/* 6e9726: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e9729: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e972a: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 6e972c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e972d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e9732u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e9732: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9735: je 0x6e9745 */
  if (zf) goto L_6e9745;
L_6e9737: /* 6e9737: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e973d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e973f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e9741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9742: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e9745u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e9745: /* 6e9745: mov eax, edi */
  eax = edi;
/* 6e9747: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9748: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9749: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e974a: ret 4 */
  esp += 8; SPILL(); return;
L_6e974d: /* 6e974d: mov ecx, esi */
  ecx = esi;
/* 6e974f: call 0x6c34ae */
  esp -= 4; W32(esp, 0x6e9754u); SPILL(); f_6c34ae(); if (g_unwind) return; RELOAD();
/* 6e9754: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9757: je 0x6e9765 */
  if (zf) goto L_6e9765;
L_6e9759: /* 6e9759: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 6e975b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e975c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e9762u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e9762: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e9765: /* 6e9765: mov eax, esi */
  eax = esi;
/* 6e9767: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9768: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e9769: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9790(void) {
  LOAD_REGS();
L_6e9790: /* 6e9790: mov eax, 0xb89f40 */
  eax = 0xb89f40u;
/* 6e9795: ret  */
  esp += 4; SPILL(); return;
}

void f_6e97b0(void) {
  LOAD_REGS();
L_6e97b0: /* 6e97b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e97b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e97b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e97bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e97bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e97c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e97c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e97c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e97c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e97ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e97cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e97cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e97cd: push 0xb89f40 */
  { uint32_t v = 0xb89f40u; esp -= 4; W32(esp, v); }
/* 6e97d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e97d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e97d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e97db: ret  */
  esp += 4; SPILL(); return;
}

void f_6e97f0(void) {
  LOAD_REGS();
L_6e97f0: /* 6e97f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e97f4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9810(void) {
  LOAD_REGS();
L_6e9810: /* 6e9810: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e9812: push 0x9c0638 */
  { uint32_t v = 0x9c0638u; esp -= 4; W32(esp, v); }
/* 6e9817: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e981d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e981e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e9825: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9827: mov esi, ecx */
  esi = ecx;
/* 6e9829: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e982d: mov dword ptr [esi], 0x9f5218 */
  W32((uint32_t)(esi), 0x9f5218u);
/* 6e9833: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e983b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e9841u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e9841: mov ecx, esi */
  ecx = esi;
/* 6e9843: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e984b: call 0x6c1cc6 */
  esp -= 4; W32(esp, 0x6e9850u); SPILL(); f_6c1cc6(); if (g_unwind) return; RELOAD();
/* 6e9850: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e9854: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9855: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e985c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e985f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9880(void) {
  LOAD_REGS();
L_6e9880: /* 6e9880: xor eax, eax */
  eax = 0;
/* 6e9882: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e98a0(void) {
  LOAD_REGS();
L_6e98a0: /* 6e98a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e98a1: mov esi, ecx */
  esi = ecx;
/* 6e98a3: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e98a8u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e98a8: mov dword ptr [esi], 0x9f5218 */
  W32((uint32_t)(esi), 0x9f5218u);
/* 6e98ae: mov eax, esi */
  eax = esi;
/* 6e98b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e98b1: ret  */
  esp += 4; SPILL(); return;
}

void f_6e98d0(void) {
  LOAD_REGS();
L_6e98d0: /* 6e98d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e98d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e98d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e98d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e98d7: mov esi, ecx */
  esi = ecx;
/* 6e98d9: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6e98deu); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6e98de: mov dword ptr [esi], 0x9f5218 */
  W32((uint32_t)(esi), 0x9f5218u);
/* 6e98e4: mov al, byte ptr [edi + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3cu))) & 0xffu);
/* 6e98e7: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* 6e98ea: mov cl, byte ptr [edi + 0x3d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3du))) & 0xffu);
/* 6e98ed: mov byte ptr [esi + 0x3d], cl */
  W8((uint32_t)(esi + 0x3du), (ecx & 0xffu));
/* 6e98f0: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6e98f3: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 6e98f6: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e98f8: mov eax, edi */
  eax = edi;
/* 6e98fa: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e98fd: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e98ff: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6e9902: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9903: mov eax, esi */
  eax = esi;
/* 6e9905: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9906: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9920(void) {
  LOAD_REGS();
L_6e9920: /* 6e9920: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9921: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9922: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e9926: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9927: mov esi, ecx */
  esi = ecx;
/* 6e9929: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6e992fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e992f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6e9932: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6e9935: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6e9938: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6e993b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6e993e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e9941: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6e9944: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e9947: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e9949: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6e994c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6e994f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e9951: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6e9954: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e9956: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6e9959: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6e995c: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6e995f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6e9962: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6e9965: mov cl, byte ptr [edi + 0x3c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3cu))) & 0xffu);
/* 6e9968: mov byte ptr [esi + 0x3c], cl */
  W8((uint32_t)(esi + 0x3cu), (ecx & 0xffu));
/* 6e996b: mov dl, byte ptr [edi + 0x3d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3du))) & 0xffu);
/* 6e996e: mov byte ptr [esi + 0x3d], dl */
  W8((uint32_t)(esi + 0x3du), (edx & 0xffu));
/* 6e9971: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 6e9974: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 6e9977: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e9979: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e997c: mov ecx, edi */
  ecx = edi;
/* 6e997e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6e9980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9981: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 6e9984: mov eax, esi */
  eax = esi;
/* 6e9986: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9987: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e99b0(void) {
  LOAD_REGS();
L_6e99b0: /* 6e99b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e99b1: mov esi, ecx */
  esi = ecx;
/* 6e99b3: call 0x6ccf5e */
  esp -= 4; W32(esp, 0x6e99b8u); SPILL(); f_6ccf5e(); if (g_unwind) return; RELOAD();
/* 6e99b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e99bd: je 0x6e99cb */
  if (zf) goto L_6e99cb;
L_6e99bf: /* 6e99bf: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6e99c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e99c2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e99c8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e99c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e99cb: /* 6e99cb: mov eax, esi */
  eax = esi;
/* 6e99cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e99ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e99f0(void) {
  LOAD_REGS();
L_6e99f0: /* 6e99f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e99f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e99f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e99f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e99f9: mov esi, ecx */
  esi = ecx;
/* 6e99fb: je 0x6e9a2d */
  if (zf) goto L_6e9a2d;
L_6e99fd: /* 6e99fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e9a00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9a01: push 0x6ccf5e */
  { uint32_t v = 0x6ccf5eu; esp -= 4; W32(esp, v); }
/* 6e9a06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e9a09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e9a0a: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6e9a0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9a0d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e9a12u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e9a12: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9a15: je 0x6e9a25 */
  if (zf) goto L_6e9a25;
L_6e9a17: /* 6e9a17: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e9a1d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e9a1f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e9a21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9a22: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e9a25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e9a25: /* 6e9a25: mov eax, edi */
  eax = edi;
/* 6e9a27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9a28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9a29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e9a2a: ret 4 */
  esp += 8; SPILL(); return;
L_6e9a2d: /* 6e9a2d: mov ecx, esi */
  ecx = esi;
/* 6e9a2f: call 0x6ccf5e */
  esp -= 4; W32(esp, 0x6e9a34u); SPILL(); f_6ccf5e(); if (g_unwind) return; RELOAD();
/* 6e9a34: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9a37: je 0x6e9a45 */
  if (zf) goto L_6e9a45;
L_6e9a39: /* 6e9a39: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 6e9a3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9a3c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e9a42u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e9a42: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e9a45: /* 6e9a45: mov eax, esi */
  eax = esi;
/* 6e9a47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9a48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e9a49: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9a70(void) {
  LOAD_REGS();
L_6e9a70: /* 6e9a70: mov eax, 0xb8cdf0 */
  eax = 0xb8cdf0u;
/* 6e9a75: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9a90(void) {
  LOAD_REGS();
L_6e9a90: /* 6e9a90: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e9a95: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e9a97: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e9a9b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e9a9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9aa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9aa3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9aa4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e9aa8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9aaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e9aab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e9aac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9aad: push 0xb8cdf0 */
  { uint32_t v = 0xb8cdf0u; esp -= 4; W32(esp, v); }
/* 6e9ab2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e9ab8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e9ab8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e9abb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9ad0(void) {
  LOAD_REGS();
L_6e9ad0: /* 6e9ad0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e9ad4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9af0(void) {
  LOAD_REGS();
L_6e9af0: /* 6e9af0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e9af2: push 0x9c0658 */
  { uint32_t v = 0x9c0658u; esp -= 4; W32(esp, v); }
/* 6e9af7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e9afd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e9afe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e9b05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9b06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9b07: mov esi, ecx */
  esi = ecx;
/* 6e9b09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e9b0d: mov dword ptr [esi], 0x9f52d8 */
  W32((uint32_t)(esi), 0x9f52d8u);
/* 6e9b13: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e9b1b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e9b21u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e9b21: mov ecx, esi */
  ecx = esi;
/* 6e9b23: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e9b2b: call 0x6ccf5e */
  esp -= 4; W32(esp, 0x6e9b30u); SPILL(); f_6ccf5e(); if (g_unwind) return; RELOAD();
/* 6e9b30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e9b34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9b35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e9b3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e9b3f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9b60(void) {
  LOAD_REGS();
L_6e9b60: /* 6e9b60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9b61: mov esi, ecx */
  esi = ecx;
/* 6e9b63: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e9b68u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e9b68: mov dword ptr [esi], 0x9f52d8 */
  W32((uint32_t)(esi), 0x9f52d8u);
/* 6e9b6e: mov eax, esi */
  eax = esi;
/* 6e9b70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9b71: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9b90(void) {
  LOAD_REGS();
L_6e9b90: /* 6e9b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9b91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9b92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e9b96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9b97: mov esi, ecx */
  esi = ecx;
/* 6e9b99: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6e9b9eu); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6e9b9e: mov dword ptr [esi], 0x9f5218 */
  W32((uint32_t)(esi), 0x9f5218u);
/* 6e9ba4: mov al, byte ptr [edi + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3cu))) & 0xffu);
/* 6e9ba7: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* 6e9baa: mov cl, byte ptr [edi + 0x3d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3du))) & 0xffu);
/* 6e9bad: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 6e9bb0: mov byte ptr [esi + 0x3d], cl */
  W8((uint32_t)(esi + 0x3du), (ecx & 0xffu));
/* 6e9bb3: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6e9bb6: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e9bb8: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e9bbb: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e9bbd: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6e9bc0: mov dword ptr [esi], 0x9f52d8 */
  W32((uint32_t)(esi), 0x9f52d8u);
/* 6e9bc6: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6e9bc9: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6e9bcc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9bcd: mov eax, esi */
  eax = esi;
/* 6e9bcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9bd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9c00(void) {
  LOAD_REGS();
L_6e9c00: /* 6e9c00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9c01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9c02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e9c06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9c07: mov esi, ecx */
  esi = ecx;
/* 6e9c09: call 0x6c4b51 */
  esp -= 4; W32(esp, 0x6e9c0eu); SPILL(); f_6c4b51(); if (g_unwind) return; RELOAD();
/* 6e9c0e: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6e9c11: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6e9c14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9c15: mov eax, esi */
  eax = esi;
/* 6e9c17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9c18: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9c30(void) {
  LOAD_REGS();
L_6e9c30: /* 6e9c30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9c31: mov esi, ecx */
  esi = ecx;
/* 6e9c33: call 0x6c2af4 */
  esp -= 4; W32(esp, 0x6e9c38u); SPILL(); f_6c2af4(); if (g_unwind) return; RELOAD();
/* 6e9c38: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9c3d: je 0x6e9c4b */
  if (zf) goto L_6e9c4b;
L_6e9c3f: /* 6e9c3f: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 6e9c41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9c42: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e9c48u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e9c48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e9c4b: /* 6e9c4b: mov eax, esi */
  eax = esi;
/* 6e9c4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9c4e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9c70(void) {
  LOAD_REGS();
L_6e9c70: /* 6e9c70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e9c71: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e9c75: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9c78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9c79: mov esi, ecx */
  esi = ecx;
/* 6e9c7b: je 0x6e9cad */
  if (zf) goto L_6e9cad;
L_6e9c7d: /* 6e9c7d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e9c80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9c81: push 0x6c2af4 */
  { uint32_t v = 0x6c2af4u; esp -= 4; W32(esp, v); }
/* 6e9c86: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e9c89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e9c8a: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 6e9c8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9c8d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e9c92u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e9c92: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9c95: je 0x6e9ca5 */
  if (zf) goto L_6e9ca5;
L_6e9c97: /* 6e9c97: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e9c9d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e9c9f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e9ca1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9ca2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e9ca5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e9ca5: /* 6e9ca5: mov eax, edi */
  eax = edi;
/* 6e9ca7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9ca8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9ca9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e9caa: ret 4 */
  esp += 8; SPILL(); return;
L_6e9cad: /* 6e9cad: mov ecx, esi */
  ecx = esi;
/* 6e9caf: call 0x6c2af4 */
  esp -= 4; W32(esp, 0x6e9cb4u); SPILL(); f_6c2af4(); if (g_unwind) return; RELOAD();
/* 6e9cb4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9cb7: je 0x6e9cc5 */
  if (zf) goto L_6e9cc5;
L_6e9cb9: /* 6e9cb9: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 6e9cbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9cbc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e9cc2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e9cc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e9cc5: /* 6e9cc5: mov eax, esi */
  eax = esi;
/* 6e9cc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9cc8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e9cc9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9cf0(void) {
  LOAD_REGS();
L_6e9cf0: /* 6e9cf0: mov eax, 0xb8c8c0 */
  eax = 0xb8c8c0u;
/* 6e9cf5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9d10(void) {
  LOAD_REGS();
L_6e9d10: /* 6e9d10: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e9d15: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e9d17: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e9d1b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e9d1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9d21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9d23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9d24: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e9d28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9d2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e9d2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e9d2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9d2d: push 0xb8c8c0 */
  { uint32_t v = 0xb8c8c0u; esp -= 4; W32(esp, v); }
/* 6e9d32: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e9d38u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e9d38: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e9d3b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9d50(void) {
  LOAD_REGS();
L_6e9d50: /* 6e9d50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e9d54: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9d70(void) {
  LOAD_REGS();
L_6e9d70: /* 6e9d70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e9d72: push 0x9c0684 */
  { uint32_t v = 0x9c0684u; esp -= 4; W32(esp, v); }
/* 6e9d77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e9d7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e9d7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e9d85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9d86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9d87: mov esi, ecx */
  esi = ecx;
/* 6e9d89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e9d8d: mov dword ptr [esi], 0x9f5398 */
  W32((uint32_t)(esi), 0x9f5398u);
/* 6e9d93: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6e9d9b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6e9da1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6e9da1: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 6e9da4: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6e9da9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x6e9dafu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 6e9daf: mov ecx, esi */
  ecx = esi;
/* 6e9db1: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e9db9: call 0x6ccf5e */
  esp -= 4; W32(esp, 0x6e9dbeu); SPILL(); f_6ccf5e(); if (g_unwind) return; RELOAD();
/* 6e9dbe: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e9dc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9dc3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e9dca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e9dcd: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9df0(void) {
  LOAD_REGS();
L_6e9df0: /* 6e9df0: lea eax, [ecx + 0x44] */
  eax = (uint32_t)(ecx + 0x44u);
/* 6e9df3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9e10(void) {
  LOAD_REGS();
L_6e9e10: /* 6e9e10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9e11: mov esi, ecx */
  esi = ecx;
/* 6e9e13: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6e9e18u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6e9e18: mov dword ptr [esi], 0x9f5398 */
  W32((uint32_t)(esi), 0x9f5398u);
/* 6e9e1e: mov eax, esi */
  eax = esi;
/* 6e9e20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9e21: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9e40(void) {
  LOAD_REGS();
L_6e9e40: /* 6e9e40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e9e41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9e42: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6e9e46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9e47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9e48: mov ebx, ecx */
  ebx = ecx;
/* 6e9e4a: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6e9e4fu); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6e9e4f: mov edi, dword ptr [ebx + 0x40] */
  edi = R32((uint32_t)(ebx + 0x40u));
/* 6e9e52: mov dword ptr [ebx], 0x9f5218 */
  W32((uint32_t)(ebx), 0x9f5218u);
/* 6e9e58: mov al, byte ptr [esi + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3cu))) & 0xffu);
/* 6e9e5b: mov byte ptr [ebx + 0x3c], al */
  W8((uint32_t)(ebx + 0x3cu), (eax & 0xffu));
/* 6e9e5e: mov cl, byte ptr [esi + 0x3d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3du))) & 0xffu);
/* 6e9e61: mov byte ptr [ebx + 0x3d], cl */
  W8((uint32_t)(ebx + 0x3du), (ecx & 0xffu));
/* 6e9e64: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 6e9e67: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6e9e69: mov eax, edi */
  eax = edi;
/* 6e9e6b: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e9e6e: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6e9e70: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* 6e9e73: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6e9e76: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 6e9e79: mov dword ptr [ebx], 0x9f5398 */
  W32((uint32_t)(ebx), 0x9f5398u);
/* 6e9e7f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6e9e84: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e9e86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9e87: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9e88: mov eax, ebx */
  eax = ebx;
/* 6e9e8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e9e8b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9eb0(void) {
  LOAD_REGS();
L_6e9eb0: /* 6e9eb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e9eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9eb2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6e9eb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9eb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9eb8: mov ebx, ecx */
  ebx = ecx;
/* 6e9eba: call 0x6c4b51 */
  esp -= 4; W32(esp, 0x6e9ebfu); SPILL(); f_6c4b51(); if (g_unwind) return; RELOAD();
/* 6e9ebf: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6e9ec2: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 6e9ec5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6e9eca: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e9ecc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9ecd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9ece: mov eax, ebx */
  eax = ebx;
/* 6e9ed0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e9ed1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9ef0(void) {
  LOAD_REGS();
L_6e9ef0: /* 6e9ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9ef1: mov esi, ecx */
  esi = ecx;
/* 6e9ef3: call 0x6ccf09 */
  esp -= 4; W32(esp, 0x6e9ef8u); SPILL(); f_6ccf09(); if (g_unwind) return; RELOAD();
/* 6e9ef8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9efd: je 0x6e9f0e */
  if (zf) goto L_6e9f0e;
L_6e9eff: /* 6e9eff: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 6e9f04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9f05: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e9f0bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e9f0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e9f0e: /* 6e9f0e: mov eax, esi */
  eax = esi;
/* 6e9f10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9f11: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9f30(void) {
  LOAD_REGS();
L_6e9f30: /* 6e9f30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e9f31: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6e9f35: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9f38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9f39: mov esi, ecx */
  esi = ecx;
/* 6e9f3b: je 0x6e9f70 */
  if (zf) goto L_6e9f70;
L_6e9f3d: /* 6e9f3d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6e9f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9f41: push 0x6ccf09 */
  { uint32_t v = 0x6ccf09u; esp -= 4; W32(esp, v); }
/* 6e9f46: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6e9f49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e9f4a: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 6e9f4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9f50: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6e9f55u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6e9f55: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9f58: je 0x6e9f68 */
  if (zf) goto L_6e9f68;
L_6e9f5a: /* 6e9f5a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6e9f60: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6e9f62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6e9f64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e9f65: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6e9f68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e9f68: /* 6e9f68: mov eax, edi */
  eax = edi;
/* 6e9f6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e9f6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9f6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e9f6d: ret 4 */
  esp += 8; SPILL(); return;
L_6e9f70: /* 6e9f70: mov ecx, esi */
  ecx = esi;
/* 6e9f72: call 0x6ccf09 */
  esp -= 4; W32(esp, 0x6e9f77u); SPILL(); f_6ccf09(); if (g_unwind) return; RELOAD();
/* 6e9f77: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e9f7a: je 0x6e9f8b */
  if (zf) goto L_6e9f8b;
L_6e9f7c: /* 6e9f7c: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 6e9f81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e9f82: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6e9f88u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6e9f88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6e9f8b: /* 6e9f8b: mov eax, esi */
  eax = esi;
/* 6e9f8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e9f8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e9f8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e9fc0(void) {
  LOAD_REGS();
L_6e9fc0: /* 6e9fc0: mov eax, 0xb8c390 */
  eax = 0xb8c390u;
/* 6e9fc5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e9fe0(void) {
  LOAD_REGS();
L_6e9fe0: /* 6e9fe0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e9fe5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e9fe7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e9feb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e9fef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9ff1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9ff3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9ff4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e9ff8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e9ffa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e9ffb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e9ffc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e9ffd: push 0xb8c390 */
  { uint32_t v = 0xb8c390u; esp -= 4; W32(esp, v); }
/* 6ea002: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ea008u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ea008: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ea00b: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea020(void) {
  LOAD_REGS();
L_6ea020: /* 6ea020: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ea024: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea040(void) {
  LOAD_REGS();
L_6ea040: /* 6ea040: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6ea042: push 0x9c06a8 */
  { uint32_t v = 0x9c06a8u; esp -= 4; W32(esp, v); }
/* 6ea047: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6ea04d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ea04e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6ea055: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ea056: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea057: mov esi, ecx */
  esi = ecx;
/* 6ea059: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6ea05d: mov dword ptr [esi], 0x9f5458 */
  W32((uint32_t)(esi), 0x9f5458u);
/* 6ea063: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6ea06b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6ea071u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6ea071: mov ecx, esi */
  ecx = esi;
/* 6ea073: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6ea07b: call 0x6ccf5e */
  esp -= 4; W32(esp, 0x6ea080u); SPILL(); f_6ccf5e(); if (g_unwind) return; RELOAD();
/* 6ea080: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6ea084: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea085: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6ea08c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ea08f: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea0b0(void) {
  LOAD_REGS();
L_6ea0b0: /* 6ea0b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea0b1: mov esi, ecx */
  esi = ecx;
/* 6ea0b3: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6ea0b8u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6ea0b8: mov dword ptr [esi], 0x9f5458 */
  W32((uint32_t)(esi), 0x9f5458u);
/* 6ea0be: mov eax, esi */
  eax = esi;
/* 6ea0c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea0c1: ret  */
  esp += 4; SPILL(); return;
}

void f_6ea0e0(void) {
  LOAD_REGS();
L_6ea0e0: /* 6ea0e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea0e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea0e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ea0e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea0e7: mov esi, ecx */
  esi = ecx;
/* 6ea0e9: call 0x6c88dc */
  esp -= 4; W32(esp, 0x6ea0eeu); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 6ea0ee: mov dword ptr [esi], 0x9f5218 */
  W32((uint32_t)(esi), 0x9f5218u);
/* 6ea0f4: mov al, byte ptr [edi + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3cu))) & 0xffu);
/* 6ea0f7: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* 6ea0fa: mov cl, byte ptr [edi + 0x3d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3du))) & 0xffu);
/* 6ea0fd: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 6ea100: mov byte ptr [esi + 0x3d], cl */
  W8((uint32_t)(esi + 0x3du), (ecx & 0xffu));
/* 6ea103: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6ea106: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ea108: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ea10b: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ea10d: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6ea110: mov dword ptr [esi], 0x9f5458 */
  W32((uint32_t)(esi), 0x9f5458u);
/* 6ea116: mov al, byte ptr [edi + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x44u))) & 0xffu);
/* 6ea119: mov byte ptr [esi + 0x44], al */
  W8((uint32_t)(esi + 0x44u), (eax & 0xffu));
/* 6ea11c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ea11d: mov eax, esi */
  eax = esi;
/* 6ea11f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea120: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea150(void) {
  LOAD_REGS();
L_6ea150: /* 6ea150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea152: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ea156: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea157: mov esi, ecx */
  esi = ecx;
/* 6ea159: call 0x6c4b51 */
  esp -= 4; W32(esp, 0x6ea15eu); SPILL(); f_6c4b51(); if (g_unwind) return; RELOAD();
/* 6ea15e: mov al, byte ptr [edi + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x44u))) & 0xffu);
/* 6ea161: mov byte ptr [esi + 0x44], al */
  W8((uint32_t)(esi + 0x44u), (eax & 0xffu));
/* 6ea164: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ea165: mov eax, esi */
  eax = esi;
/* 6ea167: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea168: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea180(void) {
  LOAD_REGS();
L_6ea180: /* 6ea180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea181: mov esi, ecx */
  esi = ecx;
/* 6ea183: call 0x6c679e */
  esp -= 4; W32(esp, 0x6ea188u); SPILL(); f_6c679e(); if (g_unwind) return; RELOAD();
/* 6ea188: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea18d: je 0x6ea19b */
  if (zf) goto L_6ea19b;
L_6ea18f: /* 6ea18f: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 6ea191: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea192: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ea198u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ea198: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ea19b: /* 6ea19b: mov eax, esi */
  eax = esi;
/* 6ea19d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea19e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ea1c0(void) {
  LOAD_REGS();
L_6ea1c0: /* 6ea1c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ea1c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ea1c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea1c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea1c9: mov esi, ecx */
  esi = ecx;
/* 6ea1cb: je 0x6ea1fd */
  if (zf) goto L_6ea1fd;
L_6ea1cd: /* 6ea1cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ea1d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea1d1: push 0x6c679e */
  { uint32_t v = 0x6c679eu; esp -= 4; W32(esp, v); }
/* 6ea1d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ea1d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ea1da: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 6ea1dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea1dd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ea1e2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ea1e2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea1e5: je 0x6ea1f5 */
  if (zf) goto L_6ea1f5;
L_6ea1e7: /* 6ea1e7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ea1ed: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ea1ef: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ea1f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ea1f2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ea1f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ea1f5: /* 6ea1f5: mov eax, edi */
  eax = edi;
/* 6ea1f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ea1f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea1f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ea1fa: ret 4 */
  esp += 8; SPILL(); return;
L_6ea1fd: /* 6ea1fd: mov ecx, esi */
  ecx = esi;
/* 6ea1ff: call 0x6c679e */
  esp -= 4; W32(esp, 0x6ea204u); SPILL(); f_6c679e(); if (g_unwind) return; RELOAD();
/* 6ea204: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ea207: je 0x6ea215 */
  if (zf) goto L_6ea215;
L_6ea209: /* 6ea209: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 6ea20b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ea20c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ea212u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ea212: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ea215: /* 6ea215: mov eax, esi */
  eax = esi;
/* 6ea217: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ea218: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ea219: ret 4 */
  esp += 8; SPILL(); return;
}
