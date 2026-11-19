#include "recomp.h"
#include "rec_mod.h"

void f_800bf0(void) {
  LOAD_REGS();
L_800bf0: /* 800bf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 800bf1: mov ebp, esp */
  ebp = esp;
/* 800bf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 800bf5: push 0x9d1f1f */
  { uint32_t v = 0x9d1f1fu; esp -= 4; W32(esp, v); }
/* 800bfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 800c00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800c01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 800c08: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 800c0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800c0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800c0d: mov esi, ecx */
  esi = ecx;
/* 800c0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 800c10: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 800c17: mov ebx, 1 */
  ebx = 0x1u;
/* 800c1c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 800c1f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 800c22: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 800c25: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 800c28: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x800c2eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 800c2e: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 800c31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800c32: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 800c35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800c36: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 800c39: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 800c3d: call dword ptr [0xcfa610] */
  esp -= 4; W32(esp, 0x800c43u); SPILL(); f_4e326f(); if (g_unwind) return; /* Core!?GetCenterAndExtents@FBox@@QBEXAAVFVector@@0@Z */ RELOAD();
/* 800c43: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 800c46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800c48: je 0x800c85 */
  if (zf) goto L_800c85;
L_800c4a: /* 800c4a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 800c4d: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 800c50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 800c51: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 800c54: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 800c57: mov eax, esp */
  eax = esp;
/* 800c59: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 800c5b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 800c5e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 800c61: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 800c64: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 800c67: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 800c6a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 800c6d: mov edx, esp */
  edx = esp;
/* 800c6f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 800c71: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 800c74: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 800c77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800c79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800c7a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 800c7d: call 0x6c9863 */
  esp -= 4; W32(esp, 0x800c82u); SPILL(); f_6c9863(); if (g_unwind) return; RELOAD();
/* 800c82: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_800c85: /* 800c85: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 800c88: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 800c8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800c8c: mov ecx, esi */
  ecx = esi;
/* 800c8e: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x800c93u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 800c93: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 800c96: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 800c99: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 800c9c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x800ca1u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 800ca1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 800ca4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 800ca5: mov eax, esi */
  eax = esi;
/* 800ca7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800ca8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 800caf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 800cb0: mov esp, ebp */
  esp = ebp;
/* 800cb2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 800cb3: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_800cb6(void) {
  LOAD_REGS();
L_800cb6: /* 800cb6: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 800cb9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 800cbe: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 800cc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800cc2: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 800cc5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x800ccau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_800cca(); return;
}

void f_800cca(void) {
  LOAD_REGS();
L_800cca: /* 800cca: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 800cd0: push 0xa1285c */
  { uint32_t v = 0xa1285cu; esp -= 4; W32(esp, v); }
/* 800cd5: push 0xae0d74 */
  { uint32_t v = 0xae0d74u; esp -= 4; W32(esp, v); }
/* 800cda: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x800cdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800cdc: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 800cdf: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 800ce2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 800ce5: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 800ce8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 800ceb: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 800cef: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 800cf2: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 800cf6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 800cf9: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 800cfd: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 800d00: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 800d04: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 800d07: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 800d0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800d0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800d0e: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x800d14u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 800d14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800d15: push 0xae0d7c */
  { uint32_t v = 0xae0d7cu; esp -= 4; W32(esp, v); }
/* 800d1a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x800d1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800d1c: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800d1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800d21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800d23: call 0x99caf8 */
  esp -= 4; W32(esp, 0x800d28u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_800d28: guest_badaddr(0x800d28); return;
}

void f_800d80(void) {
  LOAD_REGS();
L_800d80: /* 800d80: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 800d85: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 800d87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800d89: je 0x800db1 */
  if (zf) goto L_800db1;
L_800d8b: /* 800d8b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 800d8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800d8e: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 800d92: push 0x6c51fa */
  { uint32_t v = 0x6c51fau; esp -= 4; W32(esp, v); }
/* 800d97: push 0x6c874c */
  { uint32_t v = 0x6c874cu; esp -= 4; W32(esp, v); }
/* 800d9c: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 800da1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800da3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 800da5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800da6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800da7: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 800daa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800dab: mov ecx, eax */
  ecx = eax;
/* 800dad: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x800db0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800db0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_800db1: /* 800db1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_800dd0(void) {
  LOAD_REGS();
L_800dd0: /* 800dd0: mov eax, ecx */
  eax = ecx;
/* 800dd2: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 800dd8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 800dda: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800ddc: je 0x800e01 */
  if (zf) goto L_800e01;
L_800dde: /* 800dde: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 800de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800de1: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 800de4: push 0x6c51fa */
  { uint32_t v = 0x6c51fau; esp -= 4; W32(esp, v); }
/* 800de9: push 0x6c874c */
  { uint32_t v = 0x6c874cu; esp -= 4; W32(esp, v); }
/* 800dee: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 800df3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800df5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800df6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800df8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800df9: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 800dfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800dfd: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x800e00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800e00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_800e01: /* 800e01: ret  */
  esp += 4; SPILL(); return;
}

void f_800e20(void) {
  LOAD_REGS();
L_800e20: /* 800e20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 800e21: mov ebp, esp */
  ebp = esp;
/* 800e23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 800e25: push 0x9d1f40 */
  { uint32_t v = 0x9d1f40u; esp -= 4; W32(esp, v); }
/* 800e2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 800e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800e31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 800e38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 800e3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800e3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800e3d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 800e40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 800e41: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 800e44: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 800e47: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 800e49: xor ebx, ebx */
  ebx = 0;
/* 800e4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800e4c: mov ecx, edi */
  ecx = edi;
/* 800e4e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 800e51: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x800e57u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 800e57: mov ecx, esi */
  ecx = esi;
/* 800e59: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x800e5fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 800e5f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 800e61: je 0x800ecc */
  if (zf) goto L_800ecc;
L_800e63: /* 800e63: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 800e66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800e67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800e68: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x800e6eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 800e6e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 800e71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800e74: xor eax, eax */
  eax = 0;
L_800e76: /* 800e76: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800e79: jge 0x800e7e */
  if ((sf == of)) goto L_800e7e;
L_800e7b: /* 800e7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 800e7c: jmp 0x800e76 */
  goto L_800e76;
L_800e7e: /* 800e7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800e7f: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 800e81: mov ecx, edi */
  ecx = edi;
/* 800e83: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x800e89u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 800e89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_800e90: /* 800e90: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800e93: jge 0x800f00 */
  if ((sf == of)) goto L_800f00;
L_800e95: /* 800e95: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 800e97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 800e99: mov ecx, edi */
  ecx = edi;
/* 800e9b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x800ea1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 800ea1: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 800ea4: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 800ea6: je 0x800ebd */
  if (zf) goto L_800ebd;
L_800ea8: /* 800ea8: mov ecx, eax */
  ecx = eax;
/* 800eaa: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x800eb0u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 800eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800eb2: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x800eb7u); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 800eb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800eba: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 800ebb: jmp 0x800e90 */
  goto L_800e90;
L_800ebd: /* 800ebd: xor eax, eax */
  eax = 0;
/* 800ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800ec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800ec1: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x800ec6u); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 800ec6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800ec9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 800eca: jmp 0x800e90 */
  goto L_800e90;
L_800ecc: /* 800ecc: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 800ecf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800ed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800ed1: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x800ed7u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 800ed7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800eda: xor esi, esi */
  esi = 0;
/* 800edc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_800ee0: /* 800ee0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800ee2: jge 0x800efd */
  if ((sf == of)) goto L_800efd;
L_800ee4: /* 800ee4: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 800ee6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 800ee9: mov ecx, esi */
  ecx = esi;
/* 800eeb: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 800eee: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 800ef0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800ef1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 800ef2: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x800ef7u); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 800ef7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800efa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 800efb: jmp 0x800ee0 */
  goto L_800ee0;
L_800efd: /* 800efd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_800f00: /* 800f00: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 800f03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 800f04: mov eax, esi */
  eax = esi;
/* 800f06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800f07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 800f0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 800f0f: mov esp, ebp */
  esp = ebp;
/* 800f11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 800f12: ret  */
  esp += 4; SPILL(); return;
}

void f_800f13(void) {
  LOAD_REGS();
L_800f13: /* 800f13: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 800f16: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 800f1b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 800f1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800f1f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 800f22: call 0x99caf8 */
  esp -= 4; W32(esp, 0x800f27u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_800f27(); return;
}

void f_800f27(void) {
  LOAD_REGS();
L_800f27: /* 800f27: push 0xa12888 */
  { uint32_t v = 0xa12888u; esp -= 4; W32(esp, v); }
/* 800f2c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 800f31: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x800f37u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 800f37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800f3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800f3e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x800f43u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_800f43: guest_badaddr(0x800f43); return;
}

void f_800fa0(void) {
  LOAD_REGS();
L_800fa0: /* 800fa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 800fa1: mov ebp, esp */
  ebp = esp;
/* 800fa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 800fa5: push 0x9d1f50 */
  { uint32_t v = 0x9d1f50u; esp -= 4; W32(esp, v); }
/* 800faa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 800fb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800fb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 800fb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 800fbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800fbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800fbd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 800fc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 800fc1: mov ecx, esi */
  ecx = esi;
/* 800fc3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 800fc6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 800fcd: call dword ptr [0xcfa430] */
  esp -= 4; W32(esp, 0x800fd3u); SPILL(); f_4e14fb(); if (g_unwind) return; /* Core!?IsTrans@FArchive@@QAEHXZ */ RELOAD();
/* 800fd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800fd5: jne 0x800fe4 */
  if (!zf) goto L_800fe4;
L_800fd7: /* 800fd7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 800fda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800fdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800fdc: call 0x6c933b */
  esp -= 4; W32(esp, 0x800fe1u); SPILL(); f_6c933b(); if (g_unwind) return; RELOAD();
/* 800fe1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_800fe4: /* 800fe4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 800fe7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 800fe8: mov eax, esi */
  eax = esi;
/* 800fea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800feb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 800ff2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 800ff3: mov esp, ebp */
  esp = ebp;
/* 800ff5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 800ff6: ret  */
  esp += 4; SPILL(); return;
}

void f_800ff7(void) {
  LOAD_REGS();
L_800ff7: /* 800ff7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 800ffa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 800fff: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 801002: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801003: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 801006: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80100bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80100b(); return;
}

void f_80100b(void) {
  LOAD_REGS();
L_80100b: /* 80100b: push 0xa128a0 */
  { uint32_t v = 0xa128a0u; esp -= 4; W32(esp, v); }
/* 801010: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 801015: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80101bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80101b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80101e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801020: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801022: call 0x99caf8 */
  esp -= 4; W32(esp, 0x801027u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_801027: guest_badaddr(0x801027); return;
}

void f_801060(void) {
  LOAD_REGS();
L_801060: /* 801060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 801061: mov ebp, esp */
  ebp = esp;
/* 801063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 801065: push 0x9d1f60 */
  { uint32_t v = 0x9d1f60u; esp -= 4; W32(esp, v); }
/* 80106a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 801070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 801078: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80107b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80107c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 80107f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 801080: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 801083: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 801084: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 801087: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 801089: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80108a: mov ecx, esi */
  ecx = esi;
/* 80108c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 801093: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x801099u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 801099: mov ecx, ebx */
  ecx = ebx;
/* 80109b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8010a1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8010a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8010a3: je 0x8010f6 */
  if (zf) goto L_8010f6;
L_8010a5: /* 8010a5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8010a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8010a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8010aa: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8010b0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8010b0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8010b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8010b6: xor eax, eax */
  eax = 0;
L_8010b8: /* 8010b8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8010bb: jge 0x8010c0 */
  if ((sf == of)) goto L_8010c0;
L_8010bd: /* 8010bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8010be: jmp 0x8010b8 */
  goto L_8010b8;
L_8010c0: /* 8010c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8010c1: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8010c3: mov ecx, esi */
  ecx = esi;
/* 8010c5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8010cbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8010cb: xor edi, edi */
  edi = 0;
/* 8010cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8010d0: /* 8010d0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8010d3: jge 0x801120 */
  if ((sf == of)) goto L_801120;
L_8010d5: /* 8010d5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8010d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8010d9: mov ecx, esi */
  ecx = esi;
/* 8010db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8010e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8010e1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8010e3: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8010e6: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8010e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8010ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8010eb: call 0x6ca29f */
  esp -= 4; W32(esp, 0x8010f0u); SPILL(); f_6ca29f(); if (g_unwind) return; RELOAD();
/* 8010f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8010f3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8010f4: jmp 0x8010d0 */
  goto L_8010d0;
L_8010f6: /* 8010f6: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8010f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8010fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8010fb: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x801101u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 801101: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801104: xor edi, edi */
  edi = 0;
L_801106: /* 801106: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801109: jge 0x801120 */
  if ((sf == of)) goto L_801120;
L_80110b: /* 80110b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80110d: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 801110: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 801113: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801114: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 801115: call 0x6ca29f */
  esp -= 4; W32(esp, 0x80111au); SPILL(); f_6ca29f(); if (g_unwind) return; RELOAD();
/* 80111a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80111d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80111e: jmp 0x801106 */
  goto L_801106;
L_801120: /* 801120: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 801123: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 801124: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 801125: mov eax, ebx */
  eax = ebx;
/* 801127: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80112e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80112f: mov esp, ebp */
  esp = ebp;
/* 801131: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 801132: ret  */
  esp += 4; SPILL(); return;
}

void f_801133(void) {
  LOAD_REGS();
L_801133: /* 801133: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 801136: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80113b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 80113e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80113f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 801142: call 0x99caf8 */
  esp -= 4; W32(esp, 0x801147u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_801147(); return;
}

void f_801147(void) {
  LOAD_REGS();
L_801147: /* 801147: push 0xa128c4 */
  { uint32_t v = 0xa128c4u; esp -= 4; W32(esp, v); }
/* 80114c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 801151: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x801157u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 801157: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80115a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80115c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80115e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x801163u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_801163: guest_badaddr(0x801163); return;
}

void f_8011c0(void) {
  LOAD_REGS();
L_8011c0: /* 8011c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8011c1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 8011c5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8011c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8011c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8011c9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 8011cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8011d0: mov ebp, ecx */
  ebp = ecx;
/* 8011d2: jge 0x8011e8 */
  if ((sf == of)) goto L_8011e8;
L_8011d4: /* 8011d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8011d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8011de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8011e3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8011e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8011e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8011e8: /* 8011e8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8011eb: jle 0x801201 */
  if ((zf || sf != of)) goto L_801201;
L_8011ed: /* 8011ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8011f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8011f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8011fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8011feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8011fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_801201: /* 801201: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 801205: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 801208: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80120b: jle 0x801221 */
  if ((zf || sf != of)) goto L_801221;
L_80120d: /* 80120d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 801212: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 801217: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 80121c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x80121eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80121e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_801221: /* 801221: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801223: jge 0x801243 */
  if ((sf == of)) goto L_801243;
L_801225: /* 801225: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 801228: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 80122b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 80122d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_801230: /* 801230: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 801233: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 801235: call 0x6c6681 */
  esp -= 4; W32(esp, 0x80123au); SPILL(); f_6c6681(); if (g_unwind) return; RELOAD();
/* 80123a: add esi, 0xc0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 801240: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 801241: jne 0x801230 */
  if (!zf) goto L_801230;
L_801243: /* 801243: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 801247: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* 80124c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80124d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80124e: mov ecx, ebp */
  ecx = ebp;
/* 801250: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x801256u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 801256: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 801257: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 801258: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 801259: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80125a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_801290(void) {
  LOAD_REGS();
L_801290: /* 801290: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 801291: mov esi, ecx */
  esi = ecx;
/* 801293: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 801296: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 801297: xor edi, edi */
  edi = 0;
/* 801299: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80129b: jle 0x8012b8 */
  if ((zf || sf != of)) goto L_8012b8;
L_80129d: /* 80129d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80129e: xor ebx, ebx */
  ebx = 0;
L_8012a0: /* 8012a0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8012a2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8012a4: call 0x6c6681 */
  esp -= 4; W32(esp, 0x8012a9u); SPILL(); f_6c6681(); if (g_unwind) return; RELOAD();
/* 8012a9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8012ac: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8012ad: add ebx, 0xc0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8012b3: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8012b5: jl 0x8012a0 */
  if ((sf != of)) goto L_8012a0;
L_8012b7: /* 8012b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8012b8: /* 8012b8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8012bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8012bd: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* 8012c2: mov ecx, esi */
  ecx = esi;
/* 8012c4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8012cau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8012ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8012cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8012cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8012e0(void) {
  LOAD_REGS();
L_8012e0: /* 8012e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8012e1: mov esi, ecx */
  esi = ecx;
/* 8012e3: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 8012e6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8012ecu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8012ec: mov eax, esi */
  eax = esi;
/* 8012ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8012ef: ret  */
  esp += 4; SPILL(); return;
}

void f_801300(void) {
  LOAD_REGS();
L_801300: /* 801300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 801301: mov ebp, esp */
  ebp = esp;
/* 801303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 801305: push 0x9d1f70 */
  { uint32_t v = 0x9d1f70u; esp -= 4; W32(esp, v); }
/* 80130a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 801310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 801318: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80131b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80131c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 80131f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 801320: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 801323: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 801324: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 80132a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80132d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80132e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80132f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 801336: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x801338u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801338: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80133b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 80133e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80133f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801340: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x801342u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801342: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801345: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 801348: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801349: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80134a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80134cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80134c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80134f: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 801352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801353: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801354: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x801356u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801356: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801359: lea edx, [esi + 0x10] */
  edx = (uint32_t)(esi + 0x10u);
/* 80135c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80135d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80135e: call dword ptr [0xcfa414] */
  esp -= 4; W32(esp, 0x801364u); SPILL(); f_4e2eaf(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AA_K@Z */ RELOAD();
/* 801364: lea ecx, [esi + 0x57] */
  ecx = (uint32_t)(esi + 0x57u);
/* 801367: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80136a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80136b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80136c: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 80136f: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x801375u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 801375: mov edi, dword ptr [0xcfa1f0] */
  edi = R32((uint32_t)(0xcfa1f0u));
/* 80137b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80137e: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 801381: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801383: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x801385u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801385: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801388: lea edx, [esi + 0x1c] */
  edx = (uint32_t)(esi + 0x1cu);
/* 80138b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80138c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80138d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80138fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80138f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801392: lea eax, [esi + 0x20] */
  eax = (uint32_t)(esi + 0x20u);
/* 801395: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 801397: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x801399u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801399: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80139c: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 80139f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8013a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8013a1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8013a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8013a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8013a6: lea edx, [esi + 0x28] */
  edx = (uint32_t)(esi + 0x28u);
/* 8013a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8013aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8013ab: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8013adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8013ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8013b0: lea eax, [esi + 0x4c] */
  eax = (uint32_t)(esi + 0x4cu);
/* 8013b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8013b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8013b5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8013b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8013b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8013ba: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 8013bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8013be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8013bf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8013c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8013c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8013c4: mov ecx, ebx */
  ecx = ebx;
/* 8013c6: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8013ccu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8013cc: cmp eax, 0x46 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8013cf: jl 0x8013eb */
  if ((sf != of)) goto L_8013eb;
L_8013d1: /* 8013d1: lea edx, [esi + 0x2c] */
  edx = (uint32_t)(esi + 0x2cu);
/* 8013d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8013d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8013d6: call 0x6cb186 */
  esp -= 4; W32(esp, 0x8013dbu); SPILL(); f_6cb186(); if (g_unwind) return; RELOAD();
/* 8013db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8013de: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 8013e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8013e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8013e3: call 0x6cb186 */
  esp -= 4; W32(esp, 0x8013e8u); SPILL(); f_6cb186(); if (g_unwind) return; RELOAD();
/* 8013e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8013eb: /* 8013eb: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 8013f1: lea edx, [esi + 0x54] */
  edx = (uint32_t)(esi + 0x54u);
/* 8013f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8013f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8013f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8013f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8013f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8013fb: lea ecx, [esi + 0x55] */
  ecx = (uint32_t)(esi + 0x55u);
/* 8013fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8013ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801400: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x801402u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801402: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801405: lea edx, [esi + 0x56] */
  edx = (uint32_t)(esi + 0x56u);
/* 801408: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801409: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80140a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80140cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80140c: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 801412: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801415: lea eax, [esi + 0x58] */
  eax = (uint32_t)(esi + 0x58u);
/* 801418: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801419: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80141a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80141cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80141c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80141f: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 801422: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801423: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801424: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x801426u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801426: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801429: mov ecx, ebx */
  ecx = ebx;
/* 80142b: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x801431u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 801431: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801434: jge 0x801447 */
  if ((sf == of)) goto L_801447;
L_801436: /* 801436: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 801439: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 80143c: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 80143f: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 801442: jmp 0x8014d8 */
  goto L_8014d8;
L_801447: /* 801447: mov ecx, ebx */
  ecx = ebx;
/* 801449: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x80144fu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 80144f: cmp eax, 0x5d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5du);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801452: jge 0x801473 */
  if ((sf == of)) goto L_801473;
L_801454: /* 801454: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 801457: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801458: mov dword ptr [ebp - 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xffffffffu);
/* 80145f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_801460: /* 801460: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x801462u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801462: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801465: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 801468: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 80146b: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 80146e: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 801471: jmp 0x8014d8 */
  goto L_8014d8;
L_801473: /* 801473: mov ecx, ebx */
  ecx = ebx;
/* 801475: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x80147bu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 80147b: cmp eax, 0x65 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80147e: jge 0x80149a */
  if ((sf == of)) goto L_80149a;
L_801480: /* 801480: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 801483: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 801486: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 801489: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 80148c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80148d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80148e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x801490u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801490: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801493: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 801496: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801497: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801498: jmp 0x801460 */
  goto L_801460;
L_80149a: /* 80149a: lea edx, [esi + 0x60] */
  edx = (uint32_t)(esi + 0x60u);
/* 80149d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80149e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80149f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8014a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8014a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8014a4: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 8014a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8014a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8014a9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8014abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8014ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8014ae: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 8014b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8014b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8014b3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8014b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8014b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8014b8: mov ecx, ebx */
  ecx = ebx;
/* 8014ba: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8014c0u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8014c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8014c2: je 0x8014d8 */
  if (zf) goto L_8014d8;
L_8014c4: /* 8014c4: mov ecx, ebx */
  ecx = ebx;
/* 8014c6: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8014ccu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8014cc: cmp eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8014cf: jge 0x8014d8 */
  if ((sf == of)) goto L_8014d8;
L_8014d1: /* 8014d1: mov dword ptr [esi + 0x68], 0xffffffff */
  W32((uint32_t)(esi + 0x68u), 0xffffffffu);
L_8014d8: /* 8014d8: mov ecx, ebx */
  ecx = ebx;
/* 8014da: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x8014e0u); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 8014e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8014e2: jne 0x8014fd */
  if (!zf) goto L_8014fd;
L_8014e4: /* 8014e4: mov ecx, ebx */
  ecx = ebx;
/* 8014e6: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8014ecu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8014ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8014ee: jne 0x8014fd */
  if (!zf) goto L_8014fd;
L_8014f0: /* 8014f0: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8014f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8014f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8014f5: call 0x6c7162 */
  esp -= 4; W32(esp, 0x8014fau); SPILL(); f_6c7162(); if (g_unwind) return; RELOAD();
/* 8014fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8014fd: /* 8014fd: mov ecx, ebx */
  ecx = ebx;
/* 8014ff: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x801505u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 801505: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801507: je 0x80150f */
  if (zf) goto L_80150f;
L_801509: /* 801509: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80150c: and byte ptr [eax], 0x1f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x1fu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
L_80150f: /* 80150f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 801512: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 801513: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 801514: mov eax, ebx */
  eax = ebx;
/* 801516: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80151d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80151e: mov esp, ebp */
  esp = ebp;
/* 801520: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 801521: ret  */
  esp += 4; SPILL(); return;
}

void f_801522(void) {
  LOAD_REGS();
L_801522: /* 801522: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 801525: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80152a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 80152d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80152e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 801531: call 0x99caf8 */
  esp -= 4; W32(esp, 0x801536u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_801536(); return;
}

void f_801536(void) {
  LOAD_REGS();
L_801536: /* 801536: push 0xa128dc */
  { uint32_t v = 0xa128dcu; esp -= 4; W32(esp, v); }
/* 80153b: push 0xae0ce0 */
  { uint32_t v = 0xae0ce0u; esp -= 4; W32(esp, v); }
/* 801540: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x801546u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 801546: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801549: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80154b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80154d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x801552u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_801552: guest_badaddr(0x801552); return;
}

void f_801600(void) {
  LOAD_REGS();
L_801600: /* 801600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 801601: mov ebp, esp */
  ebp = esp;
/* 801603: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 801605: push 0x9d1f88 */
  { uint32_t v = 0x9d1f88u; esp -= 4; W32(esp, v); }
/* 80160a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 801610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801611: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 801618: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80161b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80161c: mov ebx, ecx */
  ebx = ecx;
/* 80161e: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 801621: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801623: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 801624: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 801625: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 801628: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80162f: je 0x801713 */
  if (zf) goto L_801713;
L_801635: /* 801635: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 801638: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80163a: je 0x801713 */
  if (zf) goto L_801713;
L_801640: /* 801640: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 801643: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x801649u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 801649: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80164d: xor edx, edx */
  edx = 0;
L_80164f: /* 80164f: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 801652: cmp edx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801655: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 801658: jge 0x8016af */
  if ((sf == of)) goto L_8016af;
L_80165a: /* 80165a: xor edi, edi */
  edi = 0;
/* 80165c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_801660: /* 801660: mov ecx, dword ptr [ebx + 0x54] */
  ecx = R32((uint32_t)(ebx + 0x54u));
/* 801663: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 801666: mov eax, edx */
  eax = edx;
/* 801668: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 80166e: cmp edi, dword ptr [ecx + eax + 0x100] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + eax + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801675: jge 0x8016ac */
  if ((sf == of)) goto L_8016ac;
L_801677: /* 801677: lea edx, [edi + edi*2 + 0xc] */
  edx = (uint32_t)(edi + edi*2 + 0xcu);
/* 80167b: lea esi, [ecx + edx*4] */
  esi = (uint32_t)(ecx + edx*4);
/* 80167e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 801680: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 801682: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 801685: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 801687: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80168du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80168d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 801690: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 801693: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 801696: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 801698: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80169a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 80169d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8016a0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8016a3: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8016a6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8016a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8016aa: jmp 0x801660 */
  goto L_801660;
L_8016ac: /* 8016ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8016ad: jmp 0x80164f */
  goto L_80164f;
L_8016af: /* 8016af: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8016b2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8016b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8016b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8016b7: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8016ba: call dword ptr [0xcfaac0] */
  esp -= 4; W32(esp, 0x8016c0u); SPILL(); f_4e143d(); if (g_unwind) return; /* Core!??0FBox@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8016c0: mov esi, eax */
  esi = eax;
/* 8016c2: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8016c5: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 8016c8: mov ecx, 7 */
  ecx = 0x7u;
/* 8016cd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8016cf: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8016d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8016d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8016d4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8016d7: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8016ddu); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8016dd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8016df: add ebx, 0x44 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8016e2: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 8016e4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8016e7: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 8016ea: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8016ed: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 8016f0: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8016f3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8016f6: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 8016f9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8016fd: call 0x6c9543 */
  esp -= 4; W32(esp, 0x801702u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 801702: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 801705: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80170c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80170d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80170e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80170f: mov esp, ebp */
  esp = ebp;
/* 801711: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 801712: ret  */
  esp += 4; SPILL(); return;
L_801713: /* 801713: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801715: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 801718: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x80171eu); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 80171e: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 801721: mov ecx, 7 */
  ecx = 0x7u;
/* 801726: mov esi, eax */
  esi = eax;
/* 801728: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 80172a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80172d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80172e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80172f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 801736: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 801737: mov esp, ebp */
  esp = ebp;
/* 801739: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80173a: ret  */
  esp += 4; SPILL(); return;
}

void f_80173b(void) {
  LOAD_REGS();
L_80173b: /* 80173b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80173e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 801743: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 801746: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801747: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 80174a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80174fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80174f(); return;
}

void f_80174f(void) {
  LOAD_REGS();
L_80174f: /* 80174f: push 0xa128f8 */
  { uint32_t v = 0xa128f8u; esp -= 4; W32(esp, v); }
/* 801754: push 0xae0d48 */
  { uint32_t v = 0xae0d48u; esp -= 4; W32(esp, v); }
/* 801759: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80175fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80175f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801762: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801764: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801766: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80176bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80176b: guest_badaddr(0x80176b); return;
}

void f_8017d0(void) {
  LOAD_REGS();
L_8017d0: /* 8017d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8017d1: mov ebp, esp */
  ebp = esp;
/* 8017d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8017d5: push 0x9d1fa0 */
  { uint32_t v = 0x9d1fa0u; esp -= 4; W32(esp, v); }
/* 8017da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8017e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8017e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8017e8: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8017eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8017ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8017ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8017ee: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8017f1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8017f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8017f6: mov ebx, ecx */
  ebx = ecx;
/* 8017f8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8017ff: jne 0x801819 */
  if (!zf) goto L_801819;
L_801801: /* 801801: push 0x1a3 */
  { uint32_t v = 0x1a3u; esp -= 4; W32(esp, v); }
/* 801806: push 0xae0d50 */
  { uint32_t v = 0xae0d50u; esp -= 4; W32(esp, v); }
/* 80180b: push 0xae0d5c */
  { uint32_t v = 0xae0d5cu; esp -= 4; W32(esp, v); }
/* 801810: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x801816u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 801816: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_801819: /* 801819: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 80181f: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 801822: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 801824: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 801827: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801829: je 0x80184c */
  if (zf) goto L_80184c;
L_80182b: /* 80182b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 80182e: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 801830: push 0x6c51fa */
  { uint32_t v = 0x6c51fau; esp -= 4; W32(esp, v); }
/* 801835: push 0x6c874c */
  { uint32_t v = 0x6c874cu; esp -= 4; W32(esp, v); }
/* 80183a: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 80183f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801841: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801842: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 801845: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801848: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801849: call dword ptr [esi + 4] */
  { uint32_t t = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, 0x80184cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80184c: /* 80184c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 80184f: call dword ptr [0xcfaac4] */
  esp -= 4; W32(esp, 0x801855u); SPILL(); f_4e1f32(); if (g_unwind) return; /* Core!??0FModelCoords@@QAE@XZ */ RELOAD();
/* 801855: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801857: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 80185a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80185b: mov ecx, edi */
  ecx = edi;
/* 80185d: call 0x6cb9b0 */
  esp -= 4; W32(esp, 0x801862u); SPILL(); f_6cb9b0(); if (g_unwind) return; RELOAD();
/* 801862: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 801865: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 801868: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 80186b: xor esi, esi */
  esi = 0;
/* 80186d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_801870: /* 801870: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 801873: cmp esi, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801876: jge 0x8018d3 */
  if ((sf == of)) goto L_8018d3;
L_801878: /* 801878: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 80187b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80187c: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 801882: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801883: lea edx, [edi + 0x294] */
  edx = (uint32_t)(edi + 0x294u);
/* 801889: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80188a: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 80188d: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 801890: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801891: mov ecx, esi */
  ecx = esi;
/* 801893: imul ecx, ecx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x148u);
  ecx = (uint32_t)r;
  }
/* 801899: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80189b: call 0x6c1267 */
  esp -= 4; W32(esp, 0x8018a0u); SPILL(); f_6c1267(); if (g_unwind) return; RELOAD();
/* 8018a0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8018a1: jmp 0x801870 */
  goto L_801870;
L_8018d3: /* 8018d3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8018d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8018d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8018d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8018df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8018e0: mov esp, ebp */
  esp = ebp;
/* 8018e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8018e3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8018a3(void) {
  LOAD_REGS();
L_8018a3: /* 8018a3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8018a6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8018ab: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8018ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8018af: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8018b2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8018b7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8018b7(); return;
}

void f_8018b7(void) {
  LOAD_REGS();
L_8018b7: /* 8018b7: push 0xa12928 */
  { uint32_t v = 0xa12928u; esp -= 4; W32(esp, v); }
/* 8018bc: push 0xae0d64 */
  { uint32_t v = 0xae0d64u; esp -= 4; W32(esp, v); }
/* 8018c1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8018c7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8018c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8018ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8018cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8018ce: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8018d3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8018d3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8018d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8018d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8018d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8018df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8018e0: mov esp, ebp */
  esp = ebp;
/* 8018e2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8018e3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_801940(void) {
  LOAD_REGS();
L_801940: /* 801940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 801941: mov ebp, esp */
  ebp = esp;
/* 801943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 801945: push 0x9d1fd2 */
  { uint32_t v = 0x9d1fd2u; esp -= 4; W32(esp, v); }
/* 80194a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 801950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 801958: sub esp, 0x1c4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1c4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80195e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 801961: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 801962: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 801963: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 801965: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 801966: xor edi, edi */
  edi = 0;
/* 801968: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80196a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80196d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 801970: je 0x801985 */
  if (zf) goto L_801985;
L_801972: /* 801972: push 0xb6cd28 */
  { uint32_t v = 0xb6cd28u; esp -= 4; W32(esp, v); }
/* 801977: mov ecx, esi */
  ecx = esi;
/* 801979: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x80197fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 80197f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 801981: je 0x801985 */
  if (zf) goto L_801985;
L_801983: /* 801983: mov edi, esi */
  edi = esi;
L_801985: /* 801985: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 801988: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 80198b: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 80198e: mov ebx, dword ptr [eax + 0xb4] */
  ebx = R32((uint32_t)(eax + 0xb4u));
/* 801994: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 80199a: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80199d: mov ecx, dword ptr [edi + 0x280] */
  ecx = R32((uint32_t)(edi + 0x280u));
/* 8019a3: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8019a6: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 8019a9: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 8019ac: je 0x8019e4 */
  if (zf) goto L_8019e4;
L_8019ae: /* 8019ae: mov ecx, ebx */
  ecx = ebx;
/* 8019b0: call 0x6c4304 */
  esp -= 4; W32(esp, 0x8019b5u); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 8019b5: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8019b7: jne 0x8019e4 */
  if (!zf) goto L_8019e4;
L_8019b9: /* 8019b9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8019bc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8019bf: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8019c2: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 8019c8: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8019cb: not eax */
  eax = ~eax;
/* 8019cd: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8019cf: je 0x801a2e */
  if (zf) goto L_801a2e;
L_8019d1: /* 8019d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8019d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8019db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8019dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8019dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8019de: mov esp, ebp */
  esp = ebp;
/* 8019e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8019e1: ret 0xc */
  esp += 16; SPILL(); return;
L_8019e4: /* 8019e4: mov eax, dword ptr [edi + 0x280] */
  eax = R32((uint32_t)(edi + 0x280u));
/* 8019ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8019ec: je 0x801a2e */
  if (zf) goto L_801a2e;
L_8019ee: /* 8019ee: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8019f0: mov ecx, edi */
  ecx = edi;
/* 8019f2: call dword ptr [edx + 0x174] */
  { uint32_t t = R32((uint32_t)(edx + 0x174u)); esp -= 4; W32(esp, 0x8019f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8019f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8019fa: je 0x801a2e */
  if (zf) goto L_801a2e;
L_8019fc: /* 8019fc: test byte ptr [edi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 801a03: je 0x801a2e */
  if (zf) goto L_801a2e;
L_801a05: /* 801a05: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 801a07: mov ecx, edi */
  ecx = edi;
/* 801a09: call dword ptr [eax + 0x17c] */
  { uint32_t t = R32((uint32_t)(eax + 0x17cu)); esp -= 4; W32(esp, 0x801a0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801a0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801a11: jne 0x801a2e */
  if (!zf) goto L_801a2e;
L_801a13: /* 801a13: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 801a16: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 801a19: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x801a1eu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 801a1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801a20: jne 0x801a2e */
  if (!zf) goto L_801a2e;
L_801a22: /* 801a22: test dword ptr [edi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801a2c: je 0x8019d1 */
  if (zf) goto L_8019d1;
L_801a2e: /* 801a2e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 801a31: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 801a34: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x801a3au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 801a3a: mov esi, dword ptr [eax + 0x28] */
  esi = R32((uint32_t)(eax + 0x28u));
/* 801a3d: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 801a42: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 801a45: je 0x801a60 */
  if (zf) goto L_801a60;
L_801a47: /* 801a47: mov ecx, ebx */
  ecx = ebx;
/* 801a49: call 0x6c4304 */
  esp -= 4; W32(esp, 0x801a4eu); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 801a4e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 801a50: jne 0x801a60 */
  if (!zf) goto L_801a60;
L_801a52: /* 801a52: mov ecx, dword ptr [esi + 0x90] */
  ecx = R32((uint32_t)(esi + 0x90u));
/* 801a58: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 801a5b: jmp 0x801b5a */
  goto L_801b5a;
L_801a60: /* 801a60: mov eax, dword ptr [edi + 0x280] */
  eax = R32((uint32_t)(edi + 0x280u));
/* 801a66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801a68: je 0x801b5a */
  if (zf) goto L_801b5a;
L_801a6e: /* 801a6e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 801a70: mov ecx, edi */
  ecx = edi;
/* 801a72: call dword ptr [edx + 0x174] */
  { uint32_t t = R32((uint32_t)(edx + 0x174u)); esp -= 4; W32(esp, 0x801a78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801a78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801a7a: je 0x801b39 */
  if (zf) goto L_801b39;
L_801a80: /* 801a80: test byte ptr [edi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 801a87: je 0x801b39 */
  if (zf) goto L_801b39;
L_801a8d: /* 801a8d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 801a8f: mov ecx, edi */
  ecx = edi;
/* 801a91: call dword ptr [eax + 0x17c] */
  { uint32_t t = R32((uint32_t)(eax + 0x17cu)); esp -= 4; W32(esp, 0x801a97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801a97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801a99: jne 0x801b39 */
  if (!zf) goto L_801b39;
L_801a9f: /* 801a9f: test byte ptr [edi + 0x394], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x394u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 801aa6: je 0x801abc */
  if (zf) goto L_801abc;
L_801aa8: /* 801aa8: mov ecx, dword ptr [edi + 0x38c] */
  ecx = R32((uint32_t)(edi + 0x38cu));
/* 801aae: lea eax, [edi + 0x38c] */
  eax = (uint32_t)(edi + 0x38cu);
/* 801ab4: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 801ab7: jmp 0x801b5a */
  goto L_801b5a;
L_801abc: /* 801abc: mov al, byte ptr [edi + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33cu))) & 0xffu);
/* 801ac2: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 801ac4: jne 0x801ada */
  if (!zf) goto L_801ada;
L_801ac6: /* 801ac6: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* 801acc: lea eax, [esi + 0xa4] */
  eax = (uint32_t)(esi + 0xa4u);
/* 801ad2: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 801ad5: jmp 0x801b5a */
  goto L_801b5a;
L_801ada: /* 801ada: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 801adc: je 0x801aef */
  if (zf) goto L_801aef;
L_801ade: /* 801ade: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* 801ae4: lea eax, [esi + 0xa8] */
  eax = (uint32_t)(esi + 0xa8u);
/* 801aea: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 801aed: jmp 0x801b5a */
  goto L_801b5a;
L_801aef: /* 801aef: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 801af5: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801afa: je 0x801b0d */
  if (zf) goto L_801b0d;
L_801afc: /* 801afc: mov ecx, dword ptr [esi + 0xcc] */
  ecx = R32((uint32_t)(esi + 0xccu));
/* 801b02: lea eax, [esi + 0xcc] */
  eax = (uint32_t)(esi + 0xccu);
/* 801b08: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 801b0b: jmp 0x801b5a */
  goto L_801b5a;
L_801b0d: /* 801b0d: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 801b0f: je 0x801b22 */
  if (zf) goto L_801b22;
L_801b11: /* 801b11: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 801b17: lea eax, [esi + 0xd0] */
  eax = (uint32_t)(esi + 0xd0u);
/* 801b1d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 801b20: jmp 0x801b5a */
  goto L_801b5a;
L_801b22: /* 801b22: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 801b24: lea eax, [esi + 0xe4] */
  eax = (uint32_t)(esi + 0xe4u);
/* 801b2a: jne 0x801b32 */
  if (!zf) goto L_801b32;
L_801b2c: /* 801b2c: lea eax, [esi + 0xa0] */
  eax = (uint32_t)(esi + 0xa0u);
L_801b32: /* 801b32: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 801b34: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 801b37: jmp 0x801b5a */
  goto L_801b5a;
L_801b39: /* 801b39: mov eax, dword ptr [edi + 0x280] */
  eax = R32((uint32_t)(edi + 0x280u));
/* 801b3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801b41: je 0x801b5a */
  if (zf) goto L_801b5a;
L_801b43: /* 801b43: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 801b45: mov ecx, edi */
  ecx = edi;
/* 801b47: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x801b4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801b4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801b4f: je 0x801b5a */
  if (zf) goto L_801b5a;
L_801b51: /* 801b51: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 801b57: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_801b5a: /* 801b5a: test dword ptr [edi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801b64: je 0x801b7b */
  if (zf) goto L_801b7b;
L_801b66: /* 801b66: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 801b69: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 801b6c: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 801b6f: test dword ptr [eax + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801b79: jne 0x801ba9 */
  if (!zf) goto L_801ba9;
L_801b7b: /* 801b7b: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 801b80: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 801b83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801b84: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* 801b8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801b8b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 801b8e: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x801b93u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 801b93: mov ecx, eax */
  ecx = eax;
/* 801b95: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x801b9bu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 801b9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801b9c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 801b9f: call 0x6c576d */
  esp -= 4; W32(esp, 0x801ba4u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 801ba4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 801ba6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_801ba9: /* 801ba9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 801bac: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 801baf: movzx ecx, ah */
  ecx = (uint32_t)(((eax >> 8) & 0xffu));
/* 801bb2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 801bb5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 801bb8: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 801bbb: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 801bbe: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 801bc4: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 801bc7: movzx ecx, ch */
  ecx = (uint32_t)(((ecx >> 8) & 0xffu));
/* 801bca: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 801bcd: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 801bd0: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 801bd6: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 801bd9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 801bdc: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 801bdf: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 801be5: push 0x3f99999a */
  { uint32_t v = 0x3f99999au; esp -= 4; W32(esp, v); }
/* 801bea: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 801bed: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 801bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801bf1: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 801bf7: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 801bfd: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 801c03: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 801c06: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 801c09: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 801c0c: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x801c12u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 801c12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801c13: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 801c16: call 0x6c576d */
  esp -= 4; W32(esp, 0x801c1bu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 801c1b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 801c1d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 801c1f: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
/* 801c25: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 801c28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801c29: mov ecx, edi */
  ecx = edi;
/* 801c2b: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x801c31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801c31: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 801c34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 801c36: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
/* 801c3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801c3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801c3f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 801c43: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x801c46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801c46: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 801c49: mov ecx, esp */
  ecx = esp;
/* 801c4b: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
/* 801c4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801c50: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 801c53: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 801c5a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 801c5d: mov edx, esp */
  edx = esp;
/* 801c5f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 801c61: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 801c68: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 801c6b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 801c6e: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 801c75: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 801c78: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 801c7b: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x801c81u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 801c81: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 801c84: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 801c86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801c88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801c8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801c8c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 801c8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801c90: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x801c93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801c93: mov eax, dword ptr [0xb91be0] */
  eax = R32((uint32_t)(0xb91be0u));
/* 801c98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801c9a: jne 0x801d10 */
  if (!zf) goto L_801d10;
L_801c9c: /* 801c9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801c9e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 801ca1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x801ca7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 801ca7: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 801cac: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 801cb1: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x801cb7u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 801cb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801cb9: jne 0x801cd3 */
  if (!zf) goto L_801cd3;
L_801cbb: /* 801cbb: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 801cc0: push 0xae0e50 */
  { uint32_t v = 0xae0e50u; esp -= 4; W32(esp, v); }
/* 801cc5: push 0xae0e94 */
  { uint32_t v = 0xae0e94u; esp -= 4; W32(esp, v); }
/* 801cca: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x801cd0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 801cd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_801cd3: /* 801cd3: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x801cd9u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 801cd9: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 801cdf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 801ce1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 801ce4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801ce6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801ce7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801ce9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801ceb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801cec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801ced: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 801cf2: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x801cf8u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 801cf8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 801cfe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801d01: push 0xb91be0 */
  { uint32_t v = 0xb91be0u; esp -= 4; W32(esp, v); }
/* 801d06: mov dword ptr [0xb91be0], eax */
  W32((uint32_t)(0xb91be0u), eax);
/* 801d0b: call 0x6c1203 */
  esp -= 4; W32(esp, 0x801d10u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_801d10: /* 801d10: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 801d13: mov eax, dword ptr [0xb91be0] */
  eax = R32((uint32_t)(0xb91be0u));
/* 801d18: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 801d1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801d1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801d1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801d20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801d21: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x801d24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 801d24: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 801d27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801d29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801d2a: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 801d30: call 0x6c460b */
  esp -= 4; W32(esp, 0x801d35u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 801d35: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 801d38: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 801d3b: mov ecx, dword ptr [edx + 0x15c] */
  ecx = R32((uint32_t)(edx + 0x15cu));
/* 801d41: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801d43: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 801d47: je 0x801d60 */
  if (zf) goto L_801d60;
L_801d49: /* 801d49: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 801d4b: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 801d4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801d4f: mov ecx, edx */
  ecx = edx;
/* 801d51: mov dword ptr [ebp - 0x70], 0x9f7180 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x9f7180u);
/* 801d58: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 801d5b: call 0x6c76fd */
  esp -= 4; W32(esp, 0x801d60u); SPILL(); f_6c76fd(); if (g_unwind) return; RELOAD();
L_801d60: /* 801d60: xor esi, esi */
  esi = 0;
L_801d62: /* 801d62: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 801d65: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 801d68: cmp esi, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801d6b: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 801d6e: jge 0x801dee */
  if ((sf == of)) goto L_801dee;
L_801d70: /* 801d70: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 801d73: imul esi, esi, 0x148 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x148u);
  esi = (uint32_t)r;
  }
/* 801d79: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 801d7b: xor ecx, ecx */
  ecx = 0;
/* 801d7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_801d80: /* 801d80: mov ebx, dword ptr [esi + 0x100] */
  ebx = R32((uint32_t)(esi + 0x100u));
/* 801d86: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801d88: jge 0x801de2 */
  if ((sf == of)) goto L_801de2;
L_801d8a: /* 801d8a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 801d8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801d8e: lea edi, [ecx + 1] */
  edi = (uint32_t)(ecx + 0x1u);
/* 801d91: mov eax, edi */
  eax = edi;
/* 801d93: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 801d94: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x801d94);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 801d96: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 801d99: lea ecx, [ecx + ecx*2 + 0xc] */
  ecx = (uint32_t)(ecx + ecx*2 + 0xcu);
/* 801d9d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 801da0: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 801da3: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 801da6: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 801da8: mov edx, esp */
  edx = esp;
/* 801daa: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 801dac: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 801daf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 801db2: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 801db5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 801db8: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 801dbb: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 801dbd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 801dc0: mov eax, esp */
  eax = esp;
/* 801dc2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 801dc4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 801dc7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 801dca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 801dcd: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 801dd3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 801dd6: call 0x6cc74d */
  esp -= 4; W32(esp, 0x801ddbu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 801ddb: mov ecx, edi */
  ecx = edi;
/* 801ddd: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 801de0: jmp 0x801d80 */
  goto L_801d80;
L_801de2: /* 801de2: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 801de5: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 801de8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 801de9: jmp 0x801d62 */
  goto L_801d62;
L_801dee: /* 801dee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801df0: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 801df6: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x801dfbu); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 801dfb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 801dfe: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 801e01: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 801e07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801e09: je 0x801e12 */
  if (zf) goto L_801e12;
L_801e0b: /* 801e0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801e0d: call 0x6c1ab9 */
  esp -= 4; W32(esp, 0x801e12u); SPILL(); f_6c1ab9(); if (g_unwind) return; RELOAD();
L_801e12: /* 801e12: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 801e18: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 801e1b: je 0x801e28 */
  if (zf) goto L_801e28;
L_801e1d: /* 801e1d: mov ecx, ebx */
  ecx = ebx;
/* 801e1f: call 0x6c4304 */
  esp -= 4; W32(esp, 0x801e24u); SPILL(); f_6c4304(); if (g_unwind) return; RELOAD();
/* 801e24: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 801e26: je 0x801e38 */
  if (zf) goto L_801e38;
L_801e28: /* 801e28: test dword ptr [edi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801e32: je 0x80272e */
  if (zf) goto L_80272e;
L_801e38: /* 801e38: mov eax, dword ptr [0xb91bdc] */
  eax = R32((uint32_t)(0xb91bdcu));
/* 801e3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801e3f: jne 0x801eb5 */
  if (!zf) goto L_801eb5;
L_801e41: /* 801e41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801e43: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 801e46: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x801e4cu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 801e4c: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 801e51: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 801e56: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x801e5cu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 801e5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801e5e: jne 0x801e78 */
  if (!zf) goto L_801e78;
L_801e60: /* 801e60: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 801e65: push 0xae0eb8 */
  { uint32_t v = 0xae0eb8u; esp -= 4; W32(esp, v); }
/* 801e6a: push 0xae0efc */
  { uint32_t v = 0xae0efcu; esp -= 4; W32(esp, v); }
/* 801e6f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x801e75u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 801e75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_801e78: /* 801e78: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x801e7eu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 801e7e: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 801e84: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 801e86: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 801e89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801e8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801e8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801e8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801e90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 801e91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801e92: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 801e97: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x801e9du); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 801e9d: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 801ea3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801ea6: push 0xb91bdc */
  { uint32_t v = 0xb91bdcu; esp -= 4; W32(esp, v); }
/* 801eab: mov dword ptr [0xb91bdc], eax */
  W32((uint32_t)(0xb91bdcu), eax);
/* 801eb0: call 0x6c1203 */
  esp -= 4; W32(esp, 0x801eb5u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_801eb5: /* 801eb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 801eb7: push 0xae0db0 */
  { uint32_t v = 0xae0db0u; esp -= 4; W32(esp, v); }
/* 801ebc: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 801ebe: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 801ec3: call dword ptr [0xcfa8a4] */
  esp -= 4; W32(esp, 0x801ec9u); SPILL(); f_4e3c65(); if (g_unwind) return; /* Core!?StaticFindObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 801ec9: mov esi, eax */
  esi = eax;
/* 801ecb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 801ece: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801ed0: je 0x801ee3 */
  if (zf) goto L_801ee3;
L_801ed2: /* 801ed2: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 801ed7: mov ecx, esi */
  ecx = esi;
/* 801ed9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x801edfu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 801edf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801ee1: jne 0x801ee5 */
  if (!zf) goto L_801ee5;
L_801ee3: /* 801ee3: xor esi, esi */
  esi = 0;
L_801ee5: /* 801ee5: mov eax, dword ptr [0xb91bdc] */
  eax = R32((uint32_t)(0xb91bdcu));
/* 801eea: mov dword ptr [eax + 0x38], esi */
  W32((uint32_t)(eax + 0x38u), esi);
/* 801eed: mov eax, dword ptr [0xb91bdc] */
  eax = R32((uint32_t)(0xb91bdcu));
/* 801ef2: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 801ef5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 801ef7: jne 0x801f16 */
  if (!zf) goto L_801f16;
L_801ef9: /* 801ef9: push 0x291 */
  { uint32_t v = 0x291u; esp -= 4; W32(esp, v); }
/* 801efe: push 0xae0dd8 */
  { uint32_t v = 0xae0dd8u; esp -= 4; W32(esp, v); }
/* 801f03: push 0xae0de4 */
  { uint32_t v = 0xae0de4u; esp -= 4; W32(esp, v); }
/* 801f08: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x801f0eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 801f0e: mov eax, dword ptr [0xb91bdc] */
  eax = R32((uint32_t)(0xb91bdcu));
/* 801f13: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_801f16: /* 801f16: and dword ptr [eax + 0x40], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 801f1a: mov eax, dword ptr [0xb91bdc] */
  eax = R32((uint32_t)(0xb91bdcu));
/* 801f1f: and dword ptr [eax + 0x40], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 801f23: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 801f26: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 801f29: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 801f2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 801f2d: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 801f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 801f33: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 801f39: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x801f3eu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 801f3e: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 801f42: xor eax, eax */
  eax = 0;
L_801f44: /* 801f44: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 801f47: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 801f4a: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801f4d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 801f50: jge 0x8023d6 */
  if ((sf == of)) goto L_8023d6;
L_801f56: /* 801f56: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 801f59: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 801f5f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 801f61: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 801f64: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 801f6b: jmp 0x801f70 */
  goto L_801f70;
L_801f70: /* 801f70: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 801f73: cmp edx, dword ptr [eax + 0x100] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801f79: jge 0x8023cd */
  if ((sf == of)) goto L_8023cd;
L_801f7f: /* 801f7f: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 801f82: mov eax, edx */
  eax = edx;
/* 801f84: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 801f88: fld dword ptr [ecx + eax*4 + 8] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8u)); FPUSH(v); }
/* 801f8c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 801f8f: fld dword ptr [ecx + eax*4 + 4] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x4u)); FPUSH(v); }
/* 801f93: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 801f96: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 801f99: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 801f9c: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* 801fa2: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 801fa5: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 801fa8: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 801faf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 801fb2: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 801fb5: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 801fb8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 801fbb: lea edi, [ebp - 0x98] */
  edi = (uint32_t)(ebp + 0xffffff68u);
/* 801fc1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 801fc3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 801fc5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 801fc7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 801fca: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 801fcc: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 801fcf: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 801fd1: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 801fd4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 801fd7: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 801fda: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 801fdd: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 801fe0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 801fe3: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 801fe6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 801fe9: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 801fec: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 801fee: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 801ff0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 801ff2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 801ff4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 801ff6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 801ff9: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 801ffc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 801fff: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 802002: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802005: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 802008: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80200b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80200e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802010: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802012: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802014: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802016: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 802018: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80201b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80201e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802021: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 802024: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802027: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80202a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80202d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 802030: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802032: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802034: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802036: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802038: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80203a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80203c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80203e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 802040: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 802043: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 802046: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 802049: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 80204f: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 802055: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 802058: mov edx, esp */
  edx = esp;
/* 80205a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80205c: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 802062: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 802065: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 802068: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802069: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 80206c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80206f: call 0x6c6221 */
  esp -= 4; W32(esp, 0x802074u); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 802074: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 802077: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 80207a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80207c: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 802082: lea eax, [ebp - 0xc4] */
  eax = (uint32_t)(ebp + 0xffffff3cu);
/* 802088: lea ecx, [ebp - 0x1bc] */
  ecx = (uint32_t)(ebp + 0xfffffe44u);
/* 80208e: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 802094: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 80209a: mov dword ptr [ebp - 0xb8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x3f800000u);
/* 8020a4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8020a7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8020aa: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8020ad: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8020b0: lea edi, [ebp - 0x34] */
  edi = (uint32_t)(ebp + 0xffffffccu);
/* 8020b3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8020b5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8020b7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8020b9: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8020bc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8020be: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8020c1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8020c3: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8020c6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8020c9: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8020cc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8020cf: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8020d2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8020d5: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8020d8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8020db: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8020de: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8020e0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8020e2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8020e4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8020e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8020e8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8020eb: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8020ee: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8020f1: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8020f4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8020f7: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8020fa: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8020fd: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 802100: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802102: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802104: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802106: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802108: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80210a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80210d: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 802110: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802113: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 802116: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802119: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80211c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80211f: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 802122: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802124: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802126: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802128: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80212a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80212c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80212e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 802130: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 802132: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 802135: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 802138: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 80213b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 80213e: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 802141: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 802147: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802149: je 0x80224f */
  if (zf) goto L_80224f;
L_80214f: /* 80214f: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 802152: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 802154: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 802157: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 80215a: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 80215d: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
/* 802163: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 802166: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 802169: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 802170: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 802173: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802176: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 802179: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80217c: lea edi, [ebp - 0x84] */
  edi = (uint32_t)(ebp + 0xffffff7cu);
/* 802182: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802184: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 802186: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802188: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 80218b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80218d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 802190: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802192: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 802195: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802198: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 80219b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80219e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8021a1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8021a4: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8021a7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8021aa: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8021ad: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8021af: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8021b1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021b3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021b5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8021b7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8021ba: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8021bd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8021c0: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8021c3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8021c6: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8021c9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8021cc: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8021cf: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8021d1: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8021d3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021d5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8021d9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8021dc: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8021df: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8021e2: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8021e5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8021e8: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8021eb: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8021ee: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8021f1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8021f3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8021f5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021f7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021f9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8021fb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8021fd: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8021ff: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 802201: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 802204: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 802207: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 80220a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 80220d: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 802213: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 802216: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 80221c: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 80221f: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 802225: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 80222b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 80222e: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 802230: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 802236: mov dword ptr [ebp - 0xb4], 0xa127a8 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0xa127a8u);
/* 802240: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 802246: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 802249: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80224a: call 0x6c76fd */
  esp -= 4; W32(esp, 0x80224fu); SPILL(); f_6c76fd(); if (g_unwind) return; RELOAD();
L_80224f: /* 80224f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 802252: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 802255: mov eax, dword ptr [edx + 0x100] */
  eax = R32((uint32_t)(edx + 0x100u));
/* 80225b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80225d: je 0x802347 */
  if (zf) goto L_802347;
L_802263: /* 802263: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 802266: test dword ptr [eax + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802270: je 0x802347 */
  if (zf) goto L_802347;
L_802276: /* 802276: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 80227c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80227e: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x802281u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802281: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 802287: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80228a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80228c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x80228fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80228f: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 802295: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 802297: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 80229a: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x80229du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80229d: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8022a3: mov ebx, eax */
  ebx = eax;
/* 8022a5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8022a7: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8022aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8022aa: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8022b0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8022b2: mov edi, eax */
  edi = eax;
/* 8022b4: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x8022b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8022b7: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8022bd: mov esi, eax */
  esi = eax;
/* 8022bf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8022c1: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8022c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8022c4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8022c7: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8022ca: mov ecx, eax */
  ecx = eax;
/* 8022cc: mov eax, dword ptr [0xb91bdc] */
  eax = R32((uint32_t)(0xb91bdcu));
/* 8022d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8022d2: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8022d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8022d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8022d7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8022da: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8022de: mov eax, ebx */
  eax = ebx;
/* 8022e0: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8022e3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8022e4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8022e6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8022e8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8022eb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8022ee: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8022f1: mov eax, edi */
  eax = edi;
/* 8022f3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8022f4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8022f6: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8022f9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8022fb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8022fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802300: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802302: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 802305: mov eax, esi */
  eax = esi;
/* 802307: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 802308: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 80230c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80230f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 802311: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 802313: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802316: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 802319: mov eax, ecx */
  eax = ecx;
/* 80231b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 80231c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 802320: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 802322: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 802325: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 802327: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80232a: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 802330: fsubr dword ptr [ebp - 0x30] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd0u))) - ST0;
/* 802333: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 802337: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80233a: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 80233d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 802340: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x802345u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 802345: jmp 0x802390 */
  goto L_802390;
L_802347: /* 802347: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 80234a: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 80234d: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 802353: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 802356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802357: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802358: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80235b: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 80235f: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 802365: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 802368: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 80236e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 802372: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 802375: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 80237b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 80237f: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 802382: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 802388: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 80238b: call 0x6c40a2 */
  esp -= 4; W32(esp, 0x802390u); SPILL(); f_6c40a2(); if (g_unwind) return; RELOAD();
L_802390: /* 802390: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 802393: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 802396: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 80239c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80239e: je 0x8023ab */
  if (zf) goto L_8023ab;
L_8023a0: /* 8023a0: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 8023a6: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x8023abu); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
L_8023ab: /* 8023ab: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8023ae: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8023b1: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 8023b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8023b9: je 0x8023c2 */
  if (zf) goto L_8023c2;
L_8023bb: /* 8023bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8023bd: call 0x6c1ab9 */
  esp -= 4; W32(esp, 0x8023c2u); SPILL(); f_6c1ab9(); if (g_unwind) return; RELOAD();
L_8023c2: /* 8023c2: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8023c5: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8023c8: jmp 0x801f70 */
  goto L_801f70;
L_8023cd: /* 8023cd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8023d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8023d1: jmp 0x801f44 */
  goto L_801f44;
L_8023d6: /* 8023d6: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 8023dc: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x8023e1u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
/* 8023e1: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8023e4: fld dword ptr [ebx + 0x29c] */
  { double v = F32((uint32_t)(ebx + 0x29cu)); FPUSH(v); }
/* 8023ea: mov edx, dword ptr [ebx + 0x294] */
  edx = R32((uint32_t)(ebx + 0x294u));
/* 8023f0: fld dword ptr [ebx + 0x298] */
  { double v = F32((uint32_t)(ebx + 0x298u)); FPUSH(v); }
/* 8023f6: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8023f9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8023fc: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* 802402: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 802405: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 802408: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 80240f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 802412: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 802415: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 802418: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80241b: lea edi, [ebp - 0x5c] */
  edi = (uint32_t)(ebp + 0xffffffa4u);
/* 80241e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802420: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 802422: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802424: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 802427: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802429: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80242c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80242e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 802431: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802434: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 802437: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80243a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80243d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802440: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 802443: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802446: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 802449: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80244b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80244d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80244f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802451: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 802453: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802456: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 802459: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80245c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 80245f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802462: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 802465: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802468: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80246b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80246d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80246f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802471: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802473: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 802475: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802478: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80247b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80247e: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 802481: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802484: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 802487: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80248a: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80248d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80248f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802491: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802493: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802495: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 802497: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802499: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80249b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80249d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8024a0: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8024a3: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8024a6: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8024a9: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8024ac: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8024af: mov edx, esp */
  edx = esp;
/* 8024b1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8024b3: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8024b6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8024b9: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8024bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8024bd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8024c0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8024c3: call 0x6c6221 */
  esp -= 4; W32(esp, 0x8024c8u); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 8024c8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8024cb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8024ce: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8024d0: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8024d3: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8024d6: lea ecx, [ebp - 0x1bc] */
  ecx = (uint32_t)(ebp + 0xfffffe44u);
/* 8024dc: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8024df: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8024e2: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 8024e9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8024ec: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8024ef: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8024f2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8024f5: lea edi, [ebp - 0x34] */
  edi = (uint32_t)(ebp + 0xffffffccu);
/* 8024f8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8024fa: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8024fc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8024fe: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 802501: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802503: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 802506: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802508: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 80250b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80250e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 802511: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802514: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 802517: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80251a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 80251d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802520: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 802523: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802525: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802527: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802529: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80252b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80252d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802530: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 802533: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802536: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 802539: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80253c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 80253f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802542: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 802545: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802547: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802549: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80254b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80254d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80254f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802552: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 802555: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802558: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 80255b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80255e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 802561: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802564: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 802567: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802569: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80256b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80256d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80256f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 802571: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802573: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 802575: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 802577: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 80257a: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 80257d: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 802580: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 802583: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 802586: mov ecx, dword ptr [edx + 0x15c] */
  ecx = R32((uint32_t)(edx + 0x15cu));
/* 80258c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80258e: je 0x8025cf */
  if (zf) goto L_8025cf;
L_802590: /* 802590: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 802593: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 802596: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 80259c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 80259f: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 8025a5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8025a7: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 8025ad: mov dword ptr [ebp - 0xb4], 0xa127a8 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0xa127a8u);
/* 8025b7: mov dword ptr [ebp - 0xa8], ebx */
  W32((uint32_t)(ebp + 0xffffff58u), ebx);
/* 8025bd: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 8025c3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8025c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8025c7: call 0x6c76fd */
  esp -= 4; W32(esp, 0x8025ccu); SPILL(); f_6c76fd(); if (g_unwind) return; RELOAD();
/* 8025cc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_8025cf: /* 8025cf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8025d2: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* 8025d8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8025da: je 0x8026b1 */
  if (zf) goto L_8026b1;
L_8025e0: /* 8025e0: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8025e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8025e8: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x8025ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8025eb: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8025f1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8025f4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8025f6: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8025f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8025f9: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8025ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 802601: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 802604: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x802607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802607: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 80260d: mov ebx, eax */
  ebx = eax;
/* 80260f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 802611: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x802614u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802614: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 80261a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80261c: mov edi, eax */
  edi = eax;
/* 80261e: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x802621u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802621: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 802627: mov esi, eax */
  esi = eax;
/* 802629: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80262b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x80262eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80262e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 802631: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 802634: mov ecx, eax */
  ecx = eax;
/* 802636: mov eax, dword ptr [0xb91bdc] */
  eax = R32((uint32_t)(0xb91bdcu));
/* 80263b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80263c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 80263f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802640: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 802641: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 802644: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 802648: mov eax, ebx */
  eax = ebx;
/* 80264a: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 80264d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 80264e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 802650: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 802652: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802655: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 802658: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80265b: mov eax, edi */
  eax = edi;
/* 80265d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 80265e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 802660: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 802663: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 802665: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802668: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80266a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80266c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80266f: mov eax, esi */
  eax = esi;
/* 802671: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 802672: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 802676: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 802679: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 80267b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 80267d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802680: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 802683: mov eax, ecx */
  eax = ecx;
/* 802685: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 802686: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 80268a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 80268c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80268f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 802691: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802694: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 80269a: fsubr dword ptr [ebp - 0x30] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd0u))) - ST0;
/* 80269d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8026a1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8026a4: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 8026a7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8026aa: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x8026afu); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 8026af: jmp 0x8026fa */
  goto L_8026fa;
L_8026b1: /* 8026b1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8026b4: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8026b7: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8026bd: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8026c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8026c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8026c2: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8026c5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8026c9: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 8026cf: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8026d2: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8026d8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8026dc: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8026df: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 8026e5: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8026e9: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8026ec: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 8026f2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8026f5: call 0x6c40a2 */
  esp -= 4; W32(esp, 0x8026fau); SPILL(); f_6c40a2(); if (g_unwind) return; RELOAD();
L_8026fa: /* 8026fa: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 802700: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x802705u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
/* 802705: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 802708: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 80270b: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 802711: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802713: je 0x80271c */
  if (zf) goto L_80271c;
L_802715: /* 802715: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802717: call 0x6c1ab9 */
  esp -= 4; W32(esp, 0x80271cu); SPILL(); f_6c1ab9(); if (g_unwind) return; RELOAD();
L_80271c: /* 80271c: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 802722: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 802726: call 0x6caac4 */
  esp -= 4; W32(esp, 0x80272bu); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 80272b: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
L_80272e: /* 80272e: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 802734: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 802737: je 0x80276c */
  if (zf) goto L_80276c;
L_802739: /* 802739: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 80273b: mov ecx, edi */
  ecx = edi;
/* 80273d: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x802743u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802743: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802745: je 0x80276c */
  if (zf) goto L_80276c;
L_802747: /* 802747: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 802749: mov ecx, edi */
  ecx = edi;
/* 80274b: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x802751u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802751: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 802757: mov edx, dword ptr [ecx + 0x15220] */
  edx = R32((uint32_t)(ecx + 0x15220u));
/* 80275d: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 802762: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 802763: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802764: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x802769u); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 802769: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80276c: /* 80276c: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 802772: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 802776: call 0x6cadcb */
  esp -= 4; W32(esp, 0x80277bu); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 80277b: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* 802781: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 802785: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80278bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80278b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80278e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80278f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 802790: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 802797: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 802798: mov esp, ebp */
  esp = ebp;
/* 80279a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80279b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_801f6d(void) {
  LOAD_REGS();
  goto L_801f6d;
L_801f44: /* 801f44: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 801f47: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 801f4a: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801f4d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 801f50: jge 0x8023d6 */
  if ((sf == of)) goto L_8023d6;
L_801f56: /* 801f56: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 801f59: imul eax, eax, 0x148 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x148u);
  eax = (uint32_t)r;
  }
/* 801f5f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 801f61: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 801f64: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 801f6b: jmp 0x801f70 */
  goto L_801f70;
L_801f6d: /* 801f6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_801f70: /* 801f70: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 801f73: cmp edx, dword ptr [eax + 0x100] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 801f79: jge 0x8023cd */
  if ((sf == of)) goto L_8023cd;
L_801f7f: /* 801f7f: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 801f82: mov eax, edx */
  eax = edx;
/* 801f84: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 801f88: fld dword ptr [ecx + eax*4 + 8] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8u)); FPUSH(v); }
/* 801f8c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 801f8f: fld dword ptr [ecx + eax*4 + 4] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x4u)); FPUSH(v); }
/* 801f93: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 801f96: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 801f99: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 801f9c: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* 801fa2: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 801fa5: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 801fa8: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 801faf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 801fb2: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 801fb5: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 801fb8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 801fbb: lea edi, [ebp - 0x98] */
  edi = (uint32_t)(ebp + 0xffffff68u);
/* 801fc1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 801fc3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 801fc5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 801fc7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 801fca: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 801fcc: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 801fcf: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 801fd1: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 801fd4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 801fd7: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 801fda: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 801fdd: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 801fe0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 801fe3: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 801fe6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 801fe9: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 801fec: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 801fee: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 801ff0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 801ff2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 801ff4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 801ff6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 801ff9: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 801ffc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 801fff: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 802002: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802005: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 802008: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80200b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80200e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802010: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802012: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802014: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802016: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 802018: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80201b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80201e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802021: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 802024: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802027: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80202a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80202d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 802030: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802032: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802034: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802036: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802038: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80203a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80203c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80203e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 802040: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 802043: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 802046: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 802049: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 80204f: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 802055: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 802058: mov edx, esp */
  edx = esp;
/* 80205a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80205c: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 802062: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 802065: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 802068: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802069: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 80206c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80206f: call 0x6c6221 */
  esp -= 4; W32(esp, 0x802074u); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 802074: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 802077: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 80207a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80207c: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 802082: lea eax, [ebp - 0xc4] */
  eax = (uint32_t)(ebp + 0xffffff3cu);
/* 802088: lea ecx, [ebp - 0x1bc] */
  ecx = (uint32_t)(ebp + 0xfffffe44u);
/* 80208e: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 802094: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 80209a: mov dword ptr [ebp - 0xb8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x3f800000u);
/* 8020a4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8020a7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8020aa: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8020ad: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8020b0: lea edi, [ebp - 0x34] */
  edi = (uint32_t)(ebp + 0xffffffccu);
/* 8020b3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8020b5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8020b7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8020b9: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8020bc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8020be: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8020c1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8020c3: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8020c6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8020c9: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8020cc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8020cf: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8020d2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8020d5: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8020d8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8020db: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8020de: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8020e0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8020e2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8020e4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8020e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8020e8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8020eb: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8020ee: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8020f1: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8020f4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8020f7: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8020fa: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8020fd: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 802100: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802102: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802104: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802106: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802108: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80210a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80210d: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 802110: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802113: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 802116: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802119: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80211c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80211f: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 802122: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802124: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802126: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802128: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80212a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80212c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80212e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 802130: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 802132: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 802135: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 802138: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 80213b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 80213e: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 802141: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 802147: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802149: je 0x80224f */
  if (zf) goto L_80224f;
L_80214f: /* 80214f: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 802152: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 802154: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 802157: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 80215a: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 80215d: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
/* 802163: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 802166: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 802169: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 802170: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 802173: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802176: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 802179: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80217c: lea edi, [ebp - 0x84] */
  edi = (uint32_t)(ebp + 0xffffff7cu);
/* 802182: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802184: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 802186: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802188: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 80218b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80218d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 802190: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802192: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 802195: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802198: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 80219b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80219e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8021a1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8021a4: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8021a7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8021aa: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8021ad: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8021af: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8021b1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021b3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021b5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8021b7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8021ba: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8021bd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8021c0: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8021c3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8021c6: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8021c9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8021cc: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8021cf: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8021d1: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8021d3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021d5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8021d9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8021dc: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8021df: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8021e2: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8021e5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8021e8: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8021eb: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8021ee: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8021f1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8021f3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8021f5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021f7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8021f9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8021fb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8021fd: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8021ff: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 802201: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 802204: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 802207: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 80220a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 80220d: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 802213: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 802216: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 80221c: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 80221f: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 802225: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 80222b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 80222e: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 802230: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 802236: mov dword ptr [ebp - 0xb4], 0xa127a8 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0xa127a8u);
/* 802240: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 802246: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 802249: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80224a: call 0x6c76fd */
  esp -= 4; W32(esp, 0x80224fu); SPILL(); f_6c76fd(); if (g_unwind) return; RELOAD();
L_80224f: /* 80224f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 802252: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 802255: mov eax, dword ptr [edx + 0x100] */
  eax = R32((uint32_t)(edx + 0x100u));
/* 80225b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80225d: je 0x802347 */
  if (zf) goto L_802347;
L_802263: /* 802263: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 802266: test dword ptr [eax + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802270: je 0x802347 */
  if (zf) goto L_802347;
L_802276: /* 802276: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 80227c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80227e: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x802281u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802281: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 802287: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80228a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80228c: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x80228fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80228f: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 802295: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 802297: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 80229a: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x80229du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80229d: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8022a3: mov ebx, eax */
  ebx = eax;
/* 8022a5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8022a7: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8022aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8022aa: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8022b0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8022b2: mov edi, eax */
  edi = eax;
/* 8022b4: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x8022b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8022b7: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8022bd: mov esi, eax */
  esi = eax;
/* 8022bf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8022c1: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8022c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8022c4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8022c7: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8022ca: mov ecx, eax */
  ecx = eax;
/* 8022cc: mov eax, dword ptr [0xb91bdc] */
  eax = R32((uint32_t)(0xb91bdcu));
/* 8022d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8022d2: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8022d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8022d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8022d7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8022da: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8022de: mov eax, ebx */
  eax = ebx;
/* 8022e0: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8022e3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8022e4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8022e6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8022e8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8022eb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8022ee: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8022f1: mov eax, edi */
  eax = edi;
/* 8022f3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8022f4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8022f6: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8022f9: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8022fb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8022fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802300: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802302: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 802305: mov eax, esi */
  eax = esi;
/* 802307: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 802308: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 80230c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80230f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 802311: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 802313: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802316: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 802319: mov eax, ecx */
  eax = ecx;
/* 80231b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 80231c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 802320: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 802322: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 802325: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 802327: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80232a: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 802330: fsubr dword ptr [ebp - 0x30] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd0u))) - ST0;
/* 802333: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 802337: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80233a: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 80233d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 802340: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x802345u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 802345: jmp 0x802390 */
  goto L_802390;
L_802347: /* 802347: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 80234a: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 80234d: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 802353: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 802356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802357: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802358: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80235b: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 80235f: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 802365: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 802368: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 80236e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 802372: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 802375: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 80237b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 80237f: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 802382: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 802388: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 80238b: call 0x6c40a2 */
  esp -= 4; W32(esp, 0x802390u); SPILL(); f_6c40a2(); if (g_unwind) return; RELOAD();
L_802390: /* 802390: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 802393: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 802396: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 80239c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80239e: je 0x8023ab */
  if (zf) goto L_8023ab;
L_8023a0: /* 8023a0: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 8023a6: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x8023abu); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
L_8023ab: /* 8023ab: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8023ae: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8023b1: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 8023b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8023b9: je 0x8023c2 */
  if (zf) goto L_8023c2;
L_8023bb: /* 8023bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8023bd: call 0x6c1ab9 */
  esp -= 4; W32(esp, 0x8023c2u); SPILL(); f_6c1ab9(); if (g_unwind) return; RELOAD();
L_8023c2: /* 8023c2: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8023c5: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8023c8: jmp 0x801f70 */
  goto L_801f70;
L_8023cd: /* 8023cd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8023d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8023d1: jmp 0x801f44 */
  goto L_801f44;
L_8023d6: /* 8023d6: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 8023dc: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x8023e1u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
/* 8023e1: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8023e4: fld dword ptr [ebx + 0x29c] */
  { double v = F32((uint32_t)(ebx + 0x29cu)); FPUSH(v); }
/* 8023ea: mov edx, dword ptr [ebx + 0x294] */
  edx = R32((uint32_t)(ebx + 0x294u));
/* 8023f0: fld dword ptr [ebx + 0x298] */
  { double v = F32((uint32_t)(ebx + 0x298u)); FPUSH(v); }
/* 8023f6: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8023f9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8023fc: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* 802402: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 802405: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 802408: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 80240f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 802412: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 802415: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 802418: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80241b: lea edi, [ebp - 0x5c] */
  edi = (uint32_t)(ebp + 0xffffffa4u);
/* 80241e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802420: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 802422: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802424: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 802427: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802429: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80242c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80242e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 802431: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802434: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 802437: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80243a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80243d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802440: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 802443: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802446: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 802449: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80244b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80244d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80244f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802451: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 802453: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802456: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 802459: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80245c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 80245f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802462: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 802465: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802468: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80246b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80246d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80246f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802471: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802473: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 802475: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802478: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80247b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80247e: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 802481: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802484: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 802487: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80248a: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80248d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80248f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802491: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802493: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802495: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 802497: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802499: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80249b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80249d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8024a0: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8024a3: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8024a6: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8024a9: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8024ac: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8024af: mov edx, esp */
  edx = esp;
/* 8024b1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8024b3: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8024b6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8024b9: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8024bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8024bd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8024c0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8024c3: call 0x6c6221 */
  esp -= 4; W32(esp, 0x8024c8u); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 8024c8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8024cb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8024ce: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8024d0: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8024d3: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8024d6: lea ecx, [ebp - 0x1bc] */
  ecx = (uint32_t)(ebp + 0xfffffe44u);
/* 8024dc: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8024df: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8024e2: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 8024e9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8024ec: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8024ef: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8024f2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8024f5: lea edi, [ebp - 0x34] */
  edi = (uint32_t)(ebp + 0xffffffccu);
/* 8024f8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8024fa: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8024fc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8024fe: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 802501: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802503: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 802506: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 802508: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 80250b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80250e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 802511: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802514: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 802517: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80251a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 80251d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 802520: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 802523: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802525: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802527: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 802529: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80252b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80252d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802530: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 802533: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802536: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 802539: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80253c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 80253f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 802542: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 802545: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802547: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 802549: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80254b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80254d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80254f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802552: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 802555: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802558: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 80255b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80255e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 802561: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 802564: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 802567: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802569: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80256b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80256d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80256f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 802571: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 802573: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 802575: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 802577: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 80257a: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 80257d: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 802580: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 802583: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 802586: mov ecx, dword ptr [edx + 0x15c] */
  ecx = R32((uint32_t)(edx + 0x15cu));
/* 80258c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80258e: je 0x8025cf */
  if (zf) goto L_8025cf;
L_802590: /* 802590: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 802593: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 802596: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 80259c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 80259f: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 8025a5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8025a7: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 8025ad: mov dword ptr [ebp - 0xb4], 0xa127a8 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0xa127a8u);
/* 8025b7: mov dword ptr [ebp - 0xa8], ebx */
  W32((uint32_t)(ebp + 0xffffff58u), ebx);
/* 8025bd: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 8025c3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8025c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8025c7: call 0x6c76fd */
  esp -= 4; W32(esp, 0x8025ccu); SPILL(); f_6c76fd(); if (g_unwind) return; RELOAD();
/* 8025cc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_8025cf: /* 8025cf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8025d2: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* 8025d8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8025da: je 0x8026b1 */
  if (zf) goto L_8026b1;
L_8025e0: /* 8025e0: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8025e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8025e8: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x8025ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8025eb: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8025f1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8025f4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8025f6: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8025f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8025f9: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 8025ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 802601: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 802604: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x802607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802607: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 80260d: mov ebx, eax */
  ebx = eax;
/* 80260f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 802611: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x802614u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802614: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 80261a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80261c: mov edi, eax */
  edi = eax;
/* 80261e: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x802621u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802621: mov ecx, dword ptr [0xb91bdc] */
  ecx = R32((uint32_t)(0xb91bdcu));
/* 802627: mov esi, eax */
  esi = eax;
/* 802629: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80262b: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x80262eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80262e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 802631: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 802634: mov ecx, eax */
  ecx = eax;
/* 802636: mov eax, dword ptr [0xb91bdc] */
  eax = R32((uint32_t)(0xb91bdcu));
/* 80263b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80263c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 80263f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802640: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 802641: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 802644: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 802648: mov eax, ebx */
  eax = ebx;
/* 80264a: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 80264d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 80264e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 802650: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 802652: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802655: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 802658: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80265b: mov eax, edi */
  eax = edi;
/* 80265d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 80265e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 802660: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 802663: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 802665: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802668: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80266a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80266c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80266f: mov eax, esi */
  eax = esi;
/* 802671: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 802672: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 802676: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 802679: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 80267b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 80267d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802680: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 802683: mov eax, ecx */
  eax = ecx;
/* 802685: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 802686: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 80268a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 80268c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80268f: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 802691: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 802694: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 80269a: fsubr dword ptr [ebp - 0x30] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd0u))) - ST0;
/* 80269d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8026a1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8026a4: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 8026a7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8026aa: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x8026afu); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 8026af: jmp 0x8026fa */
  goto L_8026fa;
L_8026b1: /* 8026b1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8026b4: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8026b7: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8026bd: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8026c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8026c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8026c2: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8026c5: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8026c9: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 8026cf: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8026d2: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8026d8: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8026dc: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8026df: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 8026e5: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8026e9: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8026ec: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 8026f2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8026f5: call 0x6c40a2 */
  esp -= 4; W32(esp, 0x8026fau); SPILL(); f_6c40a2(); if (g_unwind) return; RELOAD();
L_8026fa: /* 8026fa: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 802700: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x802705u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
/* 802705: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 802708: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 80270b: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 802711: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802713: je 0x80271c */
  if (zf) goto L_80271c;
L_802715: /* 802715: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802717: call 0x6c1ab9 */
  esp -= 4; W32(esp, 0x80271cu); SPILL(); f_6c1ab9(); if (g_unwind) return; RELOAD();
L_80271c: /* 80271c: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 802722: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 802726: call 0x6caac4 */
  esp -= 4; W32(esp, 0x80272bu); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 80272b: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 80272e: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 802734: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 802737: je 0x80276c */
  if (zf) goto L_80276c;
L_802739: /* 802739: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 80273b: mov ecx, edi */
  ecx = edi;
/* 80273d: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x802743u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802743: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802745: je 0x80276c */
  if (zf) goto L_80276c;
L_802747: /* 802747: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 802749: mov ecx, edi */
  ecx = edi;
/* 80274b: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x802751u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802751: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 802757: mov edx, dword ptr [ecx + 0x15220] */
  edx = R32((uint32_t)(ecx + 0x15220u));
/* 80275d: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 802762: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 802763: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802764: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x802769u); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 802769: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80276c: /* 80276c: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 802772: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 802776: call 0x6cadcb */
  esp -= 4; W32(esp, 0x80277bu); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 80277b: lea ecx, [ebp - 0x128] */
  ecx = (uint32_t)(ebp + 0xfffffed8u);
/* 802781: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 802785: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x80278bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 80278b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80278e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80278f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 802790: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 802797: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 802798: mov esp, ebp */
  esp = ebp;
/* 80279a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80279b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_80279e(void) {
  LOAD_REGS();
L_80279e: /* 80279e: mov eax, dword ptr [ebp - 0xe8] */
  eax = R32((uint32_t)(ebp + 0xffffff18u));
/* 8027a4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8027a9: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8027af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8027b0: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 8027b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8027bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8027bb(); return;
}

void f_8027bb(void) {
  LOAD_REGS();
L_8027bb: /* 8027bb: push 0xa12954 */
  { uint32_t v = 0xa12954u; esp -= 4; W32(esp, v); }
/* 8027c0: push 0xae0dfc */
  { uint32_t v = 0xae0dfcu; esp -= 4; W32(esp, v); }
/* 8027c5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8027cbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8027cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8027ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8027d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8027d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8027d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8027d7: guest_badaddr(0x8027d7); return;
}

void f_802b90(void) {
  LOAD_REGS();
L_802b90: /* 802b90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 802b91: mov ebp, esp */
  ebp = esp;
/* 802b93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 802b95: push 0x9d1ff0 */
  { uint32_t v = 0x9d1ff0u; esp -= 4; W32(esp, v); }
/* 802b9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 802ba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802ba1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 802ba8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 802bab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 802bac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802bad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 802bb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 802bb1: mov ecx, esi */
  ecx = esi;
/* 802bb3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 802bb6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 802bbd: call dword ptr [0xcfa430] */
  esp -= 4; W32(esp, 0x802bc3u); SPILL(); f_4e14fb(); if (g_unwind) return; /* Core!?IsTrans@FArchive@@QAEHXZ */ RELOAD();
/* 802bc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802bc5: jne 0x802bd4 */
  if (!zf) goto L_802bd4;
L_802bc7: /* 802bc7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 802bca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802bcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802bcc: call 0x6c1505 */
  esp -= 4; W32(esp, 0x802bd1u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 802bd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_802bd4: /* 802bd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 802bd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 802bd8: mov eax, esi */
  eax = esi;
/* 802bda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 802bdb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 802be2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 802be3: mov esp, ebp */
  esp = ebp;
/* 802be5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 802be6: ret  */
  esp += 4; SPILL(); return;
}

void f_802be7(void) {
  LOAD_REGS();
L_802be7: /* 802be7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 802bea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 802bef: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 802bf2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 802bf3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 802bf6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x802bfbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_802bfb(); return;
}

void f_802bfb(void) {
  LOAD_REGS();
L_802bfb: /* 802bfb: push 0xa12978 */
  { uint32_t v = 0xa12978u; esp -= 4; W32(esp, v); }
/* 802c00: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 802c05: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x802c0bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 802c0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802c0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802c10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802c12: call 0x99caf8 */
  esp -= 4; W32(esp, 0x802c17u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_802c17: guest_badaddr(0x802c17); return;
}

void f_802c50(void) {
  LOAD_REGS();
L_802c50: /* 802c50: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 802c55: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 802c57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802c59: je 0x802c7e */
  if (zf) goto L_802c7e;
L_802c5b: /* 802c5b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 802c5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802c5e: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 802c62: push 0x6c62f8 */
  { uint32_t v = 0x6c62f8u; esp -= 4; W32(esp, v); }
/* 802c67: push 0x6c181b */
  { uint32_t v = 0x6c181bu; esp -= 4; W32(esp, v); }
/* 802c6c: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 802c6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802c70: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 802c72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802c73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802c74: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 802c77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802c78: mov ecx, eax */
  ecx = eax;
/* 802c7a: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x802c7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 802c7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_802c7e: /* 802c7e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_802ca0(void) {
  LOAD_REGS();
L_802ca0: /* 802ca0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 802ca2: push 0x9d2009 */
  { uint32_t v = 0x9d2009u; esp -= 4; W32(esp, v); }
/* 802ca7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 802cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802cae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 802cb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802cb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802cb7: mov esi, ecx */
  esi = ecx;
/* 802cb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 802cbd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 802cc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802cc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802cc3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 802ccb: call 0x6cbc30 */
  esp -= 4; W32(esp, 0x802cd0u); SPILL(); f_6cbc30(); if (g_unwind) return; RELOAD();
/* 802cd0: mov ecx, esi */
  ecx = esi;
/* 802cd2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 802cda: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x802ce0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 802ce0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 802ce4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 802ce5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 802cec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802cef: ret  */
  esp += 4; SPILL(); return;
}

void f_802d10(void) {
  LOAD_REGS();
L_802d10: /* 802d10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 802d11: mov ebp, esp */
  ebp = esp;
/* 802d13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 802d15: push 0x9d2020 */
  { uint32_t v = 0x9d2020u; esp -= 4; W32(esp, v); }
/* 802d1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 802d20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802d21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 802d28: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 802d2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 802d2c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 802d2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802d30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 802d31: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 802d34: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 802d37: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* 802d3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 802d3d: mov ecx, edi */
  ecx = edi;
/* 802d3f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 802d46: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x802d4cu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 802d4c: mov ecx, ebx */
  ecx = ebx;
/* 802d4e: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x802d54u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 802d54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 802d56: je 0x802d9e */
  if (zf) goto L_802d9e;
L_802d58: /* 802d58: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 802d5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802d5c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 802d5d: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x802d63u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 802d63: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 802d66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802d69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802d6a: mov ecx, edi */
  ecx = edi;
/* 802d6c: call 0x6c68a2 */
  esp -= 4; W32(esp, 0x802d71u); SPILL(); f_6c68a2(); if (g_unwind) return; RELOAD();
/* 802d71: xor esi, esi */
  esi = 0;
L_802d73: /* 802d73: cmp esi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 802d76: jge 0x802dcc */
  if ((sf == of)) goto L_802dcc;
L_802d78: /* 802d78: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* 802d7d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 802d7f: mov ecx, edi */
  ecx = edi;
/* 802d81: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x802d87u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 802d87: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 802d89: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 802d8c: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 802d8f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 802d91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802d92: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 802d93: call 0x6c85ee */
  esp -= 4; W32(esp, 0x802d98u); SPILL(); f_6c85ee(); if (g_unwind) return; RELOAD();
/* 802d98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802d9b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 802d9c: jmp 0x802d73 */
  goto L_802d73;
L_802d9e: /* 802d9e: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 802da1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802da2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 802da3: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x802da9u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 802da9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802dac: xor esi, esi */
  esi = 0;
/* 802dae: mov edi, edi */
  edi = edi;
L_802db0: /* 802db0: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 802db3: jge 0x802dcc */
  if ((sf == of)) goto L_802dcc;
L_802db5: /* 802db5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 802db7: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 802dba: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 802dbd: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 802dbf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 802dc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 802dc1: call 0x6c85ee */
  esp -= 4; W32(esp, 0x802dc6u); SPILL(); f_6c85ee(); if (g_unwind) return; RELOAD();
/* 802dc6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802dc9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 802dca: jmp 0x802db0 */
  goto L_802db0;
L_802dcc: /* 802dcc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 802dcf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 802dd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 802dd1: mov eax, ebx */
  eax = ebx;
/* 802dd3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 802dda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 802ddb: mov esp, ebp */
  esp = ebp;
/* 802ddd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 802dde: ret  */
  esp += 4; SPILL(); return;
}

void f_802ddf(void) {
  LOAD_REGS();
L_802ddf: /* 802ddf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 802de2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 802de7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 802dea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802deb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 802dee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x802df3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_802df3(); return;
}

void f_802df3(void) {
  LOAD_REGS();
L_802df3: /* 802df3: push 0xa1299c */
  { uint32_t v = 0xa1299cu; esp -= 4; W32(esp, v); }
/* 802df8: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 802dfd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x802e03u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 802e03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802e06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802e08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802e0a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x802e0fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_802e0f: guest_badaddr(0x802e0f); return;
}

void f_802e50(void) {
  LOAD_REGS();
L_802e50: /* 802e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 802e51: mov ebp, esp */
  ebp = esp;
/* 802e53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 802e55: push 0x9d2030 */
  { uint32_t v = 0x9d2030u; esp -= 4; W32(esp, v); }
/* 802e5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 802e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802e61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 802e68: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 802e6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 802e6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802e6d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 802e70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 802e71: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 802e74: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 802e77: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 802e79: xor ebx, ebx */
  ebx = 0;
/* 802e7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802e7c: mov ecx, edi */
  ecx = edi;
/* 802e7e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 802e81: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x802e87u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 802e87: mov ecx, esi */
  ecx = esi;
/* 802e89: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x802e8fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 802e8f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 802e91: je 0x802eec */
  if (zf) goto L_802eec;
L_802e93: /* 802e93: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 802e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802e97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802e98: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x802e9eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 802e9e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 802ea1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802ea4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802ea5: mov ecx, edi */
  ecx = edi;
/* 802ea7: call 0x6c9273 */
  esp -= 4; W32(esp, 0x802eacu); SPILL(); f_6c9273(); if (g_unwind) return; RELOAD();
/* 802eac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_802eb0: /* 802eb0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 802eb3: jge 0x802f20 */
  if ((sf == of)) goto L_802f20;
L_802eb5: /* 802eb5: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 802eb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 802eb9: mov ecx, edi */
  ecx = edi;
/* 802ebb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x802ec1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 802ec1: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 802ec3: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 802ec6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 802ec8: mov esi, eax */
  esi = eax;
/* 802eca: je 0x802ed7 */
  if (zf) goto L_802ed7;
L_802ecc: /* 802ecc: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 802ecf: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x802ed5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 802ed5: jmp 0x802ed9 */
  goto L_802ed9;
L_802ed7: /* 802ed7: xor esi, esi */
  esi = 0;
L_802ed9: /* 802ed9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 802edc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802edd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 802ede: call 0x6c1e74 */
  esp -= 4; W32(esp, 0x802ee3u); SPILL(); f_6c1e74(); if (g_unwind) return; RELOAD();
/* 802ee3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 802ee6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802ee9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 802eea: jmp 0x802eb0 */
  goto L_802eb0;
L_802eec: /* 802eec: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 802eef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 802ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802ef1: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x802ef7u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 802ef7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802efa: xor esi, esi */
  esi = 0;
/* 802efc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_802f00: /* 802f00: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 802f02: jge 0x802f1d */
  if ((sf == of)) goto L_802f1d;
L_802f04: /* 802f04: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 802f06: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 802f09: mov eax, esi */
  eax = esi;
/* 802f0b: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 802f0e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 802f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802f11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 802f12: call 0x6c1e74 */
  esp -= 4; W32(esp, 0x802f17u); SPILL(); f_6c1e74(); if (g_unwind) return; RELOAD();
/* 802f17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802f1a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 802f1b: jmp 0x802f00 */
  goto L_802f00;
L_802f1d: /* 802f1d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_802f20: /* 802f20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 802f23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 802f24: mov eax, esi */
  eax = esi;
/* 802f26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 802f27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 802f2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 802f2f: mov esp, ebp */
  esp = ebp;
/* 802f31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 802f32: ret  */
  esp += 4; SPILL(); return;
}

void f_802f33(void) {
  LOAD_REGS();
L_802f33: /* 802f33: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 802f36: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 802f3b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 802f3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 802f3f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 802f42: call 0x99caf8 */
  esp -= 4; W32(esp, 0x802f47u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_802f47(); return;
}

void f_802f47(void) {
  LOAD_REGS();
L_802f47: /* 802f47: push 0xa129b4 */
  { uint32_t v = 0xa129b4u; esp -= 4; W32(esp, v); }
/* 802f4c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 802f51: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x802f57u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 802f57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 802f5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802f5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 802f5e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x802f63u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_802f63: guest_badaddr(0x802f63); return;
}

void f_802fc0(void) {
  LOAD_REGS();
L_802fc0: /* 802fc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 802fc1: mov esi, ecx */
  esi = ecx;
/* 802fc3: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 802fc6: call dword ptr [0xcfaac8] */
  esp -= 4; W32(esp, 0x802fccu); SPILL(); f_4e2b35(); if (g_unwind) return; /* Core!??0FSphere@@QAE@XZ */ RELOAD();
/* 802fcc: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 802fcf: call dword ptr [0xcfaac8] */
  esp -= 4; W32(esp, 0x802fd5u); SPILL(); f_4e2b35(); if (g_unwind) return; /* Core!??0FSphere@@QAE@XZ */ RELOAD();
/* 802fd5: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 802fd8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x802fdeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 802fde: mov eax, esi */
  eax = esi;
/* 802fe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 802fe1: ret  */
  esp += 4; SPILL(); return;
}

void f_803000(void) {
  LOAD_REGS();
L_803000: /* 803000: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 803001: mov ebp, esp */
  ebp = esp;
/* 803003: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 803005: push 0x9d2040 */
  { uint32_t v = 0x9d2040u; esp -= 4; W32(esp, v); }
/* 80300a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 803010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803011: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 803018: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80301b: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 803020: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 803021: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803022: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 803025: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 803026: lea edi, [ecx + 0x98] */
  edi = (uint32_t)(ecx + 0x98u);
/* 80302c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80302e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803030: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 803033: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80303a: je 0x803057 */
  if (zf) goto L_803057;
L_80303c: /* 80303c: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 80303f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 803041: push 0x6c62f8 */
  { uint32_t v = 0x6c62f8u; esp -= 4; W32(esp, v); }
/* 803046: push 0x6c181b */
  { uint32_t v = 0x6c181bu; esp -= 4; W32(esp, v); }
/* 80304b: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 80304d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80304f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 803051: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803052: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 803053: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803054: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x803057u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_803057: /* 803057: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 803059: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 80305c: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 80305f: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 803061: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803063: je 0x8030a5 */
  if (zf) goto L_8030a5;
L_803065: /* 803065: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 803068: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80306a: je 0x8030a5 */
  if (zf) goto L_8030a5;
L_80306c: /* 80306c: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 803072: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 803075: mov edx, dword ptr [0xcfa3d4] */
  edx = R32((uint32_t)(0xcfa3d4u));
/* 80307b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 80307d: mov esi, dword ptr [esi + 0x18] */
  esi = R32((uint32_t)(esi + 0x18u));
/* 803080: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 803083: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803085: je 0x8030a5 */
  if (zf) goto L_8030a5;
L_803087: /* 803087: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 803089: push 0x6c51fa */
  { uint32_t v = 0x6c51fau; esp -= 4; W32(esp, v); }
/* 80308e: push 0x6c874c */
  { uint32_t v = 0x6c874cu; esp -= 4; W32(esp, v); }
/* 803093: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 803098: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80309a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80309c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80309d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80309e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8030a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8030a2: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8030a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8030a5: /* 8030a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8030a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8030a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8030aa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8030b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8030b2: mov esp, ebp */
  esp = ebp;
/* 8030b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8030b5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8030b8(void) {
  LOAD_REGS();
L_8030b8: /* 8030b8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8030bb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8030c0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8030c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8030c4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8030c7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8030ccu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8030cc(); return;
}

void f_8030cc(void) {
  LOAD_REGS();
L_8030cc: /* 8030cc: push 0xa129cc */
  { uint32_t v = 0xa129ccu; esp -= 4; W32(esp, v); }
/* 8030d1: push 0xae0cf8 */
  { uint32_t v = 0xae0cf8u; esp -= 4; W32(esp, v); }
/* 8030d6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8030dcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8030dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8030df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8030e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8030e3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8030e8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8030e8: guest_badaddr(0x8030e8); return;
}

void f_803130(void) {
  LOAD_REGS();
L_803130: /* 803130: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 803131: mov ebp, esp */
  ebp = esp;
/* 803133: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 803135: push 0x9d2050 */
  { uint32_t v = 0x9d2050u; esp -= 4; W32(esp, v); }
/* 80313a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 803140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803141: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 803148: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80314b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80314c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 80314f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803150: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 803151: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 803154: mov edi, ecx */
  edi = ecx;
/* 803156: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80315d: xor esi, esi */
  esi = 0;
/* 80315f: nop  */
L_803160: /* 803160: cmp esi, dword ptr [edi + 0x9c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803166: jge 0x8031a4 */
  if ((sf == of)) goto L_8031a4;
L_803168: /* 803168: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 803169: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80316a: mov ecx, edi */
  ecx = edi;
/* 80316c: call 0x6c760d */
  esp -= 4; W32(esp, 0x803171u); SPILL(); f_6c760d(); if (g_unwind) return; RELOAD();
/* 803171: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 803172: jmp 0x803160 */
  goto L_803160;
L_8031a4: /* 8031a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8031a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8031a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8031a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8031b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8031b1: mov esp, ebp */
  esp = ebp;
/* 8031b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8031b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_803174(void) {
  LOAD_REGS();
L_803174: /* 803174: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 803177: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80317c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80317f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 803180: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 803183: call 0x99caf8 */
  esp -= 4; W32(esp, 0x803188u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_803188(); return;
}

void f_803188(void) {
  LOAD_REGS();
L_803188: /* 803188: push 0xa129fc */
  { uint32_t v = 0xa129fcu; esp -= 4; W32(esp, v); }
/* 80318d: push 0xae0d00 */
  { uint32_t v = 0xae0d00u; esp -= 4; W32(esp, v); }
/* 803192: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x803198u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 803198: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80319b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80319d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80319f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8031a4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8031a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8031a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8031a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8031a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8031b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8031b1: mov esp, ebp */
  esp = ebp;
/* 8031b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8031b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8031f0(void) {
  LOAD_REGS();
L_8031f0: /* 8031f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8031f1: mov ebp, esp */
  ebp = esp;
/* 8031f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8031f5: push 0x9d2060 */
  { uint32_t v = 0x9d2060u; esp -= 4; W32(esp, v); }
/* 8031fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 803200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803201: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 803208: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80320b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80320c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 80320f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803210: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 803211: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 803214: mov edi, ecx */
  edi = ecx;
/* 803216: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80321d: xor esi, esi */
  esi = 0;
/* 80321f: nop  */
L_803220: /* 803220: cmp esi, dword ptr [edi + 0x9c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803226: jge 0x803279 */
  if ((sf == of)) goto L_803279;
L_803228: /* 803228: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 80322e: mov eax, esi */
  eax = esi;
/* 803230: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 803233: test dword ptr [ecx + eax + 4], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax + 0x4u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80323b: je 0x803246 */
  if (zf) goto L_803246;
L_80323d: /* 80323d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80323e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80323f: mov ecx, edi */
  ecx = edi;
/* 803241: call 0x6c760d */
  esp -= 4; W32(esp, 0x803246u); SPILL(); f_6c760d(); if (g_unwind) return; RELOAD();
L_803246: /* 803246: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 803247: jmp 0x803220 */
  goto L_803220;
L_803279: /* 803279: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80327c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80327d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80327e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 803285: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 803286: mov esp, ebp */
  esp = ebp;
/* 803288: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 803289: ret 4 */
  esp += 8; SPILL(); return;
}

void f_803249(void) {
  LOAD_REGS();
L_803249: /* 803249: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80324c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 803251: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 803254: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803255: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 803258: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80325du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80325d(); return;
}

void f_80325d(void) {
  LOAD_REGS();
L_80325d: /* 80325d: push 0xa12a34 */
  { uint32_t v = 0xa12a34u; esp -= 4; W32(esp, v); }
/* 803262: push 0xae0d08 */
  { uint32_t v = 0xae0d08u; esp -= 4; W32(esp, v); }
/* 803267: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80326du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80326d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803270: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 803272: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 803274: call 0x99caf8 */
  esp -= 4; W32(esp, 0x803279u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 803279: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80327c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80327d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80327e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 803285: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 803286: mov esp, ebp */
  esp = ebp;
/* 803288: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 803289: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8032c0(void) {
  LOAD_REGS();
L_8032c0: /* 8032c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8032c1: mov ebp, esp */
  ebp = esp;
/* 8032c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8032c5: push 0x9d20a4 */
  { uint32_t v = 0x9d20a4u; esp -= 4; W32(esp, v); }
/* 8032ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8032d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8032d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8032d8: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8032de: mov edx, dword ptr [ecx + 0x98] */
  edx = R32((uint32_t)(ecx + 0x98u));
/* 8032e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8032e5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8032e8: imul ebx, ebx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x78u);
  ebx = (uint32_t)r;
  }
/* 8032eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8032ec: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8032ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8032f0: mov edi, dword ptr [ecx + 0x58] */
  edi = R32((uint32_t)(ecx + 0x58u));
/* 8032f3: mov eax, dword ptr [ebx + edi + 0x1c] */
  eax = R32((uint32_t)(ebx + edi + 0x1cu));
/* 8032f7: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8032f9: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8032fc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8032fe: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 803301: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 803303: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 803306: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 803309: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80330c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80330d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 803313: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80331a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 80331d: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x803323u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 803323: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 803325: xor esi, esi */
  esi = 0;
/* 803327: fild dword ptr [ecx + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x348u)); FPUSH(v); }
/* 80332d: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 803333: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_803336: /* 803336: cmp esi, dword ptr [ebx + 0x70] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803339: jge 0x803395 */
  if ((sf == of)) goto L_803395;
L_80333b: /* 80333b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 80333e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 803340: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 803346: mov edx, dword ptr [ebx + 0x6c] */
  edx = R32((uint32_t)(ebx + 0x6cu));
/* 803349: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 80334f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 803352: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 803354: lea edi, [ebx + 0x6c] */
  edi = (uint32_t)(ebx + 0x6cu);
/* 803357: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80335a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 80335d: call 0x6ca46b */
  esp -= 4; W32(esp, 0x803362u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 803362: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803364: jne 0x803392 */
  if (!zf) goto L_803392;
L_803366: /* 803366: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 803368: mov ebx, dword ptr [ecx + esi*4] */
  ebx = R32((uint32_t)(ecx + esi*4));
/* 80336b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80336d: je 0x803384 */
  if (zf) goto L_803384;
L_80336f: /* 80336f: mov ecx, ebx */
  ecx = ebx;
/* 803371: call 0x6c3684 */
  esp -= 4; W32(esp, 0x803376u); SPILL(); f_6c3684(); if (g_unwind) return; RELOAD();
/* 803376: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 80337c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 80337e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 803380: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 803381: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x803384u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_803384: /* 803384: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 803386: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803387: mov ecx, edi */
  ecx = edi;
/* 803389: call 0x6c1cfd */
  esp -= 4; W32(esp, 0x80338eu); SPILL(); f_6c1cfd(); if (g_unwind) return; RELOAD();
/* 80338e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 803391: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_803392: /* 803392: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 803393: jmp 0x803336 */
  goto L_803336;
L_803395: /* 803395: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 80339b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80339d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80339f: push 0xae0e04 */
  { uint32_t v = 0xae0e04u; esp -= 4; W32(esp, v); }
/* 8033a4: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 8033a6: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8033a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8033a8: mov edi, eax */
  edi = eax;
/* 8033aa: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8033ac: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8033af: je 0x8033da */
  if (zf) goto L_8033da;
L_8033b1: /* 8033b1: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 8033b4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8033bau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8033ba: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 8033bd: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8033c1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8033c7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8033c7: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 8033ca: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8033ce: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8033d4u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8033d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8033d8: jmp 0x8033dc */
  goto L_8033dc;
L_8033da: /* 8033da: xor edi, edi */
  edi = 0;
L_8033dc: /* 8033dc: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8033df: xor ebx, ebx */
  ebx = 0;
L_8033e1: /* 8033e1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8033e4: movzx ecx, byte ptr [eax + 0x56] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x56u)));
/* 8033e8: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8033ea: jge 0x803516 */
  if ((sf == of)) goto L_803516;
L_8033f0: /* 8033f0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8033f2: lea esi, [edi + 8] */
  esi = (uint32_t)(edi + 0x8u);
/* 8033f5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8033f7: mov ecx, esi */
  ecx = esi;
/* 8033f9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8033ffu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8033ff: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 803405: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 803407: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 80340a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80340c: mov ecx, eax */
  ecx = eax;
/* 80340e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 803411: movzx edx, byte ptr [eax + 0x56] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x56u)));
/* 803415: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 803418: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80341a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80341d: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 803420: mov edx, dword ptr [edx + 0x88] */
  edx = R32((uint32_t)(edx + 0x88u));
/* 803426: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 803428: mov eax, dword ptr [esi + eax*8 - 8] */
  eax = R32((uint32_t)(esi + eax*8 + 0xfffffff8u));
/* 80342c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 80342f: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 803432: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 803434: mov edx, ecx */
  edx = ecx;
/* 803436: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 803438: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 80343b: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 80343e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 803441: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 803444: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 803447: mov edx, dword ptr [edx + 0x15c] */
  edx = R32((uint32_t)(edx + 0x15cu));
/* 80344d: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 803450: jne 0x80348b */
  if (!zf) goto L_80348b;
L_803452: /* 803452: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 803455: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 803457: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 80345a: fchs  */
  ST0 = -ST0;
/* 80345c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 80345f: fchs  */
  ST0 = -ST0;
/* 803461: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 803464: fchs  */
  ST0 = -ST0;
/* 803466: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 803469: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80346b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 80346e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 803470: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 803472: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 803474: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 803476: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 80347c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80347e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 803481: je 0x80348b */
  if (zf) goto L_80348b;
L_803483: /* 803483: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 803485: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_80348b: /* 80348b: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80348e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 803494: je 0x803509 */
  if (zf) goto L_803509;
L_803496: /* 803496: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 803499: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80349b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 80349d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 80349f: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 8034a5: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8034aa: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8034ad: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8034b0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8034b3: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8034b6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8034b8: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8034bb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8034bd: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8034c0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8034c2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8034c4: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8034c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8034c9: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8034cc: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8034d2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8034d8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8034da: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8034dd: jp 0x8034f4 */
  if (pf) goto L_8034f4;
L_8034df: /* 8034df: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8034e1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8034e2: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8034e8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8034ea: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 8034ed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8034ef: jmp 0x8033e1 */
  goto L_8033e1;
L_8034f4: /* 8034f4: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8034fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8034fc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8034ff: jnp 0x803509 */
  if (!pf) goto L_803509;
L_803501: /* 803501: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 803503: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_803509: /* 803509: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 80350b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80350c: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 80350f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 803511: jmp 0x8033e1 */
  goto L_8033e1;
L_803516: /* 803516: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 803519: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* 803520: mov dword ptr [edi + 0x2c], 0 */
  W32((uint32_t)(edi + 0x2cu), 0x0u);
/* 803527: mov al, byte ptr [ecx + 0x20] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x20u))) & 0xffu);
/* 80352a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80352c: je 0x80353b */
  if (zf) goto L_80353b;
L_80352e: /* 80352e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 803531: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 803533: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 803536: jmp 0x8035db */
  goto L_8035db;
L_80353b: /* 80353b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 80353e: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 803540: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803542: je 0x803558 */
  if (zf) goto L_803558;
L_803544: /* 803544: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 803549: mov ecx, esi */
  ecx = esi;
/* 80354b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x803551u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 803551: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803553: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 803556: jne 0x80355f */
  if (!zf) goto L_80355f;
L_803558: /* 803558: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_80355f: /* 80355f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803561: je 0x803578 */
  if (zf) goto L_803578;
L_803563: /* 803563: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 803568: mov ecx, esi */
  ecx = esi;
/* 80356a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x803570u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 803570: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803572: je 0x803578 */
  if (zf) goto L_803578;
L_803574: /* 803574: mov ebx, esi */
  ebx = esi;
/* 803576: jmp 0x80357a */
  goto L_80357a;
L_803578: /* 803578: xor ebx, ebx */
  ebx = 0;
L_80357a: /* 80357a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80357c: je 0x803593 */
  if (zf) goto L_803593;
L_80357e: /* 80357e: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 803583: mov ecx, esi */
  ecx = esi;
/* 803585: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x80358bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 80358b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80358d: je 0x803593 */
  if (zf) goto L_803593;
L_80358f: /* 80358f: mov eax, esi */
  eax = esi;
/* 803591: jmp 0x803595 */
  goto L_803595;
L_803593: /* 803593: xor eax, eax */
  eax = 0;
L_803595: /* 803595: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803597: je 0x8035a6 */
  if (zf) goto L_8035a6;
L_803599: /* 803599: mov ecx, dword ptr [ebx + 0x7c] */
  ecx = R32((uint32_t)(ebx + 0x7cu));
/* 80359c: test cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80359f: je 0x8035a6 */
  if (zf) goto L_8035a6;
L_8035a1: /* 8035a1: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 8035a4: jmp 0x8035db */
  goto L_8035db;
L_8035a6: /* 8035a6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8035a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8035ab: je 0x8035c2 */
  if (zf) goto L_8035c2;
L_8035ad: /* 8035ad: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 8035b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8035b2: je 0x8035b7 */
  if (zf) goto L_8035b7;
L_8035b4: /* 8035b4: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
L_8035b7: /* 8035b7: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* 8035ba: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8035bd: mov dword ptr [edi + 0x2c], edx */
  W32((uint32_t)(edi + 0x2cu), edx);
/* 8035c0: jmp 0x8035db */
  goto L_8035db;
L_8035c2: /* 8035c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8035c4: je 0x8035db */
  if (zf) goto L_8035db;
L_8035c6: /* 8035c6: cmp byte ptr [eax + 0x3c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8035ca: jne 0x8035db */
  if (!zf) goto L_8035db;
L_8035cc: /* 8035cc: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 8035cf: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8035d2: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8035d5: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8035d8: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
L_8035db: /* 8035db: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8035de: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8035e0: je 0x8036e6 */
  if (zf) goto L_8036e6;
L_8035e6: /* 8035e6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8035e9: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8035ec: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8035ef: mov ebx, dword ptr [esi + 0x88] */
  ebx = R32((uint32_t)(esi + 0x88u));
/* 8035f5: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8035f8: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 8035fb: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8035fd: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 803600: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 803603: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 803606: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 803609: mov eax, dword ptr [edx + 0x10] */
  eax = R32((uint32_t)(edx + 0x10u));
/* 80360c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 80360f: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 803612: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 803615: lea ebx, [eax + edx*4] */
  ebx = (uint32_t)(eax + edx*4);
/* 803618: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80361a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x80361du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80361d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 803620: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 803623: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 803624: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 803627: mov ecx, ebx */
  ecx = ebx;
/* 803629: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 80362c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80362d: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x803633u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 803633: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 803636: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 803639: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 80363c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 80363f: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 803642: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 803645: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 803647: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x80364au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80364a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 80364d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 803650: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 803651: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 803654: mov ecx, esi */
  ecx = esi;
/* 803656: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 803659: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80365a: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x803660u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 803660: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 803663: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 803665: lea esi, [edi + 0x14] */
  esi = (uint32_t)(edi + 0x14u);
/* 803668: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803669: mov ecx, esi */
  ecx = esi;
/* 80366b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x803671u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 803671: xor edx, edx */
  edx = 0;
L_803673: /* 803673: cmp edx, dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803676: jge 0x8036e6 */
  if ((sf == of)) goto L_8036e6;
L_803678: /* 803678: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 80367b: mov ecx, edx */
  ecx = edx;
/* 80367d: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 803680: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 803683: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 803685: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 803688: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 80368b: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 80368e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 803691: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 803693: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 803696: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 803698: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 80369b: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 80369e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8036a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8036a2: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8036a5: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8036a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8036a9: fstp dword ptr [eax + edx*8] */
  WF32((uint32_t)(eax + edx*8), ST0); FPOP();
/* 8036ac: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 8036af: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8036b1: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8036b3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8036b5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8036b7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8036b8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8036ba: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8036bd: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8036c0: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8036c3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8036c6: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8036c9: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8036cb: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8036ce: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8036d1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8036d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8036d5: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8036d8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8036da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8036dc: fstp dword ptr [ecx + edx*8 - 4] */
  WF32((uint32_t)(ecx + edx*8 + 0xfffffffcu), ST0); FPOP();
/* 8036e0: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8036e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8036e4: jmp 0x803673 */
  goto L_803673;
L_8036e6: /* 8036e6: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8036e9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8036eb: je 0x8039a6 */
  if (zf) goto L_8039a6;
L_8036f1: /* 8036f1: xor esi, esi */
  esi = 0;
L_8036f3: /* 8036f3: cmp esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8036f6: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8036f9: jge 0x8039a6 */
  if ((sf == of)) goto L_8039a6;
L_8036ff: /* 8036ff: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 803702: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 803704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803705: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 803708: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x80370eu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 80370e: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 803712: xor edx, edx */
  edx = 0;
L_803714: /* 803714: cmp edx, dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803717: jge 0x80374d */
  if ((sf == of)) goto L_80374d;
L_803719: /* 803719: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 80371c: mov ecx, edx */
  ecx = edx;
/* 80371e: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 803721: fld dword ptr [ecx + eax + 8] */
  { double v = F32((uint32_t)(ecx + eax + 0x8u)); FPUSH(v); }
/* 803725: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 803727: mov eax, esi */
  eax = esi;
/* 803729: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 80372c: fmul dword ptr [eax + ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + ebx + 0x8u)));
/* 803730: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 803732: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 803735: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 803736: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 803739: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80373b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 80373d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 80373f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 803741: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 803744: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 803747: fstp dword ptr [eax + edx*4 - 4] */
  WF32((uint32_t)(eax + edx*4 + 0xfffffffcu), ST0); FPOP();
/* 80374b: jmp 0x803714 */
  goto L_803714;
L_80374d: /* 80374d: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 803750: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 803751: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 803754: xor esi, esi */
  esi = 0;
L_803756: /* 803756: cmp esi, dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803759: jge 0x8038d9 */
  if ((sf == of)) goto L_8038d9;
L_80375f: /* 80375f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 803762: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 803765: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 803768: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 80376b: mov edx, ecx */
  edx = ecx;
/* 80376d: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 803770: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 803772: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 803774: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 803777: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 80377a: mov dword ptr [ebp - 0x78], edi */
  W32((uint32_t)(ebp + 0xffffff88u), edi);
/* 80377d: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 803780: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 803783: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 803786: mov edi, esi */
  edi = esi;
/* 803788: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 80378b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80378d: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 803790: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 803792: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 803798: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 80379b: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 8037a1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8037a4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8037a7: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8037aa: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8037ad: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 8037b0: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 8037b6: fld dword ptr [eax + ecx*4] */
  { double v = F32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 8037b9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8037bb: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8037bd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8037c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8037c5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8037c8: jp 0x8038c9 */
  if (pf) goto L_8038c9;
L_8037ce: /* 8037ce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8037d0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8037d2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8037d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8037d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8037d7: mov ecx, ebx */
  ecx = ebx;
/* 8037d9: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 8037db: fchs  */
  ST0 = -ST0;
/* 8037dd: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8037e0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8037e2: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x8037e8u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 8037e8: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 8037ee: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8037f0: fsub dword ptr [ebp - 0x74] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 8037f3: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8037f5: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 8037fb: fsub dword ptr [ebp - 0x78] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff88u)));
/* 8037fe: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 803804: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 803807: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 80380a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80380c: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 80380f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 803812: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 803815: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 803818: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 80381b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 80381e: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 803821: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 803824: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 803827: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 80382a: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 80382d: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 803830: fadd dword ptr [ebp - 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff84u)));
/* 803833: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 803836: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 803839: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 80383b: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 80383e: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 803841: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 803844: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 803847: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 80384a: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 80384d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 803850: fsub dword ptr [ebp - 0x70] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff90u)));
/* 803853: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 803855: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 803858: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 80385b: fadd dword ptr [ebp - 0x70] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff90u)));
/* 80385e: fstp dword ptr [eax + edi + 0xc] */
  WF32((uint32_t)(eax + edi + 0xcu), ST0); FPOP();
/* 803862: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 803865: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803867: je 0x8038a4 */
  if (zf) goto L_8038a4;
L_803869: /* 803869: mov edi, ecx */
  edi = ecx;
/* 80386b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 80386d: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 803870: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 803872: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803873: mov ecx, edi */
  ecx = edi;
/* 803875: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x80387bu); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 80387b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 80387d: fld dword ptr [eax + esi*8] */
  { double v = F32((uint32_t)(eax + esi*8)); FPUSH(v); }
/* 803880: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 803883: fsub dword ptr [eax + ecx*8] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx*8)));
/* 803886: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 803889: fadd dword ptr [eax + esi*8] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*8)));
/* 80388c: fstp dword ptr [eax + esi*8] */
  WF32((uint32_t)(eax + esi*8), ST0); FPOP();
/* 80388f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 803891: fld dword ptr [eax + esi*8 + 4] */
  { double v = F32((uint32_t)(eax + esi*8 + 0x4u)); FPUSH(v); }
/* 803895: fsub dword ptr [eax + ecx*8 + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx*8 + 0x4u)));
/* 803899: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 80389c: fadd dword ptr [eax + esi*8 + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*8 + 0x4u)));
/* 8038a0: fstp dword ptr [eax + esi*8 + 4] */
  WF32((uint32_t)(eax + esi*8 + 0x4u), ST0); FPOP();
L_8038a4: /* 8038a4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8038a6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8038a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8038a9: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8038ac: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x8038b2u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 8038b2: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8038b5: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8038b8: mov dword ptr [edx + esi*4], 0 */
  W32((uint32_t)(edx + esi*4), 0x0u);
/* 8038bf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8038c0: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8038c3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8038c4: jmp 0x803756 */
  goto L_803756;
L_8038c9: /* 8038c9: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8038cc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8038ce: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8038d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8038d3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8038d4: jmp 0x803756 */
  goto L_803756;
L_8038d9: /* 8038d9: xor esi, esi */
  esi = 0;
/* 8038db: xor eax, eax */
  eax = 0;
/* 8038dd: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_8038e0: /* 8038e0: cmp eax, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8038e3: jge 0x80398e */
  if ((sf == of)) goto L_80398e;
L_8038e9: /* 8038e9: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8038ec: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 8038ef: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8038f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8038f7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8038fa: jp 0x803981 */
  if (pf) goto L_803981;
L_803900: /* 803900: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 803902: jge 0x80391c */
  if ((sf == of)) goto L_80391c;
L_803904: /* 803904: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 803909: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 80390e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 803913: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x803919u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 803919: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80391c: /* 80391c: cmp esi, dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80391f: jle 0x803939 */
  if ((zf || sf != of)) goto L_803939;
L_803921: /* 803921: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 803926: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 80392b: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 803930: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x803936u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 803936: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_803939: /* 803939: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 80393c: lea ebx, [esi + 1] */
  ebx = (uint32_t)(esi + 0x1u);
/* 80393f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803941: jle 0x80395b */
  if ((zf || sf != of)) goto L_80395b;
L_803943: /* 803943: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 803948: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 80394d: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 803952: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x803958u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 803958: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80395b: /* 80395b: mov eax, esi */
  eax = esi;
/* 80395d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_803960: /* 803960: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803962: jge 0x803967 */
  if ((sf == of)) goto L_803967;
L_803964: /* 803964: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 803965: jmp 0x803960 */
  goto L_803960;
L_803967: /* 803967: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 803969: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80396b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80396c: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 80396f: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x803975u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 803975: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 803978: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 803979: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 80397c: jmp 0x8038e0 */
  goto L_8038e0;
L_803981: /* 803981: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 803984: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 803985: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 803986: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 803989: jmp 0x8038e0 */
  goto L_8038e0;
L_80398e: /* 80398e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 803991: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 803995: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x80399au); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 80399a: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80399d: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8039a0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8039a1: jmp 0x8036f3 */
  goto L_8036f3;
L_8039a6: /* 8039a6: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8039a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8039ab: jle 0x8039e3 */
  if ((zf || sf != of)) goto L_8039e3;
L_8039ad: /* 8039ad: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8039b0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8039b3: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8039b6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8039b7: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8039ba: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8039bc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8039bf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8039c1: mov ecx, esi */
  ecx = esi;
/* 8039c3: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8039c5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8039cbu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8039cb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8039cd: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 8039d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8039d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8039da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8039db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8039dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8039dd: mov esp, ebp */
  esp = ebp;
/* 8039df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8039e0: ret 0xc */
  esp += 16; SPILL(); return;
L_8039e3: /* 8039e3: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 8039e6: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 8039e9: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8039ed: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8039f3u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8039f3: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 8039f6: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8039fa: call 0x6cb555 */
  esp -= 4; W32(esp, 0x8039ffu); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 8039ff: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 803a02: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 803a06: call 0x6cae43 */
  esp -= 4; W32(esp, 0x803a0bu); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 803a0b: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 803a10: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 803a12: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 803a14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 803a15: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x803a18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 803a18: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 803a1b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 803a1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 803a1d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 803a24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 803a25: mov esp, ebp */
  esp = ebp;
/* 803a27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 803a28: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_803a2b(void) {
  LOAD_REGS();
L_803a2b: /* 803a2b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 803a2e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 803a33: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 803a36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 803a37: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 803a3a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x803a3fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_803a3f(); return;
}

void f_803a3f(void) {
  LOAD_REGS();
L_803a3f: /* 803a3f: push 0xa12a78 */
  { uint32_t v = 0xa12a78u; esp -= 4; W32(esp, v); }
/* 803a44: push 0xae0e38 */
  { uint32_t v = 0xae0e38u; esp -= 4; W32(esp, v); }
/* 803a49: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x803a4fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 803a4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803a52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 803a54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 803a56: call 0x99caf8 */
  esp -= 4; W32(esp, 0x803a5bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_803a5b: guest_badaddr(0x803a5b); return;
}

void f_803c50(void) {
  LOAD_REGS();
L_803c50: /* 803c50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 803c51: mov ebp, esp */
  ebp = esp;
/* 803c53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 803c55: push 0x9d20c0 */
  { uint32_t v = 0x9d20c0u; esp -= 4; W32(esp, v); }
/* 803c5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 803c60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803c61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 803c68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 803c6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 803c6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803c6d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 803c70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 803c71: mov ecx, esi */
  ecx = esi;
/* 803c73: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 803c76: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 803c7d: call dword ptr [0xcfa430] */
  esp -= 4; W32(esp, 0x803c83u); SPILL(); f_4e14fb(); if (g_unwind) return; /* Core!?IsTrans@FArchive@@QAEHXZ */ RELOAD();
/* 803c83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 803c85: jne 0x803c94 */
  if (!zf) goto L_803c94;
L_803c87: /* 803c87: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 803c8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803c8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803c8c: call 0x6c1b9a */
  esp -= 4; W32(esp, 0x803c91u); SPILL(); f_6c1b9a(); if (g_unwind) return; RELOAD();
/* 803c91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_803c94: /* 803c94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 803c97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 803c98: mov eax, esi */
  eax = esi;
/* 803c9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 803c9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 803ca2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 803ca3: mov esp, ebp */
  esp = ebp;
/* 803ca5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 803ca6: ret  */
  esp += 4; SPILL(); return;
}

void f_803ca7(void) {
  LOAD_REGS();
L_803ca7: /* 803ca7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 803caa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 803caf: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 803cb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 803cb3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 803cb6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x803cbbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_803cbb(); return;
}

void f_803cbb(void) {
  LOAD_REGS();
L_803cbb: /* 803cbb: push 0xa12ab4 */
  { uint32_t v = 0xa12ab4u; esp -= 4; W32(esp, v); }
/* 803cc0: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 803cc5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x803ccbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 803ccb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803cce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 803cd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 803cd2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x803cd7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_803cd7: guest_badaddr(0x803cd7); return;
}

void f_803d10(void) {
  LOAD_REGS();
L_803d10: /* 803d10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 803d11: mov ebp, esp */
  ebp = esp;
/* 803d13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 803d15: push 0x9d20d0 */
  { uint32_t v = 0x9d20d0u; esp -= 4; W32(esp, v); }
/* 803d1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 803d20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803d21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 803d28: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 803d2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 803d2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803d2d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 803d30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 803d31: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 803d34: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 803d37: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 803d39: xor ebx, ebx */
  ebx = 0;
/* 803d3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803d3c: mov ecx, edi */
  ecx = edi;
/* 803d3e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 803d41: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x803d47u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 803d47: mov ecx, esi */
  ecx = esi;
/* 803d49: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x803d4fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 803d4f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 803d51: je 0x803dab */
  if (zf) goto L_803dab;
L_803d53: /* 803d53: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 803d56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803d57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803d58: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x803d5eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 803d5e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 803d61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803d64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 803d65: mov ecx, edi */
  ecx = edi;
/* 803d67: call 0x6cc1f8 */
  esp -= 4; W32(esp, 0x803d6cu); SPILL(); f_6cc1f8(); if (g_unwind) return; RELOAD();
/* 803d6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_803d70: /* 803d70: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803d73: jge 0x803de0 */
  if ((sf == of)) goto L_803de0;
L_803d75: /* 803d75: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 803d77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 803d79: mov ecx, edi */
  ecx = edi;
/* 803d7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x803d81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 803d81: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 803d84: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 803d86: je 0x803d9c */
  if (zf) goto L_803d9c;
L_803d88: /* 803d88: mov ecx, eax */
  ecx = eax;
/* 803d8a: call 0x6ca23b */
  esp -= 4; W32(esp, 0x803d8fu); SPILL(); f_6ca23b(); if (g_unwind) return; RELOAD();
/* 803d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803d91: call 0x6cb262 */
  esp -= 4; W32(esp, 0x803d96u); SPILL(); f_6cb262(); if (g_unwind) return; RELOAD();
/* 803d96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803d99: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 803d9a: jmp 0x803d70 */
  goto L_803d70;
L_803d9c: /* 803d9c: xor eax, eax */
  eax = 0;
/* 803d9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803d9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803da0: call 0x6cb262 */
  esp -= 4; W32(esp, 0x803da5u); SPILL(); f_6cb262(); if (g_unwind) return; RELOAD();
/* 803da5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803da8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 803da9: jmp 0x803d70 */
  goto L_803d70;
L_803dab: /* 803dab: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 803dae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 803daf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803db0: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x803db6u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 803db6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803db9: xor esi, esi */
  esi = 0;
/* 803dbb: jmp 0x803dc0 */
  goto L_803dc0;
L_803dc0: /* 803dc0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803dc2: jge 0x803ddd */
  if ((sf == of)) goto L_803ddd;
L_803dc4: /* 803dc4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 803dc6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 803dc9: mov edx, esi */
  edx = esi;
/* 803dcb: imul edx, edx, 0x6c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x6cu);
  edx = (uint32_t)r;
  }
/* 803dce: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 803dd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 803dd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803dd2: call 0x6cb262 */
  esp -= 4; W32(esp, 0x803dd7u); SPILL(); f_6cb262(); if (g_unwind) return; RELOAD();
/* 803dd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803dda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 803ddb: jmp 0x803dc0 */
  goto L_803dc0;
L_803ddd: /* 803ddd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_803de0: /* 803de0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 803de3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 803de4: mov eax, esi */
  eax = esi;
/* 803de6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 803de7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 803dee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 803def: mov esp, ebp */
  esp = ebp;
/* 803df1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 803df2: ret  */
  esp += 4; SPILL(); return;
}

void f_803dbd(void) {
  LOAD_REGS();
L_803dbd: /* 803dbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_803dc0: /* 803dc0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803dc2: jge 0x803ddd */
  if ((sf == of)) goto L_803ddd;
L_803dc4: /* 803dc4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 803dc6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 803dc9: mov edx, esi */
  edx = esi;
/* 803dcb: imul edx, edx, 0x6c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x6cu);
  edx = (uint32_t)r;
  }
/* 803dce: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 803dd0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 803dd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803dd2: call 0x6cb262 */
  esp -= 4; W32(esp, 0x803dd7u); SPILL(); f_6cb262(); if (g_unwind) return; RELOAD();
/* 803dd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803dda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 803ddb: jmp 0x803dc0 */
  goto L_803dc0;
L_803ddd: /* 803ddd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 803de0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 803de3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 803de4: mov eax, esi */
  eax = esi;
/* 803de6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 803de7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 803dee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 803def: mov esp, ebp */
  esp = ebp;
/* 803df1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 803df2: ret  */
  esp += 4; SPILL(); return;
}

void f_803df3(void) {
  LOAD_REGS();
L_803df3: /* 803df3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 803df6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 803dfb: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 803dfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 803dff: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 803e02: call 0x99caf8 */
  esp -= 4; W32(esp, 0x803e07u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_803e07(); return;
}

void f_803e07(void) {
  LOAD_REGS();
L_803e07: /* 803e07: push 0xa12ad8 */
  { uint32_t v = 0xa12ad8u; esp -= 4; W32(esp, v); }
/* 803e0c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 803e11: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x803e17u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 803e17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803e1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 803e1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 803e1e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x803e23u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_803e23: guest_badaddr(0x803e23); return;
}

void f_803e80(void) {
  LOAD_REGS();
L_803e80: /* 803e80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 803e81: mov ebp, esp */
  ebp = esp;
/* 803e83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 803e85: push 0x9d20e0 */
  { uint32_t v = 0x9d20e0u; esp -= 4; W32(esp, v); }
/* 803e8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 803e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803e91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 803e98: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 803e9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 803e9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803e9d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 803ea0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 803ea1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 803ea4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 803ea7: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 803ea9: xor ebx, ebx */
  ebx = 0;
/* 803eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803eac: mov ecx, edi */
  ecx = edi;
/* 803eae: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 803eb1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x803eb7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 803eb7: mov ecx, esi */
  ecx = esi;
/* 803eb9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x803ebfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 803ebf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 803ec1: je 0x803f2c */
  if (zf) goto L_803f2c;
L_803ec3: /* 803ec3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 803ec6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803ec7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803ec8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x803eceu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 803ece: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 803ed1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803ed4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 803ed5: mov ecx, edi */
  ecx = edi;
/* 803ed7: call 0x6c9110 */
  esp -= 4; W32(esp, 0x803edcu); SPILL(); f_6c9110(); if (g_unwind) return; RELOAD();
/* 803edc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_803ee0: /* 803ee0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803ee3: jge 0x803f60 */
  if ((sf == of)) goto L_803f60;
L_803ee5: /* 803ee5: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 803ee7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 803ee9: mov ecx, edi */
  ecx = edi;
/* 803eeb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x803ef1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 803ef1: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 803ef4: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 803ef6: mov esi, eax */
  esi = eax;
/* 803ef8: je 0x803f17 */
  if (zf) goto L_803f17;
L_803efa: /* 803efa: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 803efd: call dword ptr [0xcfaac8] */
  esp -= 4; W32(esp, 0x803f03u); SPILL(); f_4e2b35(); if (g_unwind) return; /* Core!??0FSphere@@QAE@XZ */ RELOAD();
/* 803f03: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 803f06: call dword ptr [0xcfaac8] */
  esp -= 4; W32(esp, 0x803f0cu); SPILL(); f_4e2b35(); if (g_unwind) return; /* Core!??0FSphere@@QAE@XZ */ RELOAD();
/* 803f0c: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 803f0f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x803f15u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 803f15: jmp 0x803f19 */
  goto L_803f19;
L_803f17: /* 803f17: xor esi, esi */
  esi = 0;
L_803f19: /* 803f19: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 803f1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803f1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 803f1e: call 0x6c6659 */
  esp -= 4; W32(esp, 0x803f23u); SPILL(); f_6c6659(); if (g_unwind) return; RELOAD();
/* 803f23: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 803f26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803f29: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 803f2a: jmp 0x803ee0 */
  goto L_803ee0;
L_803f2c: /* 803f2c: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 803f2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 803f30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 803f31: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x803f37u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 803f37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803f3a: xor esi, esi */
  esi = 0;
/* 803f3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_803f40: /* 803f40: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 803f42: jge 0x803f5d */
  if ((sf == of)) goto L_803f5d;
L_803f44: /* 803f44: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 803f46: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 803f49: mov eax, esi */
  eax = esi;
/* 803f4b: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 803f4e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 803f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803f51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 803f52: call 0x6c6659 */
  esp -= 4; W32(esp, 0x803f57u); SPILL(); f_6c6659(); if (g_unwind) return; RELOAD();
/* 803f57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803f5a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 803f5b: jmp 0x803f40 */
  goto L_803f40;
L_803f5d: /* 803f5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_803f60: /* 803f60: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 803f63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 803f64: mov eax, esi */
  eax = esi;
/* 803f66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 803f67: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 803f6e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 803f6f: mov esp, ebp */
  esp = ebp;
/* 803f71: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 803f72: ret  */
  esp += 4; SPILL(); return;
}

void f_803f73(void) {
  LOAD_REGS();
L_803f73: /* 803f73: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 803f76: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 803f7b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 803f7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 803f7f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 803f82: call 0x99caf8 */
  esp -= 4; W32(esp, 0x803f87u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_803f87(); return;
}

void f_803f87(void) {
  LOAD_REGS();
L_803f87: /* 803f87: push 0xa12af0 */
  { uint32_t v = 0xa12af0u; esp -= 4; W32(esp, v); }
/* 803f8c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 803f91: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x803f97u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 803f97: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 803f9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 803f9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 803f9e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x803fa3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_803fa3: guest_badaddr(0x803fa3); return;
}

void f_804000(void) {
  LOAD_REGS();
L_804000: /* 804000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804001: mov esi, ecx */
  esi = ecx;
/* 804003: call 0x6c3a8f */
  esp -= 4; W32(esp, 0x804008u); SPILL(); f_6c3a8f(); if (g_unwind) return; RELOAD();
/* 804008: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80400d: je 0x80401c */
  if (zf) goto L_80401c;
L_80400f: /* 80400f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 804014: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 804016: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 804018: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804019: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80401cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80401c: /* 80401c: mov eax, esi */
  eax = esi;
/* 80401e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80401f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_804040(void) {
  LOAD_REGS();
L_804040: /* 804040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 804041: mov ebp, esp */
  ebp = esp;
/* 804043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 804045: push 0x9d2106 */
  { uint32_t v = 0x9d2106u; esp -= 4; W32(esp, v); }
/* 80404a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 804050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 804058: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80405b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80405c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80405d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80405e: xor ebx, ebx */
  ebx = 0;
/* 804060: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 804063: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 804066: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_804069: /* 804069: cmp ebx, dword ptr [ecx + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80406c: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 80406f: jge 0x80417d */
  if ((sf == of)) goto L_80417d;
L_804075: /* 804075: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
/* 804078: imul ebx, ebx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x78u);
  ebx = (uint32_t)r;
  }
/* 80407b: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 80407d: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_804080: /* 804080: mov edi, dword ptr [ebx + 0x70] */
  edi = R32((uint32_t)(ebx + 0x70u));
/* 804083: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 804085: jle 0x804174 */
  if ((zf || sf != of)) goto L_804174;
L_80408b: /* 80408b: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 80408e: mov ecx, dword ptr [eax + edi*4 - 4] */
  ecx = R32((uint32_t)(eax + edi*4 + 0xfffffffcu));
/* 804092: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 804094: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 804097: add ebx, 0x6c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 80409a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 80409b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 80409e: jne 0x8040b5 */
  if (!zf) goto L_8040b5;
L_8040a0: /* 8040a0: mov ecx, esi */
  ecx = esi;
/* 8040a2: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x8040a7u); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 8040a7: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8040ad: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8040af: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8040b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8040b2: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8040b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8040b5: /* 8040b5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8040b7: mov esi, dword ptr [ecx + edi*4 - 4] */
  esi = R32((uint32_t)(ecx + edi*4 + 0xfffffffcu));
/* 8040bb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8040bd: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8040c0: je 0x8040f5 */
  if (zf) goto L_8040f5;
L_8040c2: /* 8040c2: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 8040c5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8040c9: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8040cfu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8040cf: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 8040d2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8040d6: call 0x6cb555 */
  esp -= 4; W32(esp, 0x8040dbu); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 8040db: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8040de: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8040e2: call 0x6cae43 */
  esp -= 4; W32(esp, 0x8040e7u); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 8040e7: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8040ed: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8040ef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8040f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8040f2: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8040f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8040f5: /* 8040f5: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
/* 8040f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8040fa: jge 0x804114 */
  if ((sf == of)) goto L_804114;
L_8040fc: /* 8040fc: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 804101: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 804106: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 80410b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x804111u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 804111: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_804114: /* 804114: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804117: jle 0x804131 */
  if ((zf || sf != of)) goto L_804131;
L_804119: /* 804119: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 80411e: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 804123: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 804128: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x80412eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 80412e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_804131: /* 804131: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 804134: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 804137: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804139: jle 0x804153 */
  if ((zf || sf != of)) goto L_804153;
L_80413b: /* 80413b: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 804140: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 804145: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 80414a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x804150u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 804150: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_804153: /* 804153: mov eax, esi */
  eax = esi;
L_804155: /* 804155: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804157: jge 0x80415c */
  if ((sf == of)) goto L_80415c;
L_804159: /* 804159: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80415a: jmp 0x804155 */
  goto L_804155;
L_80415c: /* 80415c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80415e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 804160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804161: mov ecx, ebx */
  ecx = ebx;
/* 804163: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x804169u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 804169: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80416c: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80416f: jmp 0x804080 */
  goto L_804080;
L_804174: /* 804174: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 804177: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 804178: jmp 0x804069 */
  goto L_804069;
L_80417d: /* 80417d: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x804183u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 804183: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 804186: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 804187: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 804188: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80418f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 804190: mov esp, ebp */
  esp = ebp;
/* 804192: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 804193: ret  */
  esp += 4; SPILL(); return;
}

void f_804194(void) {
  LOAD_REGS();
L_804194: /* 804194: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 804197: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80419c: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 80419f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8041a0: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8041a3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8041a8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8041a8(); return;
}

void f_8041a8(void) {
  LOAD_REGS();
L_8041a8: /* 8041a8: push 0xa12b08 */
  { uint32_t v = 0xa12b08u; esp -= 4; W32(esp, v); }
/* 8041ad: push 0xae0d10 */
  { uint32_t v = 0xae0d10u; esp -= 4; W32(esp, v); }
/* 8041b2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8041b8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8041b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8041bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8041bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8041bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8041c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8041c4: guest_badaddr(0x8041c4); return;
}

void f_804240(void) {
  LOAD_REGS();
L_804240: /* 804240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 804241: mov ebp, esp */
  ebp = esp;
/* 804243: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 804245: push 0x9d2120 */
  { uint32_t v = 0x9d2120u; esp -= 4; W32(esp, v); }
/* 80424a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 804250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804251: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 804258: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80425b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80425c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80425d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80425e: mov esi, ecx */
  esi = ecx;
/* 804260: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 804266: xor edi, edi */
  edi = 0;
/* 804268: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80426a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80426d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 804270: je 0x8042f8 */
  if (zf) goto L_8042f8;
L_804276: /* 804276: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 804279: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80427b: je 0x8042aa */
  if (zf) goto L_8042aa;
L_80427d: /* 80427d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_804280: /* 804280: cmp edi, dword ptr [esi + 0xdc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804286: jge 0x8042aa */
  if ((sf == of)) goto L_8042aa;
L_804288: /* 804288: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 80428a: mov edx, dword ptr [esi + 0xd8] */
  edx = R32((uint32_t)(esi + 0xd8u));
/* 804290: mov ecx, edi */
  ecx = edi;
/* 804292: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 804295: mov ebx, dword ptr [edx + ecx + 0x14] */
  ebx = R32((uint32_t)(edx + ecx + 0x14u));
/* 804299: mov ecx, dword ptr [edx + ecx + 0x10] */
  ecx = R32((uint32_t)(edx + ecx + 0x10u));
/* 80429d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80429e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8042a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8042a2: mov ecx, ebx */
  ecx = ebx;
/* 8042a4: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x8042a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8042a7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8042a8: jmp 0x804280 */
  goto L_804280;
L_8042aa: /* 8042aa: xor ecx, ecx */
  ecx = 0;
/* 8042ac: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8042af: nop  */
L_8042b0: /* 8042b0: cmp ecx, dword ptr [esi + 0x5c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8042b3: jge 0x8042cb */
  if ((sf == of)) goto L_8042cb;
L_8042b5: /* 8042b5: mov edi, dword ptr [esi + 0x58] */
  edi = R32((uint32_t)(esi + 0x58u));
/* 8042b8: mov eax, ecx */
  eax = ecx;
/* 8042ba: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8042bd: mov dword ptr [edi + eax + 0x60], edx */
  W32((uint32_t)(edi + eax + 0x60u), edx);
/* 8042c1: mov edi, dword ptr [esi + 0x58] */
  edi = R32((uint32_t)(esi + 0x58u));
/* 8042c4: mov dword ptr [edi + eax + 0x64], edx */
  W32((uint32_t)(edi + eax + 0x64u), edx);
/* 8042c8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8042c9: jmp 0x8042b0 */
  goto L_8042b0;
L_8042cb: /* 8042cb: lea edi, [esi + 0xd8] */
  edi = (uint32_t)(esi + 0xd8u);
/* 8042d1: xor esi, esi */
  esi = 0;
L_8042d3: /* 8042d3: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8042d6: jge 0x8042ec */
  if ((sf == of)) goto L_8042ec;
L_8042d8: /* 8042d8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8042da: mov eax, esi */
  eax = esi;
/* 8042dc: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8042df: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8042e1: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8042e4: call 0x6c770c */
  esp -= 4; W32(esp, 0x8042e9u); SPILL(); f_6c770c(); if (g_unwind) return; RELOAD();
/* 8042e9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8042ea: jmp 0x8042d3 */
  goto L_8042d3;
L_8042ec: /* 8042ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8042ee: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8042f0: mov ecx, edi */
  ecx = edi;
/* 8042f2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8042f8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_8042f8: /* 8042f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8042fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8042fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8042fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 804304: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 804305: mov esp, ebp */
  esp = ebp;
/* 804307: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 804308: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80430b(void) {
  LOAD_REGS();
L_80430b: /* 80430b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80430e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 804313: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 804316: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804317: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 80431a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80431fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80431f(); return;
}

void f_80431f(void) {
  LOAD_REGS();
L_80431f: /* 80431f: push 0xa12b30 */
  { uint32_t v = 0xa12b30u; esp -= 4; W32(esp, v); }
/* 804324: push 0xae0e40 */
  { uint32_t v = 0xae0e40u; esp -= 4; W32(esp, v); }
/* 804329: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80432fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80432f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804332: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 804334: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 804336: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80433bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80433b: guest_badaddr(0x80433b); return;
}

void f_804380(void) {
  LOAD_REGS();
L_804380: /* 804380: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 804381: mov ebp, esp */
  ebp = esp;
/* 804383: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 804385: push 0x9d213c */
  { uint32_t v = 0x9d213cu; esp -= 4; W32(esp, v); }
/* 80438a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 804390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804391: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 804398: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80439e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80439f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8043a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8043a1: xor ebx, ebx */
  ebx = 0;
/* 8043a3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8043a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8043a7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8043aa: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8043ad: call 0x6c88f0 */
  esp -= 4; W32(esp, 0x8043b2u); SPILL(); f_6c88f0(); if (g_unwind) return; RELOAD();
/* 8043b2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
L_8043b5: /* 8043b5: cmp ebx, dword ptr [edx + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8043b8: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8043bb: jge 0x804995 */
  if ((sf == of)) goto L_804995;
L_8043c1: /* 8043c1: mov ecx, dword ptr [edx + 0x58] */
  ecx = R32((uint32_t)(edx + 0x58u));
/* 8043c4: imul ebx, ebx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x78u);
  ebx = (uint32_t)r;
  }
/* 8043c7: mov edi, dword ptr [ebx + ecx + 0x1c] */
  edi = R32((uint32_t)(ebx + ecx + 0x1cu));
/* 8043cb: mov esi, dword ptr [edx + 0x98] */
  esi = R32((uint32_t)(edx + 0x98u));
/* 8043d1: mov eax, dword ptr [ebx + ecx + 0x68] */
  eax = R32((uint32_t)(ebx + ecx + 0x68u));
/* 8043d5: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8043d7: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8043da: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8043dc: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8043df: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8043e2: je 0x8043f7 */
  if (zf) goto L_8043f7;
L_8043e4: /* 8043e4: mov ecx, dword ptr [edx + 0xf0] */
  ecx = R32((uint32_t)(edx + 0xf0u));
/* 8043ea: imul eax, eax, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xa4u);
  eax = (uint32_t)r;
  }
/* 8043f0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8043f2: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8043f5: jmp 0x8043fe */
  goto L_8043fe;
L_8043f7: /* 8043f7: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
L_8043fe: /* 8043fe: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 804400: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 804402: jne 0x804468 */
  if (!zf) goto L_804468;
L_804404: /* 804404: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 804409: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x80440fu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 80440f: mov esi, eax */
  esi = eax;
/* 804411: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 804413: je 0x804434 */
  if (zf) goto L_804434;
L_804415: /* 804415: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 80441a: mov ecx, esi */
  ecx = esi;
/* 80441c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x804422u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 804422: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 804424: jne 0x804462 */
  if (!zf) goto L_804462;
L_804426: /* 804426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804427: mov ecx, esi */
  ecx = esi;
/* 804429: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x80442fu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 80442f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 804432: jmp 0x80443b */
  goto L_80443b;
L_804434: /* 804434: mov dword ptr [ebp - 0x1c], 0xae0f20 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xae0f20u);
L_80443b: /* 80443b: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 804440: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x804446u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 804446: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 80444c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80444e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80444f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 804452: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804453: push 0xae0f2c */
  { uint32_t v = 0xae0f2cu; esp -= 4; W32(esp, v); }
/* 804458: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 804459: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x80445fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 80445f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_804462: /* 804462: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 804465: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
L_804468: /* 804468: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 80446b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 80446e: and eax, 0x2400100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2400100u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 804473: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 804476: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 804479: xor ecx, ecx */
  ecx = 0;
/* 80447b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80447d: je 0x804487 */
  if (zf) goto L_804487;
L_80447f: /* 80447f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 804482: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 804485: jmp 0x80448e */
  goto L_80448e;
L_804487: /* 804487: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
L_80448e: /* 80448e: mov al, byte ptr [ebx + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x56u))) & 0xffu);
/* 804491: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 804493: jbe 0x804959 */
  if ((cf | zf)) goto L_804959;
L_804499: /* 804499: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 80449c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8044a0: /* 8044a0: cmp ecx, dword ptr [edx + 0xdc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8044a6: jge 0x8044f5 */
  if ((sf == of)) goto L_8044f5;
L_8044a8: /* 8044a8: mov esi, dword ptr [edx + 0xd8] */
  esi = R32((uint32_t)(edx + 0xd8u));
/* 8044ae: mov eax, ecx */
  eax = ecx;
/* 8044b0: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8044b3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8044b5: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8044b8: cmp dword ptr [eax + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8044bb: jne 0x8045a0 */
  if (!zf) goto L_8045a0;
L_8044c1: /* 8044c1: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8044c4: cmp dword ptr [eax + 0x24], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8044c7: jne 0x8045a0 */
  if (!zf) goto L_8045a0;
L_8044cd: /* 8044cd: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8044d0: cmp dword ptr [eax + 0x28], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8044d3: jne 0x8045a0 */
  if (!zf) goto L_8045a0;
L_8044d9: /* 8044d9: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 8044dc: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8044df: movzx esi, byte ptr [ebx + 0x56] */
  esi = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 8044e3: add esi, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8044e6: cmp esi, 0xffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8044ec: jge 0x8045a0 */
  if ((sf == of)) goto L_8045a0;
L_8044f2: /* 8044f2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_8044f5: /* 8044f5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8044f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8044fa: jne 0x8045c5 */
  if (!zf) goto L_8045c5;
L_804500: /* 804500: lea esi, [edx + 0xd8] */
  esi = (uint32_t)(edx + 0xd8u);
/* 804506: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 804508: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80450a: mov ecx, esi */
  ecx = esi;
/* 80450c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x804512u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 804512: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 804515: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 804517: mov esi, eax */
  esi = eax;
/* 804519: je 0x8045a6 */
  if (zf) goto L_8045a6;
L_80451f: /* 80451f: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 804522: mov dword ptr [esi], 0x9f8bc4 */
  W32((uint32_t)(esi), 0x9f8bc4u);
/* 804528: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80452eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80452e: mov eax, dword ptr [0xcfa1b0] */
  eax = R32((uint32_t)(0xcfa1b0u));
/* 804533: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 804535: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 804538: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80453a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 80453f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804540: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 804541: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 804547: call 0x99c910 */
  esp -= 4; W32(esp, 0x80454cu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 80454c: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 804552: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 804557: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 80455a: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 80455d: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 804560: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 804566: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 80456c: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 80456e: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 804574: mov edi, dword ptr [ebp - 0x98] */
  edi = R32((uint32_t)(ebp + 0xffffff68u));
/* 80457a: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 80457d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 804580: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 804583: xor eax, eax */
  eax = 0;
/* 804585: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 804588: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 80458b: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 80458e: mov dword ptr [esi + 0x28], 0xffffffff */
  W32((uint32_t)(esi + 0x28u), 0xffffffffu);
/* 804595: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 804598: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 80459b: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 80459e: jmp 0x8045b0 */
  goto L_8045b0;
L_8045a0: /* 8045a0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8045a1: jmp 0x8044a0 */
  goto L_8044a0;
L_8045a6: /* 8045a6: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8045ad: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
L_8045b0: /* 8045b0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8045b3: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8045b6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8045b9: mov dword ptr [esi + 0x20], edx */
  W32((uint32_t)(esi + 0x20u), edx);
/* 8045bc: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 8045bf: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 8045c2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
L_8045c5: /* 8045c5: mov eax, dword ptr [edx + 0xd8] */
  eax = R32((uint32_t)(edx + 0xd8u));
/* 8045cb: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8045ce: mov ecx, esi */
  ecx = esi;
/* 8045d0: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8045d2: mov eax, 0x2e8ba2e9 */
  eax = 0x2e8ba2e9u;
/* 8045d7: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8045d9: sar edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8045dc: mov eax, edx */
  eax = edx;
/* 8045de: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8045e1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8045e3: movzx eax, byte ptr [ebx + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 8045e7: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8045e9: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8045ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8045ed: mov ecx, esi */
  ecx = esi;
/* 8045ef: mov dword ptr [ebx + 0x60], edx */
  W32((uint32_t)(ebx + 0x60u), edx);
/* 8045f2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8045f8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8045f8: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* 8045fb: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8045fe: mov eax, dword ptr [edx + 0x78] */
  eax = R32((uint32_t)(edx + 0x78u));
/* 804601: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 804604: mov edx, dword ptr [edx + 0x88] */
  edx = R32((uint32_t)(edx + 0x88u));
/* 80460a: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 80460d: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 804610: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 804611: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 804614: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 804617: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 80461a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80461b: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 80461e: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 804621: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 804624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804625: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 804628: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 80462b: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 80462e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80462f: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 804635: call dword ptr [0xcfa5b0] */
  esp -= 4; W32(esp, 0x80463bu); SPILL(); f_4e317f(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */ RELOAD();
/* 80463b: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 804641: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 804642: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 804648: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x80464eu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 80464e: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 804651: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 804653: mov ecx, edi */
  ecx = edi;
/* 804655: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 804659: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x80465cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80465c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80465f: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 804662: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 804664: mov ecx, edi */
  ecx = edi;
/* 804666: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 804669: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x80466cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80466c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80466e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 804671: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 804674: mov eax, dword ptr [ebx + 0x64] */
  eax = R32((uint32_t)(ebx + 0x64u));
/* 804677: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 80467a: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 80467d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 804680: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 804683: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 80468a: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 804691: xor ecx, ecx */
  ecx = 0;
L_804693: /* 804693: movzx edx, byte ptr [ebx + 0x56] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 804697: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804699: jge 0x8048c4 */
  if ((sf == of)) goto L_8048c4;
L_80469f: /* 80469f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8046a2: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 8046a5: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 8046a8: mov edx, dword ptr [edx + 0x88] */
  edx = R32((uint32_t)(edx + 0x88u));
/* 8046ae: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8046b0: mov eax, dword ptr [esi + eax*8] */
  eax = R32((uint32_t)(esi + eax*8));
/* 8046b3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8046b6: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8046b9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8046bb: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 8046be: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8046c1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8046c4: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8046c7: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8046ca: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8046cd: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8046d0: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 8046d3: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8046d6: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 8046d9: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 8046dc: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 8046df: lea edx, [ebp - 0x110] */
  edx = (uint32_t)(ebp + 0xfffffef0u);
/* 8046e5: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 8046ec: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8046ef: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8046f2: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8046f5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8046f8: lea edi, [ebp - 0x8c] */
  edi = (uint32_t)(ebp + 0xffffff74u);
/* 8046fe: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 804700: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 804702: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 804704: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 804707: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 804709: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80470c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80470e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 804711: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 804714: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 804717: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80471a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80471d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 804720: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 804723: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 804726: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 804729: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80472b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80472d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80472f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804731: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 804733: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 804736: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 804739: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80473c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 80473f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 804742: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 804745: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 804748: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80474b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80474d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80474f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804751: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804753: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 804755: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 804758: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80475b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80475e: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 804761: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 804764: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 804767: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80476a: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80476d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80476f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 804771: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804773: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804775: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 804777: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 804779: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80477b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80477d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 804780: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 804783: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 804786: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 80478c: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 80478f: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 804792: lea eax, [ecx + ecx*4] */
  eax = (uint32_t)(ecx + ecx*4);
/* 804795: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 804798: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 80479b: mov edx, eax */
  edx = eax;
/* 80479d: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 80479f: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8047a2: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8047a5: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8047a8: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8047ab: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8047ae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8047b0: fst dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0);
/* 8047b3: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 8047b9: fdiv dword ptr [ebp - 0x28] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8047bc: fst dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0);
/* 8047bf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8047c1: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8047c4: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8047c7: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8047ca: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8047cd: je 0x8048a9 */
  if (zf) goto L_8048a9;
L_8047d3: /* 8047d3: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8047d6: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8047d9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8047dc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8047de: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8047e1: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8047e4: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 8047e7: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 8047ea: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8047ed: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 8047f4: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8047f7: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8047fa: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8047fd: lea edi, [ebp - 0x7c] */
  edi = (uint32_t)(ebp + 0xffffff84u);
/* 804800: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 804802: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 804804: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 804806: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 804809: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80480b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80480e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 804810: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 804813: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 804816: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 804819: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80481c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80481f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 804822: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 804825: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 804828: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 80482b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80482d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80482f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804831: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804833: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 804835: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 804838: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 80483b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80483e: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 804841: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 804844: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 804847: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80484a: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80484d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80484f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 804851: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804853: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804855: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 804857: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80485a: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80485d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 804860: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 804863: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 804866: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 804869: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80486c: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80486f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 804871: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 804873: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804875: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 804877: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 804879: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80487b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80487d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80487f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 804882: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 804885: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 804888: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 80488b: fild dword ptr [edx + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 80488e: fadd dword ptr [ebp - 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff84u)));
/* 804891: fmul dword ptr [0xa12ba8] */
  ST0 = ST0 * (F32((uint32_t)(0xa12ba8u)));
/* 804897: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 80489a: fild dword ptr [edx + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* 80489d: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 8048a0: fmul dword ptr [0xa12ba8] */
  ST0 = ST0 * (F32((uint32_t)(0xa12ba8u)));
/* 8048a6: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
L_8048a9: /* 8048a9: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8048ac: mov edx, ebx */
  edx = ebx;
/* 8048ae: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8048b0: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8048b2: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8048b5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8048b8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8048bb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8048be: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8048bf: jmp 0x804693 */
  goto L_804693;
L_8048c4: /* 8048c4: movzx eax, byte ptr [ebx + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 8048c8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8048cb: mov esi, dword ptr [0xcfa5d8] */
  esi = R32((uint32_t)(0xcfa5d8u));
/* 8048d1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8048d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8048d5: fdivr dword ptr [ebp - 0x38] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffc8u))) / ST0;
/* 8048d8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8048db: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8048ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8048dd: movzx ecx, byte ptr [ebx + 0x56] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 8048e1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8048e4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8048e7: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8048ea: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8048ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8048ee: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8048f1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8048f4: fdivr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) / ST0;
/* 8048f7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8048fa: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8048fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8048fc: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8048ff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804902: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 804905: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 804908: xor ecx, ecx */
  ecx = 0;
/* 80490a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_804910: /* 804910: movzx eax, byte ptr [ebx + 0x56] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 804914: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804916: jge 0x804933 */
  if ((sf == of)) goto L_804933;
L_804918: /* 804918: lea eax, [ecx + ecx*4] */
  eax = (uint32_t)(ecx + ecx*4);
/* 80491b: fld dword ptr [edx + eax*8 + 0x18] */
  { double v = F32((uint32_t)(edx + eax*8 + 0x18u)); FPUSH(v); }
/* 80491f: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 804922: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 804925: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 804926: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 804929: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 80492c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 80492e: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 804931: jmp 0x804910 */
  goto L_804910;
L_804933: /* 804933: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 804936: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 804938: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 80493b: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 80493e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80493f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 804940: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 804943: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 804949: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 80494c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 804950: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x804956u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 804956: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
L_804959: /* 804959: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 80495c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80495d: jmp 0x8043b5 */
  goto L_8043b5;
L_804995: /* 804995: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 804998: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 804999: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80499a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8049a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8049a2: mov esp, ebp */
  esp = ebp;
/* 8049a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8049a5: ret  */
  esp += 4; SPILL(); return;
}

void f_804962(void) {
  LOAD_REGS();
L_804962: /* 804962: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 804968: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80496d: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 804970: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 804971: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 804974: call 0x99caf8 */
  esp -= 4; W32(esp, 0x804979u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_804979(); return;
}

void f_804979(void) {
  LOAD_REGS();
L_804979: /* 804979: push 0xa12b6c */
  { uint32_t v = 0xa12b6cu; esp -= 4; W32(esp, v); }
/* 80497e: push 0xae0e48 */
  { uint32_t v = 0xae0e48u; esp -= 4; W32(esp, v); }
/* 804983: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x804989u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 804989: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80498c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80498e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 804990: call 0x99caf8 */
  esp -= 4; W32(esp, 0x804995u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 804995: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 804998: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 804999: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80499a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8049a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8049a2: mov esp, ebp */
  esp = ebp;
/* 8049a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8049a5: ret  */
  esp += 4; SPILL(); return;
}

void f_804b40(void) {
  LOAD_REGS();
L_804b40: /* 804b40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 804b41: mov ebp, esp */
  ebp = esp;
/* 804b43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 804b45: push 0x9d2150 */
  { uint32_t v = 0x9d2150u; esp -= 4; W32(esp, v); }
/* 804b4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 804b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804b51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 804b58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 804b5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 804b5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804b5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 804b60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 804b61: mov ecx, esi */
  ecx = esi;
/* 804b63: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 804b66: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 804b6d: call dword ptr [0xcfa430] */
  esp -= 4; W32(esp, 0x804b73u); SPILL(); f_4e14fb(); if (g_unwind) return; /* Core!?IsTrans@FArchive@@QAEHXZ */ RELOAD();
/* 804b73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 804b75: jne 0x804b84 */
  if (!zf) goto L_804b84;
L_804b77: /* 804b77: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 804b7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804b7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804b7c: call 0x6c9593 */
  esp -= 4; W32(esp, 0x804b81u); SPILL(); f_6c9593(); if (g_unwind) return; RELOAD();
/* 804b81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_804b84: /* 804b84: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 804b87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 804b88: mov eax, esi */
  eax = esi;
/* 804b8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 804b8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 804b92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 804b93: mov esp, ebp */
  esp = ebp;
/* 804b95: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 804b96: ret  */
  esp += 4; SPILL(); return;
}

void f_804b97(void) {
  LOAD_REGS();
L_804b97: /* 804b97: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 804b9a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 804b9f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 804ba2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 804ba3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 804ba6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x804babu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_804bab(); return;
}

void f_804bab(void) {
  LOAD_REGS();
L_804bab: /* 804bab: push 0xa12bac */
  { uint32_t v = 0xa12bacu; esp -= 4; W32(esp, v); }
/* 804bb0: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 804bb5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x804bbbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 804bbb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804bbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 804bc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 804bc2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x804bc7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_804bc7: guest_badaddr(0x804bc7); return;
}

void f_804c00(void) {
  LOAD_REGS();
L_804c00: /* 804c00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 804c01: mov ebp, esp */
  ebp = esp;
/* 804c03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 804c05: push 0x9d2160 */
  { uint32_t v = 0x9d2160u; esp -= 4; W32(esp, v); }
/* 804c0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 804c10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804c11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 804c18: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 804c1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 804c1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804c1d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 804c20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 804c21: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 804c24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 804c27: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 804c29: xor ebx, ebx */
  ebx = 0;
/* 804c2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804c2c: mov ecx, edi */
  ecx = edi;
/* 804c2e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 804c31: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x804c37u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 804c37: mov ecx, esi */
  ecx = esi;
/* 804c39: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x804c3fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 804c3f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 804c41: je 0x804caa */
  if (zf) goto L_804caa;
L_804c43: /* 804c43: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 804c46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804c47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804c48: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x804c4eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 804c4e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 804c51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804c54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 804c55: mov ecx, edi */
  ecx = edi;
/* 804c57: call 0x6c169a */
  esp -= 4; W32(esp, 0x804c5cu); SPILL(); f_6c169a(); if (g_unwind) return; RELOAD();
/* 804c5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_804c60: /* 804c60: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804c63: jge 0x804ce0 */
  if ((sf == of)) goto L_804ce0;
L_804c65: /* 804c65: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 804c67: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 804c69: mov ecx, edi */
  ecx = edi;
/* 804c6b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x804c71u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 804c71: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 804c74: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 804c76: mov esi, eax */
  esi = eax;
/* 804c78: je 0x804c95 */
  if (zf) goto L_804c95;
L_804c7a: /* 804c7a: mov ecx, esi */
  ecx = esi;
/* 804c7c: call 0x6cd05d */
  esp -= 4; W32(esp, 0x804c81u); SPILL(); f_6cd05d(); if (g_unwind) return; RELOAD();
/* 804c81: xor eax, eax */
  eax = 0;
/* 804c83: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 804c86: mov dword ptr [esi + 0x28], 0xffffffff */
  W32((uint32_t)(esi + 0x28u), 0xffffffffu);
/* 804c8d: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 804c90: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 804c93: jmp 0x804c97 */
  goto L_804c97;
L_804c95: /* 804c95: xor esi, esi */
  esi = 0;
L_804c97: /* 804c97: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 804c9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804c9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 804c9c: call 0x6c50dd */
  esp -= 4; W32(esp, 0x804ca1u); SPILL(); f_6c50dd(); if (g_unwind) return; RELOAD();
/* 804ca1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 804ca4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804ca7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 804ca8: jmp 0x804c60 */
  goto L_804c60;
L_804caa: /* 804caa: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 804cad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 804cae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804caf: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x804cb5u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 804cb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804cb8: xor esi, esi */
  esi = 0;
/* 804cba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_804cc0: /* 804cc0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804cc2: jge 0x804cdd */
  if ((sf == of)) goto L_804cdd;
L_804cc4: /* 804cc4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 804cc6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 804cc9: mov eax, esi */
  eax = esi;
/* 804ccb: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 804cce: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 804cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804cd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 804cd2: call 0x6c50dd */
  esp -= 4; W32(esp, 0x804cd7u); SPILL(); f_6c50dd(); if (g_unwind) return; RELOAD();
/* 804cd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804cda: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 804cdb: jmp 0x804cc0 */
  goto L_804cc0;
L_804cdd: /* 804cdd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_804ce0: /* 804ce0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 804ce3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 804ce4: mov eax, esi */
  eax = esi;
/* 804ce6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 804ce7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 804cee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 804cef: mov esp, ebp */
  esp = ebp;
/* 804cf1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 804cf2: ret  */
  esp += 4; SPILL(); return;
}

void f_804cf3(void) {
  LOAD_REGS();
L_804cf3: /* 804cf3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 804cf6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 804cfb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 804cfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804cff: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 804d02: call 0x99caf8 */
  esp -= 4; W32(esp, 0x804d07u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_804d07(); return;
}

void f_804d07(void) {
  LOAD_REGS();
L_804d07: /* 804d07: push 0xa12bd0 */
  { uint32_t v = 0xa12bd0u; esp -= 4; W32(esp, v); }
/* 804d0c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 804d11: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x804d17u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 804d17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804d1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 804d1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 804d1e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x804d23u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_804d23: guest_badaddr(0x804d23); return;
}

void f_804d80(void) {
  LOAD_REGS();
L_804d80: /* 804d80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 804d81: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 804d85: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 804d87: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 804d88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804d89: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 804d8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 804d90: mov ebp, ecx */
  ebp = ecx;
/* 804d92: jge 0x804da8 */
  if ((sf == of)) goto L_804da8;
L_804d94: /* 804d94: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 804d99: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 804d9e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 804da3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x804da5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 804da5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_804da8: /* 804da8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804dab: jle 0x804dc1 */
  if ((zf || sf != of)) goto L_804dc1;
L_804dad: /* 804dad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 804db2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 804db7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 804dbc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x804dbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 804dbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_804dc1: /* 804dc1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 804dc5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 804dc8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804dcb: jle 0x804de1 */
  if ((zf || sf != of)) goto L_804de1;
L_804dcd: /* 804dcd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 804dd2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 804dd7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 804ddc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x804ddeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 804dde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_804de1: /* 804de1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804de3: jge 0x804e00 */
  if ((sf == of)) goto L_804e00;
L_804de5: /* 804de5: mov esi, ebx */
  esi = ebx;
/* 804de7: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 804dea: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 804dec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_804df0: /* 804df0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 804df3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 804df5: call 0x6c3a8f */
  esp -= 4; W32(esp, 0x804dfau); SPILL(); f_6c3a8f(); if (g_unwind) return; RELOAD();
/* 804dfa: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 804dfd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 804dfe: jne 0x804df0 */
  if (!zf) goto L_804df0;
L_804e00: /* 804e00: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 804e04: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 804e06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 804e07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 804e08: mov ecx, ebp */
  ecx = ebp;
/* 804e0a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x804e10u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 804e10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 804e11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 804e12: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 804e13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 804e14: ret 8 */
  esp += 12; SPILL(); return;
}

void f_804e50(void) {
  LOAD_REGS();
L_804e50: /* 804e50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804e51: mov esi, ecx */
  esi = ecx;
/* 804e53: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 804e56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 804e57: xor edi, edi */
  edi = 0;
/* 804e59: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 804e5b: jle 0x804e75 */
  if ((zf || sf != of)) goto L_804e75;
L_804e5d: /* 804e5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 804e5e: xor ebx, ebx */
  ebx = 0;
L_804e60: /* 804e60: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 804e62: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 804e64: call 0x6c3a8f */
  esp -= 4; W32(esp, 0x804e69u); SPILL(); f_6c3a8f(); if (g_unwind) return; RELOAD();
/* 804e69: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 804e6c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 804e6d: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 804e70: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804e72: jl 0x804e60 */
  if ((sf != of)) goto L_804e60;
L_804e74: /* 804e74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_804e75: /* 804e75: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 804e79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804e7a: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 804e7c: mov ecx, esi */
  ecx = esi;
/* 804e7e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x804e84u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 804e84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 804e85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 804e86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_804ea0(void) {
  LOAD_REGS();
L_804ea0: /* 804ea0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 804ea2: push 0x9d2179 */
  { uint32_t v = 0x9d2179u; esp -= 4; W32(esp, v); }
/* 804ea7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 804ead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804eae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 804eb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 804eb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804eb7: mov esi, ecx */
  esi = ecx;
/* 804eb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 804ebd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 804ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804ec1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 804ec3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 804ecb: call 0x6c6a8c */
  esp -= 4; W32(esp, 0x804ed0u); SPILL(); f_6c6a8c(); if (g_unwind) return; RELOAD();
/* 804ed0: mov ecx, esi */
  ecx = esi;
/* 804ed2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 804eda: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x804ee0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 804ee0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 804ee4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 804ee5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 804eec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804eef: ret  */
  esp += 4; SPILL(); return;
}

void f_804f10(void) {
  LOAD_REGS();
L_804f10: /* 804f10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 804f11: mov ebp, esp */
  ebp = esp;
/* 804f13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 804f15: push 0x9d2190 */
  { uint32_t v = 0x9d2190u; esp -= 4; W32(esp, v); }
/* 804f1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 804f20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804f21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 804f28: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 804f2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 804f2c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 804f2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804f30: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 804f33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 804f34: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 804f37: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 804f39: xor edi, edi */
  edi = 0;
/* 804f3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804f3c: mov ecx, ebx */
  ecx = ebx;
/* 804f3e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 804f41: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x804f47u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 804f47: mov ecx, esi */
  ecx = esi;
/* 804f49: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x804f4fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 804f4f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 804f51: je 0x804fb6 */
  if (zf) goto L_804fb6;
L_804f53: /* 804f53: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 804f56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804f57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804f58: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x804f5eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 804f5e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 804f61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804f64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 804f65: mov ecx, ebx */
  ecx = ebx;
/* 804f67: call 0x6c3c3d */
  esp -= 4; W32(esp, 0x804f6cu); SPILL(); f_6c3c3d(); if (g_unwind) return; RELOAD();
/* 804f6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_804f70: /* 804f70: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804f73: jge 0x804ff3 */
  if ((sf == of)) goto L_804ff3;
L_804f75: /* 804f75: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 804f77: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 804f79: mov ecx, ebx */
  ecx = ebx;
/* 804f7b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x804f81u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 804f81: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 804f84: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 804f86: je 0x804f93 */
  if (zf) goto L_804f93;
L_804f88: /* 804f88: mov ecx, eax */
  ecx = eax;
/* 804f8a: call 0x6cd05d */
  esp -= 4; W32(esp, 0x804f8fu); SPILL(); f_6cd05d(); if (g_unwind) return; RELOAD();
/* 804f8f: mov esi, eax */
  esi = eax;
/* 804f91: jmp 0x804f95 */
  goto L_804f95;
L_804f93: /* 804f93: xor esi, esi */
  esi = 0;
L_804f95: /* 804f95: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 804f98: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 804f9b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 804f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804f9d: call 0x6c6d98 */
  esp -= 4; W32(esp, 0x804fa2u); SPILL(); f_6c6d98(); if (g_unwind) return; RELOAD();
/* 804fa2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804fa5: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 804fa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804fa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804faa: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x804fb0u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 804fb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804fb3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 804fb4: jmp 0x804f70 */
  goto L_804f70;
L_804fb6: /* 804fb6: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 804fb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804fba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804fbb: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x804fc1u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 804fc1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_804fc4: /* 804fc4: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 804fc7: jge 0x804ff3 */
  if ((sf == of)) goto L_804ff3;
L_804fc9: /* 804fc9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 804fcb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 804fce: mov esi, edi */
  esi = edi;
/* 804fd0: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 804fd3: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 804fd5: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 804fd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 804fd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 804fda: call 0x6c6d98 */
  esp -= 4; W32(esp, 0x804fdfu); SPILL(); f_6c6d98(); if (g_unwind) return; RELOAD();
/* 804fdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804fe2: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 804fe5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 804fe6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 804fe7: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x804fedu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 804fed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 804ff0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 804ff1: jmp 0x804fc4 */
  goto L_804fc4;
L_804ff3: /* 804ff3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 804ff6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 804ff9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 804ffa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 804ffb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 805002: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 805003: mov esp, ebp */
  esp = ebp;
/* 805005: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 805006: ret  */
  esp += 4; SPILL(); return;
}

void f_805007(void) {
  LOAD_REGS();
L_805007: /* 805007: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80500a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80500f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 805012: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805013: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 805016: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80501bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80501b(); return;
}

void f_80501b(void) {
  LOAD_REGS();
L_80501b: /* 80501b: push 0xa12be8 */
  { uint32_t v = 0xa12be8u; esp -= 4; W32(esp, v); }
/* 805020: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 805025: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80502bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80502b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80502e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805030: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805032: call 0x99caf8 */
  esp -= 4; W32(esp, 0x805037u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_805037: guest_badaddr(0x805037); return;
}

void f_805090(void) {
  LOAD_REGS();
L_805090: /* 805090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 805091: mov ebp, esp */
  ebp = esp;
/* 805093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 805095: push 0x9d21e4 */
  { uint32_t v = 0x9d21e4u; esp -= 4; W32(esp, v); }
/* 80509a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8050a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8050a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8050a8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8050ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8050ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8050ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8050ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8050b1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8050b4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8050bb: xor ebx, ebx */
  ebx = 0;
L_8050bd: /* 8050bd: cmp ebx, dword ptr [ecx + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8050c0: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8050c3: jge 0x8051d8 */
  if ((sf == of)) goto L_8051d8;
L_8050c9: /* 8050c9: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
/* 8050cc: imul ebx, ebx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x78u);
  ebx = (uint32_t)r;
  }
/* 8050cf: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8050d1: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_8050d4: /* 8050d4: mov edi, dword ptr [ebx + 0x70] */
  edi = R32((uint32_t)(ebx + 0x70u));
/* 8050d7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8050d9: jle 0x8051cf */
  if ((zf || sf != of)) goto L_8051cf;
L_8050df: /* 8050df: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 8050e2: mov ecx, dword ptr [eax + edi*4 - 4] */
  ecx = R32((uint32_t)(eax + edi*4 + 0xfffffffcu));
/* 8050e6: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8050e8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8050eb: add ebx, 0x6c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8050ee: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8050ef: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8050f2: jne 0x805109 */
  if (!zf) goto L_805109;
L_8050f4: /* 8050f4: mov ecx, esi */
  ecx = esi;
/* 8050f6: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x8050fbu); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 8050fb: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 805101: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 805103: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 805105: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805106: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x805109u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_805109: /* 805109: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 80510b: mov esi, dword ptr [ecx + edi*4 - 4] */
  esi = R32((uint32_t)(ecx + edi*4 + 0xfffffffcu));
/* 80510f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 805111: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 805114: je 0x805149 */
  if (zf) goto L_805149;
L_805116: /* 805116: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 805119: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 80511d: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x805123u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 805123: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 805126: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80512a: call 0x6cb555 */
  esp -= 4; W32(esp, 0x80512fu); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 80512f: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 805132: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 805136: call 0x6cae43 */
  esp -= 4; W32(esp, 0x80513bu); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 80513b: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 805141: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 805143: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 805145: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805146: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x805149u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_805149: /* 805149: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
/* 80514c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80514e: jge 0x805168 */
  if ((sf == of)) goto L_805168;
L_805150: /* 805150: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 805155: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 80515a: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 80515f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x805165u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 805165: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_805168: /* 805168: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80516b: jle 0x805185 */
  if ((zf || sf != of)) goto L_805185;
L_80516d: /* 80516d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 805172: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 805177: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 80517c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x805182u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 805182: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_805185: /* 805185: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 805188: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 80518b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80518d: jle 0x8051a7 */
  if ((zf || sf != of)) goto L_8051a7;
L_80518f: /* 80518f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 805194: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 805199: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 80519e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8051a4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8051a4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8051a7: /* 8051a7: mov eax, esi */
  eax = esi;
/* 8051a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8051b0: /* 8051b0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8051b2: jge 0x8051b7 */
  if ((sf == of)) goto L_8051b7;
L_8051b4: /* 8051b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8051b5: jmp 0x8051b0 */
  goto L_8051b0;
L_8051b7: /* 8051b7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8051b9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8051bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8051bc: mov ecx, ebx */
  ecx = ebx;
/* 8051be: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8051c4u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8051c4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8051c7: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8051ca: jmp 0x8050d4 */
  goto L_8050d4;
L_8051cf: /* 8051cf: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8051d2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8051d3: jmp 0x8050bd */
  goto L_8050bd;
L_8051d8: /* 8051d8: lea esi, [ecx + 0x58] */
  esi = (uint32_t)(ecx + 0x58u);
/* 8051db: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 8051e1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8051e3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8051e5: je 0x805205 */
  if (zf) goto L_805205;
L_8051e7: /* 8051e7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8051ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8051ec: push 0x6c286a */
  { uint32_t v = 0x6c286au; esp -= 4; W32(esp, v); }
/* 8051f1: push 0x6c32dd */
  { uint32_t v = 0x6c32ddu; esp -= 4; W32(esp, v); }
/* 8051f6: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 8051f8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8051fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8051fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8051fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805201: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805202: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x805205u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_805205: /* 805205: xor edi, edi */
  edi = 0;
L_805207: /* 805207: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80520a: jge 0x805220 */
  if ((sf == of)) goto L_805220;
L_80520c: /* 80520c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80520e: mov eax, edi */
  eax = edi;
/* 805210: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 805213: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 805215: lea ecx, [eax + 0x6c] */
  ecx = (uint32_t)(eax + 0x6cu);
/* 805218: call 0x6cb474 */
  esp -= 4; W32(esp, 0x80521du); SPILL(); f_6cb474(); if (g_unwind) return; RELOAD();
/* 80521d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80521e: jmp 0x805207 */
  goto L_805207;
L_805220: /* 805220: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805222: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 805224: mov ecx, esi */
  ecx = esi;
/* 805226: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80522cu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80522c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 80522f: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 805235: xor eax, eax */
  eax = 0;
L_805237: /* 805237: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80523a: jge 0x80523f */
  if ((sf == of)) goto L_80523f;
L_80523c: /* 80523c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80523d: jmp 0x805237 */
  goto L_805237;
L_80523f: /* 80523f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805241: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 805243: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x805249u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 805249: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80524b: lea ecx, [edi + 0xb4] */
  ecx = (uint32_t)(edi + 0xb4u);
/* 805251: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 805253: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x805259u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 805259: lea ecx, [edi + 0xc0] */
  ecx = (uint32_t)(edi + 0xc0u);
/* 80525f: xor eax, eax */
  eax = 0;
L_805261: /* 805261: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805264: jge 0x805269 */
  if ((sf == of)) goto L_805269;
L_805266: /* 805266: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 805267: jmp 0x805261 */
  goto L_805261;
L_805269: /* 805269: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80526b: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 80526d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x805273u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 805273: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 805279: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80527b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80527d: lea esi, [edi + 0x68] */
  esi = (uint32_t)(edi + 0x68u);
/* 805280: je 0x8052a0 */
  if (zf) goto L_8052a0;
L_805282: /* 805282: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 805285: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 805287: push 0x6cc68a */
  { uint32_t v = 0x6cc68au; esp -= 4; W32(esp, v); }
/* 80528c: push 0x6c7bc1 */
  { uint32_t v = 0x6c7bc1u; esp -= 4; W32(esp, v); }
/* 805291: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 805293: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 805295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805296: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 805299: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80529b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80529c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80529d: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8052a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8052a0: /* 8052a0: xor eax, eax */
  eax = 0;
L_8052a2: /* 8052a2: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8052a5: jge 0x8052aa */
  if ((sf == of)) goto L_8052aa;
L_8052a7: /* 8052a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8052a8: jmp 0x8052a2 */
  goto L_8052a2;
L_8052aa: /* 8052aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8052ac: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8052ae: mov ecx, esi */
  ecx = esi;
/* 8052b0: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8052b6u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8052b6: lea ecx, [edi + 0xcc] */
  ecx = (uint32_t)(edi + 0xccu);
/* 8052bc: xor eax, eax */
  eax = 0;
/* 8052be: mov edi, edi */
  edi = edi;
L_8052c0: /* 8052c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8052c3: jge 0x8052c8 */
  if ((sf == of)) goto L_8052c8;
L_8052c5: /* 8052c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8052c6: jmp 0x8052c0 */
  goto L_8052c0;
L_8052c8: /* 8052c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8052ca: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8052cc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8052d2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8052d2: xor ebx, ebx */
  ebx = 0;
/* 8052d4: jmp 0x8052e0 */
  goto L_8052e0;
L_8052e0: /* 8052e0: mov eax, dword ptr [edi + 0xf4] */
  eax = R32((uint32_t)(edi + 0xf4u));
/* 8052e6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8052e8: lea ecx, [edi + 0xf0] */
  ecx = (uint32_t)(edi + 0xf0u);
/* 8052ee: jge 0x805347 */
  if ((sf == of)) goto L_805347;
L_8052f0: /* 8052f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8052f2: mov esi, ebx */
  esi = ebx;
/* 8052f4: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 8052fa: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8052fc: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8052ff: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 805305: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 805309: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x80530eu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 80530e: lea edi, [esi + 0x8c] */
  edi = (uint32_t)(esi + 0x8cu);
/* 805314: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 805317: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 80531a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80531b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80531d: mov ecx, edi */
  ecx = edi;
/* 80531f: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 805323: call 0x6c5560 */
  esp -= 4; W32(esp, 0x805328u); SPILL(); f_6c5560(); if (g_unwind) return; RELOAD();
/* 805328: mov ecx, edi */
  ecx = edi;
/* 80532a: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 80532e: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x805334u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 805334: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 805337: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80533b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x805341u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 805341: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 805344: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 805345: jmp 0x8052e0 */
  goto L_8052e0;
L_805347: /* 805347: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805349: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 80534e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x805354u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 805354: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805356: lea ecx, [edi + 0xfc] */
  ecx = (uint32_t)(edi + 0xfcu);
/* 80535c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80535e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x805364u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 805364: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 805367: lea ebx, [esi + 0xe4] */
  ebx = (uint32_t)(esi + 0xe4u);
/* 80536d: xor edi, edi */
  edi = 0;
/* 80536f: nop  */
L_805370: /* 805370: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805373: jge 0x8053a9 */
  if ((sf == of)) goto L_8053a9;
L_805375: /* 805375: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 805377: mov esi, edi */
  esi = edi;
/* 805379: imul esi, esi, 0x6c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x6cu);
  esi = (uint32_t)r;
  }
/* 80537c: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80537e: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 805381: push 0x6ccd74 */
  { uint32_t v = 0x6ccd74u; esp -= 4; W32(esp, v); }
/* 805386: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 805388: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 80538a: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 80538d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80538e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 805392: call 0x99ca3d */
  esp -= 4; W32(esp, 0x805397u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 805397: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 80539a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80539e: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8053a3u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8053a3: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8053a6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8053a7: jmp 0x805370 */
  goto L_805370;
L_8053a9: /* 8053a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8053ab: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 8053ad: mov ecx, ebx */
  ecx = ebx;
/* 8053af: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8053b5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8053b5: lea ebx, [esi + 0xd8] */
  ebx = (uint32_t)(esi + 0xd8u);
/* 8053bb: xor edi, edi */
  edi = 0;
/* 8053bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8053c0: /* 8053c0: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8053c3: jge 0x8053d9 */
  if ((sf == of)) goto L_8053d9;
L_8053c5: /* 8053c5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8053c7: mov eax, edi */
  eax = edi;
/* 8053c9: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8053cc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8053ce: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8053d1: call 0x6c770c */
  esp -= 4; W32(esp, 0x8053d6u); SPILL(); f_6c770c(); if (g_unwind) return; RELOAD();
/* 8053d6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8053d7: jmp 0x8053c0 */
  goto L_8053c0;
L_8053d9: /* 8053d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8053db: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8053dd: mov ecx, ebx */
  ecx = ebx;
/* 8053df: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8053e5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8053e5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8053e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8053ea: je 0x8054d8 */
  if (zf) goto L_8054d8;
L_8053f0: /* 8053f0: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 8053f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8053f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8053f9: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8053fc: lea esi, [edi + 0x78] */
  esi = (uint32_t)(edi + 0x78u);
/* 8053ff: je 0x80541f */
  if (zf) goto L_80541f;
L_805401: /* 805401: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 805404: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 805406: push 0x6c6f78 */
  { uint32_t v = 0x6c6f78u; esp -= 4; W32(esp, v); }
/* 80540b: push 0x6c4b92 */
  { uint32_t v = 0x6c4b92u; esp -= 4; W32(esp, v); }
/* 805410: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 805412: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 805414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805415: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 805418: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80541a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80541b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80541c: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x80541fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80541f: /* 80541f: xor eax, eax */
  eax = 0;
L_805421: /* 805421: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805424: jge 0x805429 */
  if ((sf == of)) goto L_805429;
L_805426: /* 805426: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 805427: jmp 0x805421 */
  goto L_805421;
L_805429: /* 805429: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80542b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 80542d: mov ecx, esi */
  ecx = esi;
/* 80542f: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x805435u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 805435: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 80543b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80543d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80543f: lea esi, [edi + 0x88] */
  esi = (uint32_t)(edi + 0x88u);
/* 805445: je 0x805465 */
  if (zf) goto L_805465;
L_805447: /* 805447: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 80544a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80544c: push 0x6c6f78 */
  { uint32_t v = 0x6c6f78u; esp -= 4; W32(esp, v); }
/* 805451: push 0x6c4b92 */
  { uint32_t v = 0x6c4b92u; esp -= 4; W32(esp, v); }
/* 805456: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 805458: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80545a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80545b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 80545e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805461: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805462: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x805465u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_805465: /* 805465: xor eax, eax */
  eax = 0;
L_805467: /* 805467: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80546a: jge 0x80546f */
  if ((sf == of)) goto L_80546f;
L_80546c: /* 80546c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80546d: jmp 0x805467 */
  goto L_805467;
L_80546f: /* 80546f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805471: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 805473: mov ecx, esi */
  ecx = esi;
/* 805475: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80547bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80547b: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 805481: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 805483: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 805485: lea esi, [edi + 0x98] */
  esi = (uint32_t)(edi + 0x98u);
/* 80548b: je 0x8054ab */
  if (zf) goto L_8054ab;
L_80548d: /* 80548d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 805490: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 805492: push 0x6c62f8 */
  { uint32_t v = 0x6c62f8u; esp -= 4; W32(esp, v); }
/* 805497: push 0x6c181b */
  { uint32_t v = 0x6c181bu; esp -= 4; W32(esp, v); }
/* 80549c: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 80549e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8054a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8054a1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8054a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8054a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8054a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8054a8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8054abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8054ab: /* 8054ab: xor edi, edi */
  edi = 0;
/* 8054ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8054b0: /* 8054b0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8054b3: jge 0x8054c9 */
  if ((sf == of)) goto L_8054c9;
L_8054b5: /* 8054b5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8054b7: mov eax, edi */
  eax = edi;
/* 8054b9: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8054bc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8054be: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 8054c1: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8054c6u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8054c6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8054c7: jmp 0x8054b0 */
  goto L_8054b0;
L_8054c9: /* 8054c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8054cb: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 8054cd: mov ecx, esi */
  ecx = esi;
/* 8054cf: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8054d5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8054d5: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_8054d8: /* 8054d8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8054db: xor edi, edi */
  edi = 0;
/* 8054dd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8054df: je 0x805526 */
  if (zf) goto L_805526;
L_8054e1: /* 8054e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8054e2: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8054e5: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8054ebu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8054eb: mov ecx, esi */
  ecx = esi;
/* 8054ed: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8054f3u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8054f3: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8054f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8054fb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8054fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8054ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 805500: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 805501: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 805502: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 805504: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805506: push 0xb7fbd0 */
  { uint32_t v = 0xb7fbd0u; esp -= 4; W32(esp, v); }
/* 80550b: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x805511u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 805511: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805514: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 805516: je 0x805521 */
  if (zf) goto L_805521;
L_805518: /* 805518: mov ecx, eax */
  ecx = eax;
/* 80551a: call 0x6c38e6 */
  esp -= 4; W32(esp, 0x80551fu); SPILL(); f_6c38e6(); if (g_unwind) return; RELOAD();
/* 80551f: jmp 0x805523 */
  goto L_805523;
L_805521: /* 805521: xor eax, eax */
  eax = 0;
L_805523: /* 805523: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
L_805526: /* 805526: mov dword ptr [esi + 0x114], 4 */
  W32((uint32_t)(esi + 0x114u), 0x4u);
/* 805530: mov dword ptr [esi + 0x118], edi */
  W32((uint32_t)(esi + 0x118u), edi);
L_805536: /* 805536: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805539: jge 0x8055aa */
  if ((sf == of)) goto L_8055aa;
L_80553b: /* 80553b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80553e: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 805541: lea esi, [eax + edx*8] */
  esi = (uint32_t)(eax + edx*8);
/* 805544: mov eax, 1 */
  eax = 0x1u;
/* 805549: xor edx, edx */
  edx = 0;
/* 80554b: mov ecx, edi */
  ecx = edi;
/* 80554d: mov dword ptr [esi + 0x11c], 0 */
  W32((uint32_t)(esi + 0x11cu), 0x0u);
/* 805557: call 0x99cc70 */
  esp -= 4; W32(esp, 0x80555cu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 80555c: mov dword ptr [esi + 0x124], eax */
  W32((uint32_t)(esi + 0x124u), eax);
/* 805562: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 805565: mov dword ptr [esi + 0x128], edx */
  W32((uint32_t)(esi + 0x128u), edx);
/* 80556b: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
/* 805571: mov dword ptr [esi + 0x130], eax */
  W32((uint32_t)(esi + 0x130u), eax);
/* 805577: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 805578: jmp 0x805536 */
  goto L_805536;
L_8055aa: /* 8055aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8055ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8055ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8055af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8055b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8055b7: mov esp, ebp */
  esp = ebp;
/* 8055b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8055ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8052d6(void) {
  LOAD_REGS();
L_8052d6: /* 8052d6: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8052dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8052e0: /* 8052e0: mov eax, dword ptr [edi + 0xf4] */
  eax = R32((uint32_t)(edi + 0xf4u));
/* 8052e6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8052e8: lea ecx, [edi + 0xf0] */
  ecx = (uint32_t)(edi + 0xf0u);
/* 8052ee: jge 0x805347 */
  if ((sf == of)) goto L_805347;
L_8052f0: /* 8052f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8052f2: mov esi, ebx */
  esi = ebx;
/* 8052f4: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 8052fa: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8052fc: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8052ff: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 805305: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 805309: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x80530eu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 80530e: lea edi, [esi + 0x8c] */
  edi = (uint32_t)(esi + 0x8cu);
/* 805314: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 805317: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 80531a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80531b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80531d: mov ecx, edi */
  ecx = edi;
/* 80531f: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 805323: call 0x6c5560 */
  esp -= 4; W32(esp, 0x805328u); SPILL(); f_6c5560(); if (g_unwind) return; RELOAD();
/* 805328: mov ecx, edi */
  ecx = edi;
/* 80532a: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 80532e: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x805334u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 805334: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 805337: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80533b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x805341u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 805341: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 805344: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 805345: jmp 0x8052e0 */
  goto L_8052e0;
L_805347: /* 805347: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805349: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 80534e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x805354u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 805354: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805356: lea ecx, [edi + 0xfc] */
  ecx = (uint32_t)(edi + 0xfcu);
/* 80535c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80535e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x805364u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 805364: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 805367: lea ebx, [esi + 0xe4] */
  ebx = (uint32_t)(esi + 0xe4u);
/* 80536d: xor edi, edi */
  edi = 0;
/* 80536f: nop  */
L_805370: /* 805370: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805373: jge 0x8053a9 */
  if ((sf == of)) goto L_8053a9;
L_805375: /* 805375: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 805377: mov esi, edi */
  esi = edi;
/* 805379: imul esi, esi, 0x6c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x6cu);
  esi = (uint32_t)r;
  }
/* 80537c: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80537e: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 805381: push 0x6ccd74 */
  { uint32_t v = 0x6ccd74u; esp -= 4; W32(esp, v); }
/* 805386: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 805388: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 80538a: lea edx, [esi + 0x18] */
  edx = (uint32_t)(esi + 0x18u);
/* 80538d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80538e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 805392: call 0x99ca3d */
  esp -= 4; W32(esp, 0x805397u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 805397: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 80539a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80539e: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8053a3u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8053a3: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8053a6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8053a7: jmp 0x805370 */
  goto L_805370;
L_8053a9: /* 8053a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8053ab: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 8053ad: mov ecx, ebx */
  ecx = ebx;
/* 8053af: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8053b5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8053b5: lea ebx, [esi + 0xd8] */
  ebx = (uint32_t)(esi + 0xd8u);
/* 8053bb: xor edi, edi */
  edi = 0;
/* 8053bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8053c0: /* 8053c0: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8053c3: jge 0x8053d9 */
  if ((sf == of)) goto L_8053d9;
L_8053c5: /* 8053c5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8053c7: mov eax, edi */
  eax = edi;
/* 8053c9: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8053cc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8053ce: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8053d1: call 0x6c770c */
  esp -= 4; W32(esp, 0x8053d6u); SPILL(); f_6c770c(); if (g_unwind) return; RELOAD();
/* 8053d6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8053d7: jmp 0x8053c0 */
  goto L_8053c0;
L_8053d9: /* 8053d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8053db: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8053dd: mov ecx, ebx */
  ecx = ebx;
/* 8053df: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8053e5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8053e5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8053e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8053ea: je 0x8054d8 */
  if (zf) goto L_8054d8;
L_8053f0: /* 8053f0: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 8053f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8053f7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8053f9: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8053fc: lea esi, [edi + 0x78] */
  esi = (uint32_t)(edi + 0x78u);
/* 8053ff: je 0x80541f */
  if (zf) goto L_80541f;
L_805401: /* 805401: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 805404: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 805406: push 0x6c6f78 */
  { uint32_t v = 0x6c6f78u; esp -= 4; W32(esp, v); }
/* 80540b: push 0x6c4b92 */
  { uint32_t v = 0x6c4b92u; esp -= 4; W32(esp, v); }
/* 805410: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 805412: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 805414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805415: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 805418: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80541a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80541b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80541c: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x80541fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80541f: /* 80541f: xor eax, eax */
  eax = 0;
L_805421: /* 805421: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805424: jge 0x805429 */
  if ((sf == of)) goto L_805429;
L_805426: /* 805426: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 805427: jmp 0x805421 */
  goto L_805421;
L_805429: /* 805429: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80542b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 80542d: mov ecx, esi */
  ecx = esi;
/* 80542f: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x805435u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 805435: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 80543b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80543d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80543f: lea esi, [edi + 0x88] */
  esi = (uint32_t)(edi + 0x88u);
/* 805445: je 0x805465 */
  if (zf) goto L_805465;
L_805447: /* 805447: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 80544a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80544c: push 0x6c6f78 */
  { uint32_t v = 0x6c6f78u; esp -= 4; W32(esp, v); }
/* 805451: push 0x6c4b92 */
  { uint32_t v = 0x6c4b92u; esp -= 4; W32(esp, v); }
/* 805456: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 805458: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80545a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80545b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 80545e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805461: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805462: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x805465u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_805465: /* 805465: xor eax, eax */
  eax = 0;
L_805467: /* 805467: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80546a: jge 0x80546f */
  if ((sf == of)) goto L_80546f;
L_80546c: /* 80546c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80546d: jmp 0x805467 */
  goto L_805467;
L_80546f: /* 80546f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805471: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 805473: mov ecx, esi */
  ecx = esi;
/* 805475: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80547bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80547b: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 805481: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 805483: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 805485: lea esi, [edi + 0x98] */
  esi = (uint32_t)(edi + 0x98u);
/* 80548b: je 0x8054ab */
  if (zf) goto L_8054ab;
L_80548d: /* 80548d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 805490: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 805492: push 0x6c62f8 */
  { uint32_t v = 0x6c62f8u; esp -= 4; W32(esp, v); }
/* 805497: push 0x6c181b */
  { uint32_t v = 0x6c181bu; esp -= 4; W32(esp, v); }
/* 80549c: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 80549e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8054a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8054a1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8054a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8054a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8054a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8054a8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8054abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8054ab: /* 8054ab: xor edi, edi */
  edi = 0;
/* 8054ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8054b0: /* 8054b0: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8054b3: jge 0x8054c9 */
  if ((sf == of)) goto L_8054c9;
L_8054b5: /* 8054b5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8054b7: mov eax, edi */
  eax = edi;
/* 8054b9: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8054bc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8054be: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 8054c1: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8054c6u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8054c6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8054c7: jmp 0x8054b0 */
  goto L_8054b0;
L_8054c9: /* 8054c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8054cb: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 8054cd: mov ecx, esi */
  ecx = esi;
/* 8054cf: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8054d5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8054d5: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_8054d8: /* 8054d8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8054db: xor edi, edi */
  edi = 0;
/* 8054dd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8054df: je 0x805526 */
  if (zf) goto L_805526;
L_8054e1: /* 8054e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8054e2: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8054e5: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8054ebu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8054eb: mov ecx, esi */
  ecx = esi;
/* 8054ed: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8054f3u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8054f3: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8054f9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8054fb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8054fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8054ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 805500: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 805501: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 805502: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 805504: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805506: push 0xb7fbd0 */
  { uint32_t v = 0xb7fbd0u; esp -= 4; W32(esp, v); }
/* 80550b: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x805511u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 805511: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805514: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 805516: je 0x805521 */
  if (zf) goto L_805521;
L_805518: /* 805518: mov ecx, eax */
  ecx = eax;
/* 80551a: call 0x6c38e6 */
  esp -= 4; W32(esp, 0x80551fu); SPILL(); f_6c38e6(); if (g_unwind) return; RELOAD();
/* 80551f: jmp 0x805523 */
  goto L_805523;
L_805521: /* 805521: xor eax, eax */
  eax = 0;
L_805523: /* 805523: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
L_805526: /* 805526: mov dword ptr [esi + 0x114], 4 */
  W32((uint32_t)(esi + 0x114u), 0x4u);
/* 805530: mov dword ptr [esi + 0x118], edi */
  W32((uint32_t)(esi + 0x118u), edi);
L_805536: /* 805536: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805539: jge 0x8055aa */
  if ((sf == of)) goto L_8055aa;
L_80553b: /* 80553b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80553e: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 805541: lea esi, [eax + edx*8] */
  esi = (uint32_t)(eax + edx*8);
/* 805544: mov eax, 1 */
  eax = 0x1u;
/* 805549: xor edx, edx */
  edx = 0;
/* 80554b: mov ecx, edi */
  ecx = edi;
/* 80554d: mov dword ptr [esi + 0x11c], 0 */
  W32((uint32_t)(esi + 0x11cu), 0x0u);
/* 805557: call 0x99cc70 */
  esp -= 4; W32(esp, 0x80555cu); SPILL(); f_99cc70(); if (g_unwind) return; RELOAD();
/* 80555c: mov dword ptr [esi + 0x124], eax */
  W32((uint32_t)(esi + 0x124u), eax);
/* 805562: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 805565: mov dword ptr [esi + 0x128], edx */
  W32((uint32_t)(esi + 0x128u), edx);
/* 80556b: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
/* 805571: mov dword ptr [esi + 0x130], eax */
  W32((uint32_t)(esi + 0x130u), eax);
/* 805577: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 805578: jmp 0x805536 */
  goto L_805536;
L_8055aa: /* 8055aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8055ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8055ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8055af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8055b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8055b7: mov esp, ebp */
  esp = ebp;
/* 8055b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8055ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80557a(void) {
  LOAD_REGS();
L_80557a: /* 80557a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80557d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 805582: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 805585: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 805586: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 805589: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80558eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80558e(); return;
}

void f_80558e(void) {
  LOAD_REGS();
L_80558e: /* 80558e: push 0xa12c00 */
  { uint32_t v = 0xa12c00u; esp -= 4; W32(esp, v); }
/* 805593: push 0xae0d38 */
  { uint32_t v = 0xae0d38u; esp -= 4; W32(esp, v); }
/* 805598: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80559eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80559e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8055a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8055a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8055a5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8055aau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8055aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8055ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8055ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8055af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8055b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8055b7: mov esp, ebp */
  esp = ebp;
/* 8055b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8055ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_805710(void) {
  LOAD_REGS();
L_805710: /* 805710: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 805711: mov ebp, esp */
  ebp = esp;
/* 805713: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 805715: push 0x9d2210 */
  { uint32_t v = 0x9d2210u; esp -= 4; W32(esp, v); }
/* 80571a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 805720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805721: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 805728: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80572b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80572c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80572d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 805730: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 805731: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 805734: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 805737: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 80573c: xor ebx, ebx */
  ebx = 0;
/* 80573e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80573f: mov ecx, edi */
  ecx = edi;
/* 805741: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 805744: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x80574au); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 80574a: mov ecx, esi */
  ecx = esi;
/* 80574c: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x805752u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 805752: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 805754: je 0x8057b1 */
  if (zf) goto L_8057b1;
L_805756: /* 805756: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 805759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80575a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80575b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x805761u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 805761: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 805764: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 805767: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 805768: mov ecx, edi */
  ecx = edi;
/* 80576a: call 0x6ca77c */
  esp -= 4; W32(esp, 0x80576fu); SPILL(); f_6ca77c(); if (g_unwind) return; RELOAD();
/* 80576f: nop  */
L_805770: /* 805770: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 805773: jge 0x8057e4 */
  if ((sf == of)) goto L_8057e4;
L_805775: /* 805775: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 80577a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80577c: mov ecx, edi */
  ecx = edi;
/* 80577e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x805784u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 805784: imul eax, eax, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xa4u);
  eax = (uint32_t)r;
  }
/* 80578a: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 80578c: je 0x8057a2 */
  if (zf) goto L_8057a2;
L_80578e: /* 80578e: mov ecx, eax */
  ecx = eax;
/* 805790: call 0x6cbae1 */
  esp -= 4; W32(esp, 0x805795u); SPILL(); f_6cbae1(); if (g_unwind) return; RELOAD();
/* 805795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 805796: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 805797: call 0x6c8aee */
  esp -= 4; W32(esp, 0x80579cu); SPILL(); f_6c8aee(); if (g_unwind) return; RELOAD();
/* 80579c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80579f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8057a0: jmp 0x805770 */
  goto L_805770;
L_8057a2: /* 8057a2: xor eax, eax */
  eax = 0;
/* 8057a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8057a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8057a6: call 0x6c8aee */
  esp -= 4; W32(esp, 0x8057abu); SPILL(); f_6c8aee(); if (g_unwind) return; RELOAD();
/* 8057ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8057ae: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8057af: jmp 0x805770 */
  goto L_805770;
L_8057b1: /* 8057b1: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8057b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8057b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8057b6: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8057bcu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8057bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8057bf: xor esi, esi */
  esi = 0;
L_8057c1: /* 8057c1: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8057c3: jge 0x8057e1 */
  if ((sf == of)) goto L_8057e1;
L_8057c5: /* 8057c5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8057c7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8057ca: mov edx, esi */
  edx = esi;
/* 8057cc: imul edx, edx, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xa4u);
  edx = (uint32_t)r;
  }
/* 8057d2: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8057d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8057d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8057d6: call 0x6c8aee */
  esp -= 4; W32(esp, 0x8057dbu); SPILL(); f_6c8aee(); if (g_unwind) return; RELOAD();
/* 8057db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8057de: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8057df: jmp 0x8057c1 */
  goto L_8057c1;
L_8057e1: /* 8057e1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8057e4: /* 8057e4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8057e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8057e8: mov eax, esi */
  eax = esi;
/* 8057ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8057eb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8057f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8057f3: mov esp, ebp */
  esp = ebp;
/* 8057f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8057f6: ret  */
  esp += 4; SPILL(); return;
}

void f_8057f7(void) {
  LOAD_REGS();
L_8057f7: /* 8057f7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8057fa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8057ff: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 805802: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 805803: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 805806: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80580bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80580b(); return;
}

void f_80580b(void) {
  LOAD_REGS();
L_80580b: /* 80580b: push 0xa12c30 */
  { uint32_t v = 0xa12c30u; esp -= 4; W32(esp, v); }
/* 805810: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 805815: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80581bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80581b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80581e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805820: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 805822: call 0x99caf8 */
  esp -= 4; W32(esp, 0x805827u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_805827: guest_badaddr(0x805827); return;
}
