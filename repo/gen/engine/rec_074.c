#include "recomp.h"
#include "rec_mod.h"

void f_8588b5(void) {
  LOAD_REGS();
L_8588b5: /* 8588b5: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8588b8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8588bd: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8588c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8588c1: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8588c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8588c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8588c9(); return;
}

void f_8588c9(void) {
  LOAD_REGS();
L_8588c9: /* 8588c9: push 0xa1741c */
  { uint32_t v = 0xa1741cu; esp -= 4; W32(esp, v); }
/* 8588ce: push 0xae4bb0 */
  { uint32_t v = 0xae4bb0u; esp -= 4; W32(esp, v); }
/* 8588d3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8588d9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8588d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8588dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8588de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8588e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8588e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8588e5: guest_badaddr(0x8588e5); return;
}

void f_858ae0(void) {
  LOAD_REGS();
L_858ae0: /* 858ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 858ae1: mov ebp, esp */
  ebp = esp;
/* 858ae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 858ae5: push 0x9d40b8 */
  { uint32_t v = 0x9d40b8u; esp -= 4; W32(esp, v); }
/* 858aea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 858af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858af1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 858af8: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 858afb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 858afe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 858aff: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 858b02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 858b03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 858b04: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 858b07: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 858b0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858b0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 858b0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 858b0d: mov esi, ecx */
  esi = ecx;
/* 858b0f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 858b16: call 0x6c19ec */
  esp -= 4; W32(esp, 0x858b1bu); SPILL(); f_6c19ec(); if (g_unwind) return; RELOAD();
/* 858b1b: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 858b1e: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x858b24u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 858b24: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* 858b27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 858b29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 858b2a: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 858b2d: call 0x6c460b */
  esp -= 4; W32(esp, 0x858b32u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 858b32: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 858b35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 858b36: mov ecx, esi */
  ecx = esi;
/* 858b38: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 858b3c: call 0x6c61ef */
  esp -= 4; W32(esp, 0x858b41u); SPILL(); f_6c61ef(); if (g_unwind) return; RELOAD();
/* 858b41: mov edx, dword ptr [esi + 0x284] */
  edx = R32((uint32_t)(esi + 0x284u));
/* 858b47: mov ecx, dword ptr [edi + 0xdc] */
  ecx = R32((uint32_t)(edi + 0xdcu));
/* 858b4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858b4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 858b4f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 858b52: add esi, 0x440 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x440u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 858b58: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 858b5a: mov edx, esp */
  edx = esp;
/* 858b5c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 858b5e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 858b61: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 858b64: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 858b67: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 858b6a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 858b6c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 858b6f: mov edx, esp */
  edx = esp;
/* 858b71: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 858b73: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 858b76: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 858b79: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 858b7c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 858b7f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 858b82: call 0x6ccee1 */
  esp -= 4; W32(esp, 0x858b87u); SPILL(); f_6ccee1(); if (g_unwind) return; RELOAD();
/* 858b87: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 858b8a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 858b8e: call 0x6cadcb */
  esp -= 4; W32(esp, 0x858b93u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 858b93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 858b96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 858b97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 858b98: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 858b9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 858ba0: mov esp, ebp */
  esp = ebp;
/* 858ba2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 858ba3: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_858ba6(void) {
  LOAD_REGS();
L_858ba6: /* 858ba6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 858ba9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 858bae: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 858bb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858bb2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 858bb5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x858bbau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_858bba(); return;
}

void f_858bba(void) {
  LOAD_REGS();
L_858bba: /* 858bba: push 0xa17458 */
  { uint32_t v = 0xa17458u; esp -= 4; W32(esp, v); }
/* 858bbf: push 0xae4b2c */
  { uint32_t v = 0xae4b2cu; esp -= 4; W32(esp, v); }
/* 858bc4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x858bcau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 858bca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 858bcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 858bcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 858bd1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x858bd6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_858bd6: guest_badaddr(0x858bd6); return;
}

void f_858c20(void) {
  LOAD_REGS();
L_858c20: /* 858c20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 858c21: mov ebp, esp */
  ebp = esp;
/* 858c23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 858c25: push 0x9d40d8 */
  { uint32_t v = 0x9d40d8u; esp -= 4; W32(esp, v); }
/* 858c2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 858c30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858c31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 858c38: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 858c3b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 858c3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 858c3f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 858c42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 858c43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 858c44: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 858c47: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 858c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858c4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 858c4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 858c4d: mov esi, ecx */
  esi = ecx;
/* 858c4f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 858c56: call 0x6c19ec */
  esp -= 4; W32(esp, 0x858c5bu); SPILL(); f_6c19ec(); if (g_unwind) return; RELOAD();
/* 858c5b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 858c5e: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 858c61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 858c63: je 0x858d04 */
  if (zf) goto L_858d04;
L_858c69: /* 858c69: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 858c6f: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 858c72: je 0x858c82 */
  if (zf) goto L_858c82;
L_858c74: /* 858c74: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 858c77: je 0x858c82 */
  if (zf) goto L_858c82;
L_858c79: /* 858c79: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 858c7c: jne 0x858d04 */
  if (!zf) goto L_858d04;
L_858c82: /* 858c82: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 858c87: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 858c89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858c8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 858c8c: mov ecx, ebx */
  ecx = ebx;
/* 858c8e: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x858c91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 858c91: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 858c93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 858c94: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 858c97: call 0x6c460b */
  esp -= 4; W32(esp, 0x858c9cu); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 858c9c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 858c9f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 858ca3: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x858ca9u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 858ca9: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 858cac: mov ecx, dword ptr [esi + 0x284] */
  ecx = R32((uint32_t)(esi + 0x284u));
/* 858cb2: mov edx, dword ptr [eax + 0xdc] */
  edx = R32((uint32_t)(eax + 0xdcu));
/* 858cb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 858cb9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 858cba: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 858cc0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 858cc2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 858cc5: mov ecx, esp */
  ecx = esp;
/* 858cc7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 858cc9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 858ccc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 858ccf: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 858cd2: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 858cd5: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 858cdb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 858cdd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 858ce0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 858ce3: mov ecx, esp */
  ecx = esp;
/* 858ce5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 858ce7: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 858cea: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 858ced: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 858cf0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 858cf3: call 0x6ccee1 */
  esp -= 4; W32(esp, 0x858cf8u); SPILL(); f_6ccee1(); if (g_unwind) return; RELOAD();
/* 858cf8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 858cfb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 858cff: call 0x6cadcb */
  esp -= 4; W32(esp, 0x858d04u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_858d04: /* 858d04: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 858d07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 858d08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 858d09: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 858d10: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 858d11: mov esp, ebp */
  esp = ebp;
/* 858d13: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 858d14: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_858d17(void) {
  LOAD_REGS();
L_858d17: /* 858d17: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 858d1a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 858d1f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 858d22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 858d23: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 858d26: call 0x99caf8 */
  esp -= 4; W32(esp, 0x858d2bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_858d2b(); return;
}

void f_858d2b(void) {
  LOAD_REGS();
L_858d2b: /* 858d2b: push 0xa174a4 */
  { uint32_t v = 0xa174a4u; esp -= 4; W32(esp, v); }
/* 858d30: push 0xae4b3c */
  { uint32_t v = 0xae4b3cu; esp -= 4; W32(esp, v); }
/* 858d35: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x858d3bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 858d3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 858d3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 858d40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 858d42: call 0x99caf8 */
  esp -= 4; W32(esp, 0x858d47u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_858d47: guest_badaddr(0x858d47); return;
}

void f_858da0(void) {
  LOAD_REGS();
L_858da0: /* 858da0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 858da1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 858da5: shr eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 858da8: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 858dac: shr ebx, 0x17 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 23;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 858daf: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 858db4: fld dword ptr [eax*4 + 0xccbb98] */
  { double v = F32((uint32_t)(eax*4 + 0xccbb98u)); FPUSH(v); }
/* 858dbb: fmul dword ptr [ebx*4 + 0xcca398] */
  ST0 = ST0 * (F32((uint32_t)(ebx*4 + 0xcca398u)));
/* 858dc2: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 858dc6: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 858dca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 858dcb: ret  */
  esp += 4; SPILL(); return;
}

void f_858de0(void) {
  LOAD_REGS();
L_858de0: /* 858de0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 858de1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 858de5: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 858de8: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 858dec: and eax, 0x1ffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 858df1: and ebx, 0x7f000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7f000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 858df7: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 858df9: mov eax, dword ptr [eax + 0xcccb98] */
  eax = R32((uint32_t)(eax + 0xcccb98u));
/* 858dff: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 858e01: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 858e05: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 858e09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 858e0a: ret  */
  esp += 4; SPILL(); return;
}

void f_858e20(void) {
  LOAD_REGS();
L_858e20: /* 858e20: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 858e24: mov eax, ecx */
  eax = ecx;
/* 858e26: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 858e2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 858e2b: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 858e2f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 858e32: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 858e35: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 858e38: lea edx, [eax + 0x18] */
  edx = (uint32_t)(eax + 0x18u);
/* 858e3b: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 858e3e: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 858e41: mov dword ptr [eax + 0x14], 0 */
  W32((uint32_t)(eax + 0x14u), 0x0u);
/* 858e48: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 858e4a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 858e4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 858e4e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_858e70(void) {
  LOAD_REGS();
L_858e70: /* 858e70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 858e74: imul eax, dword ptr [esp + 8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8u)));
  eax = (uint32_t)r;
  }
/* 858e79: add eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 858e7d: lea eax, [eax*4 + 0x18] */
  eax = (uint32_t)(eax*4 + 0x18u);
/* 858e84: ret  */
  esp += 4; SPILL(); return;
}

void f_858ea0(void) {
  LOAD_REGS();
L_858ea0: /* 858ea0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 858ea4: ret  */
  esp += 4; SPILL(); return;
}

void f_858ec0(void) {
  LOAD_REGS();
L_858ec0: /* 858ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 858ec1: mov ebp, esp */
  ebp = esp;
/* 858ec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 858ec5: push 0x9d40f0 */
  { uint32_t v = 0x9d40f0u; esp -= 4; W32(esp, v); }
/* 858eca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 858ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858ed1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 858ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 858edb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 858ede: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 858edf: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 858ee2: mov edx, dword ptr [ecx + eax*8 + 4] */
  edx = R32((uint32_t)(ecx + eax*8 + 0x4u));
/* 858ee6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 858ee7: lea ecx, [ecx + eax*8 + 4] */
  ecx = (uint32_t)(ecx + eax*8 + 0x4u);
/* 858eeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 858eec: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 858eef: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 858ef6: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x858ef9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 858ef9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 858efc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 858efd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 858efe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 858f05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 858f06: mov esp, ebp */
  esp = ebp;
/* 858f08: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 858f09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_858f0c(void) {
  LOAD_REGS();
L_858f0c: /* 858f0c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 858f0f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 858f14: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 858f17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 858f18: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 858f1b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x858f20u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_858f20(); return;
}

void f_858f20(void) {
  LOAD_REGS();
L_858f20: /* 858f20: push 0xa174e8 */
  { uint32_t v = 0xa174e8u; esp -= 4; W32(esp, v); }
/* 858f25: push 0xae4cc4 */
  { uint32_t v = 0xae4cc4u; esp -= 4; W32(esp, v); }
/* 858f2a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x858f30u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 858f30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 858f33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 858f35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 858f37: call 0x99caf8 */
  esp -= 4; W32(esp, 0x858f3cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_858f3c: guest_badaddr(0x858f3c); return;
}

void f_858f60(void) {
  LOAD_REGS();
L_858f60: /* 858f60: mov ecx, dword ptr [0xce9ec0] */
  ecx = R32((uint32_t)(0xce9ec0u));
/* 858f66: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 858f68: je 0x858f7b */
  if (zf) goto L_858f7b;
L_858f6a: /* 858f6a: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 858f6c: call 0x6c2e32 */
  esp -= 4; W32(esp, 0x858f71u); SPILL(); f_6c2e32(); if (g_unwind) return; RELOAD();
/* 858f71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 858f73: jle 0x858f7b */
  if ((zf || sf != of)) goto L_858f7b;
L_858f75: /* 858f75: mov eax, 1 */
  eax = 0x1u;
/* 858f7a: ret  */
  esp += 4; SPILL(); return;
L_858f7b: /* 858f7b: xor eax, eax */
  eax = 0;
/* 858f7d: ret  */
  esp += 4; SPILL(); return;
}

void f_858f90(void) {
  LOAD_REGS();
L_858f90: /* 858f90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 858f94: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 858f98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 858f9a: jbe 0x858f9e */
  if ((cf | zf)) goto L_858f9e;
L_858f9c: /* 858f9c: mov eax, ecx */
  eax = ecx;
L_858f9e: /* 858f9e: ret  */
  esp += 4; SPILL(); return;
}

void f_858fb0(void) {
  LOAD_REGS();
L_858fb0: /* 858fb0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 858fb4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 858fb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 858fb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 858fba: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 858fbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858fbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 858fc0: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x858fc6u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 858fc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 858fc7: mov esi, eax */
  esi = eax;
/* 858fc9: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 858fce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 858fcf: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x858fd5u); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 858fd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 858fd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 858fd9: mov eax, esi */
  eax = esi;
/* 858fdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 858fdc: ret  */
  esp += 4; SPILL(); return;
}

void f_858ff0(void) {
  LOAD_REGS();
L_858ff0: /* 858ff0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 858ff1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 858ff5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 858ff9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 858ffa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 858ffb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 858ffc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 858ffd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 859001: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x859007u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 859007: mov edx, eax */
  edx = eax;
/* 859009: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 85900d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 859011: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 859015: xor eax, eax */
  eax = 0;
/* 859017: mov ebx, ecx */
  ebx = ecx;
/* 859019: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 85901c: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 85901f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 859021: mov ecx, ebx */
  ecx = ebx;
/* 859023: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 859025: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 859026: mov eax, edx */
  eax = edx;
/* 859028: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 859029: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 85902a: ret  */
  esp += 4; SPILL(); return;
}

void f_859040(void) {
  LOAD_REGS();
L_859040: /* 859040: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 859044: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 859048: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 859049: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85904a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 85904e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x859054u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 859054: ret  */
  esp += 4; SPILL(); return;
}

void f_859070(void) {
  LOAD_REGS();
L_859070: /* 859070: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 859074: fcom qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
/* 85907a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85907c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85907f: je 0x859083 */
  if (zf) goto L_859083;
L_859081: /* 859081: fchs  */
  ST0 = -ST0;
L_859083: /* 859083: ret  */
  esp += 4; SPILL(); return;
}

void f_8590a0(void) {
  LOAD_REGS();
L_8590a0: /* 8590a0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8590a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8590a6: je 0x8590b0 */
  if (zf) goto L_8590b0;
L_8590a8: /* 8590a8: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x8590aeu); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 8590ae: jmp 0x8590b2 */
  goto L_8590b2;
L_8590b0: /* 8590b0: xor eax, eax */
  eax = 0;
L_8590b2: /* 8590b2: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8590b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8590b7: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8590bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8590bc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8590be: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8590c1: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8590c3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8590c7: xor edi, edi */
  edi = 0;
/* 8590c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8590ca: xor ecx, ecx */
  ecx = 0;
/* 8590cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8590cd: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8590d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8590d1: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8590d3: call 0x99c910 */
  esp -= 4; W32(esp, 0x8590d8u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8590d8: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 8590da: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 8590dc: mov edx, edi */
  edx = edi;
/* 8590de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8590df: mov eax, esi */
  eax = esi;
/* 8590e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8590e2: ret  */
  esp += 4; SPILL(); return;
}

void f_859110(void) {
  LOAD_REGS();
L_859110: /* 859110: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 859111: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 859115: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 859119: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 85911d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 859121: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 859123: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 859127: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 85912b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85912d: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 859131: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 859137: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 859139: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85913c: jne 0x8591a0 */
  if (!zf) goto L_8591a0;
L_85913e: /* 85913e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 859142: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 859146: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 859148: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85914b: jp 0x8591a0 */
  if (pf) goto L_8591a0;
L_85914d: /* 85914d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 859153: fdiv dword ptr [esp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0xcu)));
/* 859157: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 85915b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85915d: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 859161: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 859165: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 859169: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85916b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 85916d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85916f: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 859175: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 859177: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 85917d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 859181: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 859185: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 85918b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85918d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 859190: je 0x859194 */
  if (zf) goto L_859194;
L_859192: /* 859192: fchs  */
  ST0 = -ST0;
L_859194: /* 859194: fdiv dword ptr [esp + 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x1cu)));
/* 859198: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 85919c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 85919e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 85919f: ret  */
  esp += 4; SPILL(); return;
L_8591a0: /* 8591a0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8591a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8591a7: ret  */
  esp += 4; SPILL(); return;
}

void f_8591e0(void) {
  LOAD_REGS();
L_8591e0: /* 8591e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8591e1: mov ebp, esp */
  ebp = esp;
/* 8591e3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 8591e6: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8591e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8591ea: mov esi, ecx */
  esi = ecx;
/* 8591ec: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8591ee: mov al, byte ptr [eax + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x29u))) & 0xffu);
/* 8591f1: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8591f3: jne 0x85923f */
  if (!zf) goto L_85923f;
L_8591f5: /* 8591f5: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8591f8: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8591fb: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8591fe: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 859201: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 859203: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 859206: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 859209: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85920b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 859211: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 859213: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 859216: jp 0x8595c1 */
  if (pf) goto L_8595c1;
L_85921c: /* 85921c: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 85921f: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 859222: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 859225: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 859228: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85922a: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 85922d: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 859230: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 859232: fmul dword ptr [0xa0c9b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c9b4u)));
/* 859238: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 859239: mov esp, ebp */
  esp = ebp;
/* 85923b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85923c: ret 0x18 */
  esp += 28; SPILL(); return;
L_85923f: /* 85923f: cmp al, 0x11 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x11u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 859241: jne 0x8592cf */
  if (!zf) goto L_8592cf;
L_859247: /* 859247: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 85924a: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 85924e: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 859251: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 859255: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 859258: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 85925b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 85925f: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 859262: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 859265: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 859269: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85926fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85926f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 859272: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 859275: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x85927bu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 85927b: fcomp dword ptr [esi + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x30u)));
  FPOP();
/* 85927e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859281: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 859283: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 859286: jp 0x8595c1 */
  if (pf) goto L_8595c1;
L_85928c: /* 85928c: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 85928f: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 859293: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 859297: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 85929b: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 85929f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8592a1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8592a3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8592a5: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8592a7: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8592ad: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8592af: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8592b5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8592b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8592b9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8592bc: jne 0x8592c6 */
  if (!zf) goto L_8592c6;
L_8592be: /* 8592be: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8592c0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8592c6: /* 8592c6: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 8592c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8592c9: mov esp, ebp */
  esp = ebp;
/* 8592cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8592cc: ret 0x18 */
  esp += 28; SPILL(); return;
L_8592cf: /* 8592cf: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8592d1: jne 0x859373 */
  if (!zf) goto L_859373;
L_8592d7: /* 8592d7: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8592da: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8592de: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8592e1: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8592e5: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8592e8: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 8592eb: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8592ef: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8592f2: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 8592f5: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8592f9: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8592ffu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8592ff: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 859302: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 859305: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x85930bu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 85930b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 85930f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859312: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 859316: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 859319: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 85931d: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 859320: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 859322: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 859326: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 859329: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85932b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 859331: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 859333: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 859336: jne 0x8595c1 */
  if (!zf) goto L_8595c1;
L_85933c: /* 85933c: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 859340: fcomp dword ptr [esi + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x30u)));
  FPOP();
/* 859343: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 859345: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 859348: jp 0x8595c1 */
  if (pf) goto L_8595c1;
L_85934e: /* 85934e: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 859352: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 859355: fdiv dword ptr [esi + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x30u)));
/* 859358: fsubr dword ptr [0xa09e14] */
  ST0 = (F32((uint32_t)(0xa09e14u))) - ST0;
/* 85935e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 859361: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x859367u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 859367: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85936a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 85936c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85936d: mov esp, ebp */
  esp = ebp;
/* 85936f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 859370: ret 0x18 */
  esp += 28; SPILL(); return;
L_859373: /* 859373: cmp al, 0x14 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 859375: jne 0x859406 */
  if (!zf) goto L_859406;
L_85937b: /* 85937b: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 85937e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 859382: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 859385: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 859389: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 85938c: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 85938f: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 859393: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 859396: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 859399: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 85939d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8593a3u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8593a3: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8593a7: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 8593aa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8593ac: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8593ae: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8593b2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8593b4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8593b8: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 8593bb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8593bf: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8593c2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8593c4: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8593c8: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8593cb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8593cd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8593d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8593d5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8593d8: jne 0x8595c1 */
  if (!zf) goto L_8595c1;
L_8593de: /* 8593de: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8593e2: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 8593e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8593e8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8593eb: jp 0x8595c1 */
  if (pf) goto L_8595c1;
L_8593f1: /* 8593f1: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8593f5: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 8593fb: fdivr dword ptr [esp + 4] */
  ST0 = (F32((uint32_t)(esp + 0x4u))) / ST0;
/* 8593ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 859400: mov esp, ebp */
  esp = ebp;
/* 859402: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 859403: ret 0x18 */
  esp += 28; SPILL(); return;
L_859406: /* 859406: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 859408: je 0x85948e */
  if (zf) goto L_85948e;
L_85940e: /* 85940e: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 859410: je 0x85948e */
  if (zf) goto L_85948e;
L_859412: /* 859412: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 859415: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 859418: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 85941b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 85941e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 859421: mov ecx, esp */
  ecx = esp;
/* 859423: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 859427: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 859429: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 85942c: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 85942f: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 859432: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 859435: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 859438: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 85943c: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 859440: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 859443: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 859447: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 85944a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85944d: mov eax, esp */
  eax = esp;
/* 85944f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 859451: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 859455: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 859459: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 85945c: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 85945f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 859462: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 859463: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 859467: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85946du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85946d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 859470: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 859473: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x859479u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 859479: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85947c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85947f: call 0x6c9b92 */
  esp -= 4; W32(esp, 0x859484u); SPILL(); f_6c9b92(); if (g_unwind) return; RELOAD();
/* 859484: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859487: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 859488: mov esp, ebp */
  esp = ebp;
/* 85948a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85948b: ret 0x18 */
  esp += 28; SPILL(); return;
L_85948e: /* 85948e: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 859491: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 859495: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 859498: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 85949c: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 85949f: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 8594a2: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8594a6: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8594a9: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 8594ac: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8594b0: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8594b6u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8594b6: fst dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0);
/* 8594ba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8594bd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8594c0: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8594c6u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8594c6: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8594c9: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8594cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8594ce: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8594d1: mov eax, esp */
  eax = esp;
/* 8594d3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8594d5: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8594d8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8594db: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8594de: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8594e2: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8594e6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8594e9: mov edx, esp */
  edx = esp;
/* 8594eb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8594ed: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 8594f1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8594f4: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 8594f7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8594fa: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8594fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8594ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 859500: call 0x6c9b92 */
  esp -= 4; W32(esp, 0x859505u); SPILL(); f_6c9b92(); if (g_unwind) return; RELOAD();
/* 859505: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 859509: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 85950f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859512: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 859514: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 859517: jne 0x8595c1 */
  if (!zf) goto L_8595c1;
L_85951d: /* 85951d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85951f: movzx ecx, byte ptr [eax + 0x38] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x38u)));
/* 859523: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 859527: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 85952b: fmul qword ptr [0xa0a4c8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0a4c8u)));
/* 859531: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 859537: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 85953b: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 859541: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 859547: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 85954b: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 85954f: fchs  */
  ST0 = -ST0;
/* 859551: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 859555: fchs  */
  ST0 = -ST0;
/* 859557: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 85955b: fchs  */
  ST0 = -ST0;
/* 85955d: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 859560: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 859562: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 859565: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 859567: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 859569: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 85956c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85956e: fst dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0);
/* 859572: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 859578: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85957a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85957d: jne 0x8595c1 */
  if (!zf) goto L_8595c1;
L_85957f: /* 85957f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 859583: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 859587: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 85958b: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 85958f: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 859593: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 859595: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 859597: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85959a: jp 0x8595c1 */
  if (pf) goto L_8595c1;
L_85959c: /* 85959c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8595a0: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
/* 8595a4: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8595a8: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8595ac: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 8595b0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8595b2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8595b4: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8595b6: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8595ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8595bb: mov esp, ebp */
  esp = ebp;
/* 8595bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8595be: ret 0x18 */
  esp += 28; SPILL(); return;
L_8595c1: /* 8595c1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8595c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8595c8: mov esp, ebp */
  esp = ebp;
/* 8595ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8595cb: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8596d0(void) {
  LOAD_REGS();
L_8596d0: /* 8596d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8596d1: mov ebp, esp */
  ebp = esp;
/* 8596d3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 8596d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8596d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8596d8: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8596db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8596dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8596dd: xor esi, esi */
  esi = 0;
/* 8596df: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 8596e7: xor edi, edi */
  edi = 0;
/* 8596e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8596f0: /* 8596f0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8596f4: and eax, 0x7fffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8596f9: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8596fb: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 8596ff: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 859703: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 859709: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 85970d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85970f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 859712: je 0x859716 */
  if (zf) goto L_859716;
L_859714: /* 859714: fchs  */
  ST0 = -ST0;
L_859716: /* 859716: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 859719: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85971c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 859720: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 859723: call dword ptr [0xcfaa8c] */
  esp -= 4; W32(esp, 0x859729u); SPILL(); f_4e2abd(); if (g_unwind) return; /* Core!?appPow@@YANNN@Z */ RELOAD();
/* 859729: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85972c: fst dword ptr [ebx + esi*4] */
  WF32((uint32_t)(ebx + esi*4), ST0);
/* 85972f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 859732: call dword ptr [0xcfab24] */
  esp -= 4; W32(esp, 0x859738u); SPILL(); f_4e3549(); if (g_unwind) return; /* Core!?appIsNan@@YAHN@Z */ RELOAD();
/* 859738: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85973b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85973d: je 0x859746 */
  if (zf) goto L_859746;
L_85973f: /* 85973f: mov dword ptr [ebx + esi*4], 0 */
  W32((uint32_t)(ebx + esi*4), 0x0u);
L_859746: /* 859746: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 859747: add edi, 0x800000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85974d: cmp esi, 0x200 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 859753: jb 0x8596f0 */
  if (cf) goto L_8596f0;
L_859755: /* 859755: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 859758: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 859760: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 859764: xor esi, esi */
  esi = 0;
/* 859766: jmp 0x859770 */
  goto L_859770;
L_859770: /* 859770: and ebx, 0xff800000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xff800000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 859776: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 859778: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 85977c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 859780: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 859786: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 85978a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85978c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85978f: je 0x859793 */
  if (zf) goto L_859793;
L_859791: /* 859791: fchs  */
  ST0 = -ST0;
L_859793: /* 859793: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 859796: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 859799: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 85979d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8597a0: call dword ptr [0xcfaa8c] */
  esp -= 4; W32(esp, 0x8597a6u); SPILL(); f_4e2abd(); if (g_unwind) return; /* Core!?appPow@@YANNN@Z */ RELOAD();
/* 8597a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8597a9: fst dword ptr [edi] */
  WF32((uint32_t)(edi), ST0);
/* 8597ab: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8597ae: call dword ptr [0xcfab24] */
  esp -= 4; W32(esp, 0x8597b4u); SPILL(); f_4e3549(); if (g_unwind) return; /* Core!?appIsNan@@YAHN@Z */ RELOAD();
/* 8597b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8597b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8597b9: je 0x8597c1 */
  if (zf) goto L_8597c1;
L_8597bb: /* 8597bb: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_8597c1: /* 8597c1: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8597c7: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8597ca: cmp esi, 0x800000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8597d0: jb 0x859770 */
  if (cf) goto L_859770;
L_8597d2: /* 8597d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8597d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8597d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8597d5: mov esp, ebp */
  esp = ebp;
/* 8597d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8597d8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_859768(void) {
  LOAD_REGS();
L_859768: /* 859768: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 85976f: nop  */
L_859770: /* 859770: and ebx, 0xff800000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xff800000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 859776: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 859778: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 85977c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 859780: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 859786: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 85978a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85978c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85978f: je 0x859793 */
  if (zf) goto L_859793;
L_859791: /* 859791: fchs  */
  ST0 = -ST0;
L_859793: /* 859793: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 859796: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 859799: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 85979d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8597a0: call dword ptr [0xcfaa8c] */
  esp -= 4; W32(esp, 0x8597a6u); SPILL(); f_4e2abd(); if (g_unwind) return; /* Core!?appPow@@YANNN@Z */ RELOAD();
/* 8597a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8597a9: fst dword ptr [edi] */
  WF32((uint32_t)(edi), ST0);
/* 8597ab: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8597ae: call dword ptr [0xcfab24] */
  esp -= 4; W32(esp, 0x8597b4u); SPILL(); f_4e3549(); if (g_unwind) return; /* Core!?appIsNan@@YAHN@Z */ RELOAD();
/* 8597b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8597b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8597b9: je 0x8597c1 */
  if (zf) goto L_8597c1;
L_8597bb: /* 8597bb: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_8597c1: /* 8597c1: add esi, 0x2000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8597c7: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8597ca: cmp esi, 0x800000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8597d0: jb 0x859770 */
  if (cf) goto L_859770;
L_8597d2: /* 8597d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8597d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8597d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8597d5: mov esp, ebp */
  esp = ebp;
/* 8597d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8597d8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_859830(void) {
  LOAD_REGS();
L_859830: /* 859830: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 859831: mov ebp, esp */
  ebp = esp;
/* 859833: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 859835: push 0x9d4100 */
  { uint32_t v = 0x9d4100u; esp -= 4; W32(esp, v); }
/* 85983a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 859840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 859841: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 859848: sub esp, 0x11c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85984e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85984f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 859850: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 859851: xor esi, esi */
  esi = 0;
/* 859853: mov edi, ecx */
  edi = ecx;
/* 859855: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 859858: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 85985b: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 85985e: xor ebx, ebx */
  ebx = 0;
L_859860: /* 859860: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 859866: jae 0x8598b3 */
  if (!cf) goto L_8598b3;
L_859868: /* 859868: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 85986b: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 85986e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 859871: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 859874: fmul qword ptr [0xa175a8] */
  ST0 = ST0 * (F64((uint32_t)(0xa175a8u)));
/* 85987a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85987d: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x859883u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 859883: fst qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 859886: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 859889: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85988b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85988e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 859890: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 859892: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 859894: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 859896: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 859898: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 85989e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8598a0: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8598a6: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8598a8: fstp dword ptr [eax + ebx*4] */
  WF32((uint32_t)(eax + ebx*4), ST0); FPOP();
/* 8598ab: mov ebx, edi */
  ebx = edi;
/* 8598ad: mov edi, eax */
  edi = eax;
/* 8598af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8598b1: jmp 0x859860 */
  goto L_859860;
L_8598b3: /* 8598b3: xor ebx, ebx */
  ebx = 0;
L_8598b5: /* 8598b5: cmp ebx, 0x400 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8598bb: jae 0x859928 */
  if (!cf) goto L_859928;
L_8598bd: /* 8598bd: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 8598c4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8598c7: mov edx, ebx */
  edx = ebx;
/* 8598c9: and ecx, 0xff800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xff800000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8598cf: shl edx, 0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8598d2: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8598d4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8598d7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8598da: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8598dd: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8598e0: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8598e6u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8598e6: fst qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8598e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8598ec: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8598ef: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 8598f4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8598f7: sub eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8598fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8598fd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 859900: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x859906u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 859906: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 859909: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85990c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85990f: fmul qword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe4u)));
/* 859912: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 859913: fstp dword ptr [ebx*4 + 0xcccb94] */
  WF32((uint32_t)(ebx*4 + 0xcccb94u), ST0); FPOP();
/* 85991a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85991d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 85991f: fstp dword ptr [ebx*4 + 0xccdb94] */
  WF32((uint32_t)(ebx*4 + 0xccdb94u), ST0); FPOP();
/* 859926: jmp 0x8598b5 */
  goto L_8598b5;
L_859928: /* 859928: push 0xbf000000 */
  { uint32_t v = 0xbf000000u; esp -= 4; W32(esp, v); }
/* 85992d: push 0xcca398 */
  { uint32_t v = 0xcca398u; esp -= 4; W32(esp, v); }
/* 859932: push 0xccbb98 */
  { uint32_t v = 0xccbb98u; esp -= 4; W32(esp, v); }
/* 859937: mov ecx, edi */
  ecx = edi;
/* 859939: call 0x6c3ce7 */
  esp -= 4; W32(esp, 0x85993eu); SPILL(); f_6c3ce7(); if (g_unwind) return; RELOAD();
/* 85993e: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 859943: push 0xcc9b98 */
  { uint32_t v = 0xcc9b98u; esp -= 4; W32(esp, v); }
/* 859948: push 0xccab98 */
  { uint32_t v = 0xccab98u; esp -= 4; W32(esp, v); }
/* 85994d: mov ecx, edi */
  ecx = edi;
/* 85994f: call 0x6c3ce7 */
  esp -= 4; W32(esp, 0x859954u); SPILL(); f_6c3ce7(); if (g_unwind) return; RELOAD();
/* 859954: mov ecx, 0x18 */
  ecx = 0x18u;
/* 859959: mov eax, 0x28 */
  eax = 0x28u;
/* 85995e: xor edx, edx */
  edx = 0;
/* 859960: mov dword ptr [ebp - 0x120], ecx */
  W32((uint32_t)(ebp + 0xfffffee0u), ecx);
/* 859966: mov dword ptr [ebp - 0x118], ecx */
  W32((uint32_t)(ebp + 0xfffffee8u), ecx);
/* 85996c: mov dword ptr [ebp - 0xe0], ecx */
  W32((uint32_t)(ebp + 0xffffff20u), ecx);
/* 859972: mov dword ptr [ebp - 0xd8], ecx */
  W32((uint32_t)(ebp + 0xffffff28u), ecx);
/* 859978: mov dword ptr [ebp - 0x124], esi */
  W32((uint32_t)(ebp + 0xfffffedcu), esi);
/* 85997e: mov dword ptr [ebp - 0x11c], eax */
  W32((uint32_t)(ebp + 0xfffffee4u), eax);
/* 859984: mov dword ptr [ebp - 0x114], esi */
  W32((uint32_t)(ebp + 0xfffffeecu), esi);
/* 85998a: mov dword ptr [ebp - 0x110], esi */
  W32((uint32_t)(ebp + 0xfffffef0u), esi);
/* 859990: mov dword ptr [ebp - 0x10c], esi */
  W32((uint32_t)(ebp + 0xfffffef4u), esi);
/* 859996: mov dword ptr [ebp - 0x108], esi */
  W32((uint32_t)(ebp + 0xfffffef8u), esi);
/* 85999c: mov dword ptr [ebp - 0x104], esi */
  W32((uint32_t)(ebp + 0xfffffefcu), esi);
/* 8599a2: mov dword ptr [ebp - 0x100], eax */
  W32((uint32_t)(ebp + 0xffffff00u), eax);
/* 8599a8: mov dword ptr [ebp - 0xfc], 0x40 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x40u);
/* 8599b2: mov dword ptr [ebp - 0xf8], eax */
  W32((uint32_t)(ebp + 0xffffff08u), eax);
/* 8599b8: mov dword ptr [ebp - 0xf4], esi */
  W32((uint32_t)(ebp + 0xffffff0cu), esi);
/* 8599be: mov dword ptr [ebp - 0xf0], esi */
  W32((uint32_t)(ebp + 0xffffff10u), esi);
/* 8599c4: mov dword ptr [ebp - 0xec], esi */
  W32((uint32_t)(ebp + 0xffffff14u), esi);
/* 8599ca: mov dword ptr [ebp - 0xe8], esi */
  W32((uint32_t)(ebp + 0xffffff18u), esi);
/* 8599d0: mov dword ptr [ebp - 0xe4], esi */
  W32((uint32_t)(ebp + 0xffffff1cu), esi);
/* 8599d6: mov dword ptr [ebp - 0xdc], eax */
  W32((uint32_t)(ebp + 0xffffff24u), eax);
/* 8599dc: mov dword ptr [ebp - 0xd4], esi */
  W32((uint32_t)(ebp + 0xffffff2cu), esi);
/* 8599e2: mov dword ptr [ebp - 0xd0], esi */
  W32((uint32_t)(ebp + 0xffffff30u), esi);
/* 8599e8: mov dword ptr [ebp - 0xcc], esi */
  W32((uint32_t)(ebp + 0xffffff34u), esi);
/* 8599ee: mov dword ptr [ebp - 0xc8], esi */
  W32((uint32_t)(ebp + 0xffffff38u), esi);
/* 8599f4: mov dword ptr [ebp - 0xc4], esi */
  W32((uint32_t)(ebp + 0xffffff3cu), esi);
/* 8599fa: mov dword ptr [ebp - 0xc0], esi */
  W32((uint32_t)(ebp + 0xffffff40u), esi);
/* 859a00: mov dword ptr [ebp - 0xbc], esi */
  W32((uint32_t)(ebp + 0xffffff44u), esi);
/* 859a06: mov dword ptr [ebp - 0xb8], esi */
  W32((uint32_t)(ebp + 0xffffff48u), esi);
/* 859a0c: mov dword ptr [ebp - 0xb4], esi */
  W32((uint32_t)(ebp + 0xffffff4cu), esi);
/* 859a12: mov dword ptr [ebp - 0xb0], esi */
  W32((uint32_t)(ebp + 0xffffff50u), esi);
/* 859a18: mov dword ptr [ebp - 0xac], esi */
  W32((uint32_t)(ebp + 0xffffff54u), esi);
/* 859a1e: mov dword ptr [ebp - 0xa8], esi */
  W32((uint32_t)(ebp + 0xffffff58u), esi);
/* 859a24: mov dword ptr [ebp - 0xa4], esi */
  W32((uint32_t)(ebp + 0xffffff5cu), esi);
/* 859a2a: mov dword ptr [ebp - 0xa0], esi */
  W32((uint32_t)(ebp + 0xffffff60u), esi);
/* 859a30: mov dword ptr [ebp - 0x9c], esi */
  W32((uint32_t)(ebp + 0xffffff64u), esi);
/* 859a36: mov dword ptr [ebp - 0x98], esi */
  W32((uint32_t)(ebp + 0xffffff68u), esi);
/* 859a3c: mov dword ptr [ebp - 0x94], esi */
  W32((uint32_t)(ebp + 0xffffff6cu), esi);
/* 859a42: mov dword ptr [ebp - 0x90], esi */
  W32((uint32_t)(ebp + 0xffffff70u), esi);
/* 859a48: mov dword ptr [ebp - 0x8c], esi */
  W32((uint32_t)(ebp + 0xffffff74u), esi);
/* 859a4e: mov dword ptr [ebp - 0x88], esi */
  W32((uint32_t)(ebp + 0xffffff78u), esi);
/* 859a54: mov dword ptr [ebp - 0x84], esi */
  W32((uint32_t)(ebp + 0xffffff7cu), esi);
/* 859a5a: mov dword ptr [ebp - 0x80], esi */
  W32((uint32_t)(ebp + 0xffffff80u), esi);
/* 859a5d: mov dword ptr [ebp - 0x7c], esi */
  W32((uint32_t)(ebp + 0xffffff84u), esi);
/* 859a60: mov dword ptr [ebp - 0x78], esi */
  W32((uint32_t)(ebp + 0xffffff88u), esi);
/* 859a63: mov dword ptr [ebp - 0x74], esi */
  W32((uint32_t)(ebp + 0xffffff8cu), esi);
/* 859a66: mov dword ptr [ebp - 0x70], esi */
  W32((uint32_t)(ebp + 0xffffff90u), esi);
/* 859a69: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 859a6c: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
/* 859a6f: mov dword ptr [ebp - 0x64], esi */
  W32((uint32_t)(ebp + 0xffffff9cu), esi);
/* 859a72: mov dword ptr [ebp - 0x60], esi */
  W32((uint32_t)(ebp + 0xffffffa0u), esi);
/* 859a75: mov dword ptr [ebp - 0x5c], esi */
  W32((uint32_t)(ebp + 0xffffffa4u), esi);
/* 859a78: mov dword ptr [ebp - 0x58], esi */
  W32((uint32_t)(ebp + 0xffffffa8u), esi);
/* 859a7b: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 859a7e: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 859a81: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 859a84: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 859a87: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 859a8a: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 859a8d: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 859a90: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 859a93: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 859a96: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 859a99: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 859a9c: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 859a9f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 859aa2: xor ecx, ecx */
  ecx = 0;
L_859aa4: /* 859aa4: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859aa7: jge 0x859ac8 */
  if ((sf == of)) goto L_859ac8;
L_859aa9: /* 859aa9: xor eax, eax */
  eax = 0;
/* 859aab: jmp 0x859ab0 */
  goto L_859ab0;
L_859ab0: /* 859ab0: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859ab3: jge 0x859ac5 */
  if ((sf == of)) goto L_859ac5;
L_859ab5: /* 859ab5: lea ebx, [eax + ecx*8] */
  ebx = (uint32_t)(eax + ecx*8);
/* 859ab8: add edx, dword ptr [ebp + ebx*4 - 0x124] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + ebx*4 + 0xfffffedcu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 859abf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 859ac0: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 859ac3: jmp 0x859ab0 */
  goto L_859ab0;
L_859ac5: /* 859ac5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 859ac6: jmp 0x859aa4 */
  goto L_859aa4;
L_859ac8: /* 859ac8: xor ebx, ebx */
  ebx = 0;
/* 859aca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_859ad0: /* 859ad0: cmp ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859ad6: jge 0x859b88 */
  if ((sf == of)) goto L_859b88;
L_859adc: /* 859adc: xor eax, eax */
  eax = 0;
L_859ade: /* 859ade: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859ae1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 859ae4: jge 0x859b82 */
  if ((sf == of)) goto L_859b82;
L_859aea: /* 859aea: lea eax, [eax + ebx*4 + 0x1000] */
  eax = (uint32_t)(eax + ebx*4 + 0x1000u);
/* 859af1: mov dword ptr [edi + eax*4], esi */
  W32((uint32_t)(edi + eax*4), esi);
/* 859af4: xor edi, edi */
  edi = 0;
L_859af6: /* 859af6: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859af9: jge 0x859b76 */
  if ((sf == of)) goto L_859b76;
L_859aff: /* 859aff: xor eax, eax */
  eax = 0;
/* 859b01: xor edx, edx */
  edx = 0;
L_859b03: /* 859b03: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859b06: jge 0x859b26 */
  if ((sf == of)) goto L_859b26;
L_859b08: /* 859b08: lea ecx, [edx + edi] */
  ecx = (uint32_t)(edx + edi);
/* 859b0b: mov esi, 1 */
  esi = 0x1u;
/* 859b10: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 859b12: test ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 859b14: je 0x859b23 */
  if (zf) goto L_859b23;
L_859b16: /* 859b16: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 859b19: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 859b1c: add eax, dword ptr [ebp + ecx*4 - 0x124] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + ecx*4 + 0xfffffedcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_859b23: /* 859b23: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 859b24: jmp 0x859b03 */
  goto L_859b03;
L_859b26: /* 859b26: imul eax, eax, 0xff */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xffu);
  eax = (uint32_t)r;
  }
/* 859b2c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 859b2d: idiv dword ptr [ebp - 0x18] */
  { int32_t d = (int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); if (!d) d = (int32_t)guest_divzero(0x859b2d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 859b30: mov esi, eax */
  esi = eax;
/* 859b32: cmp esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859b38: jbe 0x859b52 */
  if ((cf | zf)) goto L_859b52;
L_859b3a: /* 859b3a: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* 859b3f: push 0xae4d6c */
  { uint32_t v = 0xae4d6cu; esp -= 4; W32(esp, v); }
/* 859b44: push 0xae4d4c */
  { uint32_t v = 0xae4d4cu; esp -= 4; W32(esp, v); }
/* 859b49: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x859b4fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 859b4f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  esp = r;
  }
L_859b52: /* 859b52: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 859b55: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 859b58: lea eax, [edx + ebx*4 + 0x1000] */
  eax = (uint32_t)(edx + ebx*4 + 0x1000u);
/* 859b5f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 859b62: lea ecx, [edi*8] */
  ecx = (uint32_t)(edi*8);
/* 859b69: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 859b6b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 859b6d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 859b6f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 859b70: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 859b72: xor esi, esi */
  esi = 0;
/* 859b74: jmp 0x859af6 */
  goto L_859af6;
L_859b76: /* 859b76: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 859b79: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 859b7c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 859b7d: jmp 0x859ade */
  goto L_859ade;
L_859b82: /* 859b82: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 859b83: jmp 0x859ad0 */
  goto L_859ad0;
L_859b88: /* 859b88: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 859b8b: mov eax, edi */
  eax = edi;
/* 859b8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 859b8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 859b8f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 859b96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 859b97: mov esp, ebp */
  esp = ebp;
/* 859b99: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 859b9a: ret  */
  esp += 4; SPILL(); return;
}

void f_859aad(void) {
  LOAD_REGS();
  goto L_859aad;
L_859aa4: /* 859aa4: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859aa7: jge 0x859ac8 */
  if ((sf == of)) goto L_859ac8;
L_859aa9: /* 859aa9: xor eax, eax */
  eax = 0;
/* 859aab: jmp 0x859ab0 */
  goto L_859ab0;
L_859aad: /* 859aad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_859ab0: /* 859ab0: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859ab3: jge 0x859ac5 */
  if ((sf == of)) goto L_859ac5;
L_859ab5: /* 859ab5: lea ebx, [eax + ecx*8] */
  ebx = (uint32_t)(eax + ecx*8);
/* 859ab8: add edx, dword ptr [ebp + ebx*4 - 0x124] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + ebx*4 + 0xfffffedcu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 859abf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 859ac0: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 859ac3: jmp 0x859ab0 */
  goto L_859ab0;
L_859ac5: /* 859ac5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 859ac6: jmp 0x859aa4 */
  goto L_859aa4;
L_859ac8: /* 859ac8: xor ebx, ebx */
  ebx = 0;
/* 859aca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_859ad0: /* 859ad0: cmp ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859ad6: jge 0x859b88 */
  if ((sf == of)) goto L_859b88;
L_859adc: /* 859adc: xor eax, eax */
  eax = 0;
L_859ade: /* 859ade: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859ae1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 859ae4: jge 0x859b82 */
  if ((sf == of)) goto L_859b82;
L_859aea: /* 859aea: lea eax, [eax + ebx*4 + 0x1000] */
  eax = (uint32_t)(eax + ebx*4 + 0x1000u);
/* 859af1: mov dword ptr [edi + eax*4], esi */
  W32((uint32_t)(edi + eax*4), esi);
/* 859af4: xor edi, edi */
  edi = 0;
L_859af6: /* 859af6: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859af9: jge 0x859b76 */
  if ((sf == of)) goto L_859b76;
L_859aff: /* 859aff: xor eax, eax */
  eax = 0;
/* 859b01: xor edx, edx */
  edx = 0;
L_859b03: /* 859b03: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859b06: jge 0x859b26 */
  if ((sf == of)) goto L_859b26;
L_859b08: /* 859b08: lea ecx, [edx + edi] */
  ecx = (uint32_t)(edx + edi);
/* 859b0b: mov esi, 1 */
  esi = 0x1u;
/* 859b10: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 859b12: test ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 859b14: je 0x859b23 */
  if (zf) goto L_859b23;
L_859b16: /* 859b16: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 859b19: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 859b1c: add eax, dword ptr [ebp + ecx*4 - 0x124] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + ecx*4 + 0xfffffedcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_859b23: /* 859b23: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 859b24: jmp 0x859b03 */
  goto L_859b03;
L_859b26: /* 859b26: imul eax, eax, 0xff */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xffu);
  eax = (uint32_t)r;
  }
/* 859b2c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 859b2d: idiv dword ptr [ebp - 0x18] */
  { int32_t d = (int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); if (!d) d = (int32_t)guest_divzero(0x859b2d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 859b30: mov esi, eax */
  esi = eax;
/* 859b32: cmp esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859b38: jbe 0x859b52 */
  if ((cf | zf)) goto L_859b52;
L_859b3a: /* 859b3a: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* 859b3f: push 0xae4d6c */
  { uint32_t v = 0xae4d6cu; esp -= 4; W32(esp, v); }
/* 859b44: push 0xae4d4c */
  { uint32_t v = 0xae4d4cu; esp -= 4; W32(esp, v); }
/* 859b49: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x859b4fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 859b4f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  esp = r;
  }
L_859b52: /* 859b52: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 859b55: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 859b58: lea eax, [edx + ebx*4 + 0x1000] */
  eax = (uint32_t)(edx + ebx*4 + 0x1000u);
/* 859b5f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 859b62: lea ecx, [edi*8] */
  ecx = (uint32_t)(edi*8);
/* 859b69: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 859b6b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 859b6d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 859b6f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 859b70: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 859b72: xor esi, esi */
  esi = 0;
/* 859b74: jmp 0x859af6 */
  goto L_859af6;
L_859b76: /* 859b76: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 859b79: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 859b7c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 859b7d: jmp 0x859ade */
  goto L_859ade;
L_859b82: /* 859b82: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 859b83: jmp 0x859ad0 */
  goto L_859ad0;
L_859b88: /* 859b88: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 859b8b: mov eax, edi */
  eax = edi;
/* 859b8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 859b8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 859b8f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 859b96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 859b97: mov esp, ebp */
  esp = ebp;
/* 859b99: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 859b9a: ret  */
  esp += 4; SPILL(); return;
}

void f_859b9b(void) {
  LOAD_REGS();
L_859b9b: /* 859b9b: mov edx, dword ptr [ebp - 0x128] */
  edx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 859ba1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 859ba6: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 859ba9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 859baa: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 859bad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x859bb2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_859bb2(); return;
}

void f_859bb2(void) {
  LOAD_REGS();
L_859bb2: /* 859bb2: push 0xa17558 */
  { uint32_t v = 0xa17558u; esp -= 4; W32(esp, v); }
/* 859bb7: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 859bbc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x859bc2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 859bc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859bc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 859bc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 859bc9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x859bceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_859bce: guest_badaddr(0x859bce); return;
}

void f_859cc0(void) {
  LOAD_REGS();
L_859cc0: /* 859cc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 859cc1: mov ebp, esp */
  ebp = esp;
/* 859cc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 859cc5: push 0x9d4110 */
  { uint32_t v = 0x9d4110u; esp -= 4; W32(esp, v); }
/* 859cca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 859cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 859cd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 859cd8: sub esp, 0x428 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x428u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 859cde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 859cdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 859ce0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 859ce1: xor edi, edi */
  edi = 0;
/* 859ce3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 859ce6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 859ce9: mov edx, 0x100 */
  edx = 0x100u;
/* 859cee: mov ecx, 4 */
  ecx = 0x4u;
/* 859cf3: lea eax, [ebp - 0x434] */
  eax = (uint32_t)(ebp + 0xfffffbccu);
/* 859cf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_859d00: /* 859d00: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 859d01: js 0x859d07 */
  if (sf) goto L_859d07;
L_859d03: /* 859d03: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 859d05: jmp 0x859d00 */
  goto L_859d00;
L_859d07: /* 859d07: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 859d0a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 859d0d: fmul dword ptr [0xa175d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa175d8u)));
/* 859d13: call 0x99c958 */
  esp -= 4; W32(esp, 0x859d18u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 859d18: mov ebx, dword ptr [0xcfa2b0] */
  ebx = R32((uint32_t)(0xcfa2b0u));
/* 859d1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 859d1f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x859d21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 859d21: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 859d24: fmul dword ptr [0xa175d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa175d8u)));
/* 859d2a: mov cl, 0x20 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
/* 859d2c: sub cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 859d2e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859d31: mov byte ptr [ebp + 0x1f], cl */
  W8((uint32_t)(ebp + 0x1fu), (ecx & 0xffu));
/* 859d34: call 0x99c958 */
  esp -= 4; W32(esp, 0x859d39u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 859d39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 859d3a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x859d3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 859d3c: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 859d3f: fmul dword ptr [0xa175d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa175d8u)));
/* 859d45: mov cl, 0x20 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
/* 859d47: sub cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 859d49: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859d4c: mov byte ptr [ebp - 0x11], cl */
  W8((uint32_t)(ebp + 0xffffffefu), (ecx & 0xffu));
/* 859d4f: call 0x99c958 */
  esp -= 4; W32(esp, 0x859d54u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 859d54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 859d55: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x859d57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 859d57: movzx ecx, byte ptr [ebp + 0x1f] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0x1fu)));
/* 859d5b: mov bl, 0x20 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
/* 859d5d: sub bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 859d5f: mov eax, 1 */
  eax = 0x1u;
/* 859d64: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 859d66: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859d69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 859d6a: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 859d6d: mov edi, dword ptr [0xcfa3dc] */
  edi = R32((uint32_t)(0xcfa3dcu));
/* 859d73: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 859d76: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 859d79: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 859d7c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 859d7f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x859d81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 859d81: movzx ecx, byte ptr [ebp - 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* 859d85: mov edx, 1 */
  edx = 0x1u;
/* 859d8a: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 859d8c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859d8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 859d90: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 859d93: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 859d96: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 859d9d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 859da0: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 859da3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 859da6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x859da8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 859da8: movzx ebx, bl */
  ebx = (uint32_t)((ebx & 0xffu));
/* 859dab: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 859dae: mov ecx, ebx */
  ecx = ebx;
/* 859db0: mov eax, 1 */
  eax = 0x1u;
/* 859db5: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 859db7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859dba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 859dbb: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 859dc2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 859dc5: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 859dc8: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 859dcb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 859dce: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x859dd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 859dd0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859dd3: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 859dd6: xor esi, esi */
  esi = 0;
/* 859dd8: mov eax, 0xff */
  eax = 0xffu;
/* 859ddd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_859de0: /* 859de0: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859de6: jge 0x859e4d */
  if ((sf == of)) goto L_859e4d;
L_859de8: /* 859de8: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 859deb: movzx ecx, byte ptr [ebp + 0x1f] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0x1fu)));
/* 859def: mov edx, edi */
  edx = edi;
/* 859df1: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 859df3: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 859df5: jbe 0x859df9 */
  if ((cf | zf)) goto L_859df9;
L_859df7: /* 859df7: mov edx, eax */
  edx = eax;
L_859df9: /* 859df9: movzx ecx, byte ptr [ebp - 0x11] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* 859dfd: mov byte ptr [ebp + esi*4 - 0x432], dl */
  W8((uint32_t)(ebp + esi*4 + 0xfffffbceu), (edx & 0xffu));
/* 859e04: add edi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  edi = r;
  }
/* 859e07: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 859e0a: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 859e0d: mov edx, edi */
  edx = edi;
/* 859e0f: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 859e11: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 859e13: jbe 0x859e17 */
  if ((cf | zf)) goto L_859e17;
L_859e15: /* 859e15: mov edx, eax */
  edx = eax;
L_859e17: /* 859e17: add edi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  edi = r;
  }
/* 859e1a: mov byte ptr [ebp + esi*4 - 0x433], dl */
  W8((uint32_t)(ebp + esi*4 + 0xfffffbcdu), (edx & 0xffu));
/* 859e21: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 859e24: mov ecx, ebx */
  ecx = ebx;
/* 859e26: shr edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
  }
/* 859e28: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 859e2b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 859e2d: jbe 0x859e31 */
  if ((cf | zf)) goto L_859e31;
L_859e2f: /* 859e2f: mov edx, eax */
  edx = eax;
L_859e31: /* 859e31: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 859e34: mov byte ptr [ebp + esi*4 - 0x434], dl */
  W8((uint32_t)(ebp + esi*4 + 0xfffffbccu), (edx & 0xffu));
/* 859e3b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 859e3e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 859e40: mov byte ptr [ebp + esi*4 - 0x431], al */
  W8((uint32_t)(ebp + esi*4 + 0xfffffbcfu), (eax & 0xffu));
/* 859e47: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 859e4a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 859e4b: jmp 0x859de0 */
  goto L_859de0;
L_859e4d: /* 859e4d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_859e50: /* 859e50: cmp eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859e53: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 859e56: jg 0x859ed6 */
  if ((!zf && sf == of)) goto L_859ed6;
L_859e58: /* 859e58: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 859e5b: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 859e5e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 859e61: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 859e64: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 859e66: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 859e67: mov edx, eax */
  edx = eax;
/* 859e69: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 859e6b: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 859e6e: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 859e71: mov ecx, eax */
  ecx = eax;
/* 859e73: imul ecx, dword ptr [ebp + 0x24] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x24u)));
  ecx = (uint32_t)r;
  }
/* 859e77: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 859e79: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 859e7b: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 859e7e: mov edi, edi */
  edi = edi;
L_859e80: /* 859e80: cmp ebx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 859e83: jg 0x859ea3 */
  if ((!zf && sf == of)) goto L_859ea3;
L_859e85: /* 859e85: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 859e88: lea eax, [ebp + eax*4 - 0x434] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffbccu);
/* 859e8f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 859e91: mov ecx, edi */
  ecx = edi;
/* 859e93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 859e94: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 859e97: call 0x6c8cd8 */
  esp -= 4; W32(esp, 0x859e9cu); SPILL(); f_6c8cd8(); if (g_unwind) return; RELOAD();
/* 859e9c: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 859e9f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 859ea0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 859ea1: jmp 0x859e80 */
  goto L_859e80;
L_859ea3: /* 859ea3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 859ea4: jmp 0x859e50 */
  goto L_859e50;
L_859ed6: /* 859ed6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 859ed9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 859eda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 859edb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 859ee2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 859ee3: mov esp, ebp */
  esp = ebp;
/* 859ee5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 859ee6: ret  */
  esp += 4; SPILL(); return;
}

void f_859ea6(void) {
  LOAD_REGS();
L_859ea6: /* 859ea6: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 859ea9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 859eae: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 859eb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 859eb2: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 859eb5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x859ebau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_859eba(); return;
}

void f_859eba(void) {
  LOAD_REGS();
L_859eba: /* 859eba: push 0xa175b4 */
  { uint32_t v = 0xa175b4u; esp -= 4; W32(esp, v); }
/* 859ebf: push 0xae4bd4 */
  { uint32_t v = 0xae4bd4u; esp -= 4; W32(esp, v); }
/* 859ec4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x859ecau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 859eca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 859ecd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 859ecf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 859ed1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x859ed6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 859ed6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 859ed9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 859eda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 859edb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 859ee2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 859ee3: mov esp, ebp */
  esp = ebp;
/* 859ee5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 859ee6: ret  */
  esp += 4; SPILL(); return;
}

void f_859f80(void) {
  LOAD_REGS();
L_859f80: /* 859f80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 859f81: mov ebp, esp */
  ebp = esp;
/* 859f83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 859f85: push 0x9d4120 */
  { uint32_t v = 0x9d4120u; esp -= 4; W32(esp, v); }
/* 859f8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 859f90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 859f91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 859f98: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 859f9b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 859f9e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 859fa0: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 859fa3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 859fa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 859fa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 859fa6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 859fa9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 859fb0: je 0x85a122 */
  if (zf) goto L_85a122;
L_859fb6: /* 859fb6: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 859fb9: je 0x85a122 */
  if (zf) goto L_85a122;
L_859fbf: /* 859fbf: mov esi, dword ptr [ecx + 0x30] */
  esi = R32((uint32_t)(ecx + 0x30u));
/* 859fc2: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 859fc5: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 859fc8: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 859fcb: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 859fcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 859fce: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 859fd3: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 859fd6: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x859fdcu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 859fdc: mov edx, eax */
  edx = eax;
/* 859fde: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 859fe1: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 859fe4: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 859fe7: xor eax, eax */
  eax = 0;
/* 859fe9: mov ebx, ecx */
  ebx = ecx;
/* 859feb: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 859fee: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 859ff1: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 859ff3: mov ecx, ebx */
  ecx = ebx;
/* 859ff5: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 859ff7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 859ffa: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 859ffd: mov eax, esi */
  eax = esi;
/* 859fff: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 85a002: mov ecx, edx */
  ecx = edx;
/* 85a004: mov edi, ecx */
  edi = ecx;
/* 85a006: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 85a009: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 85a00c: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 85a00f: xor eax, eax */
  eax = 0;
L_85a011: /* 85a011: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 85a014: cmp eax, dword ptr [ebx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a017: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 85a01a: jge 0x85a10e */
  if ((sf == of)) goto L_85a10e;
L_85a020: /* 85a020: movzx ebx, byte ptr [esi] */
  ebx = (uint32_t)(R8((uint32_t)(esi)));
/* 85a023: shl ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 85a026: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85a027: test bh, 4 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a02a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 85a02d: je 0x85a035 */
  if (zf) goto L_85a035;
L_85a02f: /* 85a02f: or ebx, 0x300 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_85a035: /* 85a035: xor eax, eax */
  eax = 0;
L_85a037: /* 85a037: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 85a03a: mov esi, dword ptr [esi + 0x30] */
  esi = R32((uint32_t)(esi + 0x30u));
/* 85a03d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a03f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85a042: jge 0x85a0d6 */
  if ((sf == of)) goto L_85a0d6;
L_85a048: /* 85a048: shr ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 85a04b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 85a04c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a04e: jge 0x85a05f */
  if ((sf == of)) goto L_85a05f;
L_85a050: /* 85a050: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85a053: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 85a056: shl eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85a059: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85a05a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 85a05d: jmp 0x85a06f */
  goto L_85a06f;
L_85a05f: /* 85a05f: mov eax, ebx */
  eax = ebx;
/* 85a061: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85a066: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 85a068: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 85a06a: and eax, 0xc00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_85a06f: /* 85a06f: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85a071: mov eax, ebx */
  eax = ebx;
/* 85a073: and eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85a076: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85a079: mov esi, dword ptr [eax + 0xcd2b98] */
  esi = R32((uint32_t)(eax + 0xcd2b98u));
/* 85a07f: add dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* 85a081: mov esi, dword ptr [eax + 0xcd2b9c] */
  esi = R32((uint32_t)(eax + 0xcd2b9cu));
/* 85a087: add dword ptr [edi], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
/* 85a089: mov eax, dword ptr [eax + 0xcd2ba0] */
  eax = R32((uint32_t)(eax + 0xcd2ba0u));
/* 85a08f: add dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx), r);
  }
/* 85a091: mov eax, ebx */
  eax = ebx;
/* 85a093: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85a096: and eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85a099: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85a09c: mov esi, dword ptr [eax + 0xcd2b98] */
  esi = R32((uint32_t)(eax + 0xcd2b98u));
/* 85a0a2: add dword ptr [edx + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx + 0x4u), r);
  }
/* 85a0a5: mov esi, dword ptr [eax + 0xcd2b9c] */
  esi = R32((uint32_t)(eax + 0xcd2b9cu));
/* 85a0ab: add dword ptr [edi + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi + 0x4u), r);
  }
/* 85a0ae: mov eax, dword ptr [eax + 0xcd2ba0] */
  eax = R32((uint32_t)(eax + 0xcd2ba0u));
/* 85a0b4: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 85a0b7: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85a0ba: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85a0bd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85a0c0: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85a0c2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85a0c5: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 85a0c7: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85a0ca: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85a0cd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85a0d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a0d1: jmp 0x85a037 */
  goto L_85a037;
L_85a0d6: /* 85a0d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85a0d9: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a0dc: mov ebx, dword ptr [eax + 0x30] */
  ebx = R32((uint32_t)(eax + 0x30u));
/* 85a0df: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85a0e2: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85a0e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85a0e6: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 85a0e9: jne 0x85a0f3 */
  if (!zf) goto L_85a0f3;
L_85a0eb: /* 85a0eb: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85a0ee: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 85a0f0: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
L_85a0f3: /* 85a0f3: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 85a0f6: mov ebx, dword ptr [ebx + 0x14] */
  ebx = R32((uint32_t)(ebx + 0x14u));
/* 85a0f9: sub ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 85a0fc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85a0fe: jne 0x85a108 */
  if (!zf) goto L_85a108;
L_85a100: /* 85a100: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85a103: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 85a105: lea ecx, [ecx + ebx*4] */
  ecx = (uint32_t)(ecx + ebx*4);
L_85a108: /* 85a108: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a109: jmp 0x85a011 */
  goto L_85a011;
L_85a10e: /* 85a10e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85a111: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85a114: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85a11b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85a11c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85a11d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85a11e: mov esp, ebp */
  esp = ebp;
/* 85a120: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85a121: ret  */
  esp += 4; SPILL(); return;
L_85a122: /* 85a122: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85a125: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 85a128: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 85a12b: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 85a12d: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85a12f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85a130: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a131: imul esi, eax */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(eax);
  esi = (uint32_t)r;
  }
/* 85a134: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85a136: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85a137: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85a13c: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85a142u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85a142: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85a143: mov edi, eax */
  edi = eax;
/* 85a145: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 85a14a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85a14b: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x85a151u); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 85a151: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85a154: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a157: mov eax, edi */
  eax = edi;
/* 85a159: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85a15a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85a15b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85a162: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85a163: mov esp, ebp */
  esp = ebp;
/* 85a165: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85a166: ret  */
  esp += 4; SPILL(); return;
}

void f_85a167(void) {
  LOAD_REGS();
L_85a167: /* 85a167: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85a16a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85a16f: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 85a172: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85a173: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 85a176: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85a17bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85a17b(); return;
}

void f_85a17b(void) {
  LOAD_REGS();
L_85a17b: /* 85a17b: push 0xa175dc */
  { uint32_t v = 0xa175dcu; esp -= 4; W32(esp, v); }
/* 85a180: push 0xae4bdc */
  { uint32_t v = 0xae4bdcu; esp -= 4; W32(esp, v); }
/* 85a185: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85a18bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85a18b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a18e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85a190: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85a192: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85a197u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85a197: guest_badaddr(0x85a197); return;
}

void f_85a230(void) {
  LOAD_REGS();
L_85a230: /* 85a230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85a231: mov ebp, esp */
  ebp = esp;
/* 85a233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85a235: push 0x9d4130 */
  { uint32_t v = 0x9d4130u; esp -= 4; W32(esp, v); }
/* 85a23a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85a240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85a241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85a248: sub esp, 0xc0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85a24e: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 85a251: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85a252: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85a255: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85a256: sub eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85a259: mov esi, dword ptr [ebp + 0x24] */
  esi = R32((uint32_t)(ebp + 0x24u));
/* 85a25c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a25d: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 85a25f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85a260: mov ecx, esi */
  ecx = esi;
/* 85a262: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 85a265: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85a266: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85a269: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85a26b: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 85a26e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a26f: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85a274: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85a27b: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 85a27e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85a284u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85a284: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 85a287: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85a28a: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 85a28d: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 85a290: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85a292: je 0x85a29c */
  if (zf) goto L_85a29c;
L_85a294: /* 85a294: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 85a297: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85a29a: jmp 0x85a29e */
  goto L_85a29e;
L_85a29c: /* 85a29c: mov eax, ecx */
  eax = ecx;
L_85a29e: /* 85a29e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a2a0: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 85a2a3: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 85a2a6: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 85a2a9: jge 0x85a2ad */
  if ((sf == of)) goto L_85a2ad;
L_85a2ab: /* 85a2ab: mov eax, ecx */
  eax = ecx;
L_85a2ad: /* 85a2ad: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 85a2b3: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 85a2b6: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 85a2b8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85a2ba: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 85a2bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85a2c0: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x85a2c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85a2c2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 85a2c5: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 85a2c8: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85a2cb: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85a2ce: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 85a2d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85a2d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a2d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85a2d4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 85a2d8: call 0x6ca83f */
  esp -= 4; W32(esp, 0x85a2ddu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 85a2dd: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 85a2e0: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 85a2e3: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85a2e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a2e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85a2ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a2eb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85a2f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85a2f3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 85a2f7: call 0x6ca83f */
  esp -= 4; W32(esp, 0x85a2fcu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 85a2fc: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 85a302: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 85a304: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85a306: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a309: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85a30a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85a311: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x85a314u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85a314: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 85a317: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85a31a: jne 0x85a334 */
  if (!zf) goto L_85a334;
L_85a31c: /* 85a31c: push 0x227 */
  { uint32_t v = 0x227u; esp -= 4; W32(esp, v); }
/* 85a321: push 0xae4bf4 */
  { uint32_t v = 0xae4bf4u; esp -= 4; W32(esp, v); }
/* 85a326: push 0xae4c08 */
  { uint32_t v = 0xae4c08u; esp -= 4; W32(esp, v); }
/* 85a32b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x85a331u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 85a331: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85a334: /* 85a334: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85a336: cmp byte ptr [eax + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85a33a: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85a33d: jne 0x85a43c */
  if (!zf) goto L_85a43c;
L_85a343: /* 85a343: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 85a346: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 85a349: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 85a34c: fchs  */
  ST0 = -ST0;
/* 85a34e: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a351: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 85a354: fchs  */
  ST0 = -ST0;
/* 85a356: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 85a35a: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 85a35d: fchs  */
  ST0 = -ST0;
/* 85a35f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a361: fmul dword ptr [eax + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x30u)));
/* 85a364: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 85a366: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* 85a369: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 85a36b: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 85a36e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a370: je 0x85a3cc */
  if (zf) goto L_85a3cc;
L_85a372: /* 85a372: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 85a378: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a37a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a37d: je 0x85a381 */
  if (zf) goto L_85a381;
L_85a37f: /* 85a37f: fchs  */
  ST0 = -ST0;
L_85a381: /* 85a381: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
L_85a384: /* 85a384: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 85a387: mov dword ptr [ebp + 0x24], 0 */
  W32((uint32_t)(ebp + 0x24u), 0x0u);
/* 85a38e: mov edi, edi */
  edi = edi;
L_85a390: /* 85a390: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 85a393: cmp edx, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a396: jge 0x85be6d */
  if ((sf == of)) goto L_85be6d;
L_85a39c: /* 85a39c: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a39f: xor ebx, ebx */
  ebx = 0;
L_85a3a1: /* 85a3a1: cmp ebx, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a3a4: jge 0x85a41c */
  if ((sf == of)) goto L_85a41c;
L_85a3a6: /* 85a3a6: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 85a3a9: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 85a3ac: fild dword ptr [ebp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 85a3af: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 85a3b2: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 85a3b5: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 85a3b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a3b9: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85a3bfu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85a3bf: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 85a3c2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a3c5: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 85a3c7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85a3c8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85a3c9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85a3ca: jmp 0x85a3a1 */
  goto L_85a3a1;
L_85a3cc: /* 85a3cc: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 85a3d2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 85a3d4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a3d6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a3d9: jne 0x85a381 */
  if (!zf) goto L_85a381;
L_85a3db: /* 85a3db: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85a3dd: mov dword ptr [ebp + 0x18], 0 */
  W32((uint32_t)(ebp + 0x18u), 0x0u);
/* 85a3e4: jmp 0x85a384 */
  goto L_85a384;
L_85a41c: /* 85a41c: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 85a41f: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85a422: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85a424: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85a426: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85a429: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85a42b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 85a42e: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85a430: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a431: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 85a434: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 85a437: jmp 0x85a390 */
  goto L_85a390;
L_85a43c: /* 85a43c: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 85a43f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 85a445: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 85a447: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a449: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a44c: jne 0x85a456 */
  if (!zf) goto L_85a456;
L_85a44e: /* 85a44e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85a450: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_85a456: /* 85a456: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 85a45c: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 85a45f: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 85a462: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 85a465: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 85a468: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85a46a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85a46c: fmul qword ptr [0xa178d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178d8u)));
/* 85a472: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 85a475: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85a477: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 85a47a: fsub dword ptr [esi + 0x70] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x70u)));
/* 85a47d: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 85a480: fsub dword ptr [esi + 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x6cu)));
/* 85a483: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 85a486: fsub dword ptr [esi + 0x68] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x68u)));
/* 85a489: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a48b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 85a48e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 85a490: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 85a493: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 85a495: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 85a498: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a49a: fdiv dword ptr [ecx + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x30u)));
/* 85a49d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 85a4a3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a4a5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a4a8: je 0x85a4ac */
  if (zf) goto L_85a4ac;
L_85a4aa: /* 85a4aa: fchs  */
  ST0 = -ST0;
L_85a4ac: /* 85a4ac: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 85a4af: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85a4b2: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85a4b5: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 85a4bb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85a4bd: fmul dword ptr [esi + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x88u)));
/* 85a4c3: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 85a4c6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85a4c8: fmul dword ptr [esi + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x84u)));
/* 85a4ce: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 85a4d1: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 85a4d7: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85a4da: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 85a4dd: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 85a4e3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85a4e5: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85a4e8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85a4ea: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85a4ed: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 85a4f0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a4f2: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85a4f5: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 85a4f8: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 85a4fb: fsub dword ptr [ecx + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x20u)));
/* 85a4fe: fld dword ptr [esi + 0x6c] */
  { double v = F32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 85a501: fsub dword ptr [ecx + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x1cu)));
/* 85a504: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 85a507: fld dword ptr [esi + 0x68] */
  { double v = F32((uint32_t)(esi + 0x68u)); FPUSH(v); }
/* 85a50a: fsub dword ptr [ecx + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x18u)));
/* 85a50d: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 85a510: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a512: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85a515: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 85a518: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 85a51b: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 85a51e: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 85a521: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 85a524: fadd dword ptr [ebp - 0x74] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 85a527: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85a52a: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 85a52d: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 85a530: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 85a533: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85a536: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85a539: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85a53c: mov al, byte ptr [eax + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x29u))) & 0xffu);
/* 85a53f: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85a541: jne 0x85a79f */
  if (!zf) goto L_85a79f;
L_85a547: /* 85a547: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 85a549: mov al, byte ptr [ecx + 0x36] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x36u))) & 0xffu);
/* 85a54c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a54e: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 85a552: je 0x85a573 */
  if (zf) goto L_85a573;
L_85a554: /* 85a554: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85a55a: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85a560: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 85a563: fmul qword ptr [0xa138d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa138d8u)));
/* 85a569: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85a56c: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85a56f: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 85a571: jmp 0x85a579 */
  goto L_85a579;
L_85a573: /* 85a573: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
L_85a579: /* 85a579: movzx ecx, byte ptr [ecx + 0x37] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x37u)));
/* 85a57d: mov dword ptr [ebp + 0x1c], ecx */
  W32((uint32_t)(ebp + 0x1cu), ecx);
/* 85a580: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85a583: fmul qword ptr [0xa178c8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178c8u)));
/* 85a589: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 85a58b: fadd qword ptr [0xa0e970] */
  ST0 = ST0 + (F64((uint32_t)(0xa0e970u)));
/* 85a591: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85a594: fstp st(0) */
  STI(0) = ST0; FPOP();
L_85a596: /* 85a596: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a599: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85a59c: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85a5a2: /* 85a5a2: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
L_85a5a5: /* 85a5a5: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 85a5a8: mov eax, edx */
  eax = edx;
/* 85a5aa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a5ac: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85a5af: jg 0x85a732 */
  if ((!zf && sf == of)) goto L_85a732;
L_85a5b5: /* 85a5b5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85a5b8: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85a5beu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85a5be: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85a5c1: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85a5c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a5c5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a5c8: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85a5ceu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85a5ce: mov ebx, eax */
  ebx = eax;
/* 85a5d0: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85a5d2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a5d5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a5d7: je 0x85a6ca */
  if (zf) goto L_85a6ca;
L_85a5dd: /* 85a5dd: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85a5e3: jae 0x85a6ca */
  if (!cf) goto L_85a6ca;
L_85a5e9: /* 85a5e9: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a5ec: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85a5ef: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 85a5f3: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a5f6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85a5f9: call dword ptr [0xcfab2c] */
  esp -= 4; W32(esp, 0x85a5ffu); SPILL(); f_4e2eff(); if (g_unwind) return; /* Core!?appAtan2@@YANNN@Z */ RELOAD();
/* 85a5ff: fstp qword ptr [ebp - 0x7c] */
  WF64((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 85a602: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a605: fld qword ptr [ebp - 0x7c] */
  { double v = F64((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 85a608: push 0x403921fb */
  { uint32_t v = 0x403921fbu; esp -= 4; W32(esp, v); }
/* 85a60d: fmul qword ptr [0xa178b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178b8u)));
/* 85a613: push 0x54442d18 */
  { uint32_t v = 0x54442d18u; esp -= 4; W32(esp, v); }
/* 85a618: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85a61b: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 85a61e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85a621: call dword ptr [0xcfab28] */
  esp -= 4; W32(esp, 0x85a627u); SPILL(); f_4e1587(); if (g_unwind) return; /* Core!?appFmod@@YANNN@Z */ RELOAD();
/* 85a627: fst qword ptr [ebp - 0x7c] */
  WF64((uint32_t)(ebp + 0xffffff84u), ST0);
/* 85a62a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a62d: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85a630: fcomp qword ptr [0xa178a8] */
  fpu_com(ST0, F64((uint32_t)(0xa178a8u)));
  FPOP();
/* 85a636: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a638: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85a63b: jnp 0x85a6c2 */
  if (!pf) goto L_85a6c2;
L_85a641: /* 85a641: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85a644: fcomp qword ptr [0xa17898] */
  fpu_com(ST0, F64((uint32_t)(0xa17898u)));
  FPOP();
/* 85a64a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a64c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a64f: je 0x85a6c2 */
  if (zf) goto L_85a6c2;
L_85a651: /* 85a651: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 85a654: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a655: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85a65b: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x85a661u); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 85a661: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85a664: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 85a66a: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 85a670: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a673: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85a676: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a679: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85a67c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a67e: fmul qword ptr [0xa17888] */
  ST0 = ST0 * (F64((uint32_t)(0xa17888u)));
/* 85a684: fcom qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
/* 85a68a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a68c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85a68f: jp 0x85a695 */
  if (pf) goto L_85a695;
L_85a691: /* 85a691: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85a693: jmp 0x85a697 */
  goto L_85a697;
L_85a695: /* 85a695: fstp st(0) */
  STI(0) = ST0; FPOP();
L_85a697: /* 85a697: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85a69a: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85a69d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a69e: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85a6a1: fmul dword ptr [ebx*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(ebx*4 + 0xcceb98u)));
/* 85a6a8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85a6aa: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85a6ad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a6b0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85a6b2: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85a6b8u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85a6b8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a6bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a6be: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85a6c0: jmp 0x85a6d0 */
  goto L_85a6d0;
L_85a6c2: /* 85a6c2: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a6c5: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
/* 85a6c8: jmp 0x85a6d0 */
  goto L_85a6d0;
L_85a6ca: /* 85a6ca: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a6cd: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_85a6d0: /* 85a6d0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a6d3: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85a6d6: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85a6d9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a6dc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85a6dd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85a6de: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85a6e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a6e2: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a6e5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85a6e8: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85a6eb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85a6ee: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85a6f1: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85a6f4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85a6f7: jmp 0x85a5a5 */
  goto L_85a5a5;
L_85a732: /* 85a732: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85a735: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85a738: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85a73a: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85a73d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85a73f: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85a742: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85a745: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a747: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85a74a: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85a74d: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85a750: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a753: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85a756: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85a759: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85a75c: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85a75f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a761: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85a767: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85a76a: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85a76d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85a770: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85a776: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85a779: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85a77c: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85a77f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85a782: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85a788: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85a78b: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85a78e: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85a791: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85a794: sub eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85a797: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85a799: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85a79a: jmp 0x85a596 */
  goto L_85a596;
L_85a79f: /* 85a79f: cmp al, 0x12 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x12u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85a7a1: jne 0x85a990 */
  if (!zf) goto L_85a990;
L_85a7a7: /* 85a7a7: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
L_85a7ab: /* 85a7ab: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a7ae: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85a7b1: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85a7b7: /* 85a7b7: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 85a7ba: mov dword ptr [ebp + 0x1c], ecx */
  W32((uint32_t)(ebp + 0x1cu), ecx);
/* 85a7bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_85a7c0: /* 85a7c0: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 85a7c3: cmp edx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a7c6: jg 0x85a921 */
  if ((!zf && sf == of)) goto L_85a921;
L_85a7cc: /* 85a7cc: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85a7cf: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85a7d5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85a7d5: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 85a7d8: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85a7db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a7dc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a7df: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85a7e5u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85a7e5: mov ebx, eax */
  ebx = eax;
/* 85a7e7: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85a7e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a7ec: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a7ee: je 0x85a8b6 */
  if (zf) goto L_85a8b6;
L_85a7f4: /* 85a7f4: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85a7fa: jae 0x85a8b6 */
  if (!cf) goto L_85a8b6;
L_85a800: /* 85a800: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a803: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85a806: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 85a80a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a80d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85a810: call dword ptr [0xcfab2c] */
  esp -= 4; W32(esp, 0x85a816u); SPILL(); f_4e2eff(); if (g_unwind) return; /* Core!?appAtan2@@YANNN@Z */ RELOAD();
/* 85a816: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85a819: fst qword ptr [ebp - 0x7c] */
  WF64((uint32_t)(ebp + 0xffffff84u), ST0);
/* 85a81c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85a81e: fmul qword ptr [0xa17858] */
  ST0 = ST0 * (F64((uint32_t)(0xa17858u)));
/* 85a824: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85a82a: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85a830: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a833: fmul qword ptr [0xa17848] */
  ST0 = ST0 * (F64((uint32_t)(0xa17848u)));
/* 85a839: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a83a: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85a840: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a842: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a845: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x85a84bu); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 85a84b: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 85a84e: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 85a854: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 85a85a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a85d: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85a860: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a863: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85a866: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a868: fmul qword ptr [0xa09718] */
  ST0 = ST0 * (F64((uint32_t)(0xa09718u)));
/* 85a86e: fcom qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
/* 85a874: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a876: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85a879: jp 0x85a889 */
  if (pf) goto L_85a889;
L_85a87b: /* 85a87b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85a87d: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 85a87f: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 85a885: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a887: jmp 0x85a88b */
  goto L_85a88b;
L_85a889: /* 85a889: fstp st(0) */
  STI(0) = ST0; FPOP();
L_85a88b: /* 85a88b: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 85a88e: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85a891: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a892: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85a895: fmul dword ptr [ebx*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(ebx*4 + 0xcceb98u)));
/* 85a89c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85a89e: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85a8a1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a8a4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85a8a6: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85a8acu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85a8ac: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a8af: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a8b2: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85a8b4: jmp 0x85a8bc */
  goto L_85a8bc;
L_85a8b6: /* 85a8b6: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a8b9: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
L_85a8bc: /* 85a8bc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a8bf: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 85a8c2: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85a8c5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a8c8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85a8c9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85a8ca: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85a8cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a8ce: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a8d1: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85a8d4: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85a8d7: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85a8da: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85a8dd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85a8e0: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85a8e3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85a8e6: jmp 0x85a7c0 */
  goto L_85a7c0;
L_85a921: /* 85a921: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85a924: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85a927: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85a929: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85a92c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85a92e: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85a931: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85a934: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a936: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85a939: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85a93c: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85a93f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a942: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85a945: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85a948: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85a94b: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85a94e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a950: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85a956: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85a959: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85a95c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 85a95f: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85a965: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85a968: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85a96a: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85a96d: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85a970: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85a973: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85a976: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85a97c: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85a97e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85a981: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85a982: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85a985: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85a988: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85a98b: jmp 0x85a7ab */
  goto L_85a7ab;
L_85a990: /* 85a990: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85a992: jne 0x85ab7e */
  if (!zf) goto L_85ab7e;
L_85a998: /* 85a998: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
L_85a99c: /* 85a99c: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a99f: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85a9a2: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85a9a8: /* 85a9a8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 85a9ab: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 85a9ae: mov edi, edi */
  edi = edi;
L_85a9b0: /* 85a9b0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85a9b3: cmp ecx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a9b6: jg 0x85ab0f */
  if ((!zf && sf == of)) goto L_85ab0f;
L_85a9bc: /* 85a9bc: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85a9bf: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85a9c5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85a9c5: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 85a9c8: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85a9cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a9cc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a9cf: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85a9d5u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85a9d5: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85a9d7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a9da: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a9dc: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 85a9df: je 0x85aaa4 */
  if (zf) goto L_85aaa4;
L_85a9e5: /* 85a9e5: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85a9ea: jae 0x85aaa4 */
  if (!cf) goto L_85aaa4;
L_85a9f0: /* 85a9f0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85a9f3: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85a9f9u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85a9f9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85a9fc: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85a9ff: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85aa02: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 85aa05: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85aa08: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85aa0b: and eax, 0x1ffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85aa10: and ebx, 0x7f000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7f000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 85aa16: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 85aa18: mov eax, dword ptr [eax + 0xcccb98] */
  eax = R32((uint32_t)(eax + 0xcccb98u));
/* 85aa1e: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85aa20: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85aa23: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85aa26: call 0x99c958 */
  esp -= 4; W32(esp, 0x85aa2bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85aa2b: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85aa2e: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85aa31: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85aa34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85aa36: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85aa3c: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85aa42: fmul qword ptr [0xa138d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa138d8u)));
/* 85aa48: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 85aa4a: fmul qword ptr [0xa17820] */
  ST0 = ST0 * (F64((uint32_t)(0xa17820u)));
/* 85aa50: call 0x99c958 */
  esp -= 4; W32(esp, 0x85aa55u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85aa55: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85aa5b: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85aa5e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85aa61: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85aa66: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 85aa69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85aa6a: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 85aa71: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 85aa74: fmul qword ptr [0xa17810] */
  ST0 = ST0 * (F64((uint32_t)(0xa17810u)));
/* 85aa7a: fadd qword ptr [0xa092e8] */
  ST0 = ST0 + (F64((uint32_t)(0xa092e8u)));
/* 85aa80: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85aa83: fmul dword ptr [eax*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0xcceb98u)));
/* 85aa8a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85aa8c: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85aa8f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85aa92: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85aa94: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85aa9au); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85aa9a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85aa9d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85aaa0: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85aaa2: jmp 0x85aaaa */
  goto L_85aaaa;
L_85aaa4: /* 85aaa4: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85aaa7: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
L_85aaaa: /* 85aaaa: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85aaad: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85aab0: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85aab3: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85aab6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85aab7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85aab8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85aabb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85aabc: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85aabf: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85aac2: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85aac5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85aac8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85aacb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85aace: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85aad1: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85aad4: jmp 0x85a9b0 */
  goto L_85a9b0;
L_85ab0f: /* 85ab0f: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85ab12: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85ab15: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85ab17: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85ab1a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85ab1c: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85ab1f: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85ab22: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85ab24: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85ab27: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85ab2a: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85ab2d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85ab30: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85ab33: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85ab36: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85ab39: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85ab3c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85ab3e: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85ab44: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85ab47: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85ab4a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 85ab4d: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85ab53: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85ab56: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85ab58: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85ab5b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85ab5e: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85ab61: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85ab64: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85ab6a: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85ab6c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85ab6f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85ab70: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85ab73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85ab76: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85ab79: jmp 0x85a99c */
  goto L_85a99c;
L_85ab7e: /* 85ab7e: cmp al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85ab80: jne 0x85ad71 */
  if (!zf) goto L_85ad71;
L_85ab86: /* 85ab86: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
L_85ab8a: /* 85ab8a: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ab8d: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85ab90: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85ab96: /* 85ab96: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 85ab99: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 85ab9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85aba0: /* 85aba0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85aba3: cmp ecx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85aba6: jg 0x85ad02 */
  if ((!zf && sf == of)) goto L_85ad02;
L_85abac: /* 85abac: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85abaf: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85abb5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85abb5: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 85abb8: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85abbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85abbc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85abbf: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85abc5u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85abc5: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85abc7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85abca: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85abcc: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 85abcf: je 0x85ac97 */
  if (zf) goto L_85ac97;
L_85abd5: /* 85abd5: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85abda: jae 0x85ac97 */
  if (!cf) goto L_85ac97;
L_85abe0: /* 85abe0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85abe3: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85abe9u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85abe9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85abec: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85abef: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85abf2: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 85abf5: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85abf8: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85abfb: and eax, 0x1ffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85ac00: and ebx, 0x7f000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7f000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 85ac06: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 85ac08: mov eax, dword ptr [eax + 0xcccb98] */
  eax = R32((uint32_t)(eax + 0xcccb98u));
/* 85ac0e: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85ac10: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85ac13: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85ac16: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ac1bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ac1b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85ac1e: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85ac21: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85ac24: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85ac27: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85ac29: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85ac2f: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85ac35: fmul qword ptr [0xa138d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa138d8u)));
/* 85ac3b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 85ac3d: fmul qword ptr [0xa177e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa177e8u)));
/* 85ac43: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ac48u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ac48: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85ac4e: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85ac51: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85ac54: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85ac59: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 85ac5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85ac5d: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 85ac64: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 85ac67: fmul qword ptr [0xa17810] */
  ST0 = ST0 * (F64((uint32_t)(0xa17810u)));
/* 85ac6d: fadd qword ptr [0xa092e8] */
  ST0 = ST0 + (F64((uint32_t)(0xa092e8u)));
/* 85ac73: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85ac76: fmul dword ptr [eax*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0xcceb98u)));
/* 85ac7d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85ac7f: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85ac82: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85ac85: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85ac87: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85ac8du); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85ac8d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85ac90: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85ac93: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85ac95: jmp 0x85ac9d */
  goto L_85ac9d;
L_85ac97: /* 85ac97: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85ac9a: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
L_85ac9d: /* 85ac9d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85aca0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85aca3: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85aca6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85aca9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85acaa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85acab: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85acae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85acaf: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85acb2: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85acb5: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85acb8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85acbb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85acbe: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85acc1: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85acc4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85acc7: jmp 0x85aba0 */
  goto L_85aba0;
L_85ad02: /* 85ad02: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85ad05: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85ad08: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85ad0a: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85ad0d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85ad0f: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85ad12: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85ad15: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85ad17: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85ad1a: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85ad1d: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85ad20: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85ad23: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85ad26: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85ad29: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85ad2c: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85ad2f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85ad31: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85ad37: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85ad3a: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85ad3d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 85ad40: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85ad46: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85ad49: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85ad4b: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85ad4e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85ad51: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85ad54: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85ad57: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85ad5d: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85ad5f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85ad62: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85ad63: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85ad66: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85ad69: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85ad6c: jmp 0x85ab8a */
  goto L_85ab8a;
L_85ad71: /* 85ad71: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85ad73: jne 0x85afee */
  if (!zf) goto L_85afee;
L_85ad79: /* 85ad79: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
L_85ad7d: /* 85ad7d: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ad80: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85ad83: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85ad89: /* 85ad89: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 85ad8c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 85ad8f: nop  */
L_85ad90: /* 85ad90: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85ad93: cmp ecx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ad96: jg 0x85af7f */
  if ((!zf && sf == of)) goto L_85af7f;
L_85ad9c: /* 85ad9c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85ad9f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85ada5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85ada5: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 85ada8: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85adab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85adac: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85adaf: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85adb5u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85adb5: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85adb7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85adba: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85adbc: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 85adbf: je 0x85af14 */
  if (zf) goto L_85af14;
L_85adc5: /* 85adc5: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85adca: jae 0x85af14 */
  if (!cf) goto L_85af14;
L_85add0: /* 85add0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85add3: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85add9u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85add9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85addc: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85addf: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85ade2: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 85ade5: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85ade8: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85adeb: and eax, 0x1ffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85adf0: and ebx, 0x7f000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7f000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 85adf6: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 85adf8: mov eax, dword ptr [eax + 0xcccb98] */
  eax = R32((uint32_t)(eax + 0xcccb98u));
/* 85adfe: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85ae00: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85ae03: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85ae06: fmul qword ptr [0xa177c0] */
  ST0 = ST0 * (F64((uint32_t)(0xa177c0u)));
/* 85ae0c: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ae11u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ae11: mov ebx, eax */
  ebx = eax;
/* 85ae13: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85ae16: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85ae18: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85ae1e: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85ae24: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 85ae27: fmul qword ptr [0xa177b0] */
  ST0 = ST0 * (F64((uint32_t)(0xa177b0u)));
/* 85ae2d: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85ae30: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85ae33: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 85ae36: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 85ae38: fmul qword ptr [0xa177a0] */
  ST0 = ST0 * (F64((uint32_t)(0xa177a0u)));
/* 85ae3e: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ae43u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ae43: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85ae49: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85ae4c: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85ae51: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 85ae58: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 85ae5b: fild dword ptr [ebp - 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 85ae5e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 85ae60: fmul qword ptr [0xa17790] */
  ST0 = ST0 * (F64((uint32_t)(0xa17790u)));
/* 85ae66: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ae6bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ae6b: mov edx, 0x4000 */
  edx = 0x4000u;
/* 85ae70: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85ae72: mov eax, dword ptr [0xcfa1c4] */
  eax = R32((uint32_t)(0xcfa1c4u));
/* 85ae77: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 85ae7a: and edx, 0x3fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 85ae80: fld dword ptr [eax + edx*4 + 0x8c] */
  { double v = F32((uint32_t)(eax + edx*4 + 0x8cu)); FPUSH(v); }
/* 85ae87: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 85ae89: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 85ae8c: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 85ae8f: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85ae92: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 85ae94: fmul qword ptr [0xa177a0] */
  ST0 = ST0 * (F64((uint32_t)(0xa177a0u)));
/* 85ae9a: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ae9fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ae9f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85aea1: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85aea7: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85aeaa: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85aead: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85aeb2: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 85aeb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85aeb6: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 85aebd: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85aec0: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 85aec3: fmul qword ptr [0xa15940] */
  ST0 = ST0 * (F64((uint32_t)(0xa15940u)));
/* 85aec9: fadd qword ptr [0xa0d178] */
  ST0 = ST0 + (F64((uint32_t)(0xa0d178u)));
/* 85aecf: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 85aed2: fmul qword ptr [0xa15940] */
  ST0 = ST0 * (F64((uint32_t)(0xa15940u)));
/* 85aed8: fadd qword ptr [0xa0d178] */
  ST0 = ST0 + (F64((uint32_t)(0xa0d178u)));
/* 85aede: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85aee0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85aee2: fmul qword ptr [0xa15940] */
  ST0 = ST0 * (F64((uint32_t)(0xa15940u)));
/* 85aee8: fadd qword ptr [0xa0d178] */
  ST0 = ST0 + (F64((uint32_t)(0xa0d178u)));
/* 85aeee: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85aef0: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85aef3: fmul dword ptr [eax*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0xcceb98u)));
/* 85aefa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85aefc: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85aeff: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85af02: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85af04: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85af0au); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85af0a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85af0d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85af10: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85af12: jmp 0x85af1a */
  goto L_85af1a;
L_85af14: /* 85af14: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85af17: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
L_85af1a: /* 85af1a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85af1d: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85af20: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85af23: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85af26: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85af27: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85af28: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85af2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85af2c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85af2f: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85af32: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85af35: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85af38: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85af3b: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85af3e: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85af41: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85af44: jmp 0x85ad90 */
  goto L_85ad90;
L_85af7f: /* 85af7f: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85af82: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85af85: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85af87: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85af8a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85af8c: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85af8f: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85af92: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85af94: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85af97: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85af9a: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85af9d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85afa0: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85afa3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85afa6: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85afa9: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85afac: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85afae: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85afb4: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85afb7: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85afba: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 85afbd: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85afc3: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85afc6: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85afc8: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85afcb: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85afce: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85afd1: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85afd4: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85afda: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85afdc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85afdf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85afe0: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85afe3: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85afe6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85afe9: jmp 0x85ad7d */
  goto L_85ad7d;
L_85afee: /* 85afee: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85aff0: jne 0x85b26e */
  if (!zf) goto L_85b26e;
L_85aff6: /* 85aff6: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
L_85affa: /* 85affa: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85affd: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 85b000: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85b006: /* 85b006: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 85b009: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85b00c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85b010: /* 85b010: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 85b013: cmp ecx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b016: jg 0x85b201 */
  if ((!zf && sf == of)) goto L_85b201;
L_85b01c: /* 85b01c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b01f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b025u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b025: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b028: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85b02b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b02c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b02f: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85b035u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85b035: mov ebx, eax */
  ebx = eax;
/* 85b037: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85b039: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b03c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85b03e: je 0x85b196 */
  if (zf) goto L_85b196;
L_85b044: /* 85b044: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85b04a: jae 0x85b196 */
  if (!cf) goto L_85b196;
L_85b050: /* 85b050: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b053: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85b056: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 85b05a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b05d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85b060: call dword ptr [0xcfab2c] */
  esp -= 4; W32(esp, 0x85b066u); SPILL(); f_4e2eff(); if (g_unwind) return; /* Core!?appAtan2@@YANNN@Z */ RELOAD();
/* 85b066: fst qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0);
/* 85b069: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b06c: fmul qword ptr [0xa17768] */
  ST0 = ST0 * (F64((uint32_t)(0xa17768u)));
/* 85b072: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85b075: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85b078: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b07b: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85b07e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b081: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85b084: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b086: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85b089: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x85b08fu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 85b08f: fstp qword ptr [ebp - 0x48] */
  WF64((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 85b092: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b095: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b098: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85b09b: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 85b09e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85b0a1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85b0a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85b0a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85b0a6: call dword ptr [0xcfab2c] */
  esp -= 4; W32(esp, 0x85b0acu); SPILL(); f_4e2eff(); if (g_unwind) return; /* Core!?appAtan2@@YANNN@Z */ RELOAD();
/* 85b0ac: fst qword ptr [ebp - 0x48] */
  WF64((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 85b0af: fmul qword ptr [0xa17768] */
  ST0 = ST0 * (F64((uint32_t)(0xa17768u)));
/* 85b0b5: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 85b0b8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85b0ba: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 85b0c0: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85b0c3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b0c6: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 85b0cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b0cd: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 85b0d3: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85b0d9: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 85b0dc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b0df: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x85b0e5u); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 85b0e5: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 85b0e8: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b0eb: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 85b0f1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85b0f3: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 85b0f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b0fa: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 85b100: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85b106: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 85b109: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 85b10f: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 85b115: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 85b118: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b11b: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x85b121u); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 85b121: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b124: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 85b12a: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 85b130: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 85b133: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 85b135: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b137: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 85b13a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 85b13c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b13f: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85b142: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b145: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85b148: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b14a: fmul qword ptr [0xa17758] */
  ST0 = ST0 * (F64((uint32_t)(0xa17758u)));
/* 85b150: fcom qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
/* 85b156: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85b158: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85b15b: jp 0x85b161 */
  if (pf) goto L_85b161;
L_85b15d: /* 85b15d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85b15f: jmp 0x85b163 */
  goto L_85b163;
L_85b161: /* 85b161: fstp st(0) */
  STI(0) = ST0; FPOP();
L_85b163: /* 85b163: fld dword ptr [ebx*4 + 0xcceb98] */
  { double v = F32((uint32_t)(ebx*4 + 0xcceb98u)); FPUSH(v); }
/* 85b16a: movzx ecx, byte ptr [edi] */
  ecx = (uint32_t)(R8((uint32_t)(edi)));
/* 85b16d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b16f: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85b172: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 85b178: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b179: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85b17b: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85b17e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85b180: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85b183: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b186: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85b18cu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85b18c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b18f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b192: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 85b194: jmp 0x85b19c */
  goto L_85b19c;
L_85b196: /* 85b196: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b199: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_85b19c: /* 85b19c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b19f: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 85b1a2: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85b1a5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b1a8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85b1a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85b1aa: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85b1ad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85b1ae: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b1b1: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85b1b4: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85b1b7: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85b1ba: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85b1bd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b1c0: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85b1c3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85b1c6: jmp 0x85b010 */
  goto L_85b010;
L_85b201: /* 85b201: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85b204: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85b207: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b209: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85b20c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85b20e: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85b211: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85b214: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b216: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85b219: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85b21c: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85b21f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b222: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85b225: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b228: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85b22b: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85b22e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b230: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85b236: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85b239: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85b23c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85b23f: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85b245: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85b248: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85b24b: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85b24e: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85b251: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85b257: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85b25a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85b25d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85b260: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85b263: sub eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85b266: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85b268: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b269: jmp 0x85affa */
  goto L_85affa;
L_85b26e: /* 85b26e: cmp al, 0x11 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x11u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85b270: jne 0x85b3a2 */
  if (!zf) goto L_85b3a2;
L_85b276: /* 85b276: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
L_85b27a: /* 85b27a: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b27d: mov dword ptr [ebp + 0x1c], ebx */
  W32((uint32_t)(ebp + 0x1cu), ebx);
/* 85b280: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85b286: /* 85b286: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 85b289: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85b290: /* 85b290: cmp ebx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b293: jg 0x85b333 */
  if ((!zf && sf == of)) goto L_85b333;
L_85b299: /* 85b299: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b29c: movzx ecx, byte ptr [edi] */
  ecx = (uint32_t)(R8((uint32_t)(edi)));
/* 85b29f: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85b2a2: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85b2a5: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b2a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b2a9: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85b2ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b2ae: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 85b2b1: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 85b2b4: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 85b2ba: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85b2bd: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85b2bf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b2c2: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85b2c8u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85b2c8: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b2cb: xor ecx, ecx */
  ecx = 0;
/* 85b2cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b2d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85b2d2: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 85b2d5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 85b2d6: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 85b2d8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b2db: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 85b2dd: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85b2e0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b2e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85b2e2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85b2e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85b2e6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b2e9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85b2ec: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85b2ef: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85b2f2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b2f5: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85b2f8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85b2fb: jmp 0x85b290 */
  goto L_85b290;
L_85b333: /* 85b333: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85b336: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85b339: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b33b: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85b33e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85b340: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85b343: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85b346: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b348: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85b34b: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85b34e: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85b351: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b354: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85b357: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b35a: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85b35d: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85b360: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b362: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85b368: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85b36b: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85b36e: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 85b371: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85b377: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85b37a: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 85b37c: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85b37f: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85b382: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85b385: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85b388: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85b38e: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85b390: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 85b393: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b394: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85b397: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85b39a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 85b39d: jmp 0x85b27a */
  goto L_85b27a;
L_85b3a2: /* 85b3a2: cmp al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85b3a4: jne 0x85b56f */
  if (!zf) goto L_85b56f;
L_85b3aa: /* 85b3aa: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
L_85b3ae: /* 85b3ae: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b3b1: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85b3b4: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85b3ba: /* 85b3ba: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
L_85b3bd: /* 85b3bd: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 85b3c0: mov eax, edx */
  eax = edx;
/* 85b3c2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b3c4: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85b3c7: jg 0x85b502 */
  if ((!zf && sf == of)) goto L_85b502;
L_85b3cd: /* 85b3cd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b3d0: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b3d6u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b3d6: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b3d9: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85b3dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b3dd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b3e0: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85b3e6u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85b3e6: mov ebx, eax */
  ebx = eax;
/* 85b3e8: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85b3ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b3ed: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85b3ef: je 0x85b49a */
  if (zf) goto L_85b49a;
L_85b3f5: /* 85b3f5: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85b3fb: jae 0x85b49a */
  if (!cf) goto L_85b49a;
L_85b401: /* 85b401: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b404: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85b407: fstp qword ptr [esp + 4] */
  WF64((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 85b40b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b40e: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85b411: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b414: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85b417: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b419: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b41c: call 0x6c6c58 */
  esp -= 4; W32(esp, 0x85b421u); SPILL(); f_6c6c58(); if (g_unwind) return; RELOAD();
/* 85b421: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b422: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85b425: call dword ptr [0xcfab2c] */
  esp -= 4; W32(esp, 0x85b42bu); SPILL(); f_4e2eff(); if (g_unwind) return; /* Core!?appAtan2@@YANNN@Z */ RELOAD();
/* 85b42b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 85b42e: fst qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0);
/* 85b431: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85b433: fmul qword ptr [0xa17768] */
  ST0 = ST0 * (F64((uint32_t)(0xa17768u)));
/* 85b439: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 85b43f: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 85b445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b448: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 85b44e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b44f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85b455: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b457: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b45a: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x85b460u); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 85b460: movzx ecx, byte ptr [edi] */
  ecx = (uint32_t)(R8((uint32_t)(edi)));
/* 85b463: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b466: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 85b46c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85b46f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b470: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 85b476: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85b479: fmul dword ptr [ebx*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(ebx*4 + 0xcceb98u)));
/* 85b480: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85b482: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85b485: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b488: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85b48a: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85b490u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85b490: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b493: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b496: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 85b498: jmp 0x85b4a0 */
  goto L_85b4a0;
L_85b49a: /* 85b49a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b49d: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_85b4a0: /* 85b4a0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b4a3: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 85b4a6: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85b4a9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b4ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85b4ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85b4ae: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85b4b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85b4b2: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b4b5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85b4b8: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85b4bb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85b4be: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b4c1: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85b4c4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85b4c7: jmp 0x85b3bd */
  goto L_85b3bd;
L_85b502: /* 85b502: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85b505: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85b508: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b50a: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85b50d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85b50f: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85b512: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85b515: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b517: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85b51a: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85b51d: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85b520: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b523: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85b526: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b529: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85b52c: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85b52f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b531: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85b537: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85b53a: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85b53d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85b540: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85b546: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85b549: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85b54c: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85b54f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85b552: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85b558: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85b55b: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85b55e: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85b561: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85b564: sub eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85b567: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85b569: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b56a: jmp 0x85b3ae */
  goto L_85b3ae;
L_85b56f: /* 85b56f: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85b571: je 0x85bc7c */
  if (zf) goto L_85bc7c;
L_85b577: /* 85b577: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85b579: je 0x85bc7c */
  if (zf) goto L_85bc7c;
L_85b57f: /* 85b57f: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85b581: jne 0x85b6ab */
  if (!zf) goto L_85b6ab;
L_85b587: /* 85b587: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b58a: mov dword ptr [ebp + 0x1c], ebx */
  W32((uint32_t)(ebp + 0x1cu), ebx);
/* 85b58d: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85b593: /* 85b593: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
L_85b596: /* 85b596: cmp ebx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b599: jg 0x85b63e */
  if ((!zf && sf == of)) goto L_85b63e;
L_85b59f: /* 85b59f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b5a2: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b5a8u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b5a8: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b5ab: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85b5ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b5af: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b5b2: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85b5b8u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85b5b8: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85b5ba: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b5bd: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85b5bf: je 0x85b60f */
  if (zf) goto L_85b60f;
L_85b5c1: /* 85b5c1: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85b5c6: jae 0x85b60f */
  if (!cf) goto L_85b60f;
L_85b5c8: /* 85b5c8: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b5cb: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b5d1u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b5d1: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85b5d4: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85b5d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85b5d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b5da: call 0x6c6c58 */
  esp -= 4; W32(esp, 0x85b5dfu); SPILL(); f_6c6c58(); if (g_unwind) return; RELOAD();
/* 85b5df: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 85b5e2: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 85b5e8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b5eb: call 0x6c47be */
  esp -= 4; W32(esp, 0x85b5f0u); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 85b5f0: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85b5f3: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 85b5f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b5f9: fimul dword ptr [ebp - 0x30] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)));
/* 85b5fc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b5ff: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85b605u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85b605: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b608: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b60b: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85b60d: jmp 0x85b615 */
  goto L_85b615;
L_85b60f: /* 85b60f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b612: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
L_85b615: /* 85b615: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b618: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b61b: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85b61e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b61f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85b620: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85b621: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85b624: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85b627: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b62a: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85b62d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85b630: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b633: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85b636: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85b639: jmp 0x85b596 */
  goto L_85b596;
L_85b63e: /* 85b63e: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85b641: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85b644: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b646: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85b649: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85b64b: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85b64e: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85b651: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b653: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85b656: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85b659: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85b65c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b65f: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85b662: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b665: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85b668: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85b66b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b66d: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85b673: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85b676: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85b679: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85b67c: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85b682: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85b685: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85b688: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85b68b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85b68e: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85b694: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85b697: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85b69a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85b69d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85b6a0: sub eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85b6a3: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85b6a5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b6a6: jmp 0x85b587 */
  goto L_85b587;
L_85b6ab: /* 85b6ab: cmp al, 0x14 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85b6ad: jne 0x85b7f5 */
  if (!zf) goto L_85b7f5;
L_85b6b3: /* 85b6b3: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b6b6: mov dword ptr [ebp + 0x1c], ebx */
  W32((uint32_t)(ebp + 0x1cu), ebx);
/* 85b6b9: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85b6bf: /* 85b6bf: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
L_85b6c2: /* 85b6c2: cmp ebx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b6c5: jg 0x85b788 */
  if ((!zf && sf == of)) goto L_85b788;
L_85b6cb: /* 85b6cb: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b6ce: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b6d4u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b6d4: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b6d7: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85b6da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b6db: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b6de: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85b6e4u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85b6e4: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85b6e6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b6e9: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85b6eb: je 0x85b759 */
  if (zf) goto L_85b759;
L_85b6ed: /* 85b6ed: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85b6f2: jae 0x85b759 */
  if (!cf) goto L_85b759;
L_85b6f4: /* 85b6f4: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 85b6f7: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 85b6fa: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 85b6ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85b700: call 0x6c47be */
  esp -= 4; W32(esp, 0x85b705u); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 85b705: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b707: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85b709: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b70c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b70f: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 85b715: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85b718: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85b71a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b720u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b720: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85b723: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85b725: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85b728: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b729: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 85b72c: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 85b732: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b735: call 0x6c47be */
  esp -= 4; W32(esp, 0x85b73au); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 85b73a: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 85b73d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 85b740: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b743: fimul dword ptr [ebp - 0x30] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)));
/* 85b746: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b749: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85b74fu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85b74f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b752: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b755: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85b757: jmp 0x85b75f */
  goto L_85b75f;
L_85b759: /* 85b759: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b75c: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
L_85b75f: /* 85b75f: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b762: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b765: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85b768: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b769: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85b76a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85b76b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85b76e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85b771: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b774: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85b777: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85b77a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b77d: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85b780: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85b783: jmp 0x85b6c2 */
  goto L_85b6c2;
L_85b788: /* 85b788: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85b78b: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85b78e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b790: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85b793: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85b795: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85b798: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85b79b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b79d: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85b7a0: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85b7a3: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85b7a6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b7a9: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85b7ac: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b7af: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85b7b2: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85b7b5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b7b7: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85b7bd: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85b7c0: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85b7c3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85b7c6: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85b7cc: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85b7cf: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85b7d2: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85b7d5: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85b7d8: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85b7de: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85b7e1: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85b7e4: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85b7e7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85b7ea: sub eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85b7ed: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85b7ef: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b7f0: jmp 0x85b6b3 */
  goto L_85b6b3;
L_85b7f5: /* 85b7f5: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85b7f7: jne 0x85b9a0 */
  if (!zf) goto L_85b9a0;
L_85b7fd: /* 85b7fd: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
L_85b801: /* 85b801: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b804: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85b807: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85b80d: /* 85b80d: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
L_85b810: /* 85b810: cmp ebx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b813: jg 0x85b933 */
  if ((!zf && sf == of)) goto L_85b933;
L_85b819: /* 85b819: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b81c: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b822u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b822: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85b825: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85b828: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b829: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b82c: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85b832u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85b832: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85b834: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b837: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85b839: je 0x85b8ce */
  if (zf) goto L_85b8ce;
L_85b83f: /* 85b83f: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85b844: jae 0x85b8ce */
  if (!cf) goto L_85b8ce;
L_85b84a: /* 85b84a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b84d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b853u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b853: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 85b856: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 85b859: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b85a: call 0x6c6c58 */
  esp -= 4; W32(esp, 0x85b85fu); SPILL(); f_6c6c58(); if (g_unwind) return; RELOAD();
/* 85b85f: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 85b862: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b865: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85b868: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 85b86e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85b870: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85b873: je 0x85b8c6 */
  if (zf) goto L_85b8c6;
L_85b875: /* 85b875: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85b878: fcomp qword ptr [0xa0d188] */
  fpu_com(ST0, F64((uint32_t)(0xa0d188u)));
  FPOP();
/* 85b87e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85b880: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85b883: jnp 0x85b8c6 */
  if (!pf) goto L_85b8c6;
L_85b885: /* 85b885: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85b888: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85b88b: fsub qword ptr [0xa0d178] */
  ST0 = ST0 - (F64((uint32_t)(0xa0d178u)));
/* 85b891: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85b894: call 0x6c146a */
  esp -= 4; W32(esp, 0x85b899u); SPILL(); f_6c146a(); if (g_unwind) return; RELOAD();
/* 85b899: fmul qword ptr [0xa176f0] */
  ST0 = ST0 * (F64((uint32_t)(0xa176f0u)));
/* 85b89f: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85b8a2: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85b8a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b8a8: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 85b8ae: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85b8b1: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85b8b3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b8b6: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85b8bcu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85b8bc: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b8bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b8c2: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85b8c4: jmp 0x85b8d4 */
  goto L_85b8d4;
L_85b8c6: /* 85b8c6: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b8c9: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
/* 85b8cc: jmp 0x85b8d4 */
  goto L_85b8d4;
L_85b8ce: /* 85b8ce: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b8d1: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_85b8d4: /* 85b8d4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b8d7: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b8da: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85b8dd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b8de: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85b8df: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85b8e0: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85b8e3: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85b8e6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b8e9: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85b8ec: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85b8ef: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b8f2: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85b8f5: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85b8f8: jmp 0x85b810 */
  goto L_85b810;
L_85b933: /* 85b933: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85b936: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85b939: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b93b: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85b93e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85b940: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85b943: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85b946: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b948: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85b94b: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85b94e: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85b951: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b954: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85b957: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b95a: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85b95d: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85b960: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b962: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85b968: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85b96b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85b96e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85b971: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85b977: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85b97a: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85b97d: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85b980: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85b983: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85b989: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85b98c: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85b98f: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85b992: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85b995: sub eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85b998: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85b99a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b99b: jmp 0x85b801 */
  goto L_85b801;
L_85b9a0: /* 85b9a0: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85b9a3: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 85b9a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b9a7: fsub dword ptr [esi + 0x70] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x70u)));
/* 85b9aa: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 85b9ae: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 85b9b1: fsub dword ptr [esi + 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x6cu)));
/* 85b9b4: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 85b9b7: fsub dword ptr [esi + 0x68] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x68u)));
/* 85b9ba: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b9bc: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 85b9bf: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 85b9c1: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 85b9c4: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 85b9c6: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 85b9c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b9cb: fdiv dword ptr [eax + 0x30] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x30u)));
/* 85b9ce: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b9d1: call 0x6cae61 */
  esp -= 4; W32(esp, 0x85b9d6u); SPILL(); f_6cae61(); if (g_unwind) return; RELOAD();
/* 85b9d6: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 85b9d9: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 85b9dc: fmul dword ptr [0xa176d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa176d0u)));
/* 85b9e2: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 85b9e5: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b9e8: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85b9eb: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b9ee: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85b9f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b9f3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b9f6: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 85b9f9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b9fb: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 85b9fe: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85ba01: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85ba07u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85ba07: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 85ba0a: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85ba0d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85ba10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85ba11: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85ba14: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85ba17: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85ba1a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85ba1d: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85ba20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85ba22: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85ba25: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85ba28: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85ba2a: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 85ba2d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85ba30: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85ba36u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85ba36: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 85ba39: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85ba3c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85ba3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85ba40: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 85ba43: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85ba46: fmul dword ptr [esi + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x88u)));
/* 85ba4c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85ba4f: fmul dword ptr [esi + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x84u)));
/* 85ba55: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85ba57: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85ba5a: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 85ba60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85ba62: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 85ba65: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85ba68: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85ba6eu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85ba6e: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 85ba71: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85ba74: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85ba77: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 85ba7a: fld dword ptr [esi + 0x7c] */
  { double v = F32((uint32_t)(esi + 0x7cu)); FPUSH(v); }
/* 85ba7d: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85ba80: fld dword ptr [esi + 0x78] */
  { double v = F32((uint32_t)(esi + 0x78u)); FPUSH(v); }
/* 85ba83: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85ba86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85ba88: fld dword ptr [esi + 0x74] */
  { double v = F32((uint32_t)(esi + 0x74u)); FPUSH(v); }
/* 85ba8b: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85ba8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85ba90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85ba91: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 85ba94: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85ba97: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85ba9du); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85ba9d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 85baa0: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85baa3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85baa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85baa7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 85baaa: fld dword ptr [esi + 0x88] */
  { double v = F32((uint32_t)(esi + 0x88u)); FPUSH(v); }
/* 85bab0: fmul dword ptr [esi + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x88u)));
/* 85bab6: fld dword ptr [esi + 0x84] */
  { double v = F32((uint32_t)(esi + 0x84u)); FPUSH(v); }
/* 85babc: fmul dword ptr [esi + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x84u)));
/* 85bac2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bac4: fld dword ptr [esi + 0x80] */
  { double v = F32((uint32_t)(esi + 0x80u)); FPUSH(v); }
/* 85baca: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 85bad0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bad2: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 85bad5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85bad8: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85badeu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85bade: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 85bae1: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85bae4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85bae7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85bae8: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 85baeb: fld dword ptr [esi + 0x88] */
  { double v = F32((uint32_t)(esi + 0x88u)); FPUSH(v); }
/* 85baf1: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85baf4: fld dword ptr [esi + 0x84] */
  { double v = F32((uint32_t)(esi + 0x84u)); FPUSH(v); }
/* 85bafa: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85bafd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85baff: fld dword ptr [esi + 0x80] */
  { double v = F32((uint32_t)(esi + 0x80u)); FPUSH(v); }
/* 85bb05: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85bb08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bb0a: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 85bb0d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85bb10: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85bb16u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85bb16: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85bb19: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85bb1c: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85bb1f: call 0x99c958 */
  esp -= 4; W32(esp, 0x85bb24u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85bb24: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 85bb27: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 85bb29: mov dword ptr [0xcd5220], eax */
  W32((uint32_t)(0xcd5220u), eax);
/* 85bb2e: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 85bb31: call 0x99c958 */
  esp -= 4; W32(esp, 0x85bb36u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85bb36: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 85bb39: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 85bb3b: mov dword ptr [0xcd521c], eax */
  W32((uint32_t)(0xcd521cu), eax);
/* 85bb40: call 0x99c958 */
  esp -= 4; W32(esp, 0x85bb45u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85bb45: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 85bb48: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 85bb4a: mov dword ptr [0xcd5218], eax */
  W32((uint32_t)(0xcd5218u), eax);
/* 85bb4f: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 85bb52: call 0x99c958 */
  esp -= 4; W32(esp, 0x85bb57u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85bb57: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85bb5a: mov dword ptr [0xcd5214], eax */
  W32((uint32_t)(0xcd5214u), eax);
/* 85bb5f: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 85bb61: call 0x99c958 */
  esp -= 4; W32(esp, 0x85bb66u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85bb66: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 85bb69: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 85bb6b: mov dword ptr [0xcd5210], eax */
  W32((uint32_t)(0xcd5210u), eax);
/* 85bb70: call 0x99c958 */
  esp -= 4; W32(esp, 0x85bb75u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85bb75: mov dword ptr [0xcd520c], eax */
  W32((uint32_t)(0xcd520cu), eax);
L_85bb7a: /* 85bb7a: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85bb7d: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85bb80: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85bb86: /* 85bb86: mov ecx, dword ptr [0xcd5220] */
  ecx = R32((uint32_t)(0xcd5220u));
/* 85bb8c: mov edx, dword ptr [0xcd5214] */
  edx = R32((uint32_t)(0xcd5214u));
/* 85bb92: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 85bb95: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
L_85bb98: /* 85bb98: cmp eax, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85bb9b: mov dword ptr [0xcd5208], ecx */
  W32((uint32_t)(0xcd5208u), ecx);
/* 85bba1: mov dword ptr [0xcd5204], edx */
  W32((uint32_t)(0xcd5204u), edx);
/* 85bba7: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85bbaa: jg 0x85bbff */
  if ((!zf && sf == of)) goto L_85bbff;
L_85bbac: /* 85bbac: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85bbae: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85bbb0: je 0x85bbe7 */
  if (zf) goto L_85bbe7;
L_85bbb2: /* 85bbb2: cmp ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85bbb8: jae 0x85bbe7 */
  if (!cf) goto L_85bbe7;
L_85bbba: /* 85bbba: movzx ebx, bl */
  ebx = (uint32_t)((ebx & 0xffu));
/* 85bbbd: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 85bbc0: mov eax, ecx */
  eax = ecx;
/* 85bbc2: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85bbc5: shr eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85bbc8: fmul dword ptr [eax*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0xcceb98u)));
/* 85bbcf: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85bbd2: fadd dword ptr [0xa176cc] */
  ST0 = ST0 + (F32((uint32_t)(0xa176ccu)));
/* 85bbd8: fstp dword ptr [0xcd5200] */
  WF32((uint32_t)(0xcd5200u), ST0); FPOP();
/* 85bbde: mov al, byte ptr [0xcd5200] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xcd5200u))) & 0xffu);
/* 85bbe3: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 85bbe5: jmp 0x85bbea */
  goto L_85bbea;
L_85bbe7: /* 85bbe7: mov byte ptr [esi], 0 */
  W8((uint32_t)(esi), 0x0u);
L_85bbea: /* 85bbea: mov ebx, dword ptr [0xcd520c] */
  ebx = R32((uint32_t)(0xcd520cu));
/* 85bbf0: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 85bbf3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85bbf4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85bbf5: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85bbf7: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85bbf9: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 85bbfc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85bbfd: jmp 0x85bb98 */
  goto L_85bb98;
L_85bbff: /* 85bbff: mov eax, dword ptr [0xcd521c] */
  eax = R32((uint32_t)(0xcd521cu));
/* 85bc04: mov edx, dword ptr [0xcd5220] */
  edx = R32((uint32_t)(0xcd5220u));
/* 85bc0a: mov ecx, dword ptr [0xcd5218] */
  ecx = R32((uint32_t)(0xcd5218u));
/* 85bc10: mov ebx, dword ptr [0xcd5214] */
  ebx = R32((uint32_t)(0xcd5214u));
/* 85bc16: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85bc19: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85bc1b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85bc1d: mov ecx, dword ptr [0xcd5210] */
  ecx = R32((uint32_t)(0xcd5210u));
/* 85bc23: mov dword ptr [0xcd5220], edx */
  W32((uint32_t)(0xcd5220u), edx);
/* 85bc29: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85bc2c: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85bc2e: mov dword ptr [0xcd5214], ebx */
  W32((uint32_t)(0xcd5214u), ebx);
/* 85bc34: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85bc37: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85bc39: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85bc3b: mov dword ptr [0xcd521c], eax */
  W32((uint32_t)(0xcd521cu), eax);
/* 85bc40: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85bc41: jmp 0x85bb7a */
  goto L_85bb7a;
L_85bc7c: /* 85bc7c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85bc7f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85bc81: lea edx, [ebp - 0xcc] */
  edx = (uint32_t)(ebp + 0xffffff34u);
/* 85bc87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85bc88: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 85bc8c: call 0x6c89d6 */
  esp -= 4; W32(esp, 0x85bc91u); SPILL(); f_6c89d6(); if (g_unwind) return; RELOAD();
/* 85bc91: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 85bc94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85bc95: mov ecx, eax */
  ecx = eax;
/* 85bc97: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x85bc9du); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 85bc9d: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 85bca0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 85bca2: movzx ecx, byte ptr [eax + 0x38] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x38u)));
/* 85bca6: mov dword ptr [ebp + 0x1c], ecx */
  W32((uint32_t)(ebp + 0x1cu), ecx);
/* 85bca9: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85bcac: fmul qword ptr [0xa0a4c8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0a4c8u)));
/* 85bcb2: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 85bcb8: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 85bcbe: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 85bcc0: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 85bcc6: fst dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0);
/* 85bcc9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85bccb: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85bcce: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85bcd0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85bcd2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85bcd5: fstp st(0) */
  STI(0) = ST0; FPOP();
L_85bcd7: /* 85bcd7: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85bcda: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 85bcdd: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85bce3: /* 85bce3: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
L_85bce6: /* 85bce6: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 85bce9: mov eax, edx */
  eax = edx;
/* 85bceb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85bced: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85bcf0: jg 0x85bdf8 */
  if ((!zf && sf == of)) goto L_85bdf8;
L_85bcf6: /* 85bcf6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85bcf9: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85bcffu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85bcff: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85bd02: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85bd05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85bd06: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85bd09: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85bd0fu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85bd0f: mov ebx, eax */
  ebx = eax;
/* 85bd11: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85bd13: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85bd16: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85bd18: je 0x85bdc6 */
  if (zf) goto L_85bdc6;
L_85bd1e: /* 85bd1e: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85bd24: jae 0x85bdc6 */
  if (!cf) goto L_85bdc6;
L_85bd2a: /* 85bd2a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85bd2d: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85bd30: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85bd33: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85bd36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bd38: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85bd3b: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 85bd3e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bd40: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 85bd43: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85bd46: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85bd49: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 85bd4c: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85bd4f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bd51: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85bd54: fmul dword ptr [ebp - 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 85bd57: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bd59: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85bd5c: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 85bd62: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85bd64: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85bd67: jne 0x85bdbe */
  if (!zf) goto L_85bdbe;
L_85bd69: /* 85bd69: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85bd6c: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 85bd6f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 85bd72: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 85bd75: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 85bd77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85bd79: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85bd7c: jp 0x85bdbe */
  if (pf) goto L_85bdbe;
L_85bd7e: /* 85bd7e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85bd81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85bd82: call 0x6cbff0 */
  esp -= 4; W32(esp, 0x85bd87u); SPILL(); f_6cbff0(); if (g_unwind) return; RELOAD();
/* 85bd87: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 85bd8a: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85bd8d: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85bd90: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 85bd93: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 85bd96: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85bd98: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85bd9a: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85bd9d: fmul dword ptr [ebx*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(ebx*4 + 0xcceb98u)));
/* 85bda4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85bda6: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85bda9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85bdac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85bdae: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85bdb4u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85bdb4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85bdb7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85bdba: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85bdbc: jmp 0x85bdcc */
  goto L_85bdcc;
L_85bdbe: /* 85bdbe: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85bdc1: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
/* 85bdc4: jmp 0x85bdcc */
  goto L_85bdcc;
L_85bdc6: /* 85bdc6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85bdc9: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_85bdcc: /* 85bdcc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85bdcf: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85bdd2: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85bdd5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85bdd8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85bdd9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85bdda: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85bddd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85bdde: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85bde1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85bde4: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85bde7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85bdea: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85bded: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85bdf0: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85bdf3: jmp 0x85bce6 */
  goto L_85bce6;
L_85bdf8: /* 85bdf8: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85bdfb: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85bdfe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85be00: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85be03: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85be05: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85be08: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 85be0b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85be0d: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85be10: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85be13: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85be16: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85be19: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 85be1c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85be1f: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 85be22: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 85be28: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85be2a: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85be30: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85be33: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85be36: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 85be39: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85be3f: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85be42: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 85be44: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 85be47: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85be4a: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 85be50: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85be53: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85be59: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85be5b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 85be5e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85be5f: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85be62: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85be65: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 85be68: jmp 0x85bcd7 */
  goto L_85bcd7;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85a3cc(void) {
  LOAD_REGS();
  goto L_85a3cc;
L_85a381: /* 85a381: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
L_85a384: /* 85a384: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 85a387: mov dword ptr [ebp + 0x24], 0 */
  W32((uint32_t)(ebp + 0x24u), 0x0u);
/* 85a38e: mov edi, edi */
  edi = edi;
L_85a390: /* 85a390: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 85a393: cmp edx, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a396: jge 0x85be6d */
  if ((sf == of)) goto L_85be6d;
L_85a39c: /* 85a39c: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a39f: xor ebx, ebx */
  ebx = 0;
L_85a3a1: /* 85a3a1: cmp ebx, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a3a4: jge 0x85a41c */
  if ((sf == of)) goto L_85a41c;
L_85a3a6: /* 85a3a6: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 85a3a9: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 85a3ac: fild dword ptr [ebp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 85a3af: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 85a3b2: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 85a3b5: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 85a3b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a3b9: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85a3bfu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85a3bf: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 85a3c2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a3c5: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 85a3c7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85a3c8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85a3c9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85a3ca: jmp 0x85a3a1 */
  goto L_85a3a1;
L_85a3cc: /* 85a3cc: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 85a3d2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 85a3d4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a3d6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a3d9: jne 0x85a381 */
  if (!zf) goto L_85a381;
L_85a3db: /* 85a3db: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85a3dd: mov dword ptr [ebp + 0x18], 0 */
  W32((uint32_t)(ebp + 0x18u), 0x0u);
/* 85a3e4: jmp 0x85a384 */
  goto L_85a384;
L_85a41c: /* 85a41c: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 85a41f: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85a422: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85a424: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85a426: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85a429: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85a42b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 85a42e: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85a430: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a431: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 85a434: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 85a437: jmp 0x85a390 */
  goto L_85a390;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85a3e6(void) {
  LOAD_REGS();
L_85a3e6: /* 85a3e6: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 85a3e9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85a3ee: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 85a3f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85a3f5: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 85a3fb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85a400u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85a400(); return;
}

void f_85a400(void) {
  LOAD_REGS();
  goto L_85a400;
L_85a390: /* 85a390: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 85a393: cmp edx, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a396: jge 0x85be6d */
  if ((sf == of)) goto L_85be6d;
L_85a39c: /* 85a39c: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a39f: xor ebx, ebx */
  ebx = 0;
L_85a3a1: /* 85a3a1: cmp ebx, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a3a4: jge 0x85a41c */
  if ((sf == of)) goto L_85a41c;
L_85a3a6: /* 85a3a6: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 85a3a9: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
/* 85a3ac: fild dword ptr [ebp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 85a3af: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 85a3b2: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 85a3b5: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 85a3b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a3b9: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85a3bfu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85a3bf: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 85a3c2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a3c5: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 85a3c7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85a3c8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85a3c9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85a3ca: jmp 0x85a3a1 */
  goto L_85a3a1;
L_85a400: /* 85a400: push 0xa178e4 */
  { uint32_t v = 0xa178e4u; esp -= 4; W32(esp, v); }
/* 85a405: push 0xae4c18 */
  { uint32_t v = 0xae4c18u; esp -= 4; W32(esp, v); }
/* 85a40a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85a410u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85a410: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a413: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85a415: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85a417: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85a41cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85a41c: /* 85a41c: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 85a41f: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85a422: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85a424: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85a426: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85a429: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85a42b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 85a42e: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85a430: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a431: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 85a434: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 85a437: jmp 0x85a390 */
  goto L_85a390;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85a6fc(void) {
  LOAD_REGS();
L_85a6fc: /* 85a6fc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85a6ff: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85a704: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 85a70a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85a70b: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 85a711: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85a716u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85a716(); return;
}

void f_85a716(void) {
  LOAD_REGS();
  goto L_85a716;
L_85a596: /* 85a596: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a599: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85a59c: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85a5a2: /* 85a5a2: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
L_85a5a5: /* 85a5a5: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 85a5a8: mov eax, edx */
  eax = edx;
/* 85a5aa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a5ac: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85a5af: jg 0x85a732 */
  if ((!zf && sf == of)) goto L_85a732;
L_85a5b5: /* 85a5b5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85a5b8: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85a5beu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85a5be: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85a5c1: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85a5c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a5c5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a5c8: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85a5ceu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85a5ce: mov ebx, eax */
  ebx = eax;
/* 85a5d0: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85a5d2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a5d5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a5d7: je 0x85a6ca */
  if (zf) goto L_85a6ca;
L_85a5dd: /* 85a5dd: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85a5e3: jae 0x85a6ca */
  if (!cf) goto L_85a6ca;
L_85a5e9: /* 85a5e9: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a5ec: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85a5ef: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 85a5f3: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a5f6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85a5f9: call dword ptr [0xcfab2c] */
  esp -= 4; W32(esp, 0x85a5ffu); SPILL(); f_4e2eff(); if (g_unwind) return; /* Core!?appAtan2@@YANNN@Z */ RELOAD();
/* 85a5ff: fstp qword ptr [ebp - 0x7c] */
  WF64((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 85a602: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a605: fld qword ptr [ebp - 0x7c] */
  { double v = F64((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 85a608: push 0x403921fb */
  { uint32_t v = 0x403921fbu; esp -= 4; W32(esp, v); }
/* 85a60d: fmul qword ptr [0xa178b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178b8u)));
/* 85a613: push 0x54442d18 */
  { uint32_t v = 0x54442d18u; esp -= 4; W32(esp, v); }
/* 85a618: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85a61b: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 85a61e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85a621: call dword ptr [0xcfab28] */
  esp -= 4; W32(esp, 0x85a627u); SPILL(); f_4e1587(); if (g_unwind) return; /* Core!?appFmod@@YANNN@Z */ RELOAD();
/* 85a627: fst qword ptr [ebp - 0x7c] */
  WF64((uint32_t)(ebp + 0xffffff84u), ST0);
/* 85a62a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a62d: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85a630: fcomp qword ptr [0xa178a8] */
  fpu_com(ST0, F64((uint32_t)(0xa178a8u)));
  FPOP();
/* 85a636: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a638: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85a63b: jnp 0x85a6c2 */
  if (!pf) goto L_85a6c2;
L_85a641: /* 85a641: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85a644: fcomp qword ptr [0xa17898] */
  fpu_com(ST0, F64((uint32_t)(0xa17898u)));
  FPOP();
/* 85a64a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a64c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a64f: je 0x85a6c2 */
  if (zf) goto L_85a6c2;
L_85a651: /* 85a651: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 85a654: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a655: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85a65b: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x85a661u); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 85a661: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85a664: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 85a66a: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 85a670: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a673: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85a676: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a679: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85a67c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a67e: fmul qword ptr [0xa17888] */
  ST0 = ST0 * (F64((uint32_t)(0xa17888u)));
/* 85a684: fcom qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
/* 85a68a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a68c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85a68f: jp 0x85a695 */
  if (pf) goto L_85a695;
L_85a691: /* 85a691: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85a693: jmp 0x85a697 */
  goto L_85a697;
L_85a695: /* 85a695: fstp st(0) */
  STI(0) = ST0; FPOP();
L_85a697: /* 85a697: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85a69a: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85a69d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a69e: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85a6a1: fmul dword ptr [ebx*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(ebx*4 + 0xcceb98u)));
/* 85a6a8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85a6aa: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85a6ad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a6b0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85a6b2: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85a6b8u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85a6b8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a6bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a6be: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85a6c0: jmp 0x85a6d0 */
  goto L_85a6d0;
L_85a6c2: /* 85a6c2: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a6c5: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
/* 85a6c8: jmp 0x85a6d0 */
  goto L_85a6d0;
L_85a6ca: /* 85a6ca: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a6cd: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_85a6d0: /* 85a6d0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a6d3: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85a6d6: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85a6d9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a6dc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85a6dd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85a6de: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85a6e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a6e2: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a6e5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85a6e8: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85a6eb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85a6ee: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85a6f1: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85a6f4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85a6f7: jmp 0x85a5a5 */
  goto L_85a5a5;
L_85a716: /* 85a716: push 0xa17864 */
  { uint32_t v = 0xa17864u; esp -= 4; W32(esp, v); }
/* 85a71b: push 0xae4c20 */
  { uint32_t v = 0xae4c20u; esp -= 4; W32(esp, v); }
/* 85a720: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85a726u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85a726: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a729: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85a72b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85a72d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85a732u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85a732: /* 85a732: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85a735: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85a738: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85a73a: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85a73d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85a73f: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85a742: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85a745: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a747: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85a74a: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85a74d: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85a750: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a753: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85a756: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85a759: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85a75c: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85a75f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a761: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85a767: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85a76a: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85a76d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85a770: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85a776: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85a779: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85a77c: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85a77f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85a782: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85a788: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85a78b: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85a78e: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85a791: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85a794: sub eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85a797: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85a799: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85a79a: jmp 0x85a596 */
  goto L_85a596;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85a8eb(void) {
  LOAD_REGS();
L_85a8eb: /* 85a8eb: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85a8ee: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85a8f3: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 85a8f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a8fa: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 85a900: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85a905u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85a905(); return;
}

void f_85a905(void) {
  LOAD_REGS();
  goto L_85a905;
L_85a7ab: /* 85a7ab: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a7ae: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85a7b1: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85a7b7: /* 85a7b7: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 85a7ba: mov dword ptr [ebp + 0x1c], ecx */
  W32((uint32_t)(ebp + 0x1cu), ecx);
/* 85a7bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_85a7c0: /* 85a7c0: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 85a7c3: cmp edx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a7c6: jg 0x85a921 */
  if ((!zf && sf == of)) goto L_85a921;
L_85a7cc: /* 85a7cc: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85a7cf: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85a7d5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85a7d5: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 85a7d8: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85a7db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a7dc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a7df: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85a7e5u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85a7e5: mov ebx, eax */
  ebx = eax;
/* 85a7e7: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85a7e9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a7ec: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a7ee: je 0x85a8b6 */
  if (zf) goto L_85a8b6;
L_85a7f4: /* 85a7f4: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85a7fa: jae 0x85a8b6 */
  if (!cf) goto L_85a8b6;
L_85a800: /* 85a800: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a803: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85a806: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 85a80a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a80d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85a810: call dword ptr [0xcfab2c] */
  esp -= 4; W32(esp, 0x85a816u); SPILL(); f_4e2eff(); if (g_unwind) return; /* Core!?appAtan2@@YANNN@Z */ RELOAD();
/* 85a816: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85a819: fst qword ptr [ebp - 0x7c] */
  WF64((uint32_t)(ebp + 0xffffff84u), ST0);
/* 85a81c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85a81e: fmul qword ptr [0xa17858] */
  ST0 = ST0 * (F64((uint32_t)(0xa17858u)));
/* 85a824: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85a82a: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85a830: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a833: fmul qword ptr [0xa17848] */
  ST0 = ST0 * (F64((uint32_t)(0xa17848u)));
/* 85a839: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a83a: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85a840: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a842: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a845: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x85a84bu); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 85a84b: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 85a84e: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 85a854: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 85a85a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a85d: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85a860: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a863: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85a866: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a868: fmul qword ptr [0xa09718] */
  ST0 = ST0 * (F64((uint32_t)(0xa09718u)));
/* 85a86e: fcom qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
/* 85a874: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85a876: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85a879: jp 0x85a889 */
  if (pf) goto L_85a889;
L_85a87b: /* 85a87b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85a87d: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 85a87f: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 85a885: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85a887: jmp 0x85a88b */
  goto L_85a88b;
L_85a889: /* 85a889: fstp st(0) */
  STI(0) = ST0; FPOP();
L_85a88b: /* 85a88b: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 85a88e: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85a891: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a892: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85a895: fmul dword ptr [ebx*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(ebx*4 + 0xcceb98u)));
/* 85a89c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85a89e: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85a8a1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a8a4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85a8a6: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85a8acu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85a8ac: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a8af: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a8b2: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85a8b4: jmp 0x85a8bc */
  goto L_85a8bc;
L_85a8b6: /* 85a8b6: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a8b9: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
L_85a8bc: /* 85a8bc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85a8bf: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 85a8c2: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85a8c5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85a8c8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85a8c9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85a8ca: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85a8cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85a8ce: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a8d1: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85a8d4: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85a8d7: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85a8da: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85a8dd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85a8e0: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85a8e3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85a8e6: jmp 0x85a7c0 */
  goto L_85a7c0;
L_85a905: /* 85a905: push 0xa1782c */
  { uint32_t v = 0xa1782cu; esp -= 4; W32(esp, v); }
/* 85a90a: push 0xae4c28 */
  { uint32_t v = 0xae4c28u; esp -= 4; W32(esp, v); }
/* 85a90f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85a915u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85a915: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a918: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85a91a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85a91c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85a921u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85a921: /* 85a921: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85a924: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85a927: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85a929: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85a92c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85a92e: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85a931: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85a934: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a936: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85a939: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85a93c: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85a93f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85a942: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85a945: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85a948: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85a94b: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85a94e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85a950: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85a956: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85a959: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85a95c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 85a95f: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85a965: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85a968: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85a96a: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85a96d: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85a970: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85a973: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85a976: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85a97c: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85a97e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85a981: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85a982: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85a985: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85a988: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85a98b: jmp 0x85a7ab */
  goto L_85a7ab;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85aad9(void) {
  LOAD_REGS();
L_85aad9: /* 85aad9: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85aadc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85aae1: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 85aae7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85aae8: mov dword ptr [ebp - 0xac], eax */
  W32((uint32_t)(ebp + 0xffffff54u), eax);
/* 85aaee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85aaf3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85aaf3(); return;
}

void f_85aaf3(void) {
  LOAD_REGS();
  goto L_85aaf3;
L_85a99c: /* 85a99c: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a99f: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85a9a2: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85a9a8: /* 85a9a8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 85a9ab: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 85a9ae: mov edi, edi */
  edi = edi;
L_85a9b0: /* 85a9b0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85a9b3: cmp ecx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85a9b6: jg 0x85ab0f */
  if ((!zf && sf == of)) goto L_85ab0f;
L_85a9bc: /* 85a9bc: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85a9bf: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85a9c5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85a9c5: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 85a9c8: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85a9cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85a9cc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85a9cf: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85a9d5u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85a9d5: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85a9d7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85a9da: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85a9dc: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 85a9df: je 0x85aaa4 */
  if (zf) goto L_85aaa4;
L_85a9e5: /* 85a9e5: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85a9ea: jae 0x85aaa4 */
  if (!cf) goto L_85aaa4;
L_85a9f0: /* 85a9f0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85a9f3: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85a9f9u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85a9f9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85a9fc: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85a9ff: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85aa02: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 85aa05: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85aa08: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85aa0b: and eax, 0x1ffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85aa10: and ebx, 0x7f000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7f000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 85aa16: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 85aa18: mov eax, dword ptr [eax + 0xcccb98] */
  eax = R32((uint32_t)(eax + 0xcccb98u));
/* 85aa1e: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85aa20: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85aa23: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85aa26: call 0x99c958 */
  esp -= 4; W32(esp, 0x85aa2bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85aa2b: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85aa2e: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85aa31: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85aa34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85aa36: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85aa3c: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85aa42: fmul qword ptr [0xa138d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa138d8u)));
/* 85aa48: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 85aa4a: fmul qword ptr [0xa17820] */
  ST0 = ST0 * (F64((uint32_t)(0xa17820u)));
/* 85aa50: call 0x99c958 */
  esp -= 4; W32(esp, 0x85aa55u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85aa55: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85aa5b: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85aa5e: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85aa61: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85aa66: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 85aa69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85aa6a: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 85aa71: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 85aa74: fmul qword ptr [0xa17810] */
  ST0 = ST0 * (F64((uint32_t)(0xa17810u)));
/* 85aa7a: fadd qword ptr [0xa092e8] */
  ST0 = ST0 + (F64((uint32_t)(0xa092e8u)));
/* 85aa80: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85aa83: fmul dword ptr [eax*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0xcceb98u)));
/* 85aa8a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85aa8c: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85aa8f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85aa92: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85aa94: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85aa9au); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85aa9a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85aa9d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85aaa0: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85aaa2: jmp 0x85aaaa */
  goto L_85aaaa;
L_85aaa4: /* 85aaa4: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85aaa7: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
L_85aaaa: /* 85aaaa: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85aaad: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85aab0: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85aab3: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85aab6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85aab7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85aab8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85aabb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85aabc: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85aabf: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85aac2: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85aac5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85aac8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85aacb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85aace: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85aad1: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85aad4: jmp 0x85a9b0 */
  goto L_85a9b0;
L_85aaf3: /* 85aaf3: push 0xa177f4 */
  { uint32_t v = 0xa177f4u; esp -= 4; W32(esp, v); }
/* 85aaf8: push 0xae4c30 */
  { uint32_t v = 0xae4c30u; esp -= 4; W32(esp, v); }
/* 85aafd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85ab03u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85ab03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85ab06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85ab08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85ab0a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85ab0fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85ab0f: /* 85ab0f: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85ab12: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85ab15: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85ab17: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85ab1a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85ab1c: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85ab1f: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85ab22: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85ab24: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85ab27: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85ab2a: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85ab2d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85ab30: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85ab33: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85ab36: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85ab39: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85ab3c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85ab3e: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85ab44: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85ab47: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85ab4a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 85ab4d: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85ab53: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85ab56: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85ab58: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85ab5b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85ab5e: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85ab61: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85ab64: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85ab6a: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85ab6c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85ab6f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85ab70: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85ab73: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85ab76: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85ab79: jmp 0x85a99c */
  goto L_85a99c;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85accc(void) {
  LOAD_REGS();
L_85accc: /* 85accc: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85accf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85acd4: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 85acda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85acdb: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 85ace1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85ace6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85ace6(); return;
}

void f_85ace6(void) {
  LOAD_REGS();
  goto L_85ace6;
L_85ab8a: /* 85ab8a: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ab8d: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85ab90: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85ab96: /* 85ab96: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 85ab99: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 85ab9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85aba0: /* 85aba0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85aba3: cmp ecx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85aba6: jg 0x85ad02 */
  if ((!zf && sf == of)) goto L_85ad02;
L_85abac: /* 85abac: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85abaf: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85abb5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85abb5: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 85abb8: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85abbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85abbc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85abbf: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85abc5u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85abc5: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85abc7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85abca: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85abcc: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 85abcf: je 0x85ac97 */
  if (zf) goto L_85ac97;
L_85abd5: /* 85abd5: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85abda: jae 0x85ac97 */
  if (!cf) goto L_85ac97;
L_85abe0: /* 85abe0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85abe3: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85abe9u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85abe9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85abec: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85abef: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85abf2: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 85abf5: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85abf8: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85abfb: and eax, 0x1ffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85ac00: and ebx, 0x7f000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7f000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 85ac06: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 85ac08: mov eax, dword ptr [eax + 0xcccb98] */
  eax = R32((uint32_t)(eax + 0xcccb98u));
/* 85ac0e: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85ac10: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85ac13: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85ac16: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ac1bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ac1b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85ac1e: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85ac21: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85ac24: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85ac27: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85ac29: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85ac2f: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85ac35: fmul qword ptr [0xa138d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa138d8u)));
/* 85ac3b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 85ac3d: fmul qword ptr [0xa177e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa177e8u)));
/* 85ac43: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ac48u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ac48: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85ac4e: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85ac51: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85ac54: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85ac59: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 85ac5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85ac5d: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 85ac64: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 85ac67: fmul qword ptr [0xa17810] */
  ST0 = ST0 * (F64((uint32_t)(0xa17810u)));
/* 85ac6d: fadd qword ptr [0xa092e8] */
  ST0 = ST0 + (F64((uint32_t)(0xa092e8u)));
/* 85ac73: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85ac76: fmul dword ptr [eax*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0xcceb98u)));
/* 85ac7d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85ac7f: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85ac82: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85ac85: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85ac87: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85ac8du); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85ac8d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85ac90: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85ac93: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85ac95: jmp 0x85ac9d */
  goto L_85ac9d;
L_85ac97: /* 85ac97: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85ac9a: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
L_85ac9d: /* 85ac9d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85aca0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85aca3: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85aca6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85aca9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85acaa: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85acab: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85acae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85acaf: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85acb2: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85acb5: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85acb8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85acbb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85acbe: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85acc1: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85acc4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85acc7: jmp 0x85aba0 */
  goto L_85aba0;
L_85ace6: /* 85ace6: push 0xa177cc */
  { uint32_t v = 0xa177ccu; esp -= 4; W32(esp, v); }
/* 85aceb: push 0xae4c38 */
  { uint32_t v = 0xae4c38u; esp -= 4; W32(esp, v); }
/* 85acf0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85acf6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85acf6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85acf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85acfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85acfd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85ad02u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85ad02: /* 85ad02: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85ad05: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85ad08: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85ad0a: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85ad0d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85ad0f: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85ad12: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85ad15: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85ad17: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85ad1a: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85ad1d: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85ad20: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85ad23: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85ad26: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85ad29: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85ad2c: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85ad2f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85ad31: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85ad37: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85ad3a: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85ad3d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 85ad40: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85ad46: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85ad49: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85ad4b: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85ad4e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85ad51: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85ad54: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85ad57: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85ad5d: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85ad5f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85ad62: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85ad63: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85ad66: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85ad69: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85ad6c: jmp 0x85ab8a */
  goto L_85ab8a;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85af49(void) {
  LOAD_REGS();
L_85af49: /* 85af49: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 85af4c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85af51: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 85af57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85af58: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 85af5e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85af63u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85af63(); return;
}

void f_85af63(void) {
  LOAD_REGS();
  goto L_85af63;
L_85ad7d: /* 85ad7d: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ad80: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85ad83: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85ad89: /* 85ad89: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 85ad8c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 85ad8f: nop  */
L_85ad90: /* 85ad90: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85ad93: cmp ecx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ad96: jg 0x85af7f */
  if ((!zf && sf == of)) goto L_85af7f;
L_85ad9c: /* 85ad9c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85ad9f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85ada5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85ada5: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 85ada8: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85adab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85adac: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85adaf: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85adb5u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85adb5: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85adb7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85adba: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85adbc: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 85adbf: je 0x85af14 */
  if (zf) goto L_85af14;
L_85adc5: /* 85adc5: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85adca: jae 0x85af14 */
  if (!cf) goto L_85af14;
L_85add0: /* 85add0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85add3: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85add9u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85add9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85addc: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85addf: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85ade2: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 85ade5: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85ade8: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85adeb: and eax, 0x1ffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85adf0: and ebx, 0x7f000000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7f000000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 85adf6: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 85adf8: mov eax, dword ptr [eax + 0xcccb98] */
  eax = R32((uint32_t)(eax + 0xcccb98u));
/* 85adfe: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85ae00: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85ae03: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85ae06: fmul qword ptr [0xa177c0] */
  ST0 = ST0 * (F64((uint32_t)(0xa177c0u)));
/* 85ae0c: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ae11u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ae11: mov ebx, eax */
  ebx = eax;
/* 85ae13: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85ae16: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85ae18: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85ae1e: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85ae24: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 85ae27: fmul qword ptr [0xa177b0] */
  ST0 = ST0 * (F64((uint32_t)(0xa177b0u)));
/* 85ae2d: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85ae30: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85ae33: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 85ae36: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 85ae38: fmul qword ptr [0xa177a0] */
  ST0 = ST0 * (F64((uint32_t)(0xa177a0u)));
/* 85ae3e: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ae43u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ae43: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85ae49: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85ae4c: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85ae51: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 85ae58: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 85ae5b: fild dword ptr [ebp - 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 85ae5e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 85ae60: fmul qword ptr [0xa17790] */
  ST0 = ST0 * (F64((uint32_t)(0xa17790u)));
/* 85ae66: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ae6bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ae6b: mov edx, 0x4000 */
  edx = 0x4000u;
/* 85ae70: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85ae72: mov eax, dword ptr [0xcfa1c4] */
  eax = R32((uint32_t)(0xcfa1c4u));
/* 85ae77: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 85ae7a: and edx, 0x3fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 85ae80: fld dword ptr [eax + edx*4 + 0x8c] */
  { double v = F32((uint32_t)(eax + edx*4 + 0x8cu)); FPUSH(v); }
/* 85ae87: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 85ae89: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 85ae8c: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 85ae8f: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85ae92: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 85ae94: fmul qword ptr [0xa177a0] */
  ST0 = ST0 * (F64((uint32_t)(0xa177a0u)));
/* 85ae9a: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ae9fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ae9f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85aea1: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85aea7: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85aeaa: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85aead: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85aeb2: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 85aeb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85aeb6: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 85aebd: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85aec0: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 85aec3: fmul qword ptr [0xa15940] */
  ST0 = ST0 * (F64((uint32_t)(0xa15940u)));
/* 85aec9: fadd qword ptr [0xa0d178] */
  ST0 = ST0 + (F64((uint32_t)(0xa0d178u)));
/* 85aecf: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 85aed2: fmul qword ptr [0xa15940] */
  ST0 = ST0 * (F64((uint32_t)(0xa15940u)));
/* 85aed8: fadd qword ptr [0xa0d178] */
  ST0 = ST0 + (F64((uint32_t)(0xa0d178u)));
/* 85aede: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85aee0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85aee2: fmul qword ptr [0xa15940] */
  ST0 = ST0 * (F64((uint32_t)(0xa15940u)));
/* 85aee8: fadd qword ptr [0xa0d178] */
  ST0 = ST0 + (F64((uint32_t)(0xa0d178u)));
/* 85aeee: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85aef0: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 85aef3: fmul dword ptr [eax*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(eax*4 + 0xcceb98u)));
/* 85aefa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85aefc: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85aeff: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85af02: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85af04: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85af0au); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85af0a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85af0d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85af10: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85af12: jmp 0x85af1a */
  goto L_85af1a;
L_85af14: /* 85af14: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85af17: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
L_85af1a: /* 85af1a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85af1d: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85af20: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85af23: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85af26: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85af27: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85af28: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85af2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85af2c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85af2f: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85af32: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85af35: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85af38: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85af3b: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85af3e: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85af41: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85af44: jmp 0x85ad90 */
  goto L_85ad90;
L_85af63: /* 85af63: push 0xa17774 */
  { uint32_t v = 0xa17774u; esp -= 4; W32(esp, v); }
/* 85af68: push 0xae4c40 */
  { uint32_t v = 0xae4c40u; esp -= 4; W32(esp, v); }
/* 85af6d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85af73u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85af73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85af76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85af78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85af7a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85af7fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85af7f: /* 85af7f: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85af82: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85af85: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85af87: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85af8a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85af8c: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85af8f: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85af92: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85af94: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85af97: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85af9a: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85af9d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85afa0: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85afa3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85afa6: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85afa9: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85afac: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85afae: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85afb4: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85afb7: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85afba: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 85afbd: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85afc3: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85afc6: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85afc8: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85afcb: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85afce: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85afd1: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85afd4: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85afda: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85afdc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85afdf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85afe0: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85afe3: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85afe6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85afe9: jmp 0x85ad7d */
  goto L_85ad7d;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85b1cb(void) {
  LOAD_REGS();
L_85b1cb: /* 85b1cb: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 85b1ce: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85b1d3: lea edx, [ebp - 0xa8] */
  edx = (uint32_t)(ebp + 0xffffff58u);
/* 85b1d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85b1da: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 85b1e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85b1e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85b1e5(); return;
}

void f_85b1e5(void) {
  LOAD_REGS();
  goto L_85b1e5;
L_85affa: /* 85affa: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85affd: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 85b000: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85b006: /* 85b006: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 85b009: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 85b00c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85b010: /* 85b010: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 85b013: cmp ecx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b016: jg 0x85b201 */
  if ((!zf && sf == of)) goto L_85b201;
L_85b01c: /* 85b01c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b01f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b025u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b025: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b028: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85b02b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b02c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b02f: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85b035u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85b035: mov ebx, eax */
  ebx = eax;
/* 85b037: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85b039: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b03c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85b03e: je 0x85b196 */
  if (zf) goto L_85b196;
L_85b044: /* 85b044: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85b04a: jae 0x85b196 */
  if (!cf) goto L_85b196;
L_85b050: /* 85b050: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b053: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85b056: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 85b05a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b05d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85b060: call dword ptr [0xcfab2c] */
  esp -= 4; W32(esp, 0x85b066u); SPILL(); f_4e2eff(); if (g_unwind) return; /* Core!?appAtan2@@YANNN@Z */ RELOAD();
/* 85b066: fst qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0);
/* 85b069: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b06c: fmul qword ptr [0xa17768] */
  ST0 = ST0 * (F64((uint32_t)(0xa17768u)));
/* 85b072: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85b075: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85b078: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b07b: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85b07e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b081: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85b084: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b086: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85b089: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x85b08fu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 85b08f: fstp qword ptr [ebp - 0x48] */
  WF64((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 85b092: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b095: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b098: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85b09b: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 85b09e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85b0a1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85b0a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85b0a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85b0a6: call dword ptr [0xcfab2c] */
  esp -= 4; W32(esp, 0x85b0acu); SPILL(); f_4e2eff(); if (g_unwind) return; /* Core!?appAtan2@@YANNN@Z */ RELOAD();
/* 85b0ac: fst qword ptr [ebp - 0x48] */
  WF64((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 85b0af: fmul qword ptr [0xa17768] */
  ST0 = ST0 * (F64((uint32_t)(0xa17768u)));
/* 85b0b5: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 85b0b8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85b0ba: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 85b0c0: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85b0c3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b0c6: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 85b0cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b0cd: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 85b0d3: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85b0d9: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 85b0dc: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b0df: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x85b0e5u); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 85b0e5: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 85b0e8: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b0eb: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 85b0f1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85b0f3: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 85b0f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b0fa: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 85b100: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85b106: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 85b109: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 85b10f: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 85b115: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 85b118: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b11b: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x85b121u); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 85b121: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b124: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 85b12a: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 85b130: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 85b133: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 85b135: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b137: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 85b13a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 85b13c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b13f: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85b142: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b145: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85b148: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b14a: fmul qword ptr [0xa17758] */
  ST0 = ST0 * (F64((uint32_t)(0xa17758u)));
/* 85b150: fcom qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
/* 85b156: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85b158: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85b15b: jp 0x85b161 */
  if (pf) goto L_85b161;
L_85b15d: /* 85b15d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85b15f: jmp 0x85b163 */
  goto L_85b163;
L_85b161: /* 85b161: fstp st(0) */
  STI(0) = ST0; FPOP();
L_85b163: /* 85b163: fld dword ptr [ebx*4 + 0xcceb98] */
  { double v = F32((uint32_t)(ebx*4 + 0xcceb98u)); FPUSH(v); }
/* 85b16a: movzx ecx, byte ptr [edi] */
  ecx = (uint32_t)(R8((uint32_t)(edi)));
/* 85b16d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b16f: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85b172: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 85b178: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b179: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85b17b: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85b17e: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85b180: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85b183: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b186: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85b18cu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85b18c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b18f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b192: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 85b194: jmp 0x85b19c */
  goto L_85b19c;
L_85b196: /* 85b196: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b199: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_85b19c: /* 85b19c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b19f: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 85b1a2: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85b1a5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b1a8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85b1a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85b1aa: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85b1ad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85b1ae: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b1b1: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85b1b4: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85b1b7: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85b1ba: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85b1bd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b1c0: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85b1c3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85b1c6: jmp 0x85b010 */
  goto L_85b010;
L_85b1e5: /* 85b1e5: push 0xa17740 */
  { uint32_t v = 0xa17740u; esp -= 4; W32(esp, v); }
/* 85b1ea: push 0xae4c48 */
  { uint32_t v = 0xae4c48u; esp -= 4; W32(esp, v); }
/* 85b1ef: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85b1f5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85b1f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b1f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85b1fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85b1fc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85b201u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85b201: /* 85b201: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85b204: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85b207: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b209: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85b20c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85b20e: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85b211: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85b214: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b216: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85b219: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85b21c: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85b21f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b222: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85b225: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b228: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85b22b: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85b22e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b230: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85b236: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85b239: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85b23c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85b23f: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85b245: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85b248: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85b24b: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85b24e: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85b251: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85b257: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85b25a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85b25d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85b260: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85b263: sub eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85b266: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85b268: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b269: jmp 0x85affa */
  goto L_85affa;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85b2fd(void) {
  LOAD_REGS();
L_85b2fd: /* 85b2fd: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 85b300: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85b305: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 85b30b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85b30c: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 85b312: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85b317u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85b317(); return;
}

void f_85b317(void) {
  LOAD_REGS();
  goto L_85b317;
L_85b27a: /* 85b27a: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b27d: mov dword ptr [ebp + 0x1c], ebx */
  W32((uint32_t)(ebp + 0x1cu), ebx);
/* 85b280: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85b286: /* 85b286: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 85b289: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85b290: /* 85b290: cmp ebx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b293: jg 0x85b333 */
  if ((!zf && sf == of)) goto L_85b333;
L_85b299: /* 85b299: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b29c: movzx ecx, byte ptr [edi] */
  ecx = (uint32_t)(R8((uint32_t)(edi)));
/* 85b29f: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85b2a2: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85b2a5: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b2a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b2a9: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85b2ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b2ae: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 85b2b1: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 85b2b4: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 85b2ba: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85b2bd: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85b2bf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b2c2: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85b2c8u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85b2c8: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b2cb: xor ecx, ecx */
  ecx = 0;
/* 85b2cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b2d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85b2d2: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 85b2d5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 85b2d6: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 85b2d8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b2db: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 85b2dd: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85b2e0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b2e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85b2e2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85b2e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85b2e6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b2e9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85b2ec: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85b2ef: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85b2f2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b2f5: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85b2f8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85b2fb: jmp 0x85b290 */
  goto L_85b290;
L_85b317: /* 85b317: push 0xa17724 */
  { uint32_t v = 0xa17724u; esp -= 4; W32(esp, v); }
/* 85b31c: push 0xae4c50 */
  { uint32_t v = 0xae4c50u; esp -= 4; W32(esp, v); }
/* 85b321: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85b327u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85b327: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b32a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85b32c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85b32e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85b333u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85b333: /* 85b333: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85b336: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85b339: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b33b: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85b33e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85b340: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85b343: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85b346: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b348: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85b34b: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85b34e: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85b351: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b354: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85b357: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b35a: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85b35d: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85b360: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b362: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85b368: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85b36b: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85b36e: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 85b371: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85b377: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85b37a: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 85b37c: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 85b37f: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85b382: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85b385: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85b388: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85b38e: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85b390: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 85b393: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b394: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85b397: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85b39a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 85b39d: jmp 0x85b27a */
  goto L_85b27a;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85b4cc(void) {
  LOAD_REGS();
L_85b4cc: /* 85b4cc: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 85b4cf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85b4d4: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 85b4da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85b4db: mov dword ptr [ebp - 0xb8], ecx */
  W32((uint32_t)(ebp + 0xffffff48u), ecx);
/* 85b4e1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85b4e6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85b4e6(); return;
}

void f_85b4e6(void) {
  LOAD_REGS();
  goto L_85b4e6;
L_85b3ae: /* 85b3ae: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b3b1: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85b3b4: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85b3ba: /* 85b3ba: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
L_85b3bd: /* 85b3bd: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 85b3c0: mov eax, edx */
  eax = edx;
/* 85b3c2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b3c4: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85b3c7: jg 0x85b502 */
  if ((!zf && sf == of)) goto L_85b502;
L_85b3cd: /* 85b3cd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b3d0: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b3d6u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b3d6: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b3d9: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85b3dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b3dd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b3e0: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85b3e6u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85b3e6: mov ebx, eax */
  ebx = eax;
/* 85b3e8: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85b3ea: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b3ed: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85b3ef: je 0x85b49a */
  if (zf) goto L_85b49a;
L_85b3f5: /* 85b3f5: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85b3fb: jae 0x85b49a */
  if (!cf) goto L_85b49a;
L_85b401: /* 85b401: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b404: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85b407: fstp qword ptr [esp + 4] */
  WF64((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 85b40b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b40e: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85b411: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b414: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85b417: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b419: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b41c: call 0x6c6c58 */
  esp -= 4; W32(esp, 0x85b421u); SPILL(); f_6c6c58(); if (g_unwind) return; RELOAD();
/* 85b421: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b422: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85b425: call dword ptr [0xcfab2c] */
  esp -= 4; W32(esp, 0x85b42bu); SPILL(); f_4e2eff(); if (g_unwind) return; /* Core!?appAtan2@@YANNN@Z */ RELOAD();
/* 85b42b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 85b42e: fst qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0);
/* 85b431: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85b433: fmul qword ptr [0xa17768] */
  ST0 = ST0 * (F64((uint32_t)(0xa17768u)));
/* 85b439: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 85b43f: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 85b445: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b448: fmul qword ptr [0xa110e0] */
  ST0 = ST0 * (F64((uint32_t)(0xa110e0u)));
/* 85b44e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b44f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85b455: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85b457: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b45a: call dword ptr [0xcfaaec] */
  esp -= 4; W32(esp, 0x85b460u); SPILL(); f_4e31ed(); if (g_unwind) return; /* Core!?CosFloat@FGlobalMath@@QAEMM@Z */ RELOAD();
/* 85b460: movzx ecx, byte ptr [edi] */
  ecx = (uint32_t)(R8((uint32_t)(edi)));
/* 85b463: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85b466: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 85b46c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85b46f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b470: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 85b476: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85b479: fmul dword ptr [ebx*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(ebx*4 + 0xcceb98u)));
/* 85b480: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85b482: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85b485: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b488: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85b48a: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85b490u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85b490: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b493: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b496: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 85b498: jmp 0x85b4a0 */
  goto L_85b4a0;
L_85b49a: /* 85b49a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b49d: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_85b4a0: /* 85b4a0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b4a3: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 85b4a6: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85b4a9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b4ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85b4ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85b4ae: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85b4b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85b4b2: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b4b5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85b4b8: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85b4bb: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85b4be: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b4c1: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85b4c4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85b4c7: jmp 0x85b3bd */
  goto L_85b3bd;
L_85b4e6: /* 85b4e6: push 0xa176fc */
  { uint32_t v = 0xa176fcu; esp -= 4; W32(esp, v); }
/* 85b4eb: push 0xae4c58 */
  { uint32_t v = 0xae4c58u; esp -= 4; W32(esp, v); }
/* 85b4f0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85b4f6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85b4f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b4f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85b4fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85b4fd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85b502u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85b502: /* 85b502: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85b505: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85b508: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b50a: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85b50d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85b50f: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85b512: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85b515: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b517: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85b51a: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85b51d: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85b520: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b523: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85b526: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b529: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85b52c: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85b52f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b531: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85b537: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85b53a: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85b53d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85b540: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85b546: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85b549: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85b54c: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85b54f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85b552: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85b558: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85b55b: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85b55e: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85b561: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85b564: sub eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85b567: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85b569: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b56a: jmp 0x85b3ae */
  goto L_85b3ae;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85b8fd(void) {
  LOAD_REGS();
L_85b8fd: /* 85b8fd: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 85b900: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85b905: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 85b90b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85b90c: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 85b912: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85b917u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85b917(); return;
}

void f_85b917(void) {
  LOAD_REGS();
  goto L_85b917;
L_85b801: /* 85b801: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b804: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85b807: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85b80d: /* 85b80d: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
L_85b810: /* 85b810: cmp ebx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85b813: jg 0x85b933 */
  if ((!zf && sf == of)) goto L_85b933;
L_85b819: /* 85b819: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b81c: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b822u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b822: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85b825: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85b828: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b829: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b82c: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85b832u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85b832: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85b834: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b837: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85b839: je 0x85b8ce */
  if (zf) goto L_85b8ce;
L_85b83f: /* 85b83f: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85b844: jae 0x85b8ce */
  if (!cf) goto L_85b8ce;
L_85b84a: /* 85b84a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85b84d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85b853u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85b853: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 85b856: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 85b859: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85b85a: call 0x6c6c58 */
  esp -= 4; W32(esp, 0x85b85fu); SPILL(); f_6c6c58(); if (g_unwind) return; RELOAD();
/* 85b85f: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 85b862: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b865: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85b868: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 85b86e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85b870: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85b873: je 0x85b8c6 */
  if (zf) goto L_85b8c6;
L_85b875: /* 85b875: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85b878: fcomp qword ptr [0xa0d188] */
  fpu_com(ST0, F64((uint32_t)(0xa0d188u)));
  FPOP();
/* 85b87e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85b880: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85b883: jnp 0x85b8c6 */
  if (!pf) goto L_85b8c6;
L_85b885: /* 85b885: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85b888: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85b88b: fsub qword ptr [0xa0d178] */
  ST0 = ST0 - (F64((uint32_t)(0xa0d178u)));
/* 85b891: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85b894: call 0x6c146a */
  esp -= 4; W32(esp, 0x85b899u); SPILL(); f_6c146a(); if (g_unwind) return; RELOAD();
/* 85b899: fmul qword ptr [0xa176f0] */
  ST0 = ST0 * (F64((uint32_t)(0xa176f0u)));
/* 85b89f: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85b8a2: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85b8a5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b8a8: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 85b8ae: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85b8b1: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85b8b3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85b8b6: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85b8bcu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85b8bc: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b8bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b8c2: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85b8c4: jmp 0x85b8d4 */
  goto L_85b8d4;
L_85b8c6: /* 85b8c6: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b8c9: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
/* 85b8cc: jmp 0x85b8d4 */
  goto L_85b8d4;
L_85b8ce: /* 85b8ce: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b8d1: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_85b8d4: /* 85b8d4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85b8d7: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85b8da: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85b8dd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b8de: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85b8df: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85b8e0: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85b8e3: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85b8e6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b8e9: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85b8ec: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85b8ef: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b8f2: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85b8f5: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85b8f8: jmp 0x85b810 */
  goto L_85b810;
L_85b917: /* 85b917: push 0xa176d4 */
  { uint32_t v = 0xa176d4u; esp -= 4; W32(esp, v); }
/* 85b91c: push 0xae4c68 */
  { uint32_t v = 0xae4c68u; esp -= 4; W32(esp, v); }
/* 85b921: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85b927u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85b927: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85b92a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85b92c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85b92e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85b933u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85b933: /* 85b933: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85b936: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85b939: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85b93b: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85b93e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85b940: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85b943: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85b946: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b948: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85b94b: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85b94e: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85b951: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85b954: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 85b957: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85b95a: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85b95d: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85b960: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85b962: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85b968: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85b96b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85b96e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85b971: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85b977: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85b97a: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85b97d: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85b980: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85b983: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85b989: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85b98c: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85b98f: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85b992: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85b995: sub eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85b998: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85b99a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85b99b: jmp 0x85b801 */
  goto L_85b801;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85bc46(void) {
  LOAD_REGS();
L_85bc46: /* 85bc46: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 85bc49: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85bc4e: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 85bc54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85bc55: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 85bc5b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85bc60u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85bc60(); return;
}

void f_85bc60(void) {
  LOAD_REGS();
L_85bc60: /* 85bc60: push 0xa176c0 */
  { uint32_t v = 0xa176c0u; esp -= 4; W32(esp, v); }
/* 85bc65: push 0xae4c70 */
  { uint32_t v = 0xae4c70u; esp -= 4; W32(esp, v); }
/* 85bc6a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85bc70u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85bc70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85bc73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85bc75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85bc77: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85bc7cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 85bc7c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 85bc7f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85bc81: lea edx, [ebp - 0xcc] */
  edx = (uint32_t)(ebp + 0xffffff34u);
/* 85bc87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85bc88: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 85bc8c: call 0x6c89d6 */
  esp -= 4; W32(esp, 0x85bc91u); SPILL(); f_6c89d6(); if (g_unwind) return; RELOAD();
/* 85bc91: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 85bc94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85bc95: mov ecx, eax */
  ecx = eax;
/* 85bc97: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x85bc9du); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 85bc9d: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 85bca0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 85bca2: movzx ecx, byte ptr [eax + 0x38] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x38u)));
/* 85bca6: mov dword ptr [ebp + 0x1c], ecx */
  W32((uint32_t)(ebp + 0x1cu), ecx);
/* 85bca9: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85bcac: fmul qword ptr [0xa0a4c8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0a4c8u)));
/* 85bcb2: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 85bcb8: fld qword ptr [0xa0da58] */
  { double v = F64((uint32_t)(0xa0da58u)); FPUSH(v); }
/* 85bcbe: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 85bcc0: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 85bcc6: fst dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0);
/* 85bcc9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85bccb: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85bcce: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85bcd0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85bcd2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85bcd5: fstp st(0) */
  STI(0) = ST0; FPOP();
L_85bcd7: /* 85bcd7: cmp ebx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85bcda: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 85bcdd: jg 0x85be6d */
  if ((!zf && sf == of)) goto L_85be6d;
L_85bce3: /* 85bce3: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
L_85bce6: /* 85bce6: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 85bce9: mov eax, edx */
  eax = edx;
/* 85bceb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85bced: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85bcf0: jg 0x85bdf8 */
  if ((!zf && sf == of)) goto L_85bdf8;
L_85bcf6: /* 85bcf6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85bcf9: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85bcffu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85bcff: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85bd02: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 85bd05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85bd06: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85bd09: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x85bd0fu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 85bd0f: mov ebx, eax */
  ebx = eax;
/* 85bd11: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 85bd13: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85bd16: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85bd18: je 0x85bdc6 */
  if (zf) goto L_85bdc6;
L_85bd1e: /* 85bd1e: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85bd24: jae 0x85bdc6 */
  if (!cf) goto L_85bdc6;
L_85bd2a: /* 85bd2a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85bd2d: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85bd30: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85bd33: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85bd36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bd38: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85bd3b: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 85bd3e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bd40: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 85bd43: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85bd46: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 85bd49: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 85bd4c: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 85bd4f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bd51: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85bd54: fmul dword ptr [ebp - 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 85bd57: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85bd59: fst dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0);
/* 85bd5c: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 85bd62: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85bd64: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85bd67: jne 0x85bdbe */
  if (!zf) goto L_85bdbe;
L_85bd69: /* 85bd69: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85bd6c: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 85bd6f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 85bd72: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 85bd75: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 85bd77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85bd79: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85bd7c: jp 0x85bdbe */
  if (pf) goto L_85bdbe;
L_85bd7e: /* 85bd7e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85bd81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85bd82: call 0x6cbff0 */
  esp -= 4; W32(esp, 0x85bd87u); SPILL(); f_6cbff0(); if (g_unwind) return; RELOAD();
/* 85bd87: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 85bd8a: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85bd8d: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 85bd90: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 85bd93: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 85bd96: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85bd98: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85bd9a: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 85bd9d: fmul dword ptr [ebx*4 + 0xcceb98] */
  ST0 = ST0 * (F32((uint32_t)(ebx*4 + 0xcceb98u)));
/* 85bda4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 85bda6: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 85bda9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85bdac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85bdae: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85bdb4u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85bdb4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85bdb7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85bdba: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 85bdbc: jmp 0x85bdcc */
  goto L_85bdcc;
L_85bdbe: /* 85bdbe: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85bdc1: mov byte ptr [edx], 0 */
  W8((uint32_t)(edx), 0x0u);
/* 85bdc4: jmp 0x85bdcc */
  goto L_85bdcc;
L_85bdc6: /* 85bdc6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85bdc9: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_85bdcc: /* 85bdcc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85bdcf: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85bdd2: fadd dword ptr [esi + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x74u)));
/* 85bdd5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85bdd8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85bdd9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85bdda: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85bddd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85bdde: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85bde1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85bde4: fadd dword ptr [esi + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x78u)));
/* 85bde7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 85bdea: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85bded: fadd dword ptr [esi + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x7cu)));
/* 85bdf0: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 85bdf3: jmp 0x85bce6 */
  goto L_85bce6;
L_85bdf8: /* 85bdf8: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 85bdfb: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85bdfe: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85be00: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 85be03: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 85be05: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 85be08: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 85be0b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85be0d: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 85be10: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85be13: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 85be16: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 85be19: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 85be1c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 85be1f: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 85be22: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 85be28: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85be2a: fadd dword ptr [esi + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x80u)));
/* 85be30: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 85be33: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85be36: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 85be39: fadd dword ptr [esi + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x84u)));
/* 85be3f: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85be42: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 85be44: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 85be47: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 85be4a: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 85be50: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85be53: fadd dword ptr [esi + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x88u)));
/* 85be59: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85be5b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 85be5e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85be5f: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 85be62: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85be65: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 85be68: jmp 0x85bcd7 */
  goto L_85bcd7;
L_85be6d: /* 85be6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85be70: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 85be73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85be74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85be75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85be7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85be7d: mov esp, ebp */
  esp = ebp;
/* 85be7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85be80: ret  */
  esp += 4; SPILL(); return;
}

void f_85be81(void) {
  LOAD_REGS();
L_85be81: /* 85be81: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 85be84: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85be89: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 85be8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85be90: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 85be96: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85be9bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85be9b(); return;
}

void f_85be9b(void) {
  LOAD_REGS();
L_85be9b: /* 85be9b: push 0xa17678 */
  { uint32_t v = 0xa17678u; esp -= 4; W32(esp, v); }
/* 85bea0: push 0xae4c60 */
  { uint32_t v = 0xae4c60u; esp -= 4; W32(esp, v); }
/* 85bea5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85beabu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85beab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85beae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85beb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85beb2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85beb7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85beb7(); return;
}

void f_85beb7(void) {
  LOAD_REGS();
L_85beb7: /* 85beb7: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 85beba: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85bebf: lea edx, [ebp - 0xb0] */
  edx = (uint32_t)(ebp + 0xffffff50u);
/* 85bec5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85bec6: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 85becc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85bed1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85bed1(); return;
}

void f_85bed1(void) {
  LOAD_REGS();
L_85bed1: /* 85bed1: push 0xa17648 */
  { uint32_t v = 0xa17648u; esp -= 4; W32(esp, v); }
/* 85bed6: push 0xae4bec */
  { uint32_t v = 0xae4becu; esp -= 4; W32(esp, v); }
/* 85bedb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85bee1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85bee1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85bee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85bee6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85bee8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85beedu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85beed(); return;
}

void f_85beed(void) {
  LOAD_REGS();
L_85beed: /* 85beed: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 85bef0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85bef5: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 85befb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85befc: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 85bf02: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85bf07u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85bf07(); return;
}

void f_85bf07(void) {
  LOAD_REGS();
L_85bf07: /* 85bf07: push 0xa17624 */
  { uint32_t v = 0xa17624u; esp -= 4; W32(esp, v); }
/* 85bf0c: push 0xae4be4 */
  { uint32_t v = 0xae4be4u; esp -= 4; W32(esp, v); }
/* 85bf11: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85bf17u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85bf17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85bf1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85bf1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85bf1e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85bf23u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85bf23(); return;
}

void f_85bf23(void) {
  LOAD_REGS();
L_85bf23: /* 85bf23: mov edx, dword ptr [ebp - 0xc0] */
  edx = R32((uint32_t)(ebp + 0xffffff40u));
/* 85bf29: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85bf2e: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 85bf34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85bf35: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 85bf3b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85bf40u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85bf40(); return;
}

void f_85bf40(void) {
  LOAD_REGS();
L_85bf40: /* 85bf40: push 0xa17608 */
  { uint32_t v = 0xa17608u; esp -= 4; W32(esp, v); }
/* 85bf45: push 0xae4c78 */
  { uint32_t v = 0xae4c78u; esp -= 4; W32(esp, v); }
/* 85bf4a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85bf50u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85bf50: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85bf53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85bf55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85bf57: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85bf5cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85bf5c: guest_badaddr(0x85bf5c); return;
}

void f_85c6b0(void) {
  LOAD_REGS();
L_85c6b0: /* 85c6b0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 85c6b3: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 85c6b7: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 85c6ba: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 85c6bd: imul eax, eax, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xa4u);
  eax = (uint32_t)r;
  }
/* 85c6c3: mov edx, dword ptr [edx + 0x8c] */
  edx = R32((uint32_t)(edx + 0x8cu));
/* 85c6c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85c6ca: mov esi, dword ptr [edx + 0xf0] */
  esi = R32((uint32_t)(edx + 0xf0u));
/* 85c6d0: mov edx, dword ptr [eax + esi + 0x14] */
  edx = R32((uint32_t)(eax + esi + 0x14u));
/* 85c6d4: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85c6d6: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 85c6da: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 85c6dc: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 85c6e0: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 85c6e3: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 85c6e5: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 85c6e8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 85c6eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85c6ec: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_85c700(void) {
  LOAD_REGS();
L_85c700: /* 85c700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85c701: mov ebp, esp */
  ebp = esp;
/* 85c703: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85c705: push 0x9d4140 */
  { uint32_t v = 0x9d4140u; esp -= 4; W32(esp, v); }
/* 85c70a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85c710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85c711: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85c718: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85c71b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85c71c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85c71d: mov esi, ecx */
  esi = ecx;
/* 85c71f: movzx eax, byte ptr [esi + 0x34] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x34u)));
/* 85c723: cmp dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85c726: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85c727: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85c72a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85c731: je 0x85c74b */
  if (zf) goto L_85c74b;
L_85c733: /* 85c733: push 0x467 */
  { uint32_t v = 0x467u; esp -= 4; W32(esp, v); }
/* 85c738: push 0xae4c90 */
  { uint32_t v = 0xae4c90u; esp -= 4; W32(esp, v); }
/* 85c73d: push 0xae4ca4 */
  { uint32_t v = 0xae4ca4u; esp -= 4; W32(esp, v); }
/* 85c742: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x85c748u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 85c748: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85c74b: /* 85c74b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85c74e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 85c751: mov eax, dword ptr [esi + ecx*8 + 0x14] */
  eax = R32((uint32_t)(esi + ecx*8 + 0x14u));
/* 85c755: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85c757: lea esi, [esi + ecx*8] */
  esi = (uint32_t)(esi + ecx*8);
/* 85c75a: jne 0x85c764 */
  if (!zf) goto L_85c764;
L_85c75c: /* 85c75c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 85c75f: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 85c762: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x85c764u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85c764: /* 85c764: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 85c767: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85c76a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85c76b: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 85c76e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85c76f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85c770: call 0x6ca83f */
  esp -= 4; W32(esp, 0x85c775u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 85c775: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 85c778: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 85c77b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85c77e: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x85c781u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85c781: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85c784: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85c785: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85c786: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85c78d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85c78e: mov esp, ebp */
  esp = ebp;
/* 85c790: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85c791: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_85c794(void) {
  LOAD_REGS();
L_85c794: /* 85c794: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85c797: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85c79c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 85c79f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85c7a0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 85c7a3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85c7a8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85c7a8(); return;
}

void f_85c7a8(void) {
  LOAD_REGS();
L_85c7a8: /* 85c7a8: push 0xa17900 */
  { uint32_t v = 0xa17900u; esp -= 4; W32(esp, v); }
/* 85c7ad: push 0xae4cbc */
  { uint32_t v = 0xae4cbcu; esp -= 4; W32(esp, v); }
/* 85c7b2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85c7b8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85c7b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85c7bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85c7bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85c7bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85c7c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85c7c4: guest_badaddr(0x85c7c4); return;
}

void f_85c810(void) {
  LOAD_REGS();
L_85c810: /* 85c810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85c811: mov ebp, esp */
  ebp = esp;
/* 85c813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85c815: push 0x9d4150 */
  { uint32_t v = 0x9d4150u; esp -= 4; W32(esp, v); }
/* 85c81a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85c820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85c821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85c828: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85c82b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 85c830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85c831: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85c832: mov esi, ecx */
  esi = ecx;
/* 85c834: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85c837: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85c838: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85c83b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85c842: jne 0x85c872 */
  if (!zf) goto L_85c872;
L_85c844: /* 85c844: mov ecx, dword ptr [0xcfa278] */
  ecx = R32((uint32_t)(0xcfa278u));
/* 85c84a: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85c84d: jne 0x85c872 */
  if (!zf) goto L_85c872;
L_85c84f: /* 85c84f: mov edx, dword ptr [0xcfab30] */
  edx = R32((uint32_t)(0xcfab30u));
/* 85c855: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85c858: jne 0x85c872 */
  if (!zf) goto L_85c872;
L_85c85a: /* 85c85a: push 0x485 */
  { uint32_t v = 0x485u; esp -= 4; W32(esp, v); }
/* 85c85f: push 0xae4ccc */
  { uint32_t v = 0xae4cccu; esp -= 4; W32(esp, v); }
/* 85c864: push 0xae4ce0 */
  { uint32_t v = 0xae4ce0u; esp -= 4; W32(esp, v); }
/* 85c869: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x85c86fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 85c86f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85c872: /* 85c872: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85c875: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 85c878: lea esi, [esi + eax*8] */
  esi = (uint32_t)(esi + eax*8);
/* 85c87b: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 85c87e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85c880: jne 0x85c88a */
  if (!zf) goto L_85c88a;
L_85c882: /* 85c882: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 85c885: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 85c888: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x85c88au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85c88a: /* 85c88a: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 85c88d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85c890: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85c891: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85c892: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85c899: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85c89a: mov esp, ebp */
  esp = ebp;
/* 85c89c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85c89d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85c8a0(void) {
  LOAD_REGS();
L_85c8a0: /* 85c8a0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85c8a3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85c8a8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 85c8ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85c8ac: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 85c8af: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85c8b4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85c8b4(); return;
}

void f_85c8b4(void) {
  LOAD_REGS();
L_85c8b4: /* 85c8b4: push 0xa17960 */
  { uint32_t v = 0xa17960u; esp -= 4; W32(esp, v); }
/* 85c8b9: push 0xae4d08 */
  { uint32_t v = 0xae4d08u; esp -= 4; W32(esp, v); }
/* 85c8be: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85c8c4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85c8c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85c8c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85c8c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85c8cb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85c8d0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85c8d0: guest_badaddr(0x85c8d0); return;
}

void f_85c920(void) {
  LOAD_REGS();
L_85c920: /* 85c920: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85c923: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85c924: mov esi, ecx */
  esi = ecx;
/* 85c926: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85c928: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85c92a: je 0x85cebb */
  if (zf) goto L_85cebb;
L_85c930: /* 85c930: xor ecx, ecx */
  ecx = 0;
/* 85c932: mov cl, byte ptr [eax + 0x35] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x35u))) & 0xffu);
/* 85c935: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85c936: xor edx, edx */
  edx = 0;
/* 85c938: mov dl, byte ptr [eax + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x34u))) & 0xffu);
/* 85c93b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85c93c: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 85c941: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 85c945: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85c946: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85c947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85c948: call 0x6c3954 */
  esp -= 4; W32(esp, 0x85c94du); SPILL(); f_6c3954(); if (g_unwind) return; RELOAD();
/* 85c94d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85c94f: mov al, byte ptr [ecx + 0x28] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x28u))) & 0xffu);
/* 85c952: mov ebx, 1 */
  ebx = 0x1u;
/* 85c957: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85c95a: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85c95c: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 85c964: jne 0x85c973 */
  if (!zf) goto L_85c973;
L_85c966: /* 85c966: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 85c96e: jmp 0x85cd69 */
  goto L_85cd69;
L_85c973: /* 85c973: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85c975: jne 0x85c9d7 */
  if (!zf) goto L_85c9d7;
L_85c977: /* 85c977: movzx eax, byte ptr [ecx + 0x36] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x36u)));
/* 85c97b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85c97d: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 85c981: jge 0x85c987 */
  if ((sf == of)) goto L_85c987;
L_85c983: /* 85c983: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
L_85c987: /* 85c987: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85c98d: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85c993: movzx eax, byte ptr [ecx + 0x37] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x37u)));
/* 85c997: fmul dword ptr [0xa179d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa179d0u)));
/* 85c99d: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85c9a0: fidiv dword ptr [esp + 0xc] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0xcu)));
/* 85c9a4: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 85c9a8: fiadd dword ptr [esp + 0xc] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(esp + 0xcu)));
/* 85c9ac: call 0x99c958 */
  esp -= 4; W32(esp, 0x85c9b1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85c9b1: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 85c9b7: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85c9ba: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85c9bf: fld dword ptr [ecx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8cu)); FPUSH(v); }
/* 85c9c6: fmul dword ptr [0xa179cc] */
  ST0 = ST0 * (F32((uint32_t)(0xa179ccu)));
/* 85c9cc: fadd dword ptr [0xa110d8] */
  ST0 = ST0 + (F32((uint32_t)(0xa110d8u)));
/* 85c9d2: jmp 0x85cd65 */
  goto L_85cd65;
L_85c9d7: /* 85c9d7: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85c9d9: jne 0x85ca23 */
  if (!zf) goto L_85ca23;
L_85c9db: /* 85c9db: movzx eax, byte ptr [ecx + 0x36] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x36u)));
/* 85c9df: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85c9e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85c9e6: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 85c9ea: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85c9f0: movzx ecx, byte ptr [ecx + 0x37] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x37u)));
/* 85c9f4: fmul dword ptr [0xa179d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa179d0u)));
/* 85c9fa: fidiv dword ptr [esp + 0x10] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x10u)));
/* 85c9fe: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 85ca01: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 85ca05: fiadd dword ptr [esp + 0x10] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(esp + 0x10u)));
/* 85ca09: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ca0eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ca0e: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85ca10: je 0x85c966 */
  if (zf) goto L_85c966;
L_85ca16: /* 85ca16: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 85ca1e: jmp 0x85cd69 */
  goto L_85cd69;
L_85ca23: /* 85ca23: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85ca25: jne 0x85ca4d */
  if (!zf) goto L_85ca4d;
L_85ca27: /* 85ca27: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x85ca2du); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 85ca2d: fcom dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
/* 85ca33: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85ca35: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85ca38: jp 0x85cd65 */
  if (pf) goto L_85cd65;
L_85ca3e: /* 85ca3e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85ca40: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 85ca48: jmp 0x85cd69 */
  goto L_85cd69;
L_85ca4d: /* 85ca4d: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85ca4f: jne 0x85ca9c */
  if (!zf) goto L_85ca9c;
L_85ca51: /* 85ca51: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* 85ca57: fld dword ptr [0xcd5228] */
  { double v = F32((uint32_t)(0xcd5228u)); FPUSH(v); }
/* 85ca5d: fcomp dword ptr [ecx + 0x3ac] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x3acu)));
  FPOP();
/* 85ca63: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85ca65: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 85ca68: jnp 0x85ca82 */
  if (!pf) goto L_85ca82;
L_85ca6a: /* 85ca6a: mov eax, dword ptr [0xcd5224] */
  eax = R32((uint32_t)(0xcd5224u));
/* 85ca6f: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 85ca75: xor eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 85ca77: mov dword ptr [0xcd5228], edx */
  W32((uint32_t)(0xcd5228u), edx);
/* 85ca7d: mov dword ptr [0xcd5224], eax */
  W32((uint32_t)(0xcd5224u), eax);
L_85ca82: /* 85ca82: mov eax, dword ptr [0xcd5224] */
  eax = R32((uint32_t)(0xcd5224u));
/* 85ca87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ca89: je 0x85c966 */
  if (zf) goto L_85c966;
L_85ca8f: /* 85ca8f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 85ca97: jmp 0x85cd69 */
  goto L_85cd69;
L_85ca9c: /* 85ca9c: cmp al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85ca9e: jne 0x85cb00 */
  if (!zf) goto L_85cb00;
L_85caa0: /* 85caa0: movzx eax, byte ptr [ecx + 0x36] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x36u)));
/* 85caa4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85caa6: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 85caaa: jge 0x85cab0 */
  if ((sf == of)) goto L_85cab0;
L_85caac: /* 85caac: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
L_85cab0: /* 85cab0: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 85cab6: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 85cabc: movzx ecx, byte ptr [ecx + 0x37] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x37u)));
/* 85cac0: fmul dword ptr [0xa179d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa179d0u)));
/* 85cac6: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 85cac9: fidiv dword ptr [esp + 0xc] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0xcu)));
/* 85cacd: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 85cad1: fiadd dword ptr [esp + 0x10] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(esp + 0x10u)));
/* 85cad5: call 0x99c958 */
  esp -= 4; W32(esp, 0x85cadau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85cada: mov edx, dword ptr [0xcfa1c4] */
  edx = R32((uint32_t)(0xcfa1c4u));
/* 85cae0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85cae3: and eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85cae8: fld dword ptr [edx + eax*4 + 0x8c] */
  { double v = F32((uint32_t)(edx + eax*4 + 0x8cu)); FPUSH(v); }
/* 85caef: fmul dword ptr [0xa179c8] */
  ST0 = ST0 * (F32((uint32_t)(0xa179c8u)));
/* 85caf5: fadd dword ptr [0xa0c18c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0c18cu)));
/* 85cafb: jmp 0x85cd65 */
  goto L_85cd65;
L_85cb00: /* 85cb00: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85cb02: jne 0x85cc01 */
  if (!zf) goto L_85cc01;
L_85cb08: /* 85cb08: mov eax, dword ptr [ecx + 0x2a4] */
  eax = R32((uint32_t)(ecx + 0x2a4u));
/* 85cb0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85cb10: je 0x85cd69 */
  if (zf) goto L_85cd69;
L_85cb16: /* 85cb16: mov eax, dword ptr [ecx + 0x2a0] */
  eax = R32((uint32_t)(ecx + 0x2a0u));
/* 85cb1c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85cb1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85cb1f: call 0x6c452f */
  esp -= 4; W32(esp, 0x85cb24u); SPILL(); f_6c452f(); if (g_unwind) return; RELOAD();
/* 85cb24: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85cb27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85cb29: je 0x85cd69 */
  if (zf) goto L_85cd69;
L_85cb2f: /* 85cb2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85cb31: mov eax, dword ptr [edx + 0x2a0] */
  eax = R32((uint32_t)(edx + 0x2a0u));
/* 85cb37: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85cb39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85cb3a: call 0x6c452f */
  esp -= 4; W32(esp, 0x85cb3fu); SPILL(); f_6c452f(); if (g_unwind) return; RELOAD();
/* 85cb3f: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 85cb42: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85cb45: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85cb47: je 0x85cd69 */
  if (zf) goto L_85cd69;
L_85cb4d: /* 85cb4d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85cb4f: mov edi, dword ptr [ecx + 0x2a0] */
  edi = R32((uint32_t)(ecx + 0x2a0u));
/* 85cb55: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85cb56: call 0x6c31f7 */
  esp -= 4; W32(esp, 0x85cb5bu); SPILL(); f_6c31f7(); if (g_unwind) return; RELOAD();
/* 85cb5b: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 85cb61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85cb62: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85cb65: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x85cb6bu); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 85cb6b: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85cb6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85cb6e: mov ebp, eax */
  ebp = eax;
/* 85cb70: call 0x6c452f */
  esp -= 4; W32(esp, 0x85cb75u); SPILL(); f_6c452f(); if (g_unwind) return; RELOAD();
/* 85cb75: mov eax, dword ptr [eax + 0x50] */
  eax = R32((uint32_t)(eax + 0x50u));
/* 85cb78: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85cb7b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 85cb7d: mov eax, dword ptr [eax + ebp*4] */
  eax = R32((uint32_t)(eax + ebp*4));
/* 85cb80: mov ecx, eax */
  ecx = eax;
/* 85cb82: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 85cb85: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 85cb88: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 85cb8c: movzx edx, ah */
  edx = (uint32_t)(((eax >> 8) & 0xffu));
/* 85cb8f: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 85cb93: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 85cb97: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 85cb9b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 85cb9f: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 85cba2: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 85cba6: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 85cbaa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85cbad: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 85cbb1: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 85cbb5: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 85cbb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85cbba: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 85cbbe: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 85cbc2: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x85cbc8u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 85cbc8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85cbca: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 85cbcd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 85cbd0: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 85cbd4: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 85cbdc: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 85cbe0: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 85cbe4: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 85cbe8: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 85cbec: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 85cbf0: call 0x6c2fea */
  esp -= 4; W32(esp, 0x85cbf5u); SPILL(); f_6c2fea(); if (g_unwind) return; RELOAD();
/* 85cbf5: fmul dword ptr [0xa179c4] */
  ST0 = ST0 * (F32((uint32_t)(0xa179c4u)));
/* 85cbfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85cbfc: jmp 0x85cd65 */
  goto L_85cd65;
L_85cc01: /* 85cc01: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85cc03: jne 0x85cd3f */
  if (!zf) goto L_85cd3f;
L_85cc09: /* 85cc09: mov eax, dword ptr [ecx + 0x2a4] */
  eax = R32((uint32_t)(ecx + 0x2a4u));
/* 85cc0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85cc11: je 0x85cd3a */
  if (zf) goto L_85cd3a;
L_85cc17: /* 85cc17: mov eax, dword ptr [ecx + 0x2a0] */
  eax = R32((uint32_t)(ecx + 0x2a0u));
/* 85cc1d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85cc1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85cc20: call 0x6c452f */
  esp -= 4; W32(esp, 0x85cc25u); SPILL(); f_6c452f(); if (g_unwind) return; RELOAD();
/* 85cc25: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85cc28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85cc2a: je 0x85cd3a */
  if (zf) goto L_85cd3a;
L_85cc30: /* 85cc30: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85cc32: mov eax, dword ptr [edx + 0x2a0] */
  eax = R32((uint32_t)(edx + 0x2a0u));
/* 85cc38: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85cc3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85cc3b: call 0x6c452f */
  esp -= 4; W32(esp, 0x85cc40u); SPILL(); f_6c452f(); if (g_unwind) return; RELOAD();
/* 85cc40: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 85cc43: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85cc46: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85cc48: je 0x85cd3a */
  if (zf) goto L_85cd3a;
L_85cc4e: /* 85cc4e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85cc50: movzx ecx, byte ptr [eax + 0x36] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x36u)));
/* 85cc54: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85cc56: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 85cc5a: jge 0x85cc60 */
  if ((sf == of)) goto L_85cc60;
L_85cc5c: /* 85cc5c: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
L_85cc60: /* 85cc60: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 85cc66: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85cc6c: movzx ecx, byte ptr [eax + 0x37] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x37u)));
/* 85cc70: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 85cc76: mov edx, dword ptr [eax + 0x2a0] */
  edx = R32((uint32_t)(eax + 0x2a0u));
/* 85cc7c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 85cc7e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 85cc82: fidiv dword ptr [esp + 0xc] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0xcu)));
/* 85cc86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85cc87: fiadd dword ptr [esp + 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(esp + 0x14u)));
/* 85cc8b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 85cc8f: call 0x6c452f */
  esp -= 4; W32(esp, 0x85cc94u); SPILL(); f_6c452f(); if (g_unwind) return; RELOAD();
/* 85cc94: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 85cc98: mov edi, dword ptr [eax + 0x50] */
  edi = R32((uint32_t)(eax + 0x50u));
/* 85cc9b: fmul dword ptr [0xa175d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa175d8u)));
/* 85cca1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85cca4: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85cca7: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ccacu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ccac: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85ccb1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 85ccb2: mov ecx, 0xff */
  ecx = 0xffu;
/* 85ccb7: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x85ccb7);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 85ccb9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 85ccbb: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 85ccbe: mov ecx, edx */
  ecx = edx;
/* 85ccc0: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 85ccc3: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 85ccc6: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 85ccca: movzx eax, dh */
  eax = (uint32_t)(((edx >> 8) & 0xffu));
/* 85cccd: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 85ccd1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 85ccd5: movzx ecx, dl */
  ecx = (uint32_t)((edx & 0xffu));
/* 85ccd8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 85ccdc: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 85cce0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 85cce4: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 85cce8: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 85ccec: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 85ccf0: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 85ccf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85ccf5: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 85ccf9: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 85ccfd: call dword ptr [0xcfab34] */
  esp -= 4; W32(esp, 0x85cd03u); SPILL(); f_4e34f4(); if (g_unwind) return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 85cd03: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85cd05: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 85cd08: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 85cd0b: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 85cd0f: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 85cd17: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 85cd1b: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 85cd1f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 85cd23: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 85cd27: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 85cd2b: call 0x6c2fea */
  esp -= 4; W32(esp, 0x85cd30u); SPILL(); f_6c2fea(); if (g_unwind) return; RELOAD();
/* 85cd30: fmul dword ptr [0xa179c4] */
  ST0 = ST0 * (F32((uint32_t)(0xa179c4u)));
/* 85cd36: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_85cd3a: /* 85cd3a: mov dword ptr [esi + 0x34], ebx */
  W32((uint32_t)(esi + 0x34u), ebx);
/* 85cd3d: jmp 0x85cd69 */
  goto L_85cd69;
L_85cd3f: /* 85cd3f: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85cd41: jne 0x85cd69 */
  if (!zf) goto L_85cd69;
L_85cd43: /* 85cd43: call 0x6c31f7 */
  esp -= 4; W32(esp, 0x85cd48u); SPILL(); f_6c31f7(); if (g_unwind) return; RELOAD();
/* 85cd48: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 85cd4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85cd4f: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 85cd55: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85cd58: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 85cd5d: call 0x6cb8f2 */
  esp -= 4; W32(esp, 0x85cd62u); SPILL(); f_6cb8f2(); if (g_unwind) return; RELOAD();
/* 85cd62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85cd65: /* 85cd65: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_85cd69: /* 85cd69: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85cd6b: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 85cd71: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* 85cd74: mov edx, dword ptr [ecx + 0x4a0] */
  edx = R32((uint32_t)(ecx + 0x4a0u));
/* 85cd7a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 85cd80: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85cd81: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 85cd85: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 85cd89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85cd8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85cd8b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 85cd8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85cd90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85cd91: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 85cd95: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85cd98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85cd99: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 85cd9d: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x85cda3u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 85cda3: mov ecx, eax */
  ecx = eax;
/* 85cda5: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x85cdabu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 85cdab: mov ecx, eax */
  ecx = eax;
/* 85cdad: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x85cdb3u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 85cdb3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 85cdb5: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 85cdb8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85cdba: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 85cdbd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 85cdc0: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 85cdc3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 85cdc6: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 85cdc9: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 85cdcc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85cdce: mov al, byte ptr [ecx + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x29u))) & 0xffu);
/* 85cdd1: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85cdd3: jne 0x85cdfb */
  if (!zf) goto L_85cdfb;
L_85cdd5: /* 85cdd5: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 85cdd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85cdda: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85cde0: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x85cde6u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 85cde6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 85cde8: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 85cdeb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85cded: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 85cdf0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 85cdf3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 85cdf6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 85cdf9: jmp 0x85ce70 */
  goto L_85ce70;
L_85cdfb: /* 85cdfb: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85cdfd: je 0x85ce26 */
  if (zf) goto L_85ce26;
L_85cdff: /* 85cdff: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85ce01: je 0x85ce26 */
  if (zf) goto L_85ce26;
L_85ce03: /* 85ce03: lea edx, [ecx + 0x170] */
  edx = (uint32_t)(ecx + 0x170u);
/* 85ce09: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 85ce0b: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 85ce0e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 85ce10: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 85ce13: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 85ce16: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 85ce19: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 85ce1c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85ce1e: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x85ce24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85ce24: jmp 0x85ce6d */
  goto L_85ce6d;
L_85ce26: /* 85ce26: lea edx, [ecx + 0x170] */
  edx = (uint32_t)(ecx + 0x170u);
/* 85ce2c: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 85ce2e: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 85ce31: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 85ce33: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 85ce36: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 85ce39: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 85ce3c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 85ce3f: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 85ce43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85ce44: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85ce4a: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x85ce50u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 85ce50: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 85ce52: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 85ce55: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85ce57: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 85ce5a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 85ce5d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 85ce60: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 85ce63: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85ce65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85ce67: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x85ce6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85ce6d: /* 85ce6d: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
L_85ce70: /* 85ce70: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85ce72: mov dword ptr [esi + 0x40], 0x3f800000 */
  W32((uint32_t)(esi + 0x40u), 0x3f800000u);
/* 85ce79: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 85ce7f: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 85ce82: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 85ce84: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 85ce87: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 85ce8d: test ch, 8 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85ce90: jne 0x85ceae */
  if (!zf) goto L_85ceae;
L_85ce92: /* 85ce92: test cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85ce95: jne 0x85ce9c */
  if (!zf) goto L_85ce9c;
L_85ce97: /* 85ce97: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85ce9a: je 0x85ceae */
  if (zf) goto L_85ceae;
L_85ce9c: /* 85ce9c: mov ecx, ebx */
  ecx = ebx;
/* 85ce9e: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 85cea1: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 85cea4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85cea5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85cea6: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 85cea9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85ceaa: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85cead: ret  */
  esp += 4; SPILL(); return;
L_85ceae: /* 85ceae: xor ecx, ecx */
  ecx = 0;
/* 85ceb0: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 85ceb3: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 85ceb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85ceb7: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 85ceba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_85cebb: /* 85cebb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85cebc: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85cebf: ret  */
  esp += 4; SPILL(); return;
}

void f_85d030(void) {
  LOAD_REGS();
L_85d030: /* 85d030: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 85d034: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85d037: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d038: mov esi, ecx */
  esi = ecx;
/* 85d03a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 85d03e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85d041: mov eax, esp */
  eax = esp;
/* 85d043: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 85d045: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 85d049: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 85d04c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 85d04f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 85d053: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 85d057: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85d05a: mov edx, esp */
  edx = esp;
/* 85d05c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85d05e: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 85d062: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 85d065: mov ecx, esi */
  ecx = esi;
/* 85d067: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85d06a: call 0x6c6b4a */
  esp -= 4; W32(esp, 0x85d06fu); SPILL(); f_6c6b4a(); if (g_unwind) return; RELOAD();
/* 85d06f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d070: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 85d074: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 85d077: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d078: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 85d07b: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x85d081u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 85d081: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 85d085: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d086: mov ecx, esi */
  ecx = esi;
/* 85d088: call 0x6c576d */
  esp -= 4; W32(esp, 0x85d08du); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 85d08d: mov eax, esi */
  eax = esi;
/* 85d08f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85d090: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d093: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_85d0c0(void) {
  LOAD_REGS();
L_85d0c0: /* 85d0c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 85d0c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d0c5: mov esi, ecx */
  esi = ecx;
/* 85d0c7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 85d0c9: mov dword ptr [esi + 0x40], 0x3f800000 */
  W32((uint32_t)(esi + 0x40u), 0x3f800000u);
/* 85d0d0: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 85d0d7: call 0x6c9214 */
  esp -= 4; W32(esp, 0x85d0dcu); SPILL(); f_6c9214(); if (g_unwind) return; RELOAD();
/* 85d0dc: mov eax, esi */
  eax = esi;
/* 85d0de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85d0df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85d100(void) {
  LOAD_REGS();
L_85d100: /* 85d100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85d101: mov ebp, esp */
  ebp = esp;
/* 85d103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85d105: push 0x9d4160 */
  { uint32_t v = 0x9d4160u; esp -= 4; W32(esp, v); }
/* 85d10a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85d110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85d118: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85d11b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85d120: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d121: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d122: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d123: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85d126: mov ecx, dword ptr [0xce8360] */
  ecx = R32((uint32_t)(0xce8360u));
/* 85d12c: xor edi, edi */
  edi = 0;
/* 85d12e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85d131: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 85d134: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 85d137: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 85d139: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 85d13b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d13e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 85d141: mov ecx, dword ptr [edx + 0x8c] */
  ecx = R32((uint32_t)(edx + 0x8cu));
/* 85d147: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 85d14a: mov esi, dword ptr [ecx + 0x98] */
  esi = R32((uint32_t)(ecx + 0x98u));
/* 85d150: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 85d153: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 85d156: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85d158: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 85d15b: sub eax, dword ptr [ecx + 0xf0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xf0u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85d161: mov edx, eax */
  edx = eax;
/* 85d163: mov eax, 0x63e7063f */
  eax = 0x63e7063fu;
/* 85d168: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 85d16a: sar edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 85d16d: mov eax, edx */
  eax = edx;
/* 85d16f: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85d172: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85d174: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 85d177: mov esi, edx */
  esi = edx;
/* 85d179: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x85d17fu); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 85d17f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85d181: shl esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 85d184: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d185: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85d187: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d188: shl esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 85d18b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d18c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85d18f: xor ebx, ebx */
  ebx = 0;
/* 85d191: call 0x99c910 */
  esp -= 4; W32(esp, 0x85d196u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 85d196: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85d198: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 85d19a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 85d19d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d19e: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 85d1a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d1a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d1a2: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 85d1a7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 85d1aa: call dword ptr [0xcfaa64] */
  esp -= 4; W32(esp, 0x85d1b0u); SPILL(); f_4e102d(); if (g_unwind) return; /* Core!?Get@FMemCache@@QAEPAE_KAAPAVFCacheItem@1@H@Z */ RELOAD();
/* 85d1b0: mov edi, eax */
  edi = eax;
/* 85d1b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85d1b4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d1b7: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 85d1ba: je 0x85d1fc */
  if (zf) goto L_85d1fc;
L_85d1bc: /* 85d1bc: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 85d1bf: cmp edx, dword ptr [eax + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85d1c2: jne 0x85d1d7 */
  if (!zf) goto L_85d1d7;
L_85d1c4: /* 85d1c4: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 85d1c7: cmp ecx, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85d1ca: jne 0x85d1d7 */
  if (!zf) goto L_85d1d7;
L_85d1cc: /* 85d1cc: mov ecx, dword ptr [eax + 0x90] */
  ecx = R32((uint32_t)(eax + 0x90u));
/* 85d1d2: cmp dword ptr [edi + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85d1d5: je 0x85d1f8 */
  if (zf) goto L_85d1f8;
L_85d1d7: /* 85d1d7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85d1da: xor edi, edi */
  edi = 0;
/* 85d1dc: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 85d1df: call dword ptr [0xcfaa68] */
  esp -= 4; W32(esp, 0x85d1e5u); SPILL(); f_4e1253(); if (g_unwind) return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */ RELOAD();
/* 85d1e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d1e6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85d1e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d1e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d1ea: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 85d1ef: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x85d1f5u); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 85d1f5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_85d1f8: /* 85d1f8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85d1fa: jne 0x85d268 */
  if (!zf) goto L_85d268;
L_85d1fc: /* 85d1fc: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 85d1ff: imul edx, dword ptr [eax + 0x1c] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(eax + 0x1cu)));
  edx = (uint32_t)r;
  }
/* 85d203: mov ecx, dword ptr [eax + 0x90] */
  ecx = R32((uint32_t)(eax + 0x90u));
/* 85d209: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85d20b: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85d20d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85d20f: lea eax, [edx*4 + 0x18] */
  eax = (uint32_t)(edx*4 + 0x18u);
/* 85d216: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d217: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 85d21a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d21b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d21c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d21d: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 85d222: call dword ptr [0xcfaa60] */
  esp -= 4; W32(esp, 0x85d228u); SPILL(); f_4e24af(); if (g_unwind) return; /* Core!?Create@FMemCache@@QAEPAE_KAAPAVFCacheItem@1@HHH@Z */ RELOAD();
/* 85d228: mov edi, eax */
  edi = eax;
/* 85d22a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85d22c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d22f: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 85d232: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 85d239: je 0x85d268 */
  if (zf) goto L_85d268;
L_85d23b: /* 85d23b: mov edx, dword ptr [eax + 0x90] */
  edx = R32((uint32_t)(eax + 0x90u));
/* 85d241: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 85d244: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 85d247: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 85d24a: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 85d24d: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 85d250: lea edx, [edi + 0x18] */
  edx = (uint32_t)(edi + 0x18u);
/* 85d253: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 85d255: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 85d258: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 85d25b: mov dword ptr [edi + 0x14], 0 */
  W32((uint32_t)(edi + 0x14u), 0x0u);
/* 85d262: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 85d265: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_85d268: /* 85d268: mov esi, dword ptr [0xcfa504] */
  esi = R32((uint32_t)(0xcfa504u));
/* 85d26e: xor edx, edx */
  edx = 0;
L_85d270: /* 85d270: cmp edx, dword ptr [eax + 0x90] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d276: jge 0x85d2b0 */
  if ((sf == of)) goto L_85d2b0;
L_85d278: /* 85d278: mov ebx, dword ptr [eax + 0x8c] */
  ebx = R32((uint32_t)(eax + 0x8cu));
/* 85d27e: mov ecx, edx */
  ecx = edx;
/* 85d280: imul ecx, ecx, 0x34 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x34u);
  ecx = (uint32_t)r;
  }
/* 85d283: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85d285: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85d288: je 0x85d2a3 */
  if (zf) goto L_85d2a3;
L_85d28a: /* 85d28a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 85d28c: mov ecx, dword ptr [ecx + 0x80] */
  ecx = R32((uint32_t)(ecx + 0x80u));
/* 85d292: test cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85d295: jne 0x85d29c */
  if (!zf) goto L_85d29c;
L_85d297: /* 85d297: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85d29a: je 0x85d2a3 */
  if (zf) goto L_85d2a3;
L_85d29c: /* 85d29c: mov ecx, 1 */
  ecx = 0x1u;
/* 85d2a1: jmp 0x85d2a5 */
  goto L_85d2a5;
L_85d2a3: /* 85d2a3: xor ecx, ecx */
  ecx = 0;
L_85d2a5: /* 85d2a5: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 85d2a8: cmp dword ptr [ebx + edx*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + edx*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85d2ab: je 0x85d2bb */
  if (zf) goto L_85d2bb;
L_85d2ad: /* 85d2ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85d2ae: jmp 0x85d270 */
  goto L_85d270;
L_85d2b0: /* 85d2b0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d2b3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85d2b5: je 0x85d439 */
  if (zf) goto L_85d439;
L_85d2bb: /* 85d2bb: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 85d2be: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 85d2c1: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 85d2c4: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 85d2ca: mov ecx, dword ptr [ecx + edx*8 + 0x11c] */
  ecx = R32((uint32_t)(ecx + edx*8 + 0x11cu));
/* 85d2d1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85d2d3: jne 0x85d2da */
  if (!zf) goto L_85d2da;
L_85d2d5: /* 85d2d5: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 85d2d8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
L_85d2da: /* 85d2da: xor eax, eax */
  eax = 0;
/* 85d2dc: mov al, byte ptr [ecx + 0x374] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x374u))) & 0xffu);
/* 85d2e2: xor edx, edx */
  edx = 0;
/* 85d2e4: mov dl, byte ptr [ecx + 0x376] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x376u))) & 0xffu);
/* 85d2ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d2eb: xor eax, eax */
  eax = 0;
/* 85d2ed: mov al, byte ptr [ecx + 0x375] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x375u))) & 0xffu);
/* 85d2f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d2f4: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 85d2f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d2f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d2f9: call 0x6c3954 */
  esp -= 4; W32(esp, 0x85d2feu); SPILL(); f_6c3954(); if (g_unwind) return; RELOAD();
/* 85d2fe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d301: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 85d306: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 85d309: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d30a: mov ecx, eax */
  ecx = eax;
/* 85d30c: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x85d312u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 85d312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d313: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 85d316: call 0x6c576d */
  esp -= 4; W32(esp, 0x85d31bu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 85d31b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d31e: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85d321: xor esi, esi */
  esi = 0;
L_85d323: /* 85d323: cmp esi, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d326: jge 0x85d348 */
  if ((sf == of)) goto L_85d348;
L_85d328: /* 85d328: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 85d32b: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85d32d: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 85d330: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 85d333: xor edx, edx */
  edx = 0;
L_85d335: /* 85d335: cmp edx, dword ptr [eax + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d338: jge 0x85d345 */
  if ((sf == of)) goto L_85d345;
L_85d33a: /* 85d33a: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 85d33c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d33f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85d342: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85d343: jmp 0x85d335 */
  goto L_85d335;
L_85d345: /* 85d345: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85d346: jmp 0x85d323 */
  goto L_85d323;
L_85d348: /* 85d348: xor ebx, ebx */
  ebx = 0;
/* 85d34a: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 85d34d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_85d350: /* 85d350: cmp ebx, dword ptr [eax + 0x90] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d356: jge 0x85d439 */
  if ((sf == of)) goto L_85d439;
L_85d35c: /* 85d35c: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 85d361: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 85d364: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x85d36au); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 85d36a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d36d: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 85d373: mov esi, ebx */
  esi = ebx;
/* 85d375: imul esi, esi, 0x34 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x34u);
  esi = (uint32_t)r;
  }
/* 85d378: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85d37a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85d37c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85d37e: je 0x85d418 */
  if (zf) goto L_85d418;
L_85d384: /* 85d384: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 85d38a: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85d38d: jne 0x85d418 */
  if (!zf) goto L_85d418;
L_85d393: /* 85d393: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 85d399: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85d39c: je 0x85d3a2 */
  if (zf) goto L_85d3a2;
L_85d39e: /* 85d39e: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85d3a0: jne 0x85d418 */
  if (!zf) goto L_85d418;
L_85d3a2: /* 85d3a2: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x85d3a7u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 85d3a7: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 85d3aa: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 85d3ad: mov ebx, eax */
  ebx = eax;
/* 85d3af: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 85d3b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d3b3: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 85d3b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d3b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d3b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d3b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d3ba: call 0x6c31b1 */
  esp -= 4; W32(esp, 0x85d3bfu); SPILL(); f_6c31b1(); if (g_unwind) return; RELOAD();
/* 85d3bf: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 85d3c2: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 85d3c5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d3c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d3c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d3ca: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 85d3cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d3ce: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 85d3d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d3d2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d3d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d3d6: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85d3d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d3da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d3db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d3dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d3dd: call 0x6cc603 */
  esp -= 4; W32(esp, 0x85d3e2u); SPILL(); f_6cc603(); if (g_unwind) return; RELOAD();
/* 85d3e2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d3e5: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 85d3e8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 85d3ea: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d3ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d3ee: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 85d3f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d3f2: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 85d3f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d3f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d3f7: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 85d3fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d3fb: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 85d3fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d3ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d401: call 0x6cbd07 */
  esp -= 4; W32(esp, 0x85d406u); SPILL(); f_6cbd07(); if (g_unwind) return; RELOAD();
/* 85d406: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 85d409: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d40c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d40f: mov dword ptr [edx + eax*4], 1 */
  W32((uint32_t)(edx + eax*4), 0x1u);
/* 85d416: jmp 0x85d422 */
  goto L_85d422;
L_85d418: /* 85d418: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 85d41b: mov dword ptr [ecx + ebx*4], 0 */
  W32((uint32_t)(ecx + ebx*4), 0x0u);
L_85d422: /* 85d422: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 85d425: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x85d42bu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 85d42b: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 85d42e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d431: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d434: jmp 0x85d350 */
  goto L_85d350;
L_85d439: /* 85d439: xor esi, esi */
  esi = 0;
/* 85d43b: jmp 0x85d440 */
  goto L_85d440;
L_85d440: /* 85d440: cmp esi, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d443: jge 0x85d471 */
  if ((sf == of)) goto L_85d471;
L_85d445: /* 85d445: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 85d448: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 85d44a: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 85d451: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 85d454: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d455: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 85d458: mov eax, esi */
  eax = esi;
/* 85d45a: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 85d45e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d45f: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85d462: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d463: call 0x6ca83f */
  esp -= 4; W32(esp, 0x85d468u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 85d468: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d46b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d46e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85d46f: jmp 0x85d440 */
  goto L_85d440;
L_85d471: /* 85d471: mov dword ptr [edi + 0x14], 0 */
  W32((uint32_t)(edi + 0x14u), 0x0u);
/* 85d478: xor edi, edi */
  edi = 0;
L_85d47a: /* 85d47a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d47d: cmp edi, dword ptr [ecx + 0x9c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d483: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 85d486: jge 0x85d72c */
  if ((sf == of)) goto L_85d72c;
L_85d48c: /* 85d48c: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 85d491: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 85d494: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x85d49au); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 85d49a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d49d: mov eax, dword ptr [edx + 0x98] */
  eax = R32((uint32_t)(edx + 0x98u));
/* 85d4a3: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 85d4a6: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x85d4abu); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 85d4ab: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 85d4b1: mov esi, eax */
  esi = eax;
/* 85d4b3: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85d4b6: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 85d4b9: je 0x85d71d */
  if (zf) goto L_85d71d;
L_85d4bf: /* 85d4bf: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 85d4c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85d4c4: je 0x85d71d */
  if (zf) goto L_85d71d;
L_85d4ca: /* 85d4ca: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85d4cc: cmp byte ptr [edx + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85d4d0: jne 0x85d4e7 */
  if (!zf) goto L_85d4e7;
L_85d4d2: /* 85d4d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d4d5: mov edi, dword ptr [eax + 0x1c] */
  edi = R32((uint32_t)(eax + 0x1cu));
/* 85d4d8: mov esi, dword ptr [eax + 0x20] */
  esi = R32((uint32_t)(eax + 0x20u));
/* 85d4db: xor ebx, ebx */
  ebx = 0;
/* 85d4dd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 85d4de: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 85d4e1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 85d4e2: jmp 0x85d6c2 */
  goto L_85d6c2;
L_85d4e7: /* 85d4e7: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85d4ea: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 85d4ed: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* 85d4f0: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85d4f3: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 85d4f6: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 85d4f9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85d4fb: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 85d4fe: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 85d500: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85d502: fsub dword ptr [edi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xcu)));
/* 85d505: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85d508: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 85d50b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85d50d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85d50f: fmul dword ptr [0xa130a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa130a4u)));
/* 85d515: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85d518: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85d51b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 85d51d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 85d523: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85d525: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85d528: je 0x85d532 */
  if (zf) goto L_85d532;
L_85d52a: /* 85d52a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85d52c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_85d532: /* 85d532: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85d535: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85d538: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x85d53eu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 85d53e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d541: fst qword ptr [ebp - 0x30] */
  WF64((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85d544: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d547: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 85d54a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d54b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 85d54e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d54f: mov ecx, edi */
  ecx = edi;
/* 85d551: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x85d557u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 85d557: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 85d55a: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 85d55d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d560: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 85d563: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85d566: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 85d569: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 85d56c: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 85d56f: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 85d576: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 85d578: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 85d57b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85d57e: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 85d581: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85d584: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85d587: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d58a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85d58d: lea edi, [ebp - 0x6c] */
  edi = (uint32_t)(ebp + 0xffffff94u);
/* 85d590: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85d592: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 85d594: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85d596: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 85d599: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85d59b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 85d59e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85d5a0: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 85d5a3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85d5a6: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 85d5a9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85d5ac: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 85d5af: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85d5b2: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 85d5b5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85d5b8: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 85d5bb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85d5bd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85d5bf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d5c1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d5c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85d5c5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85d5c8: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 85d5cb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85d5ce: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 85d5d1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85d5d4: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 85d5d7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85d5da: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 85d5dd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85d5df: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85d5e1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d5e3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d5e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85d5e7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85d5ea: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 85d5ed: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85d5f0: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 85d5f3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85d5f6: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 85d5f9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85d5fc: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 85d5ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85d601: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85d603: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d605: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d607: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85d609: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85d60b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 85d60d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85d60f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 85d612: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 85d615: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 85d618: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d61b: add ecx, 0x74 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85d61e: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x85d624u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 85d624: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85d627: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 85d62a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d62d: fdiv dword ptr [ebp - 0x2c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 85d630: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85d636: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85d639: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x85d63fu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 85d63f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85d642: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 85d645: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d648: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85d64b: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 85d64e: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 85d651: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 85d654: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 85d657: call 0x99c958 */
  esp -= 4; W32(esp, 0x85d65cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85d65c: xor edi, edi */
  edi = 0;
/* 85d65e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d660: jge 0x85d667 */
  if ((sf == of)) goto L_85d667;
L_85d662: /* 85d662: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 85d665: jmp 0x85d671 */
  goto L_85d671;
L_85d667: /* 85d667: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d669: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85d66c: jl 0x85d671 */
  if ((sf != of)) goto L_85d671;
L_85d66e: /* 85d66e: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
L_85d671: /* 85d671: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 85d674: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 85d677: call 0x99c958 */
  esp -= 4; W32(esp, 0x85d67cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85d67c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d67e: jl 0x85d688 */
  if ((sf != of)) goto L_85d688;
L_85d680: /* 85d680: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d682: mov edi, eax */
  edi = eax;
/* 85d684: jl 0x85d688 */
  if ((sf != of)) goto L_85d688;
L_85d686: /* 85d686: mov edi, esi */
  edi = esi;
L_85d688: /* 85d688: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85d68b: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 85d68e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 85d690: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 85d693: call 0x99c958 */
  esp -= 4; W32(esp, 0x85d698u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85d698: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85d69a: jge 0x85d6a0 */
  if ((sf == of)) goto L_85d6a0;
L_85d69c: /* 85d69c: xor ebx, ebx */
  ebx = 0;
/* 85d69e: jmp 0x85d6a8 */
  goto L_85d6a8;
L_85d6a0: /* 85d6a0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d6a2: mov ebx, eax */
  ebx = eax;
/* 85d6a4: jl 0x85d6a8 */
  if ((sf != of)) goto L_85d6a8;
L_85d6a6: /* 85d6a6: mov ebx, esi */
  ebx = esi;
L_85d6a8: /* 85d6a8: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85d6ab: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 85d6ad: call 0x99c958 */
  esp -= 4; W32(esp, 0x85d6b2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85d6b2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85d6b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85d6b6: jge 0x85d6bc */
  if ((sf == of)) goto L_85d6bc;
L_85d6b8: /* 85d6b8: xor esi, esi */
  esi = 0;
/* 85d6ba: jmp 0x85d6c2 */
  goto L_85d6c2;
L_85d6bc: /* 85d6bc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d6be: jge 0x85d6c2 */
  if ((sf == of)) goto L_85d6c2;
L_85d6c0: /* 85d6c0: mov esi, eax */
  esi = eax;
L_85d6c2: /* 85d6c2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d6c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d6c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d6c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d6c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d6c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85d6cb: call 0x6c31b1 */
  esp -= 4; W32(esp, 0x85d6d0u); SPILL(); f_6c31b1(); if (g_unwind) return; RELOAD();
/* 85d6d0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 85d6d3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d6d6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d6d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d6da: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d6dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d6de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d6df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d6e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d6e1: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85d6e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85d6e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d6e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d6e9: call 0x6cc603 */
  esp -= 4; W32(esp, 0x85d6eeu); SPILL(); f_6cc603(); if (g_unwind) return; RELOAD();
/* 85d6ee: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 85d6f1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85d6f4: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d6f7: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 85d6fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d6fb: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 85d6fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d6ff: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d702: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d703: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d705: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d706: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d707: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d708: call 0x6cbd07 */
  esp -= 4; W32(esp, 0x85d70du); SPILL(); f_6cbd07(); if (g_unwind) return; RELOAD();
/* 85d70d: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85d710: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85d713: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d716: mov dword ptr [edx + 0x14], 1 */
  W32((uint32_t)(edx + 0x14u), 0x1u);
L_85d71d: /* 85d71d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 85d720: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x85d726u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 85d726: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85d727: jmp 0x85d47a */
  goto L_85d47a;
L_85d72c: /* 85d72c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85d72f: call dword ptr [0xcfaa68] */
  esp -= 4; W32(esp, 0x85d735u); SPILL(); f_4e1253(); if (g_unwind) return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */ RELOAD();
/* 85d735: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85d73a: mov ecx, dword ptr [0xce8360] */
  ecx = R32((uint32_t)(0xce8360u));
/* 85d740: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 85d743: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 85d745: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 85d747: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85d74a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85d74c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 85d74e: mov ecx, dword ptr [0xce835c] */
  ecx = R32((uint32_t)(0xce835cu));
/* 85d754: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85d759: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 85d75c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85d75d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85d75e: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 85d761: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85d764: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85d765: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85d76c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85d76d: mov esp, ebp */
  esp = ebp;
/* 85d76f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85d770: ret 0x14 */
  esp += 24; SPILL(); return;
}
