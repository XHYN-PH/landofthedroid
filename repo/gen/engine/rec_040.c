#include "recomp.h"
#include "rec_mod.h"

void f_7b6d60(void) {
  LOAD_REGS();
L_7b6d60: /* 7b6d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b6d61: mov esi, ecx */
  esi = ecx;
/* 7b6d63: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b6d69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6d6b: je 0x7b6dae */
  if (zf) goto L_7b6dae;
L_7b6d6d: /* 7b6d6d: mov ecx, dword ptr [eax + 0x180] */
  ecx = R32((uint32_t)(eax + 0x180u));
/* 7b6d73: mov eax, dword ptr [eax + 0x2f4] */
  eax = R32((uint32_t)(eax + 0x2f4u));
/* 7b6d79: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7b6d7f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 7b6d81: mov edx, eax */
  edx = eax;
/* 7b6d83: jns 0x7b6d87 */
  if (!sf) goto L_7b6d87;
L_7b6d85: /* 7b6d85: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
L_7b6d87: /* 7b6d87: xor ecx, ecx */
  ecx = 0;
/* 7b6d89: cmp edx, 0x7d0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7d0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b6d8f: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7b6d92: mov edx, ecx */
  edx = ecx;
/* 7b6d94: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6d96: jne 0x7b6dae */
  if (!zf) goto L_7b6dae;
L_7b6d98: /* 7b6d98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7b6d9a: jge 0x7b6d9e */
  if ((sf == of)) goto L_7b6d9e;
L_7b6d9c: /* 7b6d9c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_7b6d9e: /* 7b6d9e: xor edx, edx */
  edx = 0;
/* 7b6da0: cmp eax, 0xf82f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf82fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b6da5: setg dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 7b6da8: mov eax, edx */
  eax = edx;
/* 7b6daa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6dac: je 0x7b6dbd */
  if (zf) goto L_7b6dbd;
L_7b6dae: /* 7b6dae: mov ecx, esi */
  ecx = esi;
/* 7b6db0: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b6db6u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b6db6: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
L_7b6dbd: /* 7b6dbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b6dbe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b6df0(void) {
  LOAD_REGS();
L_7b6df0: /* 7b6df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b6df1: mov ebp, esp */
  ebp = esp;
/* 7b6df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b6df5: push 0x9cf020 */
  { uint32_t v = 0x9cf020u; esp -= 4; W32(esp, v); }
/* 7b6dfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b6e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b6e01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b6e08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b6e0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b6e0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b6e0d: mov esi, ecx */
  esi = ecx;
/* 7b6e0f: mov ecx, dword ptr [esi + 0x54c] */
  ecx = R32((uint32_t)(esi + 0x54cu));
/* 7b6e15: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6e17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b6e18: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b6e1b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b6e22: je 0x7b6f0b */
  if (zf) goto L_7b6f0b;
L_7b6e28: /* 7b6e28: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 7b6e2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6e30: mov ebx, dword ptr [esi + 0x548] */
  ebx = R32((uint32_t)(esi + 0x548u));
/* 7b6e36: je 0x7b6e4b */
  if (zf) goto L_7b6e4b;
L_7b6e38: /* 7b6e38: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 7b6e3e: test dh, 2 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6e41: je 0x7b6eab */
  if (zf) goto L_7b6eab;
L_7b6e43: /* 7b6e43: mov dword ptr [esi + 0x548], ecx */
  W32((uint32_t)(esi + 0x548u), ecx);
/* 7b6e49: jmp 0x7b6eb1 */
  goto L_7b6eb1;
L_7b6e4b: /* 7b6e4b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b6e4d: call dword ptr [eax + 0x180] */
  { uint32_t t = R32((uint32_t)(eax + 0x180u)); esp -= 4; W32(esp, 0x7b6e53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b6e53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6e55: je 0x7b6e9b */
  if (zf) goto L_7b6e9b;
L_7b6e57: /* 7b6e57: mov edi, dword ptr [esi + 0x54c] */
  edi = R32((uint32_t)(esi + 0x54cu));
/* 7b6e5d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6e5f: je 0x7b6e72 */
  if (zf) goto L_7b6e72;
L_7b6e61: /* 7b6e61: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7b6e66: mov ecx, edi */
  ecx = edi;
/* 7b6e68: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b6e6eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b6e6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6e70: jne 0x7b6e74 */
  if (!zf) goto L_7b6e74;
L_7b6e72: /* 7b6e72: xor edi, edi */
  edi = 0;
L_7b6e74: /* 7b6e74: mov eax, dword ptr [edi + 0x548] */
  eax = R32((uint32_t)(edi + 0x548u));
/* 7b6e7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6e7c: je 0x7b6e9b */
  if (zf) goto L_7b6e9b;
L_7b6e7e: /* 7b6e7e: mov ecx, dword ptr [esi + 0x54c] */
  ecx = R32((uint32_t)(esi + 0x54cu));
/* 7b6e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b6e85: call 0x6c1582 */
  esp -= 4; W32(esp, 0x7b6e8au); SPILL(); f_6c1582(); if (g_unwind) return; RELOAD();
/* 7b6e8a: mov edx, dword ptr [eax + 0x548] */
  edx = R32((uint32_t)(eax + 0x548u));
/* 7b6e90: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b6e93: mov dword ptr [esi + 0x548], edx */
  W32((uint32_t)(esi + 0x548u), edx);
/* 7b6e99: jmp 0x7b6eb1 */
  goto L_7b6eb1;
L_7b6e9b: /* 7b6e9b: mov eax, dword ptr [esi + 0x548] */
  eax = R32((uint32_t)(esi + 0x548u));
/* 7b6ea1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6ea3: jne 0x7b6eb1 */
  if (!zf) goto L_7b6eb1;
L_7b6ea5: /* 7b6ea5: mov eax, dword ptr [esi + 0x54c] */
  eax = R32((uint32_t)(esi + 0x54cu));
L_7b6eab: /* 7b6eab: mov dword ptr [esi + 0x548], eax */
  W32((uint32_t)(esi + 0x548u), eax);
L_7b6eb1: /* 7b6eb1: cmp ebx, dword ptr [esi + 0x548] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x548u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b6eb7: je 0x7b6f44 */
  if (zf) goto L_7b6f44;
L_7b6ebd: /* 7b6ebd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7b6ebf: mov ecx, esi */
  ecx = esi;
/* 7b6ec1: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x7b6ec7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b6ec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6ec9: jne 0x7b6f44 */
  if (!zf) goto L_7b6f44;
L_7b6ecb: /* 7b6ecb: mov eax, dword ptr [esi + 0x548] */
  eax = R32((uint32_t)(esi + 0x548u));
/* 7b6ed1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b6ed2: mov ecx, esi */
  ecx = esi;
/* 7b6ed4: call 0x6c40de */
  esp -= 4; W32(esp, 0x7b6ed9u); SPILL(); f_6c40de(); if (g_unwind) return; RELOAD();
/* 7b6ed9: jmp 0x7b6f44 */
  goto L_7b6f44;
L_7b6f0b: /* 7b6f0b: mov eax, dword ptr [esi + 0x548] */
  eax = R32((uint32_t)(esi + 0x548u));
/* 7b6f11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6f13: jne 0x7b6f44 */
  if (!zf) goto L_7b6f44;
L_7b6f15: /* 7b6f15: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b6f1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6f1d: je 0x7b6f3e */
  if (zf) goto L_7b6f3e;
L_7b6f1f: /* 7b6f1f: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7b6f25: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6f28: jne 0x7b6f3e */
  if (!zf) goto L_7b6f3e;
L_7b6f2a: /* 7b6f2a: test dword ptr [eax + 0x84], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6f34: jne 0x7b6f3e */
  if (!zf) goto L_7b6f3e;
L_7b6f36: /* 7b6f36: mov dword ptr [esi + 0x548], eax */
  W32((uint32_t)(esi + 0x548u), eax);
/* 7b6f3c: jmp 0x7b6f44 */
  goto L_7b6f44;
L_7b6f3e: /* 7b6f3e: mov dword ptr [esi + 0x548], esi */
  W32((uint32_t)(esi + 0x548u), esi);
L_7b6f44: /* 7b6f44: mov eax, dword ptr [esi + 0x548] */
  eax = R32((uint32_t)(esi + 0x548u));
/* 7b6f4a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b6f4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b6f4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b6f4f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b6f56: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b6f57: mov esp, ebp */
  esp = ebp;
/* 7b6f59: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b6f5a: ret  */
  esp += 4; SPILL(); return;
}

void f_7b6edb(void) {
  LOAD_REGS();
L_7b6edb: /* 7b6edb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b6ede: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b6ee3: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7b6ee6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b6ee7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7b6eea: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b6eefu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b6eef(); return;
}

void f_7b6eef(void) {
  LOAD_REGS();
L_7b6eef: /* 7b6eef: push 0xa0d228 */
  { uint32_t v = 0xa0d228u; esp -= 4; W32(esp, v); }
/* 7b6ef4: push 0xacfa80 */
  { uint32_t v = 0xacfa80u; esp -= 4; W32(esp, v); }
/* 7b6ef9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b6effu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b6eff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b6f02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b6f04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b6f06: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b6f0bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7b6f0b: mov eax, dword ptr [esi + 0x548] */
  eax = R32((uint32_t)(esi + 0x548u));
/* 7b6f11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6f13: jne 0x7b6f44 */
  if (!zf) goto L_7b6f44;
L_7b6f15: /* 7b6f15: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b6f1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6f1d: je 0x7b6f3e */
  if (zf) goto L_7b6f3e;
L_7b6f1f: /* 7b6f1f: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7b6f25: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6f28: jne 0x7b6f3e */
  if (!zf) goto L_7b6f3e;
L_7b6f2a: /* 7b6f2a: test dword ptr [eax + 0x84], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6f34: jne 0x7b6f3e */
  if (!zf) goto L_7b6f3e;
L_7b6f36: /* 7b6f36: mov dword ptr [esi + 0x548], eax */
  W32((uint32_t)(esi + 0x548u), eax);
/* 7b6f3c: jmp 0x7b6f44 */
  goto L_7b6f44;
L_7b6f3e: /* 7b6f3e: mov dword ptr [esi + 0x548], esi */
  W32((uint32_t)(esi + 0x548u), esi);
L_7b6f44: /* 7b6f44: mov eax, dword ptr [esi + 0x548] */
  eax = R32((uint32_t)(esi + 0x548u));
/* 7b6f4a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b6f4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b6f4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b6f4f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b6f56: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b6f57: mov esp, ebp */
  esp = ebp;
/* 7b6f59: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b6f5a: ret  */
  esp += 4; SPILL(); return;
}

void f_7b6fc0(void) {
  LOAD_REGS();
L_7b6fc0: /* 7b6fc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b6fc1: mov ebp, esp */
  ebp = esp;
/* 7b6fc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b6fc5: push 0x9cf030 */
  { uint32_t v = 0x9cf030u; esp -= 4; W32(esp, v); }
/* 7b6fca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b6fd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b6fd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b6fd8: sub esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b6fde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b6fdf: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7b6fe2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b6fe3: xor esi, esi */
  esi = 0;
/* 7b6fe5: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b6fe7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b6fe8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b6feb: mov edi, ecx */
  edi = ecx;
/* 7b6fed: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7b6ff0: je 0x7b7190 */
  if (zf) goto L_7b7190;
L_7b6ff6: /* 7b6ff6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7b6ff8: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x7b6ffeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b6ffe: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7b7004: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7b7007: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b7009: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7b700c: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7b700f: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7b7012: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7b7015: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7b7018: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7b701e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b7020: jne 0x7b702e */
  if (!zf) goto L_7b702e;
L_7b7022: /* 7b7022: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7b7025: fadd dword ptr [ecx + 0x444] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x444u)));
/* 7b702b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
L_7b702e: /* 7b702e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7b7034: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 7b703a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b703d: fst dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0);
/* 7b7040: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b7042: fst dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0);
/* 7b7045: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7b704b: fst dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0);
/* 7b704e: fst dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0);
/* 7b7051: mov dword ptr [ebp - 0x74], esi */
  W32((uint32_t)(ebp + 0xffffff8cu), esi);
/* 7b7054: fst dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 7b7057: mov dword ptr [ebp - 0x70], esi */
  W32((uint32_t)(ebp + 0xffffff90u), esi);
/* 7b705a: fst dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0);
/* 7b705d: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 7b7060: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 7b7063: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7b7066: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b7069: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7b706c: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 7b7073: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b7076: mov dword ptr [ebp - 0x4c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb4u), 0xffffffffu);
/* 7b707d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b707f: mov eax, esp */
  eax = esp;
/* 7b7081: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b7083: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b7086: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7b7089: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b708c: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7b7091: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b7094: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 7b7097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7098: lea esi, [ebx + 0x170] */
  esi = (uint32_t)(ebx + 0x170u);
/* 7b709e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b709f: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7b70a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b70a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b70a4: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b70aa: jne 0x7b7227 */
  if (!zf) goto L_7b7227;
L_7b70b0: /* 7b70b0: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7b70b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b70b6: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7b70b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b70bb: je 0x7b71a5 */
  if (zf) goto L_7b71a5;
L_7b70c1: /* 7b70c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b70c3: je 0x7b7140 */
  if (zf) goto L_7b7140;
L_7b70c5: /* 7b70c5: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 7b70cb: fld dword ptr [eax + 0x444] */
  { double v = F32((uint32_t)(eax + 0x444u)); FPUSH(v); }
/* 7b70d1: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 7b70d7: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7b70dd: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b70e3: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b70e9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b70ec: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7b70ef: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7b70f2: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7b70f9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b70fc: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7b70ff: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b7101: mov ecx, esp */
  ecx = esp;
/* 7b7103: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b7105: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7b710c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b710f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b7112: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7b7119: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b711c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7b711f: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7b7124: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b7127: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b7128: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b712b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b712c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b712d: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 7b7130: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b7131: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b7137: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7b713du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b713d: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
L_7b7140: /* 7b7140: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7142: je 0x7b71a5 */
  if (zf) goto L_7b71a5;
L_7b7144: /* 7b7144: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b7146: je 0x7b71a5 */
  if (zf) goto L_7b71a5;
L_7b7148: /* 7b7148: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b714b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7b714e: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7b7151: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b7154: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7b7157: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7b715a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7b715c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7b715e: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7b7161: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7b7164: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7b7167: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b716du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b716d: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7b7170: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7b7176: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7b7179: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 7b717b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7b717d: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
L_7b7183: /* 7b7183: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7185: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b7187: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b718a: jp 0x7b7366 */
  if (pf) goto L_7b7366;
L_7b7190: /* 7b7190: xor eax, eax */
  eax = 0;
/* 7b7192: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b7195: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b719c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b719d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b719e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b719f: mov esp, ebp */
  esp = ebp;
/* 7b71a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b71a2: ret 8 */
  esp += 12; SPILL(); return;
L_7b71a5: /* 7b71a5: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 7b71ab: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7b71b1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7b71b3: mov ecx, edi */
  ecx = edi;
/* 7b71b5: mov dword ptr [edi + 0x3d4], eax */
  W32((uint32_t)(edi + 0x3d4u), eax);
/* 7b71bb: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x7b71c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b71c1: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b71c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b71c8: lea ecx, [edi + 0x3c8] */
  ecx = (uint32_t)(edi + 0x3c8u);
/* 7b71ce: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b71d0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7b71d3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b71d6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b71d9: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7b71dc: mov ecx, dword ptr [edi + 0x3b4] */
  ecx = R32((uint32_t)(edi + 0x3b4u));
/* 7b71e2: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b71e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b71ea: lea edx, [edi + 0x3bc] */
  edx = (uint32_t)(edi + 0x3bcu);
/* 7b71f0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b71f2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7b71f5: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7b71f8: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 7b71fe: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7b7201: or eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7b7206: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7b7209: mov dword ptr [edi + 0x350], eax */
  W32((uint32_t)(edi + 0x350u), eax);
L_7b720f: /* 7b720f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b7212: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b7213: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b7214: mov eax, 1 */
  eax = 0x1u;
/* 7b7219: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b7220: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b7221: mov esp, ebp */
  esp = ebp;
/* 7b7223: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b7224: ret 8 */
  esp += 12; SPILL(); return;
L_7b7227: /* 7b7227: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7b722du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b722d: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7b7230: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7232: je 0x7b720f */
  if (zf) goto L_7b720f;
L_7b7234: /* 7b7234: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b7236: je 0x7b720f */
  if (zf) goto L_7b720f;
L_7b7238: /* 7b7238: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b723b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7b723e: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7b7241: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b7244: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7b7247: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7b724a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7b724c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7b724e: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7b7251: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7b7254: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7b7257: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b725du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b725d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7b7260: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7b7263: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 7b7266: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7b7269: fcomp dword ptr [0xa0d2c0] */
  fpu_com(ST0, F32((uint32_t)(0xa0d2c0u)));
  FPOP();
/* 7b726f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7271: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7274: je 0x7b7190 */
  if (zf) goto L_7b7190;
L_7b727a: /* 7b727a: test byte ptr [edi + 0x350], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x350u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7281: je 0x7b7291 */
  if (zf) goto L_7b7291;
L_7b7283: /* 7b7283: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7b7285: mov ecx, ebx */
  ecx = ebx;
/* 7b7287: call dword ptr [eax + 0x184] */
  { uint32_t t = R32((uint32_t)(eax + 0x184u)); esp -= 4; W32(esp, 0x7b728du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b728d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b728f: jne 0x7b72a5 */
  if (!zf) goto L_7b72a5;
L_7b7291: /* 7b7291: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7b7294: fcomp dword ptr [0xa0d2bc] */
  fpu_com(ST0, F32((uint32_t)(0xa0d2bcu)));
  FPOP();
/* 7b729a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b729c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b729f: je 0x7b7190 */
  if (zf) goto L_7b7190;
L_7b72a5: /* 7b72a5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7b72a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b72aa: je 0x7b72b9 */
  if (zf) goto L_7b72b9;
L_7b72ac: /* 7b72ac: test byte ptr [edi + 0x350], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x350u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b72b3: jne 0x7b733a */
  if (!zf) goto L_7b733a;
L_7b72b9: /* 7b72b9: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7b72bf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7b72c1: fmul qword ptr [0xa0d188] */
  ST0 = ST0 * (F64((uint32_t)(0xa0d188u)));
/* 7b72c7: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7b72cd: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7b72d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b72d3: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 7b72d6: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7b72dd: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7b72e0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b72e3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7b72e6: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7b72ed: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7b72f4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7b72f7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b72f9: mov eax, esp */
  eax = esp;
/* 7b72fb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b72fd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b7300: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7b7303: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7306: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b7309: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7b730e: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 7b7311: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7312: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b7315: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b7316: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b731c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b731d: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* 7b7320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7321: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7b7327u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b7327: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7b732a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b732c: je 0x7b720f */
  if (zf) goto L_7b720f;
L_7b7332: /* 7b7332: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b7334: je 0x7b720f */
  if (zf) goto L_7b720f;
L_7b733a: /* 7b733a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7b733d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b733f: je 0x7b734e */
  if (zf) goto L_7b734e;
L_7b7341: /* 7b7341: test byte ptr [edi + 0x350], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x350u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7348: je 0x7b7190 */
  if (zf) goto L_7b7190;
L_7b734e: /* 7b734e: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7b7354: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7b7357: fdivr st(1) */
  ST0 = STI(1) / ST0;
/* 7b7359: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7b735b: fcomp dword ptr [0xa0d2b8] */
  fpu_com(ST0, F32((uint32_t)(0xa0d2b8u)));
  FPOP();
/* 7b7361: jmp 0x7b7183 */
  goto L_7b7183;
L_7b7366: /* 7b7366: mov ecx, dword ptr [0xcfa1e0] */
  ecx = R32((uint32_t)(0xcfa1e0u));
/* 7b736c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b736d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7b736f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7b7371: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 7b7377: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b7378: call 0x6c7ad6 */
  esp -= 4; W32(esp, 0x7b737du); SPILL(); f_6c7ad6(); if (g_unwind) return; RELOAD();
/* 7b737d: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7b7383: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7b7389: mov eax, dword ptr [ebx + 0x2d4] */
  eax = R32((uint32_t)(ebx + 0x2d4u));
/* 7b738f: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7b7392: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 7b7395: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7b7398: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7b739b: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7b739e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7b73a0: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7b73a3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b73a6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b73a9: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 7b73af: mov ecx, dword ptr [ebx + 0x2d4] */
  ecx = R32((uint32_t)(ebx + 0x2d4u));
/* 7b73b5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7b73b8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b73bb: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b73be: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b73c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7b73c4: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7b73c7: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7b73ca: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 7b73d0: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 7b73d3: mov edx, ecx */
  edx = ecx;
/* 7b73d5: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7b73d8: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7b73db: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 7b73dd: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 7b73e3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b73e6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b73e9: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 7b73ef: mov eax, dword ptr [ebx + 0x2d4] */
  eax = R32((uint32_t)(ebx + 0x2d4u));
/* 7b73f5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7b73f8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b73fb: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b73fe: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7401: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7b7404: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7b7407: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7b740a: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7b7410: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7b7413: mov ecx, eax */
  ecx = eax;
/* 7b7415: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7b7417: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7b741a: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7b741d: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 7b7423: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b7426: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b7429: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 7b742f: mov edx, dword ptr [ebx + 0x2d4] */
  edx = R32((uint32_t)(ebx + 0x2d4u));
/* 7b7435: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7b7438: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b743b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b743e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7441: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7b7444: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7b7447: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 7b744d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7b7450: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 7b7456: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7b7459: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 7b745c: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7b745f: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 7b7461: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b7464: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b7467: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 7b746a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7b746d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b7470: xor eax, eax */
  eax = 0;
/* 7b7472: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b7475: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7478: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 7b747b: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 7b747e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7b7481: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 7b7487: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 7b748a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b7490u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b7490: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 7b7493: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 7b7496: mov esi, 1 */
  esi = 0x1u;
/* 7b749b: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7b749e: mov edi, edi */
  edi = edi;
L_7b74a0: /* 7b74a0: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b74a3: jge 0x7b74e3 */
  if ((sf == of)) goto L_7b74e3;
L_7b74a5: /* 7b74a5: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 7b74a8: lea ecx, [ebp + ecx*4 - 0xa4] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xffffff5cu);
/* 7b74af: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b74b5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b74b5: fcom dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
/* 7b74b8: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 7b74bb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b74bd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b74c0: jne 0x7b74cb */
  if (!zf) goto L_7b74cb;
L_7b74c2: /* 7b74c2: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 7b74c5: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7b74c8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7b74c9: jmp 0x7b74a0 */
  goto L_7b74a0;
L_7b74cb: /* 7b74cb: fcom dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
/* 7b74ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b74d0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b74d3: jp 0x7b74de */
  if (pf) goto L_7b74de;
L_7b74d5: /* 7b74d5: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 7b74d8: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7b74db: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7b74dc: jmp 0x7b74a0 */
  goto L_7b74a0;
L_7b74de: /* 7b74de: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b74e0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7b74e1: jmp 0x7b74a0 */
  goto L_7b74a0;
L_7b74e3: /* 7b74e3: xor esi, esi */
  esi = 0;
L_7b74e5: /* 7b74e5: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b74e8: jge 0x7b7190 */
  if ((sf == of)) goto L_7b7190;
L_7b74ee: /* 7b74ee: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b74f1: je 0x7b7563 */
  if (zf) goto L_7b7563;
L_7b74f3: /* 7b74f3: cmp esi, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b74f6: je 0x7b7563 */
  if (zf) goto L_7b7563;
L_7b74f8: /* 7b74f8: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7b74fe: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b7500: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b7503: mov ecx, esp */
  ecx = esp;
/* 7b7505: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7b750c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b750f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b7511: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7b7518: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b751b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b751e: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7b7525: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7528: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7b752b: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7b7530: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b7533: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b7534: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 7b7537: lea ecx, [ebp + edx*4 - 0xa4] */
  ecx = (uint32_t)(ebp + edx*4 + 0xffffff5cu);
/* 7b753e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b753f: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b7545: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b7546: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7b7549: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b754a: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7b7550u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b7550: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7b7553: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7555: je 0x7b720f */
  if (zf) goto L_7b720f;
L_7b755b: /* 7b755b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b755d: je 0x7b720f */
  if (zf) goto L_7b720f;
L_7b7563: /* 7b7563: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7b7564: jmp 0x7b74e5 */
  goto L_7b74e5;
}

void f_7b7569(void) {
  LOAD_REGS();
L_7b7569: /* 7b7569: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 7b756f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b7574: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7b7577: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b7578: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 7b757b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b7580u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b7580(); return;
}

void f_7b7580(void) {
  LOAD_REGS();
L_7b7580: /* 7b7580: push 0xa0d278 */
  { uint32_t v = 0xa0d278u; esp -= 4; W32(esp, v); }
/* 7b7585: push 0xacfa88 */
  { uint32_t v = 0xacfa88u; esp -= 4; W32(esp, v); }
/* 7b758a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b7590u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b7590: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b7593: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b7595: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b7597: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b759cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b759c: guest_badaddr(0x7b759c); return;
}

void f_7b7720(void) {
  LOAD_REGS();
L_7b7720: /* 7b7720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b7721: mov ebp, esp */
  ebp = esp;
/* 7b7723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b7725: push 0x9cf040 */
  { uint32_t v = 0x9cf040u; esp -= 4; W32(esp, v); }
/* 7b772a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b7730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b7738: sub esp, 0x170 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b773e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b773f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b7740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b7741: mov edi, ecx */
  edi = ecx;
/* 7b7743: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 7b7749: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b774c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b774f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b7756: jne 0x7b7be4 */
  if (!zf) goto L_7b7be4;
L_7b775c: /* 7b775c: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 7b775f: mov eax, dword ptr [ebx + 0xa4] */
  eax = R32((uint32_t)(ebx + 0xa4u));
/* 7b7765: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7767: je 0x7b7be4 */
  if (zf) goto L_7b7be4;
L_7b776d: /* 7b776d: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 7b7773: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7775: je 0x7b7be4 */
  if (zf) goto L_7b7be4;
L_7b777b: /* 7b777b: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b7781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7783: je 0x7b7be4 */
  if (zf) goto L_7b7be4;
L_7b7789: /* 7b7789: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 7b778f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7b7792: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7b7795: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b779b: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7b779e: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7b77a4: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 7b77a7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7b77aa: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7b77ad: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b77b0: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b77b6u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b77b6: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7b77bc: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7b77bf: fld dword ptr [ecx + 0x3a8] */
  { double v = F32((uint32_t)(ecx + 0x3a8u)); FPUSH(v); }
/* 7b77c5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b77c8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7b77ca: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7b77cd: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 7b77cf: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 7b77d2: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 7b77d8: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7b77de: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7b77e4: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7b77e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b77e8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b77eb: jne 0x7b77f5 */
  if (!zf) goto L_7b77f5;
L_7b77ed: /* 7b77ed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b77ef: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_7b77f5: /* 7b77f5: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 7b77f7: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 7b77fa: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 7b77fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b77ff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7802: jnp 0x7b7be4 */
  if (!pf) goto L_7b7be4;
L_7b7808: /* 7b7808: mov eax, dword ptr [ecx + 0x394] */
  eax = R32((uint32_t)(ecx + 0x394u));
/* 7b780e: test ah, 3 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7811: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b7814: je 0x7b783c */
  if (zf) goto L_7b783c;
L_7b7816: /* 7b7816: mov edx, dword ptr [ecx + 0xc0] */
  edx = R32((uint32_t)(ecx + 0xc0u));
/* 7b781c: cmp edx, dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b7822: jne 0x7b783c */
  if (!zf) goto L_7b783c;
L_7b7824: /* 7b7824: mov eax, 1 */
  eax = 0x1u;
/* 7b7829: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b782c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b7833: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b7834: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b7835: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b7836: mov esp, ebp */
  esp = ebp;
/* 7b7838: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b7839: ret 0x14 */
  esp += 24; SPILL(); return;
L_7b783c: /* 7b783c: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 7b783f: je 0x7b788c */
  if (zf) goto L_7b788c;
L_7b7841: /* 7b7841: movzx eax, byte ptr [ecx + 0xc8] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0xc8u)));
/* 7b7848: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 7b784e: mov cl, byte ptr [ebx + 0xc8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0xc8u))) & 0xffu);
/* 7b7854: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 7b7857: mov eax, dword ptr [edx + 0x8c] */
  eax = R32((uint32_t)(edx + 0x8cu));
/* 7b785d: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7b7860: mov eax, 1 */
  eax = 0x1u;
/* 7b7865: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 7b7867: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7b786a: mov ebx, ecx */
  ebx = ecx;
/* 7b786c: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7b786f: mov ecx, dword ptr [ebx + esi*8 + 0x124] */
  ecx = R32((uint32_t)(ebx + esi*8 + 0x124u));
/* 7b7876: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7b7877: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7b7879: mov eax, dword ptr [ebx + esi*8 + 0x128] */
  eax = R32((uint32_t)(ebx + esi*8 + 0x128u));
/* 7b7880: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7b7882: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7b7884: jne 0x7b7824 */
  if (!zf) goto L_7b7824;
L_7b7886: /* 7b7886: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7889: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
L_7b788c: /* 7b788c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7b788e: jns 0x7b7be4 */
  if (!sf) goto L_7b7be4;
L_7b7894: /* 7b7894: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b789a: fld dword ptr [eax + 0x444] */
  { double v = F32((uint32_t)(eax + 0x444u)); FPUSH(v); }
/* 7b78a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b78a2: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7b78a8: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b78ad: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b78b3: mov eax, dword ptr [eax + 0x170] */
  eax = R32((uint32_t)(eax + 0x170u));
/* 7b78b9: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7b78bc: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7b78bf: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 7b78c2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7b78c5: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x7b78cau); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 7b78ca: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b78d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b78d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b78d5: mov eax, esp */
  eax = esp;
/* 7b78d7: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7b78de: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7b78e1: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7b78e3: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7b78ea: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7b78ed: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7b78f0: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7b78f7: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b78fa: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7b78fd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7b78ff: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 7b7902: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7903: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7b7906: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7907: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b7908: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7b790b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b790c: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7b7912u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b7912: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7b7915: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7b791b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b791d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7920: jnp 0x7b7824 */
  if (!pf) goto L_7b7824;
L_7b7926: /* 7b7926: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7b792c: mov eax, dword ptr [ecx + 0x394] */
  eax = R32((uint32_t)(ecx + 0x394u));
/* 7b7932: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7935: je 0x7b79f2 */
  if (zf) goto L_7b79f2;
L_7b793b: /* 7b793b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7b793e: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 7b7944: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 7b7947: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7b794a: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 7b794d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b794f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7952: jne 0x7b79f2 */
  if (!zf) goto L_7b79f2;
L_7b7958: /* 7b7958: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 7b795b: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7b795e: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7b7961: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b7964: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7b7967: mov eax, esp */
  eax = esp;
/* 7b7969: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7b7970: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7b7973: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7b7975: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7b797c: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7b797f: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7b7982: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7b7989: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b798c: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7b798f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7b7991: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7b7994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7995: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 7b7998: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7999: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7b799c: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b79a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b79a3: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7b79a6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7b79a9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b79ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b79ac: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7b79b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b79b2: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7b79b5: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 7b79b8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7b79bb: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7b79be: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 7b79c1: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7b79c4: fsub dword ptr [ebp - 0x70] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff90u)));
/* 7b79c7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7b79ca: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7b79cd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b79d0: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b79d6u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b79d6: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7b79d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7b79db: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7b79dd: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 7b79e0: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7b79e3: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b79e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b79e7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b79e9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b79ec: je 0x7b7824 */
  if (zf) goto L_7b7824;
L_7b79f2: /* 7b79f2: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7b79f8: mov eax, dword ptr [ecx + 0x394] */
  eax = R32((uint32_t)(ecx + 0x394u));
/* 7b79fe: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7a01: je 0x7b7be4 */
  if (zf) goto L_7b7be4;
L_7b7a07: /* 7b7a07: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7b7a0a: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 7b7a10: fmul dword ptr [0xa0d2f8] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d2f8u)));
/* 7b7a16: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 7b7a1d: mov esi, dword ptr [edx + 0x510] */
  esi = R32((uint32_t)(edx + 0x510u));
/* 7b7a23: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
L_7b7a26: /* 7b7a26: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7a28: je 0x7b7afa */
  if (zf) goto L_7b7afa;
L_7b7a2e: /* 7b7a2e: test byte ptr [esi + 0x390], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x390u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7a35: je 0x7b7aef */
  if (zf) goto L_7b7aef;
L_7b7a3b: /* 7b7a3b: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b7a41: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7b7a47: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7b7a4d: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b7a52: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7b7a58: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7b7a5b: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7b7a5e: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7b7a64: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7b7a66: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7b7a69: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7b7a6c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b7a6f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b7a75u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b7a75: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b7a78: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7b7a7b: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7b7a81: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7a84: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 7b7a8a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7b7a8d: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7b7a93: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 7b7a99: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7b7a9f: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 7b7aa5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7b7aa8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7b7aab: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7b7aae: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b7ab4u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b7ab4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b7ab7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7b7aba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7abd: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 7b7ac0: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 7b7ac3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7ac5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7ac8: jp 0x7b7aef */
  if (pf) goto L_7b7aef;
L_7b7aca: /* 7b7aca: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7b7acd: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 7b7ad0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7ad2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7ad5: jp 0x7b7aef */
  if (pf) goto L_7b7aef;
L_7b7ad7: /* 7b7ad7: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7b7ada: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7b7add: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b7ae2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b7ae2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7ae3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b7ae4: lea ecx, [ebp - 0x17c] */
  ecx = (uint32_t)(ebp + 0xfffffe84u);
/* 7b7aea: call 0x6c13c0 */
  esp -= 4; W32(esp, 0x7b7aefu); SPILL(); f_6c13c0(); if (g_unwind) return; RELOAD();
L_7b7aef: /* 7b7aef: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 7b7af5: jmp 0x7b7a26 */
  goto L_7b7a26;
L_7b7afa: /* 7b7afa: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 7b7afd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7aff: je 0x7b7be4 */
  if (zf) goto L_7b7be4;
L_7b7b05: /* 7b7b05: xor esi, esi */
  esi = 0;
L_7b7b07: /* 7b7b07: cmp esi, dword ptr [ebp - 0x7c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff84u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b7b0a: jge 0x7b7be4 */
  if ((sf == of)) goto L_7b7be4;
L_7b7b10: /* 7b7b10: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7b7b13: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7b7b19: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b7b1c: mov edx, esp */
  edx = esp;
/* 7b7b1e: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7b7b20: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7b7b23: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b7b26: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7b7b29: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7b7b2c: mov edx, dword ptr [ebp + esi*4 - 0x17c] */
  edx = R32((uint32_t)(ebp + esi*4 + 0xfffffe84u));
/* 7b7b33: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7b7b39: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7b7b3b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b7b3e: mov ecx, esp */
  ecx = esp;
/* 7b7b40: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7b7b42: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7b7b45: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7b7b48: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7b7b4b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7b7b4e: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7b7b54: call 0x6c5db2 */
  esp -= 4; W32(esp, 0x7b7b59u); SPILL(); f_6c5db2(); if (g_unwind) return; RELOAD();
/* 7b7b59: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7b5b: je 0x7b7bae */
  if (zf) goto L_7b7bae;
L_7b7b5d: /* 7b7b5d: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7b7b60: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7b7b66: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b7b69: mov ecx, esp */
  ecx = esp;
/* 7b7b6b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b7b6d: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7b7b70: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b7b73: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7b7b76: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7b7b79: mov ecx, dword ptr [ebp + esi*4 - 0x17c] */
  ecx = R32((uint32_t)(ebp + esi*4 + 0xfffffe84u));
/* 7b7b80: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b7b86: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7b7b88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b7b8b: mov edx, esp */
  edx = esp;
/* 7b7b8d: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7b7b8f: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 7b7b92: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7b7b95: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7b7b98: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7b7b9b: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7b7ba1: call 0x6c5db2 */
  esp -= 4; W32(esp, 0x7b7ba6u); SPILL(); f_6c5db2(); if (g_unwind) return; RELOAD();
/* 7b7ba6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7ba8: jne 0x7b7824 */
  if (!zf) goto L_7b7824;
L_7b7bae: /* 7b7bae: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7b7baf: jmp 0x7b7b07 */
  goto L_7b7b07;
L_7b7be4: /* 7b7be4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b7be7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b7be8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b7be9: xor eax, eax */
  eax = 0;
/* 7b7beb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b7bf2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b7bf3: mov esp, ebp */
  esp = ebp;
/* 7b7bf5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b7bf6: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7b7bb4(void) {
  LOAD_REGS();
L_7b7bb4: /* 7b7bb4: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7b7bb7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b7bbc: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7b7bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7bc0: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7b7bc3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b7bc8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b7bc8(); return;
}

void f_7b7bc8(void) {
  LOAD_REGS();
L_7b7bc8: /* 7b7bc8: push 0xa0d2c4 */
  { uint32_t v = 0xa0d2c4u; esp -= 4; W32(esp, v); }
/* 7b7bcd: push 0xacfa90 */
  { uint32_t v = 0xacfa90u; esp -= 4; W32(esp, v); }
/* 7b7bd2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b7bd8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b7bd8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b7bdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b7bdd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b7bdf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b7be4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7b7be4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b7be7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b7be8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b7be9: xor eax, eax */
  eax = 0;
/* 7b7beb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b7bf2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b7bf3: mov esp, ebp */
  esp = ebp;
/* 7b7bf5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b7bf6: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7b7d40(void) {
  LOAD_REGS();
L_7b7d40: /* 7b7d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b7d41: mov ebp, esp */
  ebp = esp;
/* 7b7d43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b7d45: push 0x9cf050 */
  { uint32_t v = 0x9cf050u; esp -= 4; W32(esp, v); }
/* 7b7d4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b7d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b7d51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b7d58: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b7d5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b7d5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b7d5d: mov esi, ecx */
  esi = ecx;
/* 7b7d5f: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* 7b7d65: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7d67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b7d68: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b7d6b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b7d72: je 0x7b8093 */
  if (zf) goto L_7b8093;
L_7b7d78: /* 7b7d78: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 7b7d7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7d80: je 0x7b8093 */
  if (zf) goto L_7b8093;
L_7b7d86: /* 7b7d86: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7b7d8c: fld qword ptr [eax + 0xd0] */
  { double v = F64((uint32_t)(eax + 0xd0u)); FPUSH(v); }
/* 7b7d92: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7b7d95: fsub dword ptr [0xa08920] */
  ST0 = ST0 - (F32((uint32_t)(0xa08920u)));
/* 7b7d9b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7b7d9e: fld dword ptr [ecx + 0x490] */
  { double v = F32((uint32_t)(ecx + 0x490u)); FPUSH(v); }
/* 7b7da4: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 7b7da7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7da9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7dac: jne 0x7b7e14 */
  if (!zf) goto L_7b7e14;
L_7b7dae: /* 7b7dae: fld dword ptr [ecx + 0x48c] */
  { double v = F32((uint32_t)(ecx + 0x48cu)); FPUSH(v); }
/* 7b7db4: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 7b7dba: fld dword ptr [ecx + 0x488] */
  { double v = F32((uint32_t)(ecx + 0x488u)); FPUSH(v); }
/* 7b7dc0: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 7b7dc6: fld dword ptr [ecx + 0x484] */
  { double v = F32((uint32_t)(ecx + 0x484u)); FPUSH(v); }
/* 7b7dcc: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7b7dcf: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 7b7dd5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7b7dd8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7b7ddb: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7b7dde: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b7de4u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b7de4: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7b7de7: fcomp dword ptr [0xa08704] */
  fpu_com(ST0, F32((uint32_t)(0xa08704u)));
  FPOP();
/* 7b7ded: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7def: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7df2: jp 0x7b7e14 */
  if (pf) goto L_7b7e14;
L_7b7df4: /* 7b7df4: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7b7df7: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* 7b7dfd: fmul dword ptr [0xa0c18c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c18cu)));
/* 7b7e03: fcomp dword ptr [eax + 0x498] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x498u)));
  FPOP();
/* 7b7e09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7e0b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7e0e: jnp 0x7b8093 */
  if (!pf) goto L_7b8093;
L_7b7e14: /* 7b7e14: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* 7b7e1a: fld dword ptr [ecx + 0x4a8] */
  { double v = F32((uint32_t)(ecx + 0x4a8u)); FPUSH(v); }
/* 7b7e20: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 7b7e23: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7e25: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7e28: jne 0x7b7e90 */
  if (!zf) goto L_7b7e90;
L_7b7e2a: /* 7b7e2a: fld dword ptr [ecx + 0x4a4] */
  { double v = F32((uint32_t)(ecx + 0x4a4u)); FPUSH(v); }
/* 7b7e30: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 7b7e36: fld dword ptr [ecx + 0x4a0] */
  { double v = F32((uint32_t)(ecx + 0x4a0u)); FPUSH(v); }
/* 7b7e3c: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 7b7e42: fld dword ptr [ecx + 0x49c] */
  { double v = F32((uint32_t)(ecx + 0x49cu)); FPUSH(v); }
/* 7b7e48: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7b7e4b: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 7b7e51: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7b7e54: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7b7e57: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7b7e5a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b7e60u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b7e60: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7b7e63: fcomp dword ptr [0xa08704] */
  fpu_com(ST0, F32((uint32_t)(0xa08704u)));
  FPOP();
/* 7b7e69: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7e6b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7e6e: jp 0x7b7e90 */
  if (pf) goto L_7b7e90;
L_7b7e70: /* 7b7e70: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7b7e73: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* 7b7e79: fmul dword ptr [0xa0c18c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c18cu)));
/* 7b7e7f: fcomp dword ptr [ecx + 0x4b0] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4b0u)));
  FPOP();
/* 7b7e85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7e87: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7e8a: jnp 0x7b8093 */
  if (!pf) goto L_7b8093;
L_7b7e90: /* 7b7e90: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b7e93: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* 7b7e99: fsub dword ptr [0xa0d33c] */
  ST0 = ST0 - (F32((uint32_t)(0xa0d33cu)));
/* 7b7e9f: fcom dword ptr [ecx + 0x490] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x490u)));
/* 7b7ea5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7ea7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7eaa: jne 0x7b7eed */
  if (!zf) goto L_7b7eed;
L_7b7eac: /* 7b7eac: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7eaf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b7eb1: mov dword ptr [ecx + 0x490], edx */
  W32((uint32_t)(ecx + 0x490u), edx);
/* 7b7eb7: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* 7b7ebd: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7b7ec3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b7ec5: add ecx, 0x484 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x484u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b7ecb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b7ecd: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7b7ed0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b7ed3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b7ed6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7b7ed9: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7b7edc: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* 7b7ee2: mov dword ptr [ecx + 0x498], edx */
  W32((uint32_t)(ecx + 0x498u), edx);
/* 7b7ee8: jmp 0x7b7fe8 */
  goto L_7b7fe8;
L_7b7eed: /* 7b7eed: fcomp dword ptr [ecx + 0x4a8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4a8u)));
  FPOP();
/* 7b7ef3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7ef5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7ef8: jne 0x7b7f39 */
  if (!zf) goto L_7b7f39;
L_7b7efa: /* 7b7efa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7efd: mov dword ptr [ecx + 0x4a8], eax */
  W32((uint32_t)(ecx + 0x4a8u), eax);
/* 7b7f03: mov edx, dword ptr [esi + 0xa4] */
  edx = R32((uint32_t)(esi + 0xa4u));
/* 7b7f09: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 7b7f0f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b7f11: add edx, 0x49c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x49cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7b7f17: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b7f19: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7b7f1c: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7b7f1f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7b7f22: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b7f25: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7b7f28: mov edx, dword ptr [esi + 0xa4] */
  edx = R32((uint32_t)(esi + 0xa4u));
/* 7b7f2e: mov dword ptr [edx + 0x4b0], eax */
  W32((uint32_t)(edx + 0x4b0u), eax);
/* 7b7f34: jmp 0x7b7fe8 */
  goto L_7b7fe8;
L_7b7f39: /* 7b7f39: fld dword ptr [ecx + 0x48c] */
  { double v = F32((uint32_t)(ecx + 0x48cu)); FPUSH(v); }
/* 7b7f3f: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 7b7f45: fld dword ptr [ecx + 0x488] */
  { double v = F32((uint32_t)(ecx + 0x488u)); FPUSH(v); }
/* 7b7f4b: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 7b7f51: fld dword ptr [ecx + 0x484] */
  { double v = F32((uint32_t)(ecx + 0x484u)); FPUSH(v); }
/* 7b7f57: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7b7f5a: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 7b7f60: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7b7f63: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7b7f66: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7b7f69: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b7f6fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b7f6f: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7b7f72: fcomp dword ptr [0xa08704] */
  fpu_com(ST0, F32((uint32_t)(0xa08704u)));
  FPOP();
/* 7b7f78: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7f7a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7f7d: jp 0x7b7f95 */
  if (pf) goto L_7b7f95;
L_7b7f7f: /* 7b7f7f: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* 7b7f85: fld dword ptr [ecx + 0x498] */
  { double v = F32((uint32_t)(ecx + 0x498u)); FPUSH(v); }
/* 7b7f8b: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 7b7f8e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7f90: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7f93: jnp 0x7b7fab */
  if (!pf) goto L_7b7fab;
L_7b7f95: /* 7b7f95: mov ecx, dword ptr [esi + 0xa4] */
  ecx = R32((uint32_t)(esi + 0xa4u));
/* 7b7f9b: fld dword ptr [ecx + 0x4b0] */
  { double v = F32((uint32_t)(ecx + 0x4b0u)); FPUSH(v); }
/* 7b7fa1: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 7b7fa4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b7fa6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b7fa9: jp 0x7b7fe8 */
  if (pf) goto L_7b7fe8;
L_7b7fab: /* 7b7fab: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b7fae: mov dword ptr [ecx + 0x490], edx */
  W32((uint32_t)(ecx + 0x490u), edx);
/* 7b7fb4: mov eax, dword ptr [esi + 0xa4] */
  eax = R32((uint32_t)(esi + 0xa4u));
/* 7b7fba: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7b7fc0: add eax, 0x484 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x484u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b7fc5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b7fc7: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7b7fcd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7b7fd0: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7b7fd6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b7fd9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b7fdc: mov edx, dword ptr [esi + 0xa4] */
  edx = R32((uint32_t)(esi + 0xa4u));
/* 7b7fe2: mov dword ptr [edx + 0x498], eax */
  W32((uint32_t)(edx + 0x498u), eax);
L_7b7fe8: /* 7b7fe8: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7b7fee: mov edi, dword ptr [ecx + 0x514] */
  edi = R32((uint32_t)(ecx + 0x514u));
/* 7b7ff4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_7b7ff7: /* 7b7ff7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b7ff9: je 0x7b8093 */
  if (zf) goto L_7b8093;
L_7b7fff: /* 7b7fff: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 7b8005: cmp edx, dword ptr [esi + 0xa4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xa4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b800b: je 0x7b805b */
  if (zf) goto L_7b805b;
L_7b800d: /* 7b800d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b800e: mov ecx, esp */
  ecx = esp;
/* 7b8010: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7b8013: push 0x156 */
  { uint32_t v = 0x156u; esp -= 4; W32(esp, v); }
/* 7b8018: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7b801eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7b801e: mov ecx, edi */
  ecx = edi;
/* 7b8020: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7b8026u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7b8026: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8028: je 0x7b805b */
  if (zf) goto L_7b805b;
L_7b802a: /* 7b802a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b802b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b802c: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7b8032: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b8034: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b8037: mov ecx, esp */
  ecx = esp;
/* 7b8039: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b803b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7b803e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b8041: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b8044: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7b8047: mov ecx, edi */
  ecx = edi;
/* 7b8049: call 0x6cbea1 */
  esp -= 4; W32(esp, 0x7b804eu); SPILL(); f_6cbea1(); if (g_unwind) return; RELOAD();
/* 7b804e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8050: je 0x7b805b */
  if (zf) goto L_7b805b;
L_7b8052: /* 7b8052: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8053: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b8054: mov ecx, edi */
  ecx = edi;
/* 7b8056: call 0x6c26bc */
  esp -= 4; W32(esp, 0x7b805bu); SPILL(); f_6c26bc(); if (g_unwind) return; RELOAD();
L_7b805b: /* 7b805b: mov edi, dword ptr [edi + 0x364] */
  edi = R32((uint32_t)(edi + 0x364u));
/* 7b8061: jmp 0x7b7ff7 */
  goto L_7b7ff7;
L_7b8093: /* 7b8093: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b8096: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b8097: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8098: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b809f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b80a0: mov esp, ebp */
  esp = ebp;
/* 7b80a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b80a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7b8063(void) {
  LOAD_REGS();
L_7b8063: /* 7b8063: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b8066: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b806b: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7b806e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b806f: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7b8072: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8077u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b8077(); return;
}

void f_7b8077(void) {
  LOAD_REGS();
L_7b8077: /* 7b8077: push 0xa0d2fc */
  { uint32_t v = 0xa0d2fcu; esp -= 4; W32(esp, v); }
/* 7b807c: push 0xacfa98 */
  { uint32_t v = 0xacfa98u; esp -= 4; W32(esp, v); }
/* 7b8081: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b8087u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b8087: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b808a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b808c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b808e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8093u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7b8093: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b8096: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b8097: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8098: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b809f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b80a0: mov esp, ebp */
  esp = ebp;
/* 7b80a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b80a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7b8190(void) {
  LOAD_REGS();
L_7b8190: /* 7b8190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b8191: mov ebp, esp */
  ebp = esp;
/* 7b8193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b8195: push 0x9cf060 */
  { uint32_t v = 0x9cf060u; esp -= 4; W32(esp, v); }
/* 7b819a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b81a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b81a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b81a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b81ab: mov eax, dword ptr [0xce845c] */
  eax = R32((uint32_t)(0xce845cu));
/* 7b81b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b81b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b81b2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7b81b5: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7b81bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b81bc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b81bf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b81c6: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7b81c9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b81cb: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b81cd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b81d0: mov ecx, dword ptr [edx + 0x3b4] */
  ecx = R32((uint32_t)(edx + 0x3b4u));
/* 7b81d6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b81d8: je 0x7b8219 */
  if (zf) goto L_7b8219;
L_7b81da: /* 7b81da: call dword ptr [0xcfa600] */
  esp -= 4; W32(esp, 0x7b81e0u); SPILL(); f_4e1ba9(); if (g_unwind) return; /* Core!?IsValid@UObject@@QAEHXZ */ RELOAD();
/* 7b81e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b81e2: jne 0x7b81fc */
  if (!zf) goto L_7b81fc;
L_7b81e4: /* 7b81e4: push 0x711 */
  { uint32_t v = 0x711u; esp -= 4; W32(esp, v); }
/* 7b81e9: push 0xacfaa0 */
  { uint32_t v = 0xacfaa0u; esp -= 4; W32(esp, v); }
/* 7b81ee: push 0xacfab4 */
  { uint32_t v = 0xacfab4u; esp -= 4; W32(esp, v); }
/* 7b81f3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7b81f9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7b81f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b81fc: /* 7b81fc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b81ff: mov eax, dword ptr [ecx + 0x3b4] */
  eax = R32((uint32_t)(ecx + 0x3b4u));
/* 7b8205: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8207: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8208: call 0x6c4b60 */
  esp -= 4; W32(esp, 0x7b820du); SPILL(); f_6c4b60(); if (g_unwind) return; RELOAD();
/* 7b820d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b820f: jne 0x7b8219 */
  if (!zf) goto L_7b8219;
L_7b8211: /* 7b8211: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b8214: call 0x6c6b72 */
  esp -= 4; W32(esp, 0x7b8219u); SPILL(); f_6c6b72(); if (g_unwind) return; RELOAD();
L_7b8219: /* 7b8219: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7b821e: mov ecx, dword ptr [0xce845c] */
  ecx = R32((uint32_t)(0xce845cu));
/* 7b8224: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7b8227: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b8229: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b822b: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b822e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7b8230: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b8231: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b8233: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b8236: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8237: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b823e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b823f: mov esp, ebp */
  esp = ebp;
/* 7b8241: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b8242: ret  */
  esp += 4; SPILL(); return;
}

void f_7b8243(void) {
  LOAD_REGS();
L_7b8243: /* 7b8243: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b8246: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b824b: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b824e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b824f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7b8252: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8257u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b8257(); return;
}

void f_7b8257(void) {
  LOAD_REGS();
L_7b8257: /* 7b8257: push 0xa0d340 */
  { uint32_t v = 0xa0d340u; esp -= 4; W32(esp, v); }
/* 7b825c: push 0xacfac8 */
  { uint32_t v = 0xacfac8u; esp -= 4; W32(esp, v); }
/* 7b8261: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b8267u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b8267: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b826a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b826c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b826e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8273u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b8273: guest_badaddr(0x7b8273); return;
}

void f_7b82c0(void) {
  LOAD_REGS();
L_7b82c0: /* 7b82c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b82c1: mov ebp, esp */
  ebp = esp;
/* 7b82c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b82c5: push 0x9cf070 */
  { uint32_t v = 0x9cf070u; esp -= 4; W32(esp, v); }
/* 7b82ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b82d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b82d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b82d8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b82db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b82dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b82dd: mov esi, ecx */
  esi = ecx;
/* 7b82df: test byte ptr [esi + 0x350], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x350u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b82e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b82e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b82ea: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b82f1: je 0x7b83c9 */
  if (zf) goto L_7b83c9;
L_7b82f7: /* 7b82f7: mov eax, dword ptr [esi + 0x3a0] */
  eax = R32((uint32_t)(esi + 0x3a0u));
/* 7b82fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b82ff: jne 0x7b83c9 */
  if (!zf) goto L_7b83c9;
L_7b8305: /* 7b8305: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b830b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7b830e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b830f: mov ecx, edi */
  ecx = edi;
/* 7b8311: call 0x6c6118 */
  esp -= 4; W32(esp, 0x7b8316u); SPILL(); f_6c6118(); if (g_unwind) return; RELOAD();
/* 7b8316: mov ebx, eax */
  ebx = eax;
/* 7b8318: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b831a: je 0x7b83c9 */
  if (zf) goto L_7b83c9;
L_7b8320: /* 7b8320: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8322: je 0x7b83c9 */
  if (zf) goto L_7b83c9;
L_7b8328: /* 7b8328: mov eax, dword ptr [esi + 0x350] */
  eax = R32((uint32_t)(esi + 0x350u));
/* 7b832e: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7b8334: mov edi, eax */
  edi = eax;
/* 7b8336: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8338: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7b833b: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b8341: and eax, 0xffffff7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7b8346: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8348: mov dword ptr [esi + 0x390], 0 */
  W32((uint32_t)(esi + 0x390u), 0x0u);
/* 7b8352: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 7b8358: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b835a: shr edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 7b835d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b835e: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 7b8361: call dword ptr [edx + 0x19c] */
  { uint32_t t = R32((uint32_t)(edx + 0x19cu)); esp -= 4; W32(esp, 0x7b8367u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8367: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8369: je 0x7b8380 */
  if (zf) goto L_7b8380;
L_7b836b: /* 7b836b: mov eax, ebx */
  eax = ebx;
/* 7b836d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b8370: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b8377: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b8378: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8379: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b837a: mov esp, ebp */
  esp = ebp;
/* 7b837c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b837d: ret 4 */
  esp += 8; SPILL(); return;
L_7b8380: /* 7b8380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8382: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8384: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8386: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b8389: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 7b838f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b8391: mov ecx, esp */
  ecx = esp;
/* 7b8393: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b8395: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7b8398: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b839b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b839e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7b83a1: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b83a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b83a8: call 0x6caa7e */
  esp -= 4; W32(esp, 0x7b83adu); SPILL(); f_6caa7e(); if (g_unwind) return; RELOAD();
/* 7b83ad: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7b83b0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b83b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b83b8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b83bb: jne 0x7b83df */
  if (!zf) goto L_7b83df;
L_7b83bd: /* 7b83bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b83bf: mov ecx, esi */
  ecx = esi;
/* 7b83c1: call 0x6cc897 */
  esp -= 4; W32(esp, 0x7b83c6u); SPILL(); f_6cc897(); if (g_unwind) return; RELOAD();
/* 7b83c6: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_7b83c9: /* 7b83c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b83cc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b83cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b83d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b83d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b83d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b83d9: mov esp, ebp */
  esp = ebp;
/* 7b83db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b83dc: ret 4 */
  esp += 8; SPILL(); return;
L_7b83df: /* 7b83df: mov edx, dword ptr [esi + 0x350] */
  edx = R32((uint32_t)(esi + 0x350u));
/* 7b83e5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b83e8: shl edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7b83eb: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 7b83ed: and edi, 0x80 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 7b83f3: mov eax, edx */
  eax = edx;
/* 7b83f5: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7b83f7: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 7b83fd: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 7b8403: jmp 0x7b83c9 */
  goto L_7b83c9;
}

void f_7b8405(void) {
  LOAD_REGS();
L_7b8405: /* 7b8405: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b8408: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b840d: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7b8410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8411: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7b8414: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8419u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b8419(); return;
}

void f_7b8419(void) {
  LOAD_REGS();
L_7b8419: /* 7b8419: push 0xa0d38c */
  { uint32_t v = 0xa0d38cu; esp -= 4; W32(esp, v); }
/* 7b841e: push 0xacfae0 */
  { uint32_t v = 0xacfae0u; esp -= 4; W32(esp, v); }
/* 7b8423: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b8429u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b8429: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b842c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b842e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8430: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8435u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b8435: guest_badaddr(0x7b8435); return;
}

void f_7b84a0(void) {
  LOAD_REGS();
L_7b84a0: /* 7b84a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b84a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7b84a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b84a7: je 0x7b84c9 */
  if (zf) goto L_7b84c9;
L_7b84a9: /* 7b84a9: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7b84ae: mov ecx, esi */
  ecx = esi;
/* 7b84b0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b84b6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b84b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b84b8: jne 0x7b84c0 */
  if (!zf) goto L_7b84c0;
L_7b84ba: /* 7b84ba: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b84be: jne 0x7b84c9 */
  if (!zf) goto L_7b84c9;
L_7b84c0: /* 7b84c0: mov eax, 1 */
  eax = 0x1u;
/* 7b84c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b84c6: ret 4 */
  esp += 8; SPILL(); return;
L_7b84c9: /* 7b84c9: xor eax, eax */
  eax = 0;
/* 7b84cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b84cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7b84e0(void) {
  LOAD_REGS();
L_7b84e0: /* 7b84e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b84e1: mov ebp, esp */
  ebp = esp;
/* 7b84e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b84e5: push 0x9cf080 */
  { uint32_t v = 0x9cf080u; esp -= 4; W32(esp, v); }
/* 7b84ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b84f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b84f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b84f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b84fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b84fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b84fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b84fe: mov esi, ecx */
  esi = ecx;
/* 7b8500: mov ecx, dword ptr [esi + 0x78c] */
  ecx = R32((uint32_t)(esi + 0x78cu));
/* 7b8506: xor edi, edi */
  edi = 0;
/* 7b8508: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b850a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b850d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7b8510: je 0x7b8519 */
  if (zf) goto L_7b8519;
L_7b8512: /* 7b8512: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b8514: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b8516: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7b8519u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b8519: /* 7b8519: mov ecx, dword ptr [esi + 0x784] */
  ecx = R32((uint32_t)(esi + 0x784u));
/* 7b851f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8521: mov dword ptr [esi + 0x78c], edi */
  W32((uint32_t)(esi + 0x78cu), edi);
/* 7b8527: je 0x7b8530 */
  if (zf) goto L_7b8530;
L_7b8529: /* 7b8529: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b852b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b852d: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7b8530u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b8530: /* 7b8530: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b8533: mov dword ptr [esi + 0x784], edi */
  W32((uint32_t)(esi + 0x784u), edi);
/* 7b8539: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b853a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b853b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b8542: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b8543: mov esp, ebp */
  esp = ebp;
/* 7b8545: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b8546: ret  */
  esp += 4; SPILL(); return;
}

void f_7b8547(void) {
  LOAD_REGS();
L_7b8547: /* 7b8547: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b854a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b854f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7b8552: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b8553: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b8556: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b855bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b855b(); return;
}

void f_7b855b(void) {
  LOAD_REGS();
L_7b855b: /* 7b855b: push 0xa0d3cc */
  { uint32_t v = 0xa0d3ccu; esp -= 4; W32(esp, v); }
/* 7b8560: push 0xacfaf8 */
  { uint32_t v = 0xacfaf8u; esp -= 4; W32(esp, v); }
/* 7b8565: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b856bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b856b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b856e: xor edi, edi */
  edi = 0;
/* 7b8570: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b8571: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b8572: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8577u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b8577: guest_badaddr(0x7b8577); return;
}

void f_7b85b0(void) {
  LOAD_REGS();
L_7b85b0: /* 7b85b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b85b1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7b85b5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b85b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b85b8: je 0x7b85d8 */
  if (zf) goto L_7b85d8;
L_7b85ba: /* 7b85ba: push 0xb81b88 */
  { uint32_t v = 0xb81b88u; esp -= 4; W32(esp, v); }
/* 7b85bf: mov ecx, esi */
  ecx = esi;
/* 7b85c1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b85c7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b85c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b85c9: jne 0x7b8600 */
  if (!zf) goto L_7b8600;
L_7b85cb: /* 7b85cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b85cc: mov ecx, esi */
  ecx = esi;
/* 7b85ce: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7b85d4u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7b85d4: mov edi, eax */
  edi = eax;
/* 7b85d6: jmp 0x7b85dd */
  goto L_7b85dd;
L_7b85d8: /* 7b85d8: mov edi, 0xacfb00 */
  edi = 0xacfb00u;
L_7b85dd: /* 7b85dd: mov ecx, 0xb81b88 */
  ecx = 0xb81b88u;
/* 7b85e2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7b85e8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7b85e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b85e9: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7b85ee: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b85f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b85f1: push 0xacfb0c */
  { uint32_t v = 0xacfb0cu; esp -= 4; W32(esp, v); }
/* 7b85f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b85f7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7b85fdu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7b85fd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b8600: /* 7b8600: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b8601: mov eax, esi */
  eax = esi;
/* 7b8603: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8604: ret  */
  esp += 4; SPILL(); return;
}

void f_7b8630(void) {
  LOAD_REGS();
L_7b8630: /* 7b8630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8631: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7b8635: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8637: je 0x7b864e */
  if (zf) goto L_7b864e;
L_7b8639: /* 7b8639: push 0xb69e78 */
  { uint32_t v = 0xb69e78u; esp -= 4; W32(esp, v); }
/* 7b863e: mov ecx, esi */
  ecx = esi;
/* 7b8640: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b8646u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b8646: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8648: je 0x7b864e */
  if (zf) goto L_7b864e;
L_7b864a: /* 7b864a: mov eax, esi */
  eax = esi;
/* 7b864c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b864d: ret  */
  esp += 4; SPILL(); return;
L_7b864e: /* 7b864e: xor eax, eax */
  eax = 0;
/* 7b8650: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8651: ret  */
  esp += 4; SPILL(); return;
}

void f_7b8670(void) {
  LOAD_REGS();
L_7b8670: /* 7b8670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8671: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7b8675: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8677: je 0x7b868e */
  if (zf) goto L_7b868e;
L_7b8679: /* 7b8679: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7b867e: mov ecx, esi */
  ecx = esi;
/* 7b8680: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b8686u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b8686: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8688: je 0x7b868e */
  if (zf) goto L_7b868e;
L_7b868a: /* 7b868a: mov eax, esi */
  eax = esi;
/* 7b868c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b868d: ret  */
  esp += 4; SPILL(); return;
L_7b868e: /* 7b868e: xor eax, eax */
  eax = 0;
/* 7b8690: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8691: ret  */
  esp += 4; SPILL(); return;
}

void f_7b86b0(void) {
  LOAD_REGS();
L_7b86b0: /* 7b86b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b86b1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7b86b5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b86b7: je 0x7b86ce */
  if (zf) goto L_7b86ce;
L_7b86b9: /* 7b86b9: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 7b86be: mov ecx, esi */
  ecx = esi;
/* 7b86c0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b86c6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b86c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b86c8: je 0x7b86ce */
  if (zf) goto L_7b86ce;
L_7b86ca: /* 7b86ca: mov eax, esi */
  eax = esi;
/* 7b86cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b86cd: ret  */
  esp += 4; SPILL(); return;
L_7b86ce: /* 7b86ce: xor eax, eax */
  eax = 0;
/* 7b86d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b86d1: ret  */
  esp += 4; SPILL(); return;
}

void f_7b86f0(void) {
  LOAD_REGS();
L_7b86f0: /* 7b86f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b86f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7b86f5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b86f7: je 0x7b870e */
  if (zf) goto L_7b870e;
L_7b86f9: /* 7b86f9: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7b86fe: mov ecx, esi */
  ecx = esi;
/* 7b8700: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b8706u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b8706: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8708: je 0x7b870e */
  if (zf) goto L_7b870e;
L_7b870a: /* 7b870a: mov eax, esi */
  eax = esi;
/* 7b870c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b870d: ret  */
  esp += 4; SPILL(); return;
L_7b870e: /* 7b870e: xor eax, eax */
  eax = 0;
/* 7b8710: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8711: ret  */
  esp += 4; SPILL(); return;
}

void f_7b8730(void) {
  LOAD_REGS();
L_7b8730: /* 7b8730: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b8731: mov ebp, esp */
  ebp = esp;
/* 7b8733: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b8735: push 0x9cf0b4 */
  { uint32_t v = 0x9cf0b4u; esp -= 4; W32(esp, v); }
/* 7b873a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b8740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8741: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b8748: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b874b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b874c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b874d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b874e: mov ebx, ecx */
  ebx = ecx;
/* 7b8750: xor edi, edi */
  edi = 0;
/* 7b8752: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b8755: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b8758: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7b875b: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7b8761u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7b8761: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b8764: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b8767: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b876a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b876d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b876e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b8771: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7b8774: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8775: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b877a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b877b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b877f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b8782u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8782: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b8785: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7b878bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7b878b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b878e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b8791: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b8794: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b8795: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b8798: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 7b879b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b879c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b87a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b87a2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7b87a6: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b87a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b87a9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b87ac: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b87af: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7b87b2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b87b5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b87b6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b87b9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b87bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b87bd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b87c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b87c3: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b87c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b87c6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b87c9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b87ca: mov eax, edx */
  eax = edx;
/* 7b87cc: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b87cf: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b87d2: jne 0x7b87e9 */
  if (!zf) goto L_7b87e9;
L_7b87d4: /* 7b87d4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b87d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b87d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b87d9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b87dc: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b87e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b87e3: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b87e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b87e9: /* 7b87e9: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 7b87ef: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 7b87f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b87f3: call 0x6c9610 */
  esp -= 4; W32(esp, 0x7b87f8u); SPILL(); f_6c9610(); if (g_unwind) return; RELOAD();
/* 7b87f8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b87fb: push 0xacf690 */
  { uint32_t v = 0xacf690u; esp -= 4; W32(esp, v); }
/* 7b8800: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7b8803: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b8804: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b8807: mov esi, eax */
  esi = eax;
/* 7b8809: call dword ptr [0xcfa3d0] */
  esp -= 4; W32(esp, 0x7b880fu); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* 7b880f: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7b8812: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b8813: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b8816: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b8817: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* 7b8819: mov ecx, eax */
  ecx = eax;
/* 7b881b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7b881e: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7b8824u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7b8824: mov ecx, eax */
  ecx = eax;
/* 7b8826: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7b882a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b8830u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b8830: add esi, 0x114 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7b8836: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8837: mov ecx, esi */
  ecx = esi;
/* 7b8839: call 0x6cbc0d */
  esp -= 4; W32(esp, 0x7b883eu); SPILL(); f_6cbc0d(); if (g_unwind) return; RELOAD();
/* 7b883e: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b8841: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7b8844: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b884au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b884a: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7b884d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7b8851: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b8857u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b8857: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b885a: je 0x7b8877 */
  if (zf) goto L_7b8877;
L_7b885c: /* 7b885c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b885f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b8865u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b8865: push 0xacf694 */
  { uint32_t v = 0xacf694u; esp -= 4; W32(esp, v); }
/* 7b886a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b886b: push 0xacf6a0 */
  { uint32_t v = 0xacf6a0u; esp -= 4; W32(esp, v); }
/* 7b8870: mov ecx, esi */
  ecx = esi;
/* 7b8872: call 0x6c2d15 */
  esp -= 4; W32(esp, 0x7b8877u); SPILL(); f_6c2d15(); if (g_unwind) return; RELOAD();
L_7b8877: /* 7b8877: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b887a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b887e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b8884u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b8884: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b8887: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b888b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b8891u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b8891: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b8894: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b8895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8896: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b889d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b889e: mov esp, ebp */
  esp = ebp;
/* 7b88a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b88a1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b88a4(void) {
  LOAD_REGS();
L_7b88a4: /* 7b88a4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b88a7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b88ac: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7b88af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b88b0: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7b88b3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b88b8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b88b8(); return;
}

void f_7b88b8(void) {
  LOAD_REGS();
L_7b88b8: /* 7b88b8: push 0xa0d410 */
  { uint32_t v = 0xa0d410u; esp -= 4; W32(esp, v); }
/* 7b88bd: push 0xacf6bc */
  { uint32_t v = 0xacf6bcu; esp -= 4; W32(esp, v); }
/* 7b88c2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b88c8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b88c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b88cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b88cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b88cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b88d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b88d4: guest_badaddr(0x7b88d4); return;
}

void f_7b8950(void) {
  LOAD_REGS();
L_7b8950: /* 7b8950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b8951: mov ebp, esp */
  ebp = esp;
/* 7b8953: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b8955: push 0x9cf0d0 */
  { uint32_t v = 0x9cf0d0u; esp -= 4; W32(esp, v); }
/* 7b895a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b8960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8961: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b8968: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b896b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b896e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b8971: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b8972: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b8973: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8974: mov esi, ecx */
  esi = ecx;
/* 7b8976: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b8979: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b897c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b897d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b8980: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b8987: jne 0x7b899e */
  if (!zf) goto L_7b899e;
L_7b8989: /* 7b8989: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b898c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b898d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b898f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b8992: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8993: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b8998: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b899eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b899e: /* 7b899e: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7b89a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b89a6: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 7b89ac: jne 0x7b89c2 */
  if (!zf) goto L_7b89c2;
L_7b89ae: /* 7b89ae: push 0xcb */
  { uint32_t v = 0xcbu; esp -= 4; W32(esp, v); }
/* 7b89b3: push 0xacf6f8 */
  { uint32_t v = 0xacf6f8u; esp -= 4; W32(esp, v); }
/* 7b89b8: push 0xacf70c */
  { uint32_t v = 0xacf70cu; esp -= 4; W32(esp, v); }
/* 7b89bd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b89bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b89bf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b89c2: /* 7b89c2: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7b89c8: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 7b89cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b89cd: jne 0x7b89e3 */
  if (!zf) goto L_7b89e3;
L_7b89cf: /* 7b89cf: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* 7b89d4: push 0xacf714 */
  { uint32_t v = 0xacf714u; esp -= 4; W32(esp, v); }
/* 7b89d9: push 0xacf728 */
  { uint32_t v = 0xacf728u; esp -= 4; W32(esp, v); }
/* 7b89de: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b89e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b89e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b89e3: /* 7b89e3: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7b89e9: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* 7b89ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b89ee: jne 0x7b8a04 */
  if (!zf) goto L_7b8a04;
L_7b89f0: /* 7b89f0: push 0xcd */
  { uint32_t v = 0xcdu; esp -= 4; W32(esp, v); }
/* 7b89f5: push 0xacf738 */
  { uint32_t v = 0xacf738u; esp -= 4; W32(esp, v); }
/* 7b89fa: push 0xacf74c */
  { uint32_t v = 0xacf74cu; esp -= 4; W32(esp, v); }
/* 7b89ff: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b8a01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8a01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b8a04: /* 7b8a04: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7b8a0a: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 7b8a0d: mov eax, dword ptr [ecx + 0x10c] */
  eax = R32((uint32_t)(ecx + 0x10cu));
/* 7b8a13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8a15: jne 0x7b8a2b */
  if (!zf) goto L_7b8a2b;
L_7b8a17: /* 7b8a17: push 0xce */
  { uint32_t v = 0xceu; esp -= 4; W32(esp, v); }
/* 7b8a1c: push 0xacf76c */
  { uint32_t v = 0xacf76cu; esp -= 4; W32(esp, v); }
/* 7b8a21: push 0xacf780 */
  { uint32_t v = 0xacf780u; esp -= 4; W32(esp, v); }
/* 7b8a26: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b8a28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8a28: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b8a2b: /* 7b8a2b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7b8a31: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 7b8a34: mov eax, dword ptr [edx + 0x10c] */
  eax = R32((uint32_t)(edx + 0x10cu));
/* 7b8a3a: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7b8a3d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b8a3f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7b8a42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b8a45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b8a46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8a47: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7b8a49: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b8a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b8a51: mov esp, ebp */
  esp = ebp;
/* 7b8a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b8a54: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b8a57(void) {
  LOAD_REGS();
L_7b8a57: /* 7b8a57: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b8a5a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b8a5f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b8a62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8a63: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7b8a66: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8a6bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b8a6b(); return;
}

void f_7b8a6b(void) {
  LOAD_REGS();
L_7b8a6b: /* 7b8a6b: push 0xa0d460 */
  { uint32_t v = 0xa0d460u; esp -= 4; W32(esp, v); }
/* 7b8a70: push 0xacf7ac */
  { uint32_t v = 0xacf7acu; esp -= 4; W32(esp, v); }
/* 7b8a75: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b8a7bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b8a7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b8a7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8a80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8a82: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8a87u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b8a87: guest_badaddr(0x7b8a87); return;
}

void f_7b8ae0(void) {
  LOAD_REGS();
L_7b8ae0: /* 7b8ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b8ae1: mov ebp, esp */
  ebp = esp;
/* 7b8ae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b8ae5: push 0x9cf0e0 */
  { uint32_t v = 0x9cf0e0u; esp -= 4; W32(esp, v); }
/* 7b8aea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b8af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8af1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b8af8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b8afb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b8afc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8afd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b8b00: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b8b03: xor ebx, ebx */
  ebx = 0;
/* 7b8b05: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7b8b08: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b8b0b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b8b0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b8b0d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b8b10: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b8b13: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b8b16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8b17: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b8b1c: mov edi, ecx */
  edi = ecx;
/* 7b8b1e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b8b21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8b22: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7b8b25: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b8b28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8b28: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b8b2b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b8b2c: mov eax, edx */
  eax = edx;
/* 7b8b2e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b8b31: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8b34: jne 0x7b8b4b */
  if (!zf) goto L_7b8b4b;
L_7b8b36: /* 7b8b36: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b8b39: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b8b3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b8b3b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b8b3e: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b8b44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8b45: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b8b4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b8b4b: /* 7b8b4b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b8b4e: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8b50: mov dword ptr [edi + 0x548], ecx */
  W32((uint32_t)(edi + 0x548u), ecx);
/* 7b8b56: jne 0x7b8b60 */
  if (!zf) goto L_7b8b60;
L_7b8b58: /* 7b8b58: mov dword ptr [edi + 0x54c], ebx */
  W32((uint32_t)(edi + 0x54cu), ebx);
/* 7b8b5e: jmp 0x7b8b81 */
  goto L_7b8b81;
L_7b8b60: /* 7b8b60: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8b62: mov esi, ecx */
  esi = ecx;
/* 7b8b64: je 0x7b8b79 */
  if (zf) goto L_7b8b79;
L_7b8b66: /* 7b8b66: push 0xb69e78 */
  { uint32_t v = 0xb69e78u; esp -= 4; W32(esp, v); }
/* 7b8b6b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b8b71u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b8b71: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8b73: je 0x7b8b79 */
  if (zf) goto L_7b8b79;
L_7b8b75: /* 7b8b75: mov eax, esi */
  eax = esi;
/* 7b8b77: jmp 0x7b8b7b */
  goto L_7b8b7b;
L_7b8b79: /* 7b8b79: xor eax, eax */
  eax = 0;
L_7b8b7b: /* 7b8b7b: mov dword ptr [edi + 0x54c], eax */
  W32((uint32_t)(edi + 0x54cu), eax);
L_7b8b81: /* 7b8b81: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7b8b83: mov ecx, edi */
  ecx = edi;
/* 7b8b85: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x7b8b8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8b8b: cmp dword ptr [edi + 0x548], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x548u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8b91: jne 0x7b8b99 */
  if (!zf) goto L_7b8b99;
L_7b8b93: /* 7b8b93: mov dword ptr [edi + 0x54c], ebx */
  W32((uint32_t)(edi + 0x54cu), ebx);
L_7b8b99: /* 7b8b99: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b8b9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b8b9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8b9e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b8ba5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b8ba6: mov esp, ebp */
  esp = ebp;
/* 7b8ba8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b8ba9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b8bac(void) {
  LOAD_REGS();
L_7b8bac: /* 7b8bac: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b8baf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b8bb4: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b8bb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b8bb8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7b8bbb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8bc0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b8bc0(); return;
}

void f_7b8bc0(void) {
  LOAD_REGS();
L_7b8bc0: /* 7b8bc0: push 0xa0d4b8 */
  { uint32_t v = 0xa0d4b8u; esp -= 4; W32(esp, v); }
/* 7b8bc5: push 0xacf7b4 */
  { uint32_t v = 0xacf7b4u; esp -= 4; W32(esp, v); }
/* 7b8bca: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b8bd0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b8bd0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b8bd3: xor ebx, ebx */
  ebx = 0;
/* 7b8bd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b8bd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b8bd7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8bdcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b8bdc: guest_badaddr(0x7b8bdc); return;
}

void f_7b8c20(void) {
  LOAD_REGS();
L_7b8c20: /* 7b8c20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b8c21: mov ebp, esp */
  ebp = esp;
/* 7b8c23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b8c25: push 0x9cf0f0 */
  { uint32_t v = 0x9cf0f0u; esp -= 4; W32(esp, v); }
/* 7b8c2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b8c30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8c31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b8c38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b8c3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b8c3e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b8c41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b8c42: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b8c43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8c44: mov esi, ecx */
  esi = ecx;
/* 7b8c46: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b8c49: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8c4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b8c4d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b8c50: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b8c57: jne 0x7b8c6e */
  if (!zf) goto L_7b8c6e;
L_7b8c59: /* 7b8c59: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b8c5c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b8c5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8c5f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b8c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8c63: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b8c68: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b8c6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b8c6e: /* 7b8c6e: mov esi, dword ptr [esi + 0x4c0] */
  esi = R32((uint32_t)(esi + 0x4c0u));
/* 7b8c74: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8c76: je 0x7b8ca0 */
  if (zf) goto L_7b8ca0;
L_7b8c78: /* 7b8c78: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 7b8c7d: mov ecx, esi */
  ecx = esi;
/* 7b8c7f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b8c85u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b8c85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8c87: je 0x7b8ca0 */
  if (zf) goto L_7b8ca0;
L_7b8c89: /* 7b8c89: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7b8c8c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8c8e: je 0x7b8ca0 */
  if (zf) goto L_7b8ca0;
L_7b8c90: /* 7b8c90: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7b8c96u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7b8c96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8c97: call dword ptr [0xcfa7e4] */
  esp -= 4; W32(esp, 0x7b8c9du); SPILL(); f_4e1898(); if (g_unwind) return; /* Core!?ResetConfig@UObject@@SAXPAVUClass@@@Z */ RELOAD();
/* 7b8c9d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b8ca0: /* 7b8ca0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b8ca3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b8ca4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b8ca5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b8cac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b8cad: mov esp, ebp */
  esp = ebp;
/* 7b8caf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b8cb0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b8cb3(void) {
  LOAD_REGS();
L_7b8cb3: /* 7b8cb3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b8cb6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b8cbb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7b8cbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b8cbf: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7b8cc2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8cc7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b8cc7(); return;
}

void f_7b8cc7(void) {
  LOAD_REGS();
L_7b8cc7: /* 7b8cc7: push 0xa0d510 */
  { uint32_t v = 0xa0d510u; esp -= 4; W32(esp, v); }
/* 7b8ccc: push 0xacf7bc */
  { uint32_t v = 0xacf7bcu; esp -= 4; W32(esp, v); }
/* 7b8cd1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b8cd7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b8cd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b8cda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8cdc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b8cde: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b8ce3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b8ce3: guest_badaddr(0x7b8ce3); return;
}

void f_7b8d30(void) {
  LOAD_REGS();
L_7b8d30: /* 7b8d30: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b8d36: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 7b8d3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b8d3c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b8d3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8d3e: mov esi, dword ptr [esp + 0x114] */
  esi = R32((uint32_t)(esp + 0x114u));
/* 7b8d45: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 7b8d4d: xor ebp, ebp */
  ebp = 0;
/* 7b8d4f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 7b8d51: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b8d54: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b8d57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b8d58: mov edi, ecx */
  edi = ecx;
/* 7b8d5a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b8d5b: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 7b8d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b8d60: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b8d63: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b8d66: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b8d6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8d6c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b8d6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8d6f: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7b8d75: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7b8d77: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8d79: je 0x7b8d88 */
  if (zf) goto L_7b8d88;
L_7b8d7b: /* 7b8d7b: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7b8d80: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b8d82: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b8d84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8d85: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7b8d88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b8d88: /* 7b8d88: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7b8d8e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b8d90: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8d92: mov ebx, eax */
  ebx = eax;
/* 7b8d94: jne 0x7b8d9a */
  if (!zf) goto L_7b8d9a;
L_7b8d96: /* 7b8d96: lea ebx, [esp + 0x28] */
  ebx = (uint32_t)(esp + 0x28u);
L_7b8d9a: /* 7b8d9a: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 7b8da2: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 7b8da4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b8da7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b8daa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b8dab: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 7b8daf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b8db0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b8db3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b8db6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b8dbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8dbc: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 7b8dc0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b8dc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8dc3: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7b8dc9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7b8dcb: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8dcd: je 0x7b8ddc */
  if (zf) goto L_7b8ddc;
L_7b8dcf: /* 7b8dcf: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7b8dd4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b8dd6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b8dd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8dd9: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7b8ddcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b8ddc: /* 7b8ddc: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7b8de2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b8de4: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8de6: je 0x7b8dee */
  if (zf) goto L_7b8dee;
L_7b8de8: /* 7b8de8: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7b8dec: jmp 0x7b8df6 */
  goto L_7b8df6;
L_7b8dee: /* 7b8dee: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 7b8df2: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_7b8df6: /* 7b8df6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b8df9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b8dfc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b8dff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b8e00: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b8e03: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 7b8e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b8e08: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b8e0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8e0e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b8e11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8e11: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b8e14: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b8e17: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b8e18: lea ecx, [esp + 0x108] */
  ecx = (uint32_t)(esp + 0x108u);
/* 7b8e1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b8e20: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b8e23: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b8e26: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b8e2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8e2c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b8e2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8e2f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b8e32: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7b8e3a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b8e3d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b8e3e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7b8e42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b8e43: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b8e46: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b8e49: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b8e4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8e4f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b8e52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b8e52: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b8e55: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b8e56: mov eax, edx */
  eax = edx;
/* 7b8e58: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b8e5b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8e5e: jne 0x7b8e75 */
  if (!zf) goto L_7b8e75;
L_7b8e60: /* 7b8e60: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b8e63: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b8e64: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b8e65: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b8e68: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b8e6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b8e6f: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b8e75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b8e75: /* 7b8e75: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 7b8e77: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7b8e7d: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 7b8e83: xor ecx, ecx */
  ecx = 0;
/* 7b8e85: mov dword ptr [esp + 0x90], ebp */
  W32((uint32_t)(esp + 0x90u), ebp);
/* 7b8e8c: mov dword ptr [esp + 0x94], ebp */
  W32((uint32_t)(esp + 0x94u), ebp);
/* 7b8e93: fsub dword ptr [0xa0b130] */
  ST0 = ST0 - (F32((uint32_t)(0xa0b130u)));
/* 7b8e99: mov dword ptr [esp + 0x98], ecx */
  W32((uint32_t)(esp + 0x98u), ecx);
/* 7b8ea0: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 7b8ea7: mov dword ptr [esp + 0xa0], ecx */
  W32((uint32_t)(esp + 0xa0u), ecx);
/* 7b8eae: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 7b8eb5: mov dword ptr [esp + 0xa4], ecx */
  W32((uint32_t)(esp + 0xa4u), ecx);
/* 7b8ebc: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7b8ec0: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 7b8ec7: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7b8ecb: mov dword ptr [esp + 0xac], ecx */
  W32((uint32_t)(esp + 0xacu), ecx);
/* 7b8ed2: mov dword ptr [esp + 0xb0], ebp */
  W32((uint32_t)(esp + 0xb0u), ebp);
/* 7b8ed9: mov dword ptr [esp + 0xb4], 0x3f800000 */
  W32((uint32_t)(esp + 0xb4u), 0x3f800000u);
/* 7b8ee4: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7b8ee8: mov dword ptr [esp + 0xb8], 0xffffffff */
  W32((uint32_t)(esp + 0xb8u), 0xffffffffu);
/* 7b8ef3: mov dword ptr [esp + 0xbc], ebp */
  W32((uint32_t)(esp + 0xbcu), ebp);
/* 7b8efa: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7b8efd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7b8eff: mov esi, dword ptr [eax + 0x514] */
  esi = R32((uint32_t)(eax + 0x514u));
/* 7b8f05: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8f07: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 7b8f0b: je 0x7b9447 */
  if (zf) goto L_7b9447;
L_7b8f11: /* 7b8f11: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8f13: je 0x7b941f */
  if (zf) goto L_7b941f;
L_7b8f19: /* 7b8f19: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b8f1f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8f21: je 0x7b941f */
  if (zf) goto L_7b941f;
L_7b8f27: /* 7b8f27: cmp dword ptr [eax + 0x46c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x46cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b8f2d: jle 0x7b941f */
  if ((zf || sf != of)) goto L_7b941f;
L_7b8f33: /* 7b8f33: test byte ptr [eax + 0x88], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8f3a: je 0x7b941f */
  if (zf) goto L_7b941f;
L_7b8f40: /* 7b8f40: mov edx, dword ptr [edi + 0x448] */
  edx = R32((uint32_t)(edi + 0x448u));
/* 7b8f46: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8f48: je 0x7b8f7b */
  if (zf) goto L_7b8f7b;
L_7b8f4a: /* 7b8f4a: mov ecx, dword ptr [esi + 0x448] */
  ecx = R32((uint32_t)(esi + 0x448u));
/* 7b8f50: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8f52: je 0x7b8f7b */
  if (zf) goto L_7b8f7b;
L_7b8f54: /* 7b8f54: mov ebx, dword ptr [edi + 0xb0] */
  ebx = R32((uint32_t)(edi + 0xb0u));
/* 7b8f5a: mov ebx, dword ptr [ebx + 0x508] */
  ebx = R32((uint32_t)(ebx + 0x508u));
/* 7b8f60: test byte ptr [ebx + 0x33c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x33cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b8f67: je 0x7b8f7b */
  if (zf) goto L_7b8f7b;
L_7b8f69: /* 7b8f69: mov edx, dword ptr [edx + 0x398] */
  edx = R32((uint32_t)(edx + 0x398u));
/* 7b8f6f: cmp edx, dword ptr [ecx + 0x398] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x398u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b8f75: je 0x7b941f */
  if (zf) goto L_7b941f;
L_7b8f7b: /* 7b8f7b: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 7b8f81: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 7b8f85: fsub dword ptr [esp + 0x110] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x110u)));
/* 7b8f8c: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 7b8f90: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b8f96: fsub dword ptr [esp + 0x10c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10cu)));
/* 7b8f9d: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7b8fa3: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 7b8fa7: fsub dword ptr [esp + 0x108] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x108u)));
/* 7b8fae: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 7b8fb2: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 7b8fb6: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 7b8fba: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 7b8fbe: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 7b8fc2: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 7b8fca: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 7b8fce: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b8fd0: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 7b8fd4: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 7b8fd8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7b8fda: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 7b8fde: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7b8fe0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b8fe2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 7b8fe6: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 7b8fea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b8fec: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7b8ff0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b8ff2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b8ff4: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7b8ffau); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7b8ffa: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 7b8ffe: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 7b9002: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 7b9006: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 7b900a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b900c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 7b9010: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 7b9014: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b9016: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 7b901d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7b9021: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b9027: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b9029: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b902c: jne 0x7b941f */
  if (!zf) goto L_7b941f;
L_7b9032: /* 7b9032: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 7b9036: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b903cu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b903c: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 7b9040: fcomp dword ptr [esp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x18u)));
  FPOP();
/* 7b9044: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b9046: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b9049: jnp 0x7b9074 */
  if (!pf) goto L_7b9074;
L_7b904b: /* 7b904b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7b904d: mov ecx, edi */
  ecx = edi;
/* 7b904f: call dword ptr [eax + 0x180] */
  { uint32_t t = R32((uint32_t)(eax + 0x180u)); esp -= 4; W32(esp, 0x7b9055u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b9055: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9057: je 0x7b941f */
  if (zf) goto L_7b941f;
L_7b905d: /* 7b905d: fld dword ptr [edi + 0x348] */
  { double v = F32((uint32_t)(edi + 0x348u)); FPUSH(v); }
/* 7b9063: fcomp dword ptr [edi + 0x580] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x580u)));
  FPOP();
/* 7b9069: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b906b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b906e: jnp 0x7b941f */
  if (!pf) goto L_7b941f;
L_7b9074: /* 7b9074: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7b9078: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b907b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7b907e: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x7b9084u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 7b9084: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7b9088: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 7b908c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7b9092: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b9095: fdiv dword ptr [esp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x10u)));
/* 7b9099: fst dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0);
/* 7b909d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 7b90a1: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 7b90a5: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 7b90a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b90a9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b90ac: jne 0x7b9259 */
  if (!zf) goto L_7b9259;
L_7b90b2: /* 7b90b2: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b90b8: fld dword ptr [eax + 0x448] */
  { double v = F32((uint32_t)(eax + 0x448u)); FPUSH(v); }
/* 7b90be: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 7b90c4: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7b90ca: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b90d0: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b90d6: mov dword ptr [esp + 0xc0], edx */
  W32((uint32_t)(esp + 0xc0u), edx);
/* 7b90dd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b90e0: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 7b90e7: mov edx, esp */
  edx = esp;
/* 7b90e9: mov dword ptr [esp + 0x88], 0 */
  W32((uint32_t)(esp + 0x88u), 0x0u);
/* 7b90f4: fstp dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0); FPOP();
/* 7b90fb: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 7b9102: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b9104: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7b9106: mov dword ptr [esp + 0x8c], 0 */
  W32((uint32_t)(esp + 0x8cu), 0x0u);
/* 7b9111: mov ebx, dword ptr [esp + 0x8c] */
  ebx = R32((uint32_t)(esp + 0x8cu));
/* 7b9118: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7b911b: mov dword ptr [esp + 0x90], 0 */
  W32((uint32_t)(esp + 0x90u), 0x0u);
/* 7b9126: mov ebx, dword ptr [esp + 0x90] */
  ebx = R32((uint32_t)(esp + 0x90u));
/* 7b912d: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 7b9130: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7b9135: lea edx, [esp + 0xd0] */
  edx = (uint32_t)(esp + 0xd0u);
/* 7b913c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b913d: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 7b9143: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7b9149: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b914a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b914b: lea edx, [esp + 0xac] */
  edx = (uint32_t)(esp + 0xacu);
/* 7b9152: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b9153: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7b9159u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b9159: cmp dword ptr [esp + 0x94], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x94u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9160: je 0x7b9236 */
  if (zf) goto L_7b9236;
L_7b9166: /* 7b9166: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b916c: fld dword ptr [eax + 0x448] */
  { double v = F32((uint32_t)(eax + 0x448u)); FPUSH(v); }
/* 7b9172: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b9178: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7b917e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b9181: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b9187: mov eax, dword ptr [eax + 0x170] */
  eax = R32((uint32_t)(eax + 0x170u));
/* 7b918d: fstp dword ptr [esp + 0x10c] */
  WF32((uint32_t)(esp + 0x10cu), ST0); FPOP();
/* 7b9194: mov dword ptr [esp + 0x108], eax */
  W32((uint32_t)(esp + 0x108u), eax);
/* 7b919b: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b91a1: fstp dword ptr [esp + 0x110] */
  WF32((uint32_t)(esp + 0x110u), ST0); FPOP();
/* 7b91a8: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 7b91ae: fld dword ptr [eax + 0x448] */
  { double v = F32((uint32_t)(eax + 0x448u)); FPUSH(v); }
/* 7b91b4: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 7b91bc: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7b91c2: mov ebx, dword ptr [esp + 0x70] */
  ebx = R32((uint32_t)(esp + 0x70u));
/* 7b91c6: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b91cc: mov dword ptr [esp + 0xf0], edx */
  W32((uint32_t)(esp + 0xf0u), edx);
/* 7b91d3: mov edx, esp */
  edx = esp;
/* 7b91d5: fstp dword ptr [esp + 0xf4] */
  WF32((uint32_t)(esp + 0xf4u), ST0); FPOP();
/* 7b91dc: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7b91de: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 7b91e6: fstp dword ptr [esp + 0xf8] */
  WF32((uint32_t)(esp + 0xf8u), ST0); FPOP();
/* 7b91ed: mov ebx, dword ptr [esp + 0x74] */
  ebx = R32((uint32_t)(esp + 0x74u));
/* 7b91f1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b91f3: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7b91f6: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 7b91fe: mov ebx, dword ptr [esp + 0x78] */
  ebx = R32((uint32_t)(esp + 0x78u));
/* 7b9202: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 7b9205: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7b920a: lea edx, [esp + 0x10c] */
  edx = (uint32_t)(esp + 0x10cu);
/* 7b9211: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b9212: lea edx, [esp + 0xf8] */
  edx = (uint32_t)(esp + 0xf8u);
/* 7b9219: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b921a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b921b: lea edx, [esp + 0xac] */
  edx = (uint32_t)(esp + 0xacu);
/* 7b9222: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b9223: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7b9229u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b9229: cmp dword ptr [esp + 0x94], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x94u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9230: jne 0x7b941f */
  if (!zf) goto L_7b941f;
L_7b9236: /* 7b9236: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b923c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7b9240: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 7b9244: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7b9246: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7b924a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 7b924e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7b9252: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b9254: jmp 0x7b941f */
  goto L_7b941f;
L_7b9259: /* 7b9259: cmp dword ptr [esp + 0x1c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b925d: jne 0x7b941f */
  if (!zf) goto L_7b941f;
L_7b9263: /* 7b9263: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7b9267: fmul dword ptr [esp + 0x8c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8cu)));
/* 7b926e: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 7b9270: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b9272: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9275: jne 0x7b941f */
  if (!zf) goto L_7b941f;
L_7b927b: /* 7b927b: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7b927f: fcomp dword ptr [esp + 0x88] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x88u)));
  FPOP();
/* 7b9286: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b9288: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b928b: jne 0x7b941f */
  if (!zf) goto L_7b941f;
L_7b9291: /* 7b9291: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b9297: fld dword ptr [eax + 0x448] */
  { double v = F32((uint32_t)(eax + 0x448u)); FPUSH(v); }
/* 7b929d: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 7b92a3: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7b92a9: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b92af: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b92b5: mov dword ptr [esp + 0xcc], edx */
  W32((uint32_t)(esp + 0xccu), edx);
/* 7b92bc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b92bf: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 7b92c6: mov edx, esp */
  edx = esp;
/* 7b92c8: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 7b92d0: fstp dword ptr [esp + 0xe0] */
  WF32((uint32_t)(esp + 0xe0u), ST0); FPOP();
/* 7b92d7: mov ebx, dword ptr [esp + 0x7c] */
  ebx = R32((uint32_t)(esp + 0x7cu));
/* 7b92db: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b92dd: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7b92df: mov dword ptr [esp + 0x80], 0 */
  W32((uint32_t)(esp + 0x80u), 0x0u);
/* 7b92ea: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* 7b92f1: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7b92f4: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* 7b92ff: mov ebx, dword ptr [esp + 0x84] */
  ebx = R32((uint32_t)(esp + 0x84u));
/* 7b9306: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 7b9309: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7b930e: lea edx, [esp + 0xdc] */
  edx = (uint32_t)(esp + 0xdcu);
/* 7b9315: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b9316: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 7b931c: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7b9322: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b9323: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b9324: lea edx, [esp + 0xac] */
  edx = (uint32_t)(esp + 0xacu);
/* 7b932b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b932c: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7b9332u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b9332: cmp dword ptr [esp + 0x94], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x94u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9339: je 0x7b940b */
  if (zf) goto L_7b940b;
L_7b933f: /* 7b933f: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b9345: fld dword ptr [eax + 0x448] */
  { double v = F32((uint32_t)(eax + 0x448u)); FPUSH(v); }
/* 7b934b: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 7b9351: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7b9357: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b935a: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b9360: mov eax, dword ptr [eax + 0x170] */
  eax = R32((uint32_t)(eax + 0x170u));
/* 7b9366: fstp dword ptr [esp + 0xe8] */
  WF32((uint32_t)(esp + 0xe8u), ST0); FPOP();
/* 7b936d: mov dword ptr [esp + 0xe4], eax */
  W32((uint32_t)(esp + 0xe4u), eax);
/* 7b9374: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b937a: fstp dword ptr [esp + 0xec] */
  WF32((uint32_t)(esp + 0xecu), ST0); FPOP();
/* 7b9381: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 7b9387: fld dword ptr [eax + 0x448] */
  { double v = F32((uint32_t)(eax + 0x448u)); FPUSH(v); }
/* 7b938d: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 7b9395: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7b939b: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 7b939f: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b93a5: mov dword ptr [esp + 0xfc], edx */
  W32((uint32_t)(esp + 0xfcu), edx);
/* 7b93ac: mov edx, esp */
  edx = esp;
/* 7b93ae: fstp dword ptr [esp + 0x100] */
  WF32((uint32_t)(esp + 0x100u), ST0); FPOP();
/* 7b93b5: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7b93b7: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 7b93bf: fstp dword ptr [esp + 0x104] */
  WF32((uint32_t)(esp + 0x104u), ST0); FPOP();
/* 7b93c6: mov ebx, dword ptr [esp + 0x68] */
  ebx = R32((uint32_t)(esp + 0x68u));
/* 7b93ca: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b93cc: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7b93cf: mov dword ptr [esp + 0x6c], 0 */
  W32((uint32_t)(esp + 0x6cu), 0x0u);
/* 7b93d7: mov ebx, dword ptr [esp + 0x6c] */
  ebx = R32((uint32_t)(esp + 0x6cu));
/* 7b93db: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 7b93de: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7b93e3: lea edx, [esp + 0xe8] */
  edx = (uint32_t)(esp + 0xe8u);
/* 7b93ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b93eb: lea edx, [esp + 0x104] */
  edx = (uint32_t)(esp + 0x104u);
/* 7b93f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b93f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b93f4: lea edx, [esp + 0xac] */
  edx = (uint32_t)(esp + 0xacu);
/* 7b93fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b93fc: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7b9402u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b9402: cmp dword ptr [esp + 0x94], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x94u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9409: jne 0x7b941f */
  if (!zf) goto L_7b941f;
L_7b940b: /* 7b940b: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b9411: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7b9415: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7b9419: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 7b941d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_7b941f: /* 7b941f: mov esi, dword ptr [esi + 0x364] */
  esi = R32((uint32_t)(esi + 0x364u));
/* 7b9425: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9427: jne 0x7b8f11 */
  if (!zf) goto L_7b8f11;
L_7b942d: /* 7b942d: mov eax, dword ptr [esp + 0x11c] */
  eax = R32((uint32_t)(esp + 0x11cu));
/* 7b9434: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7b9438: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b943a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b943b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b943c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b943d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b943e: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b9444: ret 8 */
  esp += 12; SPILL(); return;
L_7b9447: /* 7b9447: mov edx, dword ptr [esp + 0x11c] */
  edx = R32((uint32_t)(esp + 0x11cu));
/* 7b944e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b944f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b9450: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b9451: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7b9453: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b9454: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b945a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b9630(void) {
  LOAD_REGS();
L_7b9630: /* 7b9630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b9631: mov ebp, esp */
  ebp = esp;
/* 7b9633: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 7b9636: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b9639: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 7b963e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b963f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9640: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b9643: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7b964b: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 7b9651: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b9654: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b9657: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7b965b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b965c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b965d: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7b9661: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b9662: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b9665: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b9668: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b966d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b966e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b9671u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b9671: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7b9677: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7b9679: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b967b: je 0x7b968a */
  if (zf) goto L_7b968a;
L_7b967d: /* 7b967d: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7b9682: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b9684: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b9686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b9687: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7b968au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b968a: /* 7b968a: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7b9690: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b9692: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9694: je 0x7b969c */
  if (zf) goto L_7b969c;
L_7b9696: /* 7b9696: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7b969a: jmp 0x7b96a4 */
  goto L_7b96a4;
L_7b969c: /* 7b969c: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 7b96a0: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_7b96a4: /* 7b96a4: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 7b96ac: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 7b96b2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b96b5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b96b8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b96bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b96bc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b96bf: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 7b96c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b96c4: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b96c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b96ca: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b96cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b96cd: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7b96d3: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7b96d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b96d7: je 0x7b96e6 */
  if (zf) goto L_7b96e6;
L_7b96d9: /* 7b96d9: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7b96de: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b96e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b96e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b96e3: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7b96e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b96e6: /* 7b96e6: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7b96ec: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b96ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b96f0: je 0x7b96f8 */
  if (zf) goto L_7b96f8;
L_7b96f2: /* 7b96f2: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 7b96f6: jmp 0x7b9700 */
  goto L_7b9700;
L_7b96f8: /* 7b96f8: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 7b96fc: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
L_7b9700: /* 7b9700: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b9703: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b9706: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b9709: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b970a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b970d: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 7b9711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b9712: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b9717: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9718: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b971bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b971b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b971e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b9721: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b9722: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 7b9726: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b9727: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b972a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b972d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b9732: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9733: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b9736u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b9736: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b9739: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b973a: mov eax, edx */
  eax = edx;
/* 7b973c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b973f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9742: jne 0x7b975a */
  if (!zf) goto L_7b975a;
L_7b9744: /* 7b9744: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b9747: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b9748: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b974a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b974d: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b9753: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9754: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b975au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b975a: /* 7b975a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7b975e: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7b9764: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7b9767: xor ebx, ebx */
  ebx = 0;
/* 7b9769: xor edi, edi */
  edi = 0;
/* 7b976b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7b976d: jle 0x7b98b1 */
  if ((zf || sf != of)) goto L_7b98b1;
L_7b9773: /* 7b9773: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7b9776: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 7b9779: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b977b: je 0x7b988d */
  if (zf) goto L_7b988d;
L_7b9781: /* 7b9781: test byte ptr [esi + 0x88], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9788: je 0x7b988d */
  if (zf) goto L_7b988d;
L_7b978e: /* 7b978e: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7b9793: mov ecx, esi */
  ecx = esi;
/* 7b9795: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b979bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b979b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b979d: jne 0x7b988d */
  if (!zf) goto L_7b988d;
L_7b97a3: /* 7b97a3: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7b97a9: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 7b97ad: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7b97b3: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 7b97b7: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7b97bd: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 7b97c1: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 7b97c5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7b97c7: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 7b97cb: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7b97cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b97cf: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7b97d1: fmul dword ptr [esp + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x38u)));
/* 7b97d5: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7b97d7: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7b97d9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7b97dd: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 7b97df: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b97e1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7b97e5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b97eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b97ed: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b97f0: jne 0x7b988d */
  if (!zf) goto L_7b988d;
L_7b97f6: /* 7b97f6: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7b97fc: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 7b9800: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 7b9804: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 7b9808: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7b980e: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 7b9812: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 7b9816: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7b981c: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 7b9820: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 7b9824: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b982au); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b982a: fcom dword ptr [0xa0d2bc] */
  fpu_com(ST0, F32((uint32_t)(0xa0d2bcu)));
/* 7b9830: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b9832: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b9835: jp 0x7b988b */
  if (pf) goto L_7b988b;
L_7b9837: /* 7b9837: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b983a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7b983d: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x7b9843u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 7b9843: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 7b9847: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7b984b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7b984f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b9852: fdiv dword ptr [esp + 0x24] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x24u)));
/* 7b9856: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 7b985a: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 7b985c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b985e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9861: jne 0x7b988d */
  if (!zf) goto L_7b988d;
L_7b9863: /* 7b9863: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7b9867: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b9869: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b986a: call 0x6c4b60 */
  esp -= 4; W32(esp, 0x7b986fu); SPILL(); f_6c4b60(); if (g_unwind) return; RELOAD();
/* 7b986f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9871: je 0x7b988d */
  if (zf) goto L_7b988d;
L_7b9873: /* 7b9873: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7b9877: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7b987b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7b987f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b9881: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 7b9885: mov ebx, esi */
  ebx = esi;
/* 7b9887: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7b9889: jmp 0x7b988d */
  goto L_7b988d;
L_7b988b: /* 7b988b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7b988d: /* 7b988d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7b9891: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7b9897: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7b989a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7b989b: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b989d: jl 0x7b9773 */
  if ((sf != of)) goto L_7b9773;
L_7b98a3: /* 7b98a3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7b98a6: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7b98a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b98a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b98aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b98ab: mov esp, ebp */
  esp = ebp;
/* 7b98ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b98ae: ret 8 */
  esp += 12; SPILL(); return;
L_7b98b1: /* 7b98b1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7b98b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b98b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b98b6: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7b98b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b98b9: mov esp, ebp */
  esp = ebp;
/* 7b98bb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b98bc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b9970(void) {
  LOAD_REGS();
L_7b9970: /* 7b9970: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b9973: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b9974: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b9975: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9976: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 7b997a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b997d: xor ebp, ebp */
  ebp = 0;
/* 7b997f: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 7b9983: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b9986: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b9987: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b9988: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b998b: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 7b998f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b9990: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b9995: mov edi, ecx */
  edi = ecx;
/* 7b9997: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b999a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b999b: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 7b999f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b99a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b99a2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b99a5: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 7b99a9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b99ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b99ad: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7b99b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b99b2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b99b5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b99b8: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b99bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b99be: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b99c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b99c1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b99c4: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 7b99c8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b99cb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b99cc: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 7b99d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b99d1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b99d4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b99d7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b99dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b99dd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b99e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b99e0: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b99e3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b99e4: mov eax, edx */
  eax = edx;
/* 7b99e6: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b99e9: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b99ec: jne 0x7b9a03 */
  if (!zf) goto L_7b9a03;
L_7b99ee: /* 7b99ee: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b99f1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b99f2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b99f3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b99f6: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b99fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b99fd: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b9a03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b9a03: /* 7b9a03: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7b9a07: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9a09: je 0x7b9cd9 */
  if (zf) goto L_7b9cd9;
L_7b9a0f: /* 7b9a0f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b9a11: call dword ptr [eax + 0x184] */
  { uint32_t t = R32((uint32_t)(eax + 0x184u)); esp -= 4; W32(esp, 0x7b9a17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b9a17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9a19: je 0x7b9cd9 */
  if (zf) goto L_7b9cd9;
L_7b9a1f: /* 7b9a1f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7b9a23: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9a25: mov ebx, ecx */
  ebx = ecx;
/* 7b9a27: je 0x7b9cd9 */
  if (zf) goto L_7b9cd9;
L_7b9a2d: /* 7b9a2d: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7b9a32: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b9a38u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b9a38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9a3a: je 0x7b9cd9 */
  if (zf) goto L_7b9cd9;
L_7b9a40: /* 7b9a40: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7b9a46: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9a48: je 0x7b9cd9 */
  if (zf) goto L_7b9cd9;
L_7b9a4e: /* 7b9a4e: call 0x6c9a7f */
  esp -= 4; W32(esp, 0x7b9a53u); SPILL(); f_6c9a7f(); if (g_unwind) return; RELOAD();
/* 7b9a53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9a55: je 0x7b9c8b */
  if (zf) goto L_7b9c8b;
L_7b9a5b: /* 7b9a5b: cmp dword ptr [ebx + 0x33c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x33cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9a61: je 0x7b9c8b */
  if (zf) goto L_7b9c8b;
L_7b9a67: /* 7b9a67: cmp dword ptr [esp + 0x18], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9a6b: je 0x7b9c8b */
  if (zf) goto L_7b9c8b;
L_7b9a71: /* 7b9a71: mov ecx, ebx */
  ecx = ebx;
/* 7b9a73: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
/* 7b9a7b: xor esi, esi */
  esi = 0;
/* 7b9a7d: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x7b9a82u); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 7b9a82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9a84: je 0x7b9b01 */
  if (zf) goto L_7b9b01;
L_7b9a86: /* 7b9a86: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 7b9a8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b9a8d: call 0x6c1582 */
  esp -= 4; W32(esp, 0x7b9a92u); SPILL(); f_6c1582(); if (g_unwind) return; RELOAD();
/* 7b9a92: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b9a95: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9a97: je 0x7b9b01 */
  if (zf) goto L_7b9b01;
L_7b9a99: /* 7b9a99: lea edi, [eax + 0x794] */
  edi = (uint32_t)(eax + 0x794u);
/* 7b9a9f: lea ebp, [ebx + 0x170] */
  ebp = (uint32_t)(ebx + 0x170u);
/* 7b9aa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b9aa6: mov ecx, ebp */
  ecx = ebp;
/* 7b9aa8: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x7b9aaeu); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 7b9aae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9ab0: je 0x7b9afb */
  if (zf) goto L_7b9afb;
L_7b9ab2: /* 7b9ab2: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7b9ab6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9ab7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b9ab8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b9abb: mov ecx, esi */
  ecx = esi;
/* 7b9abd: mov eax, esp */
  eax = esp;
/* 7b9abf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b9ac1: mov edx, esi */
  edx = esi;
/* 7b9ac3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7b9ac6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b9ac9: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 7b9acf: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 7b9ad3: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 7b9ad7: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 7b9adb: call 0x6c8986 */
  esp -= 4; W32(esp, 0x7b9ae0u); SPILL(); f_6c8986(); if (g_unwind) return; RELOAD();
/* 7b9ae0: mov esi, eax */
  esi = eax;
/* 7b9ae2: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 7b9ae4: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 7b9ae6: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  zf = (r) == 0;
  esi = r;
  }
/* 7b9ae8: jne 0x7b9afb */
  if (!zf) goto L_7b9afb;
L_7b9aea: /* 7b9aea: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 7b9aed: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7b9aef: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7b9af2: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 7b9af5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7b9af8: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
L_7b9afb: /* 7b9afb: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7b9aff: xor ebp, ebp */
  ebp = 0;
L_7b9b01: /* 7b9b01: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 7b9b07: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b9b0du); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b9b0d: cmp dword ptr [eax + 0x28], 0x1f7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1f7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9b14: je 0x7b9b43 */
  if (zf) goto L_7b9b43;
L_7b9b16: /* 7b9b16: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 7b9b1c: mov eax, dword ptr [ebx + 0x33c] */
  eax = R32((uint32_t)(ebx + 0x33cu));
/* 7b9b22: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 7b9b28: fsub dword ptr [eax + 0x440] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x440u)));
/* 7b9b2e: fcomp dword ptr [0xa0d568] */
  fpu_com(ST0, F32((uint32_t)(0xa0d568u)));
  FPOP();
/* 7b9b34: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b9b36: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b9b39: jnp 0x7b9b43 */
  if (!pf) goto L_7b9b43;
L_7b9b3b: /* 7b9b3b: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9b3d: je 0x7b9bd3 */
  if (zf) goto L_7b9bd3;
L_7b9b43: /* 7b9b43: mov esi, dword ptr [ebx + 0x33c] */
  esi = R32((uint32_t)(ebx + 0x33cu));
/* 7b9b49: xor edx, edx */
  edx = 0;
/* 7b9b4b: lea ecx, [esi + 0x3e8] */
  ecx = (uint32_t)(esi + 0x3e8u);
/* 7b9b51: jmp 0x7b9b57 */
  goto L_7b9b57;
L_7b9b53: /* 7b9b53: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_7b9b57: /* 7b9b57: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b9b59: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9b5b: je 0x7b9bc7 */
  if (zf) goto L_7b9bc7;
L_7b9b5d: /* 7b9b5d: mov edi, dword ptr [edi + 0x33c] */
  edi = R32((uint32_t)(edi + 0x33cu));
/* 7b9b63: cmp eax, dword ptr [edi + 0x3c4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3c4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9b69: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 7b9b6d: je 0x7b9bcf */
  if (zf) goto L_7b9bcf;
L_7b9b6f: /* 7b9b6f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b9b70: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b9b73: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b9b76: jl 0x7b9b53 */
  if ((sf != of)) goto L_7b9b53;
L_7b9b78: /* 7b9b78: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 7b9b7e: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9b80: je 0x7b9b9a */
  if (zf) goto L_7b9b9a;
L_7b9b82: /* 7b9b82: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 7b9b87: mov ecx, esi */
  ecx = esi;
/* 7b9b89: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b9b8fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b9b8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9b91: je 0x7b9b9a */
  if (zf) goto L_7b9b9a;
L_7b9b93: /* 7b9b93: or dword ptr [esi + 0x390], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x390u), r);
  }
L_7b9b9a: /* 7b9b9a: mov edi, 0x3e8 */
  edi = 0x3e8u;
/* 7b9b9f: nop  */
L_7b9ba0: /* 7b9ba0: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 7b9ba6: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 7b9ba9: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9bab: je 0x7b9c21 */
  if (zf) goto L_7b9c21;
L_7b9bad: /* 7b9bad: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 7b9bb2: mov ecx, esi */
  ecx = esi;
/* 7b9bb4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b9bbau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b9bba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9bbc: je 0x7b9c21 */
  if (zf) goto L_7b9c21;
L_7b9bbe: /* 7b9bbe: or dword ptr [esi + 0x390], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x390u), r);
  }
/* 7b9bc5: jmp 0x7b9c2c */
  goto L_7b9c2c;
L_7b9bc7: /* 7b9bc7: cmp dword ptr [esp + 0x1c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9bcb: je 0x7b9b78 */
  if (zf) goto L_7b9b78;
L_7b9bcd: /* 7b9bcd: jmp 0x7b9bd3 */
  goto L_7b9bd3;
L_7b9bcf: /* 7b9bcf: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_7b9bd3: /* 7b9bd3: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 7b9bd7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b9bd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b9bd9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b9bdc: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 7b9be4: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 7b9be8: mov edx, esp */
  edx = esp;
/* 7b9bea: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b9bec: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 7b9bf4: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 7b9bf8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b9bfb: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 7b9c03: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 7b9c07: mov ecx, edi */
  ecx = edi;
/* 7b9c09: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7b9c0c: call 0x6c8986 */
  esp -= 4; W32(esp, 0x7b9c11u); SPILL(); f_6c8986(); if (g_unwind) return; RELOAD();
/* 7b9c11: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 7b9c15: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b9c17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b9c18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b9c19: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b9c1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b9c1b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b9c1e: ret 8 */
  esp += 12; SPILL(); return;
L_7b9c21: /* 7b9c21: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 7b9c27: cmp dword ptr [edi + edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9c2a: je 0x7b9c3b */
  if (zf) goto L_7b9c3b;
L_7b9c2c: /* 7b9c2c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b9c2f: cmp edi, 0x428 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x428u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b9c35: jl 0x7b9ba0 */
  if ((sf != of)) goto L_7b9ba0;
L_7b9c3b: /* 7b9c3b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7b9c3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b9c40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b9c41: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b9c44: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 7b9c4c: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 7b9c50: mov ecx, esp */
  ecx = esp;
/* 7b9c52: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b9c54: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 7b9c5c: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 7b9c60: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7b9c63: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 7b9c6b: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 7b9c6f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7b9c72: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7b9c76: call 0x6c8986 */
  esp -= 4; W32(esp, 0x7b9c7bu); SPILL(); f_6c8986(); if (g_unwind) return; RELOAD();
/* 7b9c7b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 7b9c7f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b9c81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b9c82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b9c83: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b9c84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b9c85: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b9c88: ret 8 */
  esp += 12; SPILL(); return;
L_7b9c8b: /* 7b9c8b: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 7b9c8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b9c90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b9c91: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b9c94: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 7b9c9c: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 7b9ca0: mov eax, esp */
  eax = esp;
/* 7b9ca2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b9ca4: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 7b9cac: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 7b9cb0: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 7b9cb8: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 7b9cbc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7b9cbf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b9cc2: mov ecx, edi */
  ecx = edi;
/* 7b9cc4: call 0x6c8986 */
  esp -= 4; W32(esp, 0x7b9cc9u); SPILL(); f_6c8986(); if (g_unwind) return; RELOAD();
/* 7b9cc9: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 7b9ccd: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b9ccf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b9cd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b9cd1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b9cd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b9cd3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b9cd6: ret 8 */
  esp += 12; SPILL(); return;
L_7b9cd9: /* 7b9cd9: mov ecx, edi */
  ecx = edi;
/* 7b9cdb: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b9ce1u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b9ce1: mov ecx, eax */
  ecx = eax;
/* 7b9ce3: call dword ptr [0xcfa7e0] */
  esp -= 4; W32(esp, 0x7b9ce9u); SPILL(); f_4e270c(); if (g_unwind) return; /* Core!?Describe@FStateFrame@@QAEPBGXZ */ RELOAD();
/* 7b9ce9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b9cea: mov ecx, edi */
  ecx = edi;
/* 7b9cec: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7b9cf2u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7b9cf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b9cf3: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7b9cf8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b9cfa: push 0xacf978 */
  { uint32_t v = 0xacf978u; esp -= 4; W32(esp, v); }
/* 7b9cff: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 7b9d04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b9d05: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7b9d0bu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7b9d0b: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 7b9d0f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b9d12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b9d13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b9d14: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 7b9d16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b9d17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b9d18: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b9d1b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b9e10(void) {
  LOAD_REGS();
L_7b9e10: /* 7b9e10: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b9e13: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7b9e17: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 7b9e1b: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 7b9e1e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7b9e22: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b9e25: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9e28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9e29: jne 0x7b9e45 */
  if (!zf) goto L_7b9e45;
L_7b9e2b: /* 7b9e2b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b9e2e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b9e2f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b9e32: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7b9e36: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b9e3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b9e3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b9e3f: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b9e45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b9e45: /* 7b9e45: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7b9e49: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 7b9e4f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9e51: je 0x7b9f22 */
  if (zf) goto L_7b9f22;
L_7b9e57: /* 7b9e57: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b9e59: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 7b9e5c: mov eax, dword ptr [0xcfa7d8] */
  eax = R32((uint32_t)(0xcfa7d8u));
/* 7b9e61: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 7b9e63: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7b9e69: mov eax, dword ptr [0xce8458] */
  eax = R32((uint32_t)(0xce8458u));
/* 7b9e6e: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7b9e71: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b9e73: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b9e75: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b9e79: xor esi, esi */
  esi = 0;
/* 7b9e7b: mov dword ptr [ecx + 0x390], esi */
  W32((uint32_t)(ecx + 0x390u), esi);
/* 7b9e81: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7b9e85: mov edx, dword ptr [eax + 0x350] */
  edx = R32((uint32_t)(eax + 0x350u));
/* 7b9e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9e8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9e8d: and edx, 0xffffff7f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7b9e93: mov dword ptr [eax + 0x350], edx */
  W32((uint32_t)(eax + 0x350u), edx);
/* 7b9e99: push 0x6c755e */
  { uint32_t v = 0x6c755eu; esp -= 4; W32(esp, v); }
/* 7b9e9e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b9ea1: mov edx, esp */
  edx = esp;
/* 7b9ea3: mov eax, esi */
  eax = esi;
/* 7b9ea5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b9ea7: mov ecx, esi */
  ecx = esi;
/* 7b9ea9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b9eac: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7b9eb0: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* 7b9eb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9eb7: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 7b9ebb: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 7b9ebf: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 7b9ec3: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7b9ec6: call 0x6caa7e */
  esp -= 4; W32(esp, 0x7b9ecbu); SPILL(); f_6caa7e(); if (g_unwind) return; RELOAD();
/* 7b9ecb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b9ed1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b9ed3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9ed6: jne 0x7b9ef9 */
  if (!zf) goto L_7b9ef9;
L_7b9ed8: /* 7b9ed8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7b9edc: mov esi, dword ptr [edx + 0x438] */
  esi = R32((uint32_t)(edx + 0x438u));
/* 7b9ee2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9ee4: je 0x7b9ef7 */
  if (zf) goto L_7b9ef7;
L_7b9ee6: /* 7b9ee6: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 7b9eeb: mov ecx, esi */
  ecx = esi;
/* 7b9eed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b9ef3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b9ef3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b9ef5: jne 0x7b9ef9 */
  if (!zf) goto L_7b9ef9;
L_7b9ef7: /* 7b9ef7: xor esi, esi */
  esi = 0;
L_7b9ef9: /* 7b9ef9: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7b9efe: mov ecx, dword ptr [0xce8458] */
  ecx = R32((uint32_t)(0xce8458u));
/* 7b9f04: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7b9f07: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b9f09: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b9f0b: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b9f0e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7b9f10: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b9f12: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b9f14: mov ecx, dword ptr [0xcfa7d8] */
  ecx = R32((uint32_t)(0xcfa7d8u));
/* 7b9f1a: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b9f1c: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7b9f20: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
L_7b9f22: /* 7b9f22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b9f23: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b9f26: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b9f80(void) {
  LOAD_REGS();
L_7b9f80: /* 7b9f80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b9f81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9f82: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7b9f86: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b9f89: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 7b9f91: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b9f94: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b9f95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b9f96: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b9f99: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7b9f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b9f9e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b9fa3: mov edi, ecx */
  edi = ecx;
/* 7b9fa5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b9fa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9fa9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b9facu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b9fac: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b9faf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b9fb0: mov eax, edx */
  eax = edx;
/* 7b9fb2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b9fb5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b9fb8: jne 0x7b9fd0 */
  if (!zf) goto L_7b9fd0;
L_7b9fba: /* 7b9fba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b9fbd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b9fbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b9fc0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b9fc3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b9fc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b9fca: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b9fd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b9fd0: /* 7b9fd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7b9fd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b9fd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b9fd7: mov ecx, edi */
  ecx = edi;
/* 7b9fd9: call 0x6c4b60 */
  esp -= 4; W32(esp, 0x7b9fdeu); SPILL(); f_6c4b60(); if (g_unwind) return; RELOAD();
/* 7b9fde: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7b9fe2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b9fe3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b9fe5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b9fe6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7b9fe7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ba010(void) {
  LOAD_REGS();
L_7ba010: /* 7ba010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba011: mov esi, ecx */
  esi = ecx;
/* 7ba013: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7ba019: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba01b: je 0x7ba09b */
  if (zf) goto L_7ba09b;
L_7ba01d: /* 7ba01d: fld dword ptr [esi + 0x36c] */
  { double v = F32((uint32_t)(esi + 0x36cu)); FPUSH(v); }
/* 7ba023: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7ba029: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ba02b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ba02e: jp 0x7ba036 */
  if (pf) goto L_7ba036;
L_7ba030: /* 7ba030: cmp byte ptr [ecx + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba034: jne 0x7ba09b */
  if (!zf) goto L_7ba09b;
L_7ba036: /* 7ba036: test byte ptr [esi + 0x350], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x350u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba03d: je 0x7ba071 */
  if (zf) goto L_7ba071;
L_7ba03f: /* 7ba03f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ba041: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ba043: lea edx, [esi + 0x358] */
  edx = (uint32_t)(esi + 0x358u);
/* 7ba049: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ba04a: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x7ba050u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ba050: xor ecx, ecx */
  ecx = 0;
/* 7ba052: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba054: mov eax, dword ptr [esi + 0x350] */
  eax = R32((uint32_t)(esi + 0x350u));
/* 7ba05a: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ba05d: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7ba060: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ba062: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7ba065: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7ba067: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba069: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 7ba06f: jne 0x7ba090 */
  if (!zf) goto L_7ba090;
L_7ba071: /* 7ba071: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7ba077: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba079: je 0x7ba09b */
  if (zf) goto L_7ba09b;
L_7ba07b: /* 7ba07b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ba07d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ba07f: lea eax, [esi + 0x374] */
  eax = (uint32_t)(esi + 0x374u);
/* 7ba085: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba086: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x7ba08cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ba08c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba08e: jne 0x7ba09b */
  if (!zf) goto L_7ba09b;
L_7ba090: /* 7ba090: mov ecx, esi */
  ecx = esi;
/* 7ba092: call 0x6c817f */
  esp -= 4; W32(esp, 0x7ba097u); SPILL(); f_6c817f(); if (g_unwind) return; RELOAD();
/* 7ba097: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ba098: ret 8 */
  esp += 12; SPILL(); return;
L_7ba09b: /* 7ba09b: mov ecx, esi */
  ecx = esi;
/* 7ba09d: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7ba0a3u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7ba0a3: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
/* 7ba0aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ba0ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ba0e0(void) {
  LOAD_REGS();
L_7ba0e0: /* 7ba0e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ba0e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba0e5: mov esi, ecx */
  esi = ecx;
/* 7ba0e7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7ba0ea: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ba0eb: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7ba0ee: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba0f1: jne 0x7ba108 */
  if (!zf) goto L_7ba108;
L_7ba0f3: /* 7ba0f3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ba0f4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7ba0f7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7ba0fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ba0fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba0fd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ba102: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7ba108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ba108: /* 7ba108: mov ecx, esi */
  ecx = esi;
/* 7ba10a: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7ba110u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7ba110: cmp dword ptr [eax + 0x28], 0x1f7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1f7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba117: jne 0x7ba17e */
  if (!zf) goto L_7ba17e;
L_7ba119: /* 7ba119: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7ba11f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba121: je 0x7ba17e */
  if (zf) goto L_7ba17e;
L_7ba123: /* 7ba123: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 7ba129: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba12b: je 0x7ba17e */
  if (zf) goto L_7ba17e;
L_7ba12d: /* 7ba12d: push 0xb6bd98 */
  { uint32_t v = 0xb6bd98u; esp -= 4; W32(esp, v); }
/* 7ba132: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ba138u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ba138: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba13a: je 0x7ba17e */
  if (zf) goto L_7ba17e;
L_7ba13c: /* 7ba13c: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 7ba142: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ba144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ba145: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7ba14b: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7ba150u); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7ba150: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba152: je 0x7ba16f */
  if (zf) goto L_7ba16f;
L_7ba154: /* 7ba154: mov edx, dword ptr [esi + 0x370] */
  edx = R32((uint32_t)(esi + 0x370u));
/* 7ba15a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ba15b: call 0x6c4944 */
  esp -= 4; W32(esp, 0x7ba160u); SPILL(); f_6c4944(); if (g_unwind) return; RELOAD();
/* 7ba160: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7ba166: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ba169: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba16a: call 0x6c5579 */
  esp -= 4; W32(esp, 0x7ba16fu); SPILL(); f_6c5579(); if (g_unwind) return; RELOAD();
L_7ba16f: /* 7ba16f: mov ecx, esi */
  ecx = esi;
/* 7ba171: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7ba177u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7ba177: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
L_7ba17e: /* 7ba17e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ba17f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ba1c0(void) {
  LOAD_REGS();
L_7ba1c0: /* 7ba1c0: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ba1c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ba1c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba1c5: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 7ba1c9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ba1cc: xor ebx, ebx */
  ebx = 0;
/* 7ba1ce: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 7ba1d2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ba1d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ba1d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ba1d7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ba1da: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 7ba1de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba1df: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ba1e4: mov edi, ecx */
  edi = ecx;
/* 7ba1e6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ba1e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba1ea: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ba1edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ba1ed: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7ba1f1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ba1f4: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7ba1f8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ba1fb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ba1fe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ba1ff: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ba202: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 7ba206: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba207: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ba20c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba20d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ba210u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ba210: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ba213: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 7ba217: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ba21a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ba21b: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 7ba21f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ba220: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ba223: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ba226: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ba22b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba22c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ba22fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ba22f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ba232: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7ba236: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ba239: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ba23a: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7ba23e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ba23f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ba242: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ba245: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ba24a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba24b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ba24eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ba24e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ba251: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 7ba255: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ba258: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ba259: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7ba25d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ba25e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ba261: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ba264: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ba269: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba26a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ba26du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ba26d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7ba270: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7ba271: mov eax, edx */
  eax = edx;
/* 7ba273: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7ba276: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba279: jne 0x7ba290 */
  if (!zf) goto L_7ba290;
L_7ba27b: /* 7ba27b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ba27e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ba27f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ba280: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ba283: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7ba289: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba28a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7ba290u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ba290: /* 7ba290: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 7ba294: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba296: je 0x7ba763 */
  if (zf) goto L_7ba763;
L_7ba29c: /* 7ba29c: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba2a2: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba2a4: je 0x7ba763 */
  if (zf) goto L_7ba763;
L_7ba2aa: /* 7ba2aa: mov esi, dword ptr [ecx + 0x390] */
  esi = R32((uint32_t)(ecx + 0x390u));
/* 7ba2b0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7ba2b4: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 7ba2b7: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 7ba2ba: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba2bc: je 0x7ba2c8 */
  if (zf) goto L_7ba2c8;
L_7ba2be: /* 7ba2be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba2bf: call 0x6c53ee */
  esp -= 4; W32(esp, 0x7ba2c4u); SPILL(); f_6c53ee(); if (g_unwind) return; RELOAD();
/* 7ba2c4: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
L_7ba2c8: /* 7ba2c8: fld dword ptr [edx + 0x178] */
  { double v = F32((uint32_t)(edx + 0x178u)); FPUSH(v); }
/* 7ba2ce: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7ba2d4: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7ba2da: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7ba2df: fld dword ptr [edx + 0x174] */
  { double v = F32((uint32_t)(edx + 0x174u)); FPUSH(v); }
/* 7ba2e5: fsub dword ptr [eax + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x174u)));
/* 7ba2eb: fld dword ptr [edx + 0x170] */
  { double v = F32((uint32_t)(edx + 0x170u)); FPUSH(v); }
/* 7ba2f1: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 7ba2f7: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 7ba2fb: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 7ba2ff: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 7ba303: mov esi, dword ptr [eax + 0x390] */
  esi = R32((uint32_t)(eax + 0x390u));
/* 7ba309: and esi, 0xfffffdff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffdffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 7ba30f: mov dword ptr [eax + 0x390], esi */
  W32((uint32_t)(eax + 0x390u), esi);
/* 7ba315: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7ba31b: mov ecx, dword ptr [eax + 0x3a0] */
  ecx = R32((uint32_t)(eax + 0x3a0u));
/* 7ba321: mov dword ptr [eax + 0x39c], ecx */
  W32((uint32_t)(eax + 0x39cu), ecx);
/* 7ba327: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7ba32b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7ba32f: mov dword ptr [edi + 0x370], ecx */
  W32((uint32_t)(edi + 0x370u), ecx);
/* 7ba335: mov dword ptr [edi + 0x38c], edx */
  W32((uint32_t)(edi + 0x38cu), edx);
/* 7ba33b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ba341u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ba341: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba343: je 0x7ba351 */
  if (zf) goto L_7ba351;
L_7ba345: /* 7ba345: mov dword ptr [edi + 0x36c], 0x3f99999a */
  W32((uint32_t)(edi + 0x36cu), 0x3f99999au);
/* 7ba34f: jmp 0x7ba36f */
  goto L_7ba36f;
L_7ba351: /* 7ba351: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 7ba355: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7ba35bu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7ba35b: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7ba35f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 7ba363: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba36a: call 0x6c1221 */
  esp -= 4; W32(esp, 0x7ba36fu); SPILL(); f_6c1221(); if (g_unwind) return; RELOAD();
L_7ba36f: /* 7ba36f: mov ecx, dword ptr [edi + 0x370] */
  ecx = R32((uint32_t)(edi + 0x370u));
/* 7ba375: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ba37b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ba37d: lea esi, [edi + 0x374] */
  esi = (uint32_t)(edi + 0x374u);
/* 7ba383: mov edx, esi */
  edx = esi;
/* 7ba385: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7ba387: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7ba38a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7ba38d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7ba390: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7ba393: mov ecx, edi */
  ecx = edi;
/* 7ba395: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 7ba399: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7ba39fu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7ba39f: mov dword ptr [eax + 0x28], 0x1f7 */
  W32((uint32_t)(eax + 0x28u), 0x1f7u);
/* 7ba3a6: and dword ptr [edi + 0x350], 0xffffffbf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x350u))); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi + 0x350u), r);
  }
/* 7ba3ad: mov eax, esi */
  eax = esi;
/* 7ba3af: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ba3b1: lea edx, [edi + 0x358] */
  edx = (uint32_t)(edi + 0x358u);
/* 7ba3b7: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7ba3b9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7ba3bc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ba3bf: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7ba3c2: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba3c8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7ba3cb: call 0x6c7bbc */
  esp -= 4; W32(esp, 0x7ba3d0u); SPILL(); f_6c7bbc(); if (g_unwind) return; RELOAD();
/* 7ba3d0: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba3d4: je 0x7ba417 */
  if (zf) goto L_7ba417;
L_7ba3d6: /* 7ba3d6: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 7ba3dc: mov cl, byte ptr [eax + 0x4c8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7ba3e2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba3e4: jne 0x7ba410 */
  if (!zf) goto L_7ba410;
L_7ba3e6: /* 7ba3e6: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 7ba3ec: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba3f2: fsub dword ptr [ecx + 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xd4u)));
/* 7ba3f8: fcomp dword ptr [0xa07fe4] */
  fpu_com(ST0, F32((uint32_t)(0xa07fe4u)));
  FPOP();
/* 7ba3fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ba400: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ba403: jnp 0x7ba410 */
  if (!pf) goto L_7ba410;
L_7ba405: /* 7ba405: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 7ba40b: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba40e: je 0x7ba417 */
  if (zf) goto L_7ba417;
L_7ba410: /* 7ba410: mov eax, 1 */
  eax = 0x1u;
/* 7ba415: jmp 0x7ba419 */
  goto L_7ba419;
L_7ba417: /* 7ba417: xor eax, eax */
  eax = 0;
L_7ba419: /* 7ba419: lea edx, [eax*8] */
  edx = (uint32_t)(eax*8);
/* 7ba420: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 7ba426: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7ba428: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7ba42b: mov ecx, eax */
  ecx = eax;
/* 7ba42d: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ba42f: mov dword ptr [edi + 0x350], ecx */
  W32((uint32_t)(edi + 0x350u), ecx);
/* 7ba435: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7ba439: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba43b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ba43c: mov ebp, ecx */
  ebp = ecx;
/* 7ba43e: je 0x7ba44f */
  if (zf) goto L_7ba44f;
L_7ba440: /* 7ba440: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 7ba445: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7ba44bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7ba44b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba44d: jne 0x7ba451 */
  if (!zf) goto L_7ba451;
L_7ba44f: /* 7ba44f: xor ebp, ebp */
  ebp = 0;
L_7ba451: /* 7ba451: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba453: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 7ba45b: mov dword ptr [edi + 0x428], ebx */
  W32((uint32_t)(edi + 0x428u), ebx);
/* 7ba461: je 0x7ba70f */
  if (zf) goto L_7ba70f;
L_7ba467: /* 7ba467: mov eax, dword ptr [ebp + 0x390] */
  eax = R32((uint32_t)(ebp + 0x390u));
/* 7ba46d: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba470: je 0x7ba480 */
  if (zf) goto L_7ba480;
L_7ba472: /* 7ba472: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7ba478: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba479: mov ecx, ebp */
  ecx = ebp;
/* 7ba47b: call 0x6c4755 */
  esp -= 4; W32(esp, 0x7ba480u); SPILL(); f_6c4755(); if (g_unwind) return; RELOAD();
L_7ba480: /* 7ba480: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba486: call 0x6c9a7f */
  esp -= 4; W32(esp, 0x7ba48bu); SPILL(); f_6c9a7f(); if (g_unwind) return; RELOAD();
/* 7ba48b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba48d: je 0x7ba59c */
  if (zf) goto L_7ba59c;
L_7ba493: /* 7ba493: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba499: mov ecx, dword ptr [ecx + 0x3c4] */
  ecx = R32((uint32_t)(ecx + 0x3c4u));
/* 7ba49f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ba4a0: call 0x6c413d */
  esp -= 4; W32(esp, 0x7ba4a5u); SPILL(); f_6c413d(); if (g_unwind) return; RELOAD();
/* 7ba4a5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba4a7: mov dword ptr [edi + 0x428], eax */
  W32((uint32_t)(edi + 0x428u), eax);
/* 7ba4ad: je 0x7ba59c */
  if (zf) goto L_7ba59c;
L_7ba4b3: /* 7ba4b3: test byte ptr [eax + 0x48], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x48u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba4b7: je 0x7ba4d2 */
  if (zf) goto L_7ba4d2;
L_7ba4b9: /* 7ba4b9: test byte ptr [ebp + 0x392], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x392u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba4c0: je 0x7ba4d2 */
  if (zf) goto L_7ba4d2;
L_7ba4c2: /* 7ba4c2: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 7ba4c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ba4c9: mov ecx, ebp */
  ecx = ebp;
/* 7ba4cb: call 0x6c4755 */
  esp -= 4; W32(esp, 0x7ba4d0u); SPILL(); f_6c4755(); if (g_unwind) return; RELOAD();
/* 7ba4d0: jmp 0x7ba526 */
  goto L_7ba526;
L_7ba4d2: /* 7ba4d2: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7ba4d8: mov ebx, dword ptr [edi + 0x428] */
  ebx = R32((uint32_t)(edi + 0x428u));
/* 7ba4de: mov esi, eax */
  esi = eax;
/* 7ba4e0: fld dword ptr [esi + 0x41c] */
  { double v = F32((uint32_t)(esi + 0x41cu)); FPUSH(v); }
/* 7ba4e6: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 7ba4ea: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ba4efu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ba4ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba4f0: mov ecx, esi */
  ecx = esi;
/* 7ba4f2: call 0x6cc653 */
  esp -= 4; W32(esp, 0x7ba4f7u); SPILL(); f_6cc653(); if (g_unwind) return; RELOAD();
/* 7ba4f7: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 7ba4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba4fe: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ba503u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ba503: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 7ba509: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba50a: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ba50fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ba50f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba510: mov ecx, ebx */
  ecx = ebx;
/* 7ba512: call 0x6c66e0 */
  esp -= 4; W32(esp, 0x7ba517u); SPILL(); f_6c66e0(); if (g_unwind) return; RELOAD();
/* 7ba517: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba519: jne 0x7ba524 */
  if (!zf) goto L_7ba524;
L_7ba51b: /* 7ba51b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ba51c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ba51d: mov ecx, edi */
  ecx = edi;
/* 7ba51f: call 0x6c125d */
  esp -= 4; W32(esp, 0x7ba524u); SPILL(); f_6c125d(); if (g_unwind) return; RELOAD();
L_7ba524: /* 7ba524: xor ebx, ebx */
  ebx = 0;
L_7ba526: /* 7ba526: mov ecx, dword ptr [edi + 0x428] */
  ecx = R32((uint32_t)(edi + 0x428u));
/* 7ba52c: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 7ba52f: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7ba532: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 7ba538: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ba53e: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 7ba544: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ba549: lea esi, [edi + 0x42c] */
  esi = (uint32_t)(edi + 0x42cu);
/* 7ba54f: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 7ba553: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 7ba557: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7ba55a: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7ba55d: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7ba561: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7ba564: mov ecx, esi */
  ecx = esi;
/* 7ba566: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7ba569: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7ba56d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ba56f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7ba572: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 7ba576: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 7ba57a: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 7ba57e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba57f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ba582: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7ba588u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7ba588: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ba58a: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7ba58c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7ba58f: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7ba592: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ba595: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7ba598: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
L_7ba59c: /* 7ba59c: mov eax, dword ptr [ebp + 0x390] */
  eax = R32((uint32_t)(ebp + 0x390u));
/* 7ba5a2: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba5a4: jne 0x7ba70f */
  if (!zf) goto L_7ba70f;
L_7ba5aa: /* 7ba5aa: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba5ad: jne 0x7ba70f */
  if (!zf) goto L_7ba70f;
L_7ba5b3: /* 7ba5b3: cmp dword ptr [edi + 0x428], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x428u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba5b9: je 0x7ba6ca */
  if (zf) goto L_7ba6ca;
L_7ba5bf: /* 7ba5bf: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba5c5: mov dword ptr [ecx + 0x3ec], ebx */
  W32((uint32_t)(ecx + 0x3ecu), ebx);
/* 7ba5cb: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba5d1: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 7ba5d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ba5d6: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ba5dc: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7ba5e2u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7ba5e2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7ba5e4: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba5ea: add ecx, 0x3dc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3dcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ba5f0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ba5f2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7ba5f5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ba5f8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ba5fb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7ba5fe: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7ba604: fld dword ptr [eax + 0x2d4] */
  { double v = F32((uint32_t)(eax + 0x2d4u)); FPUSH(v); }
/* 7ba60a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ba60b: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 7ba611: mov ecx, dword ptr [edi + 0x428] */
  ecx = R32((uint32_t)(edi + 0x428u));
/* 7ba617: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7ba61a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ba61b: fild dword ptr [ecx + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 7ba61e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ba61f: fsub dword ptr [eax + 0x2d4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x2d4u)));
/* 7ba625: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7ba628: call 0x6c44ee */
  esp -= 4; W32(esp, 0x7ba62du); SPILL(); f_6c44ee(); if (g_unwind) return; RELOAD();
/* 7ba62d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ba630: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7ba634: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7ba63au); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7ba63a: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 7ba640: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 7ba646: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 7ba64a: fstp dword ptr [edx + 0x3e8] */
  WF32((uint32_t)(edx + 0x3e8u), ST0); FPOP();
/* 7ba650: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba656: fld dword ptr [ecx + 0x3e4] */
  { double v = F32((uint32_t)(ecx + 0x3e4u)); FPUSH(v); }
/* 7ba65c: fmul dword ptr [edi + 0x434] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x434u)));
/* 7ba662: fld dword ptr [ecx + 0x3e0] */
  { double v = F32((uint32_t)(ecx + 0x3e0u)); FPUSH(v); }
/* 7ba668: fmul dword ptr [edi + 0x430] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x430u)));
/* 7ba66e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ba670: fld dword ptr [ecx + 0x3dc] */
  { double v = F32((uint32_t)(ecx + 0x3dcu)); FPUSH(v); }
/* 7ba676: fmul dword ptr [edi + 0x42c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x42cu)));
/* 7ba67c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ba67e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7ba680: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7ba682: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7ba684: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7ba686: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 7ba68c: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7ba690: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7ba696: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ba698: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ba69b: jp 0x7ba6ba */
  if (pf) goto L_7ba6ba;
L_7ba69d: /* 7ba69d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7ba6a1: fcomp dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
  FPOP();
/* 7ba6a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ba6a9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ba6ac: jp 0x7ba6ba */
  if (pf) goto L_7ba6ba;
L_7ba6ae: /* 7ba6ae: mov dword ptr [ecx + 0x3ec], 0x3f4ccccd */
  W32((uint32_t)(ecx + 0x3ecu), 0x3f4ccccdu);
/* 7ba6b8: jmp 0x7ba6ca */
  goto L_7ba6ca;
L_7ba6ba: /* 7ba6ba: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7ba6be: fmul dword ptr [ecx + 0x3e8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3e8u)));
/* 7ba6c4: fstp dword ptr [ecx + 0x3e8] */
  WF32((uint32_t)(ecx + 0x3e8u), ST0); FPOP();
L_7ba6ca: /* 7ba6ca: cmp ebp, dword ptr [edi + 0x438] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x438u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba6d0: je 0x7ba70f */
  if (zf) goto L_7ba70f;
L_7ba6d2: /* 7ba6d2: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7ba6d8: fld dword ptr [eax + 0x3d8] */
  { double v = F32((uint32_t)(eax + 0x3d8u)); FPUSH(v); }
/* 7ba6de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ba6df: fsub dword ptr [eax + 0x2d4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x2d4u)));
/* 7ba6e5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7ba6e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ba6e9: call 0x6c47be */
  esp -= 4; W32(esp, 0x7ba6eeu); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 7ba6ee: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 7ba6f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ba6f5: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7ba6fbu); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7ba6fb: fmul dword ptr [0xa0d56c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d56cu)));
/* 7ba701: fadd dword ptr [0xa0d184] */
  ST0 = ST0 + (F32((uint32_t)(0xa0d184u)));
/* 7ba707: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 7ba70b: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
L_7ba70f: /* 7ba70f: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 7ba713: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ba714: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7ba71a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ba71c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ba71f: jp 0x7ba727 */
  if (pf) goto L_7ba727;
L_7ba721: /* 7ba721: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7ba725: jmp 0x7ba72b */
  goto L_7ba72b;
L_7ba727: /* 7ba727: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
L_7ba72b: /* 7ba72b: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7ba731: fstp dword ptr [eax + 0x3d4] */
  WF32((uint32_t)(eax + 0x3d4u), ST0); FPOP();
/* 7ba737: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba73d: mov dword ptr [ecx + 0x3d8], ebx */
  W32((uint32_t)(ecx + 0x3d8u), ebx);
/* 7ba743: mov al, byte ptr [edi + 0x350] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x350u))) & 0xffu);
/* 7ba749: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7ba74b: js 0x7ba763 */
  if (sf) goto L_7ba763;
L_7ba74d: /* 7ba74d: mov eax, dword ptr [edi + 0x370] */
  eax = R32((uint32_t)(edi + 0x370u));
/* 7ba753: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba759: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ba75b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba75c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba75d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x7ba763u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ba763: /* 7ba763: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ba764: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ba765: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ba766: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ba769: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ba8e0(void) {
  LOAD_REGS();
L_7ba8e0: /* 7ba8e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ba8e1: mov ebp, esp */
  ebp = esp;
/* 7ba8e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ba8e5: push 0x9cf100 */
  { uint32_t v = 0x9cf100u; esp -= 4; W32(esp, v); }
/* 7ba8ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ba8f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ba8f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ba8f8: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ba8fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ba8fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ba8fd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ba900: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba902: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ba903: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ba906: mov edi, ecx */
  edi = ecx;
/* 7ba908: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ba90f: je 0x7babbb */
  if (zf) goto L_7babbb;
L_7ba915: /* 7ba915: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7ba91b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ba91d: je 0x7babbb */
  if (zf) goto L_7babbb;
L_7ba923: /* 7ba923: cmp esi, dword ptr [edi + 0x3b4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3b4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ba929: je 0x7bab6e */
  if (zf) goto L_7bab6e;
L_7ba92f: /* 7ba92f: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 7ba935: mov edx, eax */
  edx = eax;
/* 7ba937: not edx */
  edx = ~edx;
/* 7ba939: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7ba93b: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7ba93e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7ba940: mov dword ptr [edi + 0x350], edx */
  W32((uint32_t)(edi + 0x350u), edx);
/* 7ba946: movzx eax, byte ptr [esi + 0x399] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x399u)));
/* 7ba94d: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7ba950: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7ba953: fmul dword ptr [0xa0d5a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d5a4u)));
/* 7ba959: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7ba95f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7ba961: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ba963: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ba966: jp 0x7ba970 */
  if (pf) goto L_7ba970;
L_7ba968: /* 7ba968: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7ba96a: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_7ba970: /* 7ba970: fmul dword ptr [ecx + 0x3b0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3b0u)));
/* 7ba976: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7ba979: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7ba97f: fsub dword ptr [ecx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x178u)));
/* 7ba985: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7ba98b: fsub dword ptr [ecx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x174u)));
/* 7ba991: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7ba997: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 7ba99d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7ba9a0: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7ba9a3: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7ba9a6: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7ba9a9: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7ba9afu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7ba9af: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7ba9b2: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7ba9b5: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7ba9b8: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 7ba9bb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ba9bd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ba9c0: jnp 0x7babbb */
  if (!pf) goto L_7babbb;
L_7ba9c6: /* 7ba9c6: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7ba9cc: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7ba9d2: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7ba9d8: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ba9dd: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7ba9e3: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7ba9e6: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7ba9e9: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7ba9ef: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7ba9f1: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7ba9f4: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7ba9f7: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7ba9fa: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7baa00u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7baa00: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7baa03: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7baa06: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7baa08: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7baa0b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7baa0e: je 0x7baa32 */
  if (zf) goto L_7baa32;
L_7baa10: /* 7baa10: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7baa16u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7baa16: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 7baa19: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7baa1c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7baa1f: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 7baa25: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7baa27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7baa29: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7baa2c: jnp 0x7babbb */
  if (!pf) goto L_7babbb;
L_7baa32: /* 7baa32: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7baa38: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7baa3e: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7baa44: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7baa49: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7baa4f: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7baa52: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7baa55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7baa56: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7baa5c: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7baa5f: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7baa61: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7baa64: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7baa67: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7baa6a: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7baa70u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7baa70: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 7baa73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7baa74: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 7baa7a: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x7baa80u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 7baa80: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7baa83: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7baa86: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7baa8c: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7baa8f: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7baa92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7baa94: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7baa97: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7baa9a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7baa9c: fst dword ptr [edi + 0x368] */
  WF32((uint32_t)(edi + 0x368u), ST0);
/* 7baaa2: fcomp dword ptr [ecx + 0x3b4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x3b4u)));
  FPOP();
/* 7baaa8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7baaaa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7baaad: jnp 0x7babbb */
  if (!pf) goto L_7babbb;
L_7baab3: /* 7baab3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7baab5: je 0x7bab48 */
  if (zf) goto L_7bab48;
L_7baabb: /* 7baabb: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7baac1u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7baac1: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 7baac4: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7baac7: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7baaca: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 7baad0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7baad2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7baad4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7baad7: jp 0x7bab48 */
  if (pf) goto L_7bab48;
L_7baad9: /* 7baad9: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7baadc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7baadf: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7baae1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7baae4: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7baaeau); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7baaea: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7baaed: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7baaf3: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7baaf6: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7baaf9: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7baafc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7baafe: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7bab01: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7bab04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7bab06: fcomp dword ptr [ecx + 0x3b4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x3b4u)));
  FPOP();
/* 7bab0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7bab0e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7bab11: jnp 0x7babbb */
  if (!pf) goto L_7babbb;
L_7bab17: /* 7bab17: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7bab1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bab1e: fsub dword ptr [ecx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x178u)));
/* 7bab24: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7bab27: call 0x6cae61 */
  esp -= 4; W32(esp, 0x7bab2cu); SPILL(); f_6cae61(); if (g_unwind) return; RELOAD();
/* 7bab2c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bab2f: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7bab32: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7bab38u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7bab38: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 7bab3b: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7bab3e: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 7bab41: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7bab43: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7bab46: jnp 0x7babbb */
  if (!pf) goto L_7babbb;
L_7bab48: /* 7bab48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bab49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bab4a: mov ecx, edi */
  ecx = edi;
/* 7bab4c: mov dword ptr [edi + 0x368], 0x3f800000 */
  W32((uint32_t)(edi + 0x368u), 0x3f800000u);
/* 7bab56: call 0x6c4b60 */
  esp -= 4; W32(esp, 0x7bab5bu); SPILL(); f_6c4b60(); if (g_unwind) return; RELOAD();
/* 7bab5b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bab5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bab65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bab66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bab67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bab68: mov esp, ebp */
  esp = ebp;
/* 7bab6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bab6b: ret 8 */
  esp += 12; SPILL(); return;
L_7bab6e: /* 7bab6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bab70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bab71: mov ecx, edi */
  ecx = edi;
/* 7bab73: call 0x6c4b60 */
  esp -= 4; W32(esp, 0x7bab78u); SPILL(); f_6c4b60(); if (g_unwind) return; RELOAD();
/* 7bab78: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bab7b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bab82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bab83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bab84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bab85: mov esp, ebp */
  esp = ebp;
/* 7bab87: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bab88: ret 8 */
  esp += 12; SPILL(); return;
L_7babbb: /* 7babbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7babbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7babbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7babc0: xor eax, eax */
  eax = 0;
/* 7babc2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7babc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7babca: mov esp, ebp */
  esp = ebp;
/* 7babcc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7babcd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7bab8b(void) {
  LOAD_REGS();
L_7bab8b: /* 7bab8b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7bab8e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bab93: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7bab96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bab97: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7bab9a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bab9fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bab9f(); return;
}

void f_7bab9f(void) {
  LOAD_REGS();
L_7bab9f: /* 7bab9f: push 0xa0d570 */
  { uint32_t v = 0xa0d570u; esp -= 4; W32(esp, v); }
/* 7baba4: push 0xacfa70 */
  { uint32_t v = 0xacfa70u; esp -= 4; W32(esp, v); }
/* 7baba9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7babafu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7babaf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7babb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7babb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7babb6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7babbbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7babbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7babbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7babbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7babc0: xor eax, eax */
  eax = 0;
/* 7babc2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7babc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7babca: mov esp, ebp */
  esp = ebp;
/* 7babcc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7babcd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7bac90(void) {
  LOAD_REGS();
L_7bac90: /* 7bac90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bac91: mov ebp, esp */
  ebp = esp;
/* 7bac93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bac95: push 0x9cf110 */
  { uint32_t v = 0x9cf110u; esp -= 4; W32(esp, v); }
/* 7bac9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7baca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7baca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7baca8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bacab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bacac: mov eax, ecx */
  eax = ecx;
/* 7bacae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bacaf: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7bacb2: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 7bacb8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bacba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bacbb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bacbe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bacc5: je 0x7baded */
  if (zf) goto L_7baded;
L_7baccb: /* 7baccb: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7bacd1: mov edx, dword ptr [0xce845c] */
  edx = R32((uint32_t)(0xce845cu));
/* 7bacd7: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7bacda: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7bacdc: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7bacde: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bace1: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7bace7: mov esi, dword ptr [ecx + 0x514] */
  esi = R32((uint32_t)(ecx + 0x514u));
/* 7baced: mov ebx, 1 */
  ebx = 0x1u;
L_7bacf2: /* 7bacf2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bacf4: je 0x7badd4 */
  if (zf) goto L_7badd4;
L_7bacfa: /* 7bacfa: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bacfc: je 0x7bad7a */
  if (zf) goto L_7bad7a;
L_7bacfe: /* 7bacfe: mov ecx, dword ptr [eax + 0x350] */
  ecx = R32((uint32_t)(eax + 0x350u));
/* 7bad04: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 7bad06: jne 0x7bad10 */
  if (!zf) goto L_7bad10;
L_7bad08: /* 7bad08: test byte ptr [esi + 0x350], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x350u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bad0e: je 0x7bad7a */
  if (zf) goto L_7bad7a;
L_7bad10: /* 7bad10: fld dword ptr [esi + 0x344] */
  { double v = F32((uint32_t)(esi + 0x344u)); FPUSH(v); }
/* 7bad16: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7bad1c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7bad1e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7bad21: jp 0x7bad7a */
  if (pf) goto L_7bad7a;
L_7bad23: /* 7bad23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bad24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bad26: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 7bad29: mov ecx, esp */
  ecx = esp;
/* 7bad2b: je 0x7bad34 */
  if (zf) goto L_7bad34;
L_7bad2d: /* 7bad2d: push 0x154 */
  { uint32_t v = 0x154u; esp -= 4; W32(esp, v); }
/* 7bad32: jmp 0x7bad39 */
  goto L_7bad39;
L_7bad34: /* 7bad34: push 0x158 */
  { uint32_t v = 0x158u; esp -= 4; W32(esp, v); }
L_7bad39: /* 7bad39: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7bad3fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7bad3f: mov ecx, esi */
  ecx = esi;
/* 7bad41: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7bad47u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7bad47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bad49: je 0x7bad7a */
  if (zf) goto L_7bad7a;
L_7bad4b: /* 7bad4b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bad4e: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 7bad54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bad55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bad56: mov ecx, esi */
  ecx = esi;
/* 7bad58: call 0x6c2e05 */
  esp -= 4; W32(esp, 0x7bad5du); SPILL(); f_6c2e05(); if (g_unwind) return; RELOAD();
/* 7bad5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bad5f: je 0x7bad7a */
  if (zf) goto L_7bad7a;
L_7bad61: /* 7bad61: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bad64: test byte ptr [eax + 0x350], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x350u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bad6a: je 0x7bad88 */
  if (zf) goto L_7bad88;
L_7bad6c: /* 7bad6c: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 7bad72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bad73: mov ecx, esi */
  ecx = esi;
/* 7bad75: call 0x6c69ec */
  esp -= 4; W32(esp, 0x7bad7au); SPILL(); f_6c69ec(); if (g_unwind) return; RELOAD();
L_7bad7a: /* 7bad7a: mov esi, dword ptr [esi + 0x364] */
  esi = R32((uint32_t)(esi + 0x364u));
/* 7bad80: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bad83: jmp 0x7bacf2 */
  goto L_7bacf2;
L_7bad88: /* 7bad88: mov edx, dword ptr [eax + 0x33c] */
  edx = R32((uint32_t)(eax + 0x33cu));
/* 7bad8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bad8f: mov ecx, esi */
  ecx = esi;
/* 7bad91: call 0x6c88af */
  esp -= 4; W32(esp, 0x7bad96u); SPILL(); f_6c88af(); if (g_unwind) return; RELOAD();
/* 7bad96: mov esi, dword ptr [esi + 0x364] */
  esi = R32((uint32_t)(esi + 0x364u));
/* 7bad9c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bad9f: jmp 0x7bacf2 */
  goto L_7bacf2;
L_7badd4: /* 7badd4: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7badda: mov eax, dword ptr [0xce845c] */
  eax = R32((uint32_t)(0xce845cu));
/* 7baddf: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7bade2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7bade4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bade6: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7bade9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7badeb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_7baded: /* 7baded: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7badf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7badf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7badf2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7badf9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7badfa: mov esp, ebp */
  esp = ebp;
/* 7badfc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7badfd: ret  */
  esp += 4; SPILL(); return;
}

void f_7bada4(void) {
  LOAD_REGS();
L_7bada4: /* 7bada4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7bada7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7badac: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7badaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7badb0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7badb3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7badb8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7badb8(); return;
}

void f_7badb8(void) {
  LOAD_REGS();
L_7badb8: /* 7badb8: push 0xa0d5a8 */
  { uint32_t v = 0xa0d5a8u; esp -= 4; W32(esp, v); }
/* 7badbd: push 0xacfad0 */
  { uint32_t v = 0xacfad0u; esp -= 4; W32(esp, v); }
/* 7badc2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7badc8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7badc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7badcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7badcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7badcf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7badd4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7badd4: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7badda: mov eax, dword ptr [0xce845c] */
  eax = R32((uint32_t)(0xce845cu));
/* 7baddf: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7bade2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7bade4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bade6: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7bade9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7badeb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7baded: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7badf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7badf1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7badf2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7badf9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7badfa: mov esp, ebp */
  esp = ebp;
/* 7badfc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7badfd: ret  */
  esp += 4; SPILL(); return;
}

void f_7bae60(void) {
  LOAD_REGS();
L_7bae60: /* 7bae60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bae61: mov ebp, esp */
  ebp = esp;
/* 7bae63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bae65: push 0x9cf120 */
  { uint32_t v = 0x9cf120u; esp -= 4; W32(esp, v); }
/* 7bae6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bae70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bae71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bae78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bae7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bae7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bae7d: mov esi, ecx */
  esi = ecx;
/* 7bae7f: test byte ptr [esi + 0x4b4], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4b4u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bae86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bae87: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bae8a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bae91: je 0x7baf5c */
  if (zf) goto L_7baf5c;
L_7bae97: /* 7bae97: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7bae9du); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7bae9d: cmp dword ptr [eax + 0x28], 0x1f5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1f5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7baea4: je 0x7baebb */
  if (zf) goto L_7baebb;
L_7baea6: /* 7baea6: mov ecx, esi */
  ecx = esi;
/* 7baea8: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7baeaeu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7baeae: cmp dword ptr [eax + 0x28], 0x1f7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1f7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7baeb5: jne 0x7baf5c */
  if (!zf) goto L_7baf5c;
L_7baebb: /* 7baebb: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7baec1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7baec3: je 0x7baf6f */
  if (zf) goto L_7baf6f;
L_7baec9: /* 7baec9: mov eax, dword ptr [esi + 0x370] */
  eax = R32((uint32_t)(esi + 0x370u));
/* 7baecf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7baed1: je 0x7baf6f */
  if (zf) goto L_7baf6f;
L_7baed7: /* 7baed7: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7baeda: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7baedc: mov ecx, edi */
  ecx = edi;
/* 7baede: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x7baee4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7baee4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7baee6: je 0x7baf6f */
  if (zf) goto L_7baf6f;
L_7baeec: /* 7baeec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7baeed: call 0x6c6d2f */
  esp -= 4; W32(esp, 0x7baef2u); SPILL(); f_6c6d2f(); if (g_unwind) return; RELOAD();
/* 7baef2: mov edi, eax */
  edi = eax;
/* 7baef4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7baef7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7baef9: je 0x7baf6f */
  if (zf) goto L_7baf6f;
L_7baefb: /* 7baefb: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 7baf01: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7baf03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7baf04: call dword ptr [edx + 0x15c] */
  { uint32_t t = R32((uint32_t)(edx + 0x15cu)); esp -= 4; W32(esp, 0x7baf0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7baf0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7baf0c: je 0x7baf6f */
  if (zf) goto L_7baf6f;
L_7baf0e: /* 7baf0e: mov eax, dword ptr [esi + 0x370] */
  eax = R32((uint32_t)(esi + 0x370u));
/* 7baf14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7baf15: call 0x6c4944 */
  esp -= 4; W32(esp, 0x7baf1au); SPILL(); f_6c4944(); if (g_unwind) return; RELOAD();
/* 7baf1a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7baf1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7baf1f: je 0x7baf3e */
  if (zf) goto L_7baf3e;
L_7baf21: /* 7baf21: mov ecx, dword ptr [eax + 0x390] */
  ecx = R32((uint32_t)(eax + 0x390u));
/* 7baf27: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7baf2a: je 0x7baf3e */
  if (zf) goto L_7baf3e;
L_7baf2c: /* 7baf2c: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7baf32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7baf33: mov ecx, eax */
  ecx = eax;
/* 7baf35: call 0x6c4755 */
  esp -= 4; W32(esp, 0x7baf3au); SPILL(); f_6c4755(); if (g_unwind) return; RELOAD();
/* 7baf3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7baf3c: jne 0x7baf5c */
  if (!zf) goto L_7baf5c;
L_7baf3e: /* 7baf3e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7baf41: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7baf44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7baf45: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7baf48: mov edx, esp */
  edx = esp;
/* 7baf4a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7baf4c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7baf4f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7baf52: mov ecx, esi */
  ecx = esi;
/* 7baf54: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7baf57: call 0x6c3008 */
  esp -= 4; W32(esp, 0x7baf5cu); SPILL(); f_6c3008(); if (g_unwind) return; RELOAD();
L_7baf5c: /* 7baf5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7baf5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7baf66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7baf67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7baf68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7baf69: mov esp, ebp */
  esp = ebp;
/* 7baf6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7baf6c: ret 0x10 */
  esp += 20; SPILL(); return;
L_7baf6f: /* 7baf6f: test byte ptr [esi + 0x350], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x350u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7baf76: jne 0x7bafce */
  if (!zf) goto L_7bafce;
L_7baf78: /* 7baf78: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7baf7e: fld dword ptr [eax + 0x3dc] */
  { double v = F32((uint32_t)(eax + 0x3dcu)); FPUSH(v); }
/* 7baf84: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7baf87: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7baf8d: add eax, 0x3dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3dcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7baf92: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7baf95: mov ecx, esp */
  ecx = esp;
/* 7baf97: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7baf99: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7baf9b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7baf9e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7bafa1: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7bafa7: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7bafaa: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7bafad: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7bafb3: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7bafb6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7bafb9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7bafbc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7bafbf: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7bafc5: call 0x6c348b */
  esp -= 4; W32(esp, 0x7bafcau); SPILL(); f_6c348b(); if (g_unwind) return; RELOAD();
/* 7bafca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bafcc: jne 0x7baf5c */
  if (!zf) goto L_7baf5c;
L_7bafce: /* 7bafce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bafd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bafd2: mov dword ptr [esi + 0x36c], 0xbf800000 */
  W32((uint32_t)(esi + 0x36cu), 0xbf800000u);
/* 7bafdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bafdd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bafe4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bafe5: mov esp, ebp */
  esp = ebp;
/* 7bafe7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bafe8: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7bafeb(void) {
  LOAD_REGS();
L_7bafeb: /* 7bafeb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bafee: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7baff3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7baff6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7baff7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7baffa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bafffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bafff(); return;
}

void f_7bafff(void) {
  LOAD_REGS();
L_7bafff: /* 7bafff: push 0xa0d5dc */
  { uint32_t v = 0xa0d5dcu; esp -= 4; W32(esp, v); }
/* 7bb004: push 0xacfae8 */
  { uint32_t v = 0xacfae8u; esp -= 4; W32(esp, v); }
/* 7bb009: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bb00fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bb00f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb012: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb014: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb016: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bb01bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bb01b: guest_badaddr(0x7bb01b); return;
}

void f_7bb090(void) {
  LOAD_REGS();
L_7bb090: /* 7bb090: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb092: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7bb096: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7bb099: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 7bb0a1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7bb0a4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bb0a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb0a6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7bb0a9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7bb0ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb0ae: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7bb0b3: mov edi, ecx */
  edi = ecx;
/* 7bb0b5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7bb0b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb0b9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7bb0bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb0bc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7bb0bf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7bb0c0: mov eax, edx */
  eax = edx;
/* 7bb0c2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7bb0c5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7bb0c8: jne 0x7bb0e0 */
  if (!zf) goto L_7bb0e0;
L_7bb0ca: /* 7bb0ca: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7bb0cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bb0ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb0d0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7bb0d3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7bb0d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb0da: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7bb0e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7bb0e0: /* 7bb0e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7bb0e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb0e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb0e7: mov ecx, edi */
  ecx = edi;
/* 7bb0e9: call 0x6c2e05 */
  esp -= 4; W32(esp, 0x7bb0eeu); SPILL(); f_6c2e05(); if (g_unwind) return; RELOAD();
/* 7bb0ee: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7bb0f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bb0f3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7bb0f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb0f6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7bb0f7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7bb120(void) {
  LOAD_REGS();
L_7bb120: /* 7bb120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bb121: mov ebp, esp */
  ebp = esp;
/* 7bb123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bb125: push 0x9cf15f */
  { uint32_t v = 0x9cf15fu; esp -= 4; W32(esp, v); }
/* 7bb12a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bb130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bb138: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bb13e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bb13f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb140: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb141: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bb144: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bb147: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bb14e: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7bb154u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7bb154: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7bb157: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7bb15a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7bb15d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7bb160: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bb161: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7bb164: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7bb167: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb168: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7bb16d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb16e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bb172: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7bb175u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb175: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7bb178: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7bb179: mov eax, edx */
  eax = edx;
/* 7bb17b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7bb17e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7bb181: jne 0x7bb199 */
  if (!zf) goto L_7bb199;
L_7bb183: /* 7bb183: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7bb186: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bb187: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb189: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7bb18c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7bb192: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb193: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7bb199u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7bb199: /* 7bb199: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb19b: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 7bb1a1: call 0x6c321a */
  esp -= 4; W32(esp, 0x7bb1a6u); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 7bb1a6: push 0xacf6c4 */
  { uint32_t v = 0xacf6c4u; esp -= 4; W32(esp, v); }
/* 7bb1ab: push 0xacf6d0 */
  { uint32_t v = 0xacf6d0u; esp -= 4; W32(esp, v); }
/* 7bb1b0: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 7bb1b6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7bb1ba: call 0x6c97eb */
  esp -= 4; W32(esp, 0x7bb1bfu); SPILL(); f_6c97eb(); if (g_unwind) return; RELOAD();
/* 7bb1bf: push 0xacf6ec */
  { uint32_t v = 0xacf6ecu; esp -= 4; W32(esp, v); }
/* 7bb1c4: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7bb1c7: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7bb1cdu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7bb1cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb1ce: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7bb1d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb1d2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bb1d5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7bb1d9: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7bb1dfu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7bb1df: mov bl, 4 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
/* 7bb1e1: mov ecx, eax */
  ecx = eax;
/* 7bb1e3: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7bb1e6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bb1ecu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bb1ec: push 0xb7c530 */
  { uint32_t v = 0xb7c530u; esp -= 4; W32(esp, v); }
/* 7bb1f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb1f2: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 7bb1f8: call 0x6c3b0c */
  esp -= 4; W32(esp, 0x7bb1fdu); SPILL(); f_6c3b0c(); if (g_unwind) return; RELOAD();
/* 7bb1fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb1fe: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7bb201: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7bb207u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7bb207: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7bb20a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb20b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7bb20f: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7bb215u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7bb215: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7bb218: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7bb21b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bb221u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bb221: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7bb224: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7bb228: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bb22eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bb22e: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 7bb231: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7bb235: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bb23bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bb23b: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 7bb241: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bb245: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x7bb24au); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 7bb24a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bb24d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bb251: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bb257u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bb257: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bb25a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bb25b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb25c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bb263: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bb264: mov esp, ebp */
  esp = ebp;
/* 7bb266: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bb267: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7bb26a(void) {
  LOAD_REGS();
L_7bb26a: /* 7bb26a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bb26d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bb272: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7bb275: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bb276: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7bb279: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bb27eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bb27e(); return;
}

void f_7bb27e(void) {
  LOAD_REGS();
L_7bb27e: /* 7bb27e: push 0xa0d628 */
  { uint32_t v = 0xa0d628u; esp -= 4; W32(esp, v); }
/* 7bb283: push 0xacf6f0 */
  { uint32_t v = 0xacf6f0u; esp -= 4; W32(esp, v); }
/* 7bb288: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bb28eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bb28e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb291: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb293: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb295: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bb29au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bb29a: guest_badaddr(0x7bb29a); return;
}

void f_7bb300(void) {
  LOAD_REGS();
L_7bb300: /* 7bb300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb301: mov esi, ecx */
  esi = ecx;
/* 7bb303: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7bb309u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7bb309: mov eax, esi */
  eax = esi;
/* 7bb30b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb30c: ret  */
  esp += 4; SPILL(); return;
}

void f_7bb320(void) {
  LOAD_REGS();
L_7bb320: /* 7bb320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb321: mov esi, ecx */
  esi = ecx;
/* 7bb323: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7bb329u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7bb329: mov eax, esi */
  eax = esi;
/* 7bb32b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb32c: ret  */
  esp += 4; SPILL(); return;
}

void f_7bb340(void) {
  LOAD_REGS();
L_7bb340: /* 7bb340: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7bb344: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7bb346: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb347: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7bb34du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7bb34d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bb360(void) {
  LOAD_REGS();
L_7bb360: /* 7bb360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7bb364: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7bb366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb367: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7bb36du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7bb36d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bb380(void) {
  LOAD_REGS();
L_7bb380: /* 7bb380: mov eax, ecx */
  eax = ecx;
/* 7bb382: ret  */
  esp += 4; SPILL(); return;
}

void f_7bb3a0(void) {
  LOAD_REGS();
L_7bb3a0: /* 7bb3a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7bb3a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb3a5: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 7bb3ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb3ac: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7bb3b0: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7bb3b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb3b4: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 7bb3b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bb3b8: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 7bb3bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb3bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb3bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb3be: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bb3c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb3c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb3c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb3c4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bb3c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb3c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb3c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb3ca: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bb3ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb3cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb3cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb3d0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bb3d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb3d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb3d5: mov eax, edi */
  eax = edi;
/* 7bb3d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bb3d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb3d9: ret  */
  esp += 4; SPILL(); return;
}

void f_7bb3f0(void) {
  LOAD_REGS();
L_7bb3f0: /* 7bb3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bb3f1: mov ebp, esp */
  ebp = esp;
/* 7bb3f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bb3f5: push 0x9cf180 */
  { uint32_t v = 0x9cf180u; esp -= 4; W32(esp, v); }
/* 7bb3fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bb400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bb408: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bb40b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bb40c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7bb40f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb410: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7bb413: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb414: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bb417: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7bb419: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb41a: mov ecx, ebx */
  ecx = ebx;
/* 7bb41c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bb423: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7bb429u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7bb429: mov ecx, esi */
  ecx = esi;
/* 7bb42b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7bb431u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7bb431: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bb433: je 0x7bb4c5 */
  if (zf) goto L_7bb4c5;
L_7bb439: /* 7bb439: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7bb43c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb43d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb43e: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7bb444u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7bb444: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bb447: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb44a: xor eax, eax */
  eax = 0;
/* 7bb44c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7bb450: /* 7bb450: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bb453: jge 0x7bb458 */
  if ((sf == of)) goto L_7bb458;
L_7bb455: /* 7bb455: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bb456: jmp 0x7bb450 */
  goto L_7bb450;
L_7bb458: /* 7bb458: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb459: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7bb45b: mov ecx, ebx */
  ecx = ebx;
/* 7bb45d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7bb463u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7bb463: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 7bb469: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_7bb470: /* 7bb470: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bb473: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bb476: jge 0x7bb522 */
  if ((sf == of)) goto L_7bb522;
L_7bb47c: /* 7bb47c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7bb47e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bb480: mov ecx, ebx */
  ecx = ebx;
/* 7bb482: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7bb488u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7bb488: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7bb48a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7bb48d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7bb48f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7bb492: mov esi, eax */
  esi = eax;
/* 7bb494: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb495: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bb496: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb498u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb498: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb49b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7bb49e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb49f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb4a0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb4a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb4a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb4a5: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 7bb4a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bb4a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb4aa: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb4acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb4ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb4af: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bb4b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb4b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb4b4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb4b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb4b6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bb4b9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7bb4bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb4bf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bb4c0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bb4c3: jmp 0x7bb470 */
  goto L_7bb470;
L_7bb4c5: /* 7bb4c5: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 7bb4c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb4c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb4ca: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7bb4d0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7bb4d0: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 7bb4d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb4d9: xor esi, esi */
  esi = 0;
/* 7bb4db: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 7bb4de: mov edi, edi */
  edi = edi;
L_7bb4e0: /* 7bb4e0: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bb4e3: jge 0x7bb51f */
  if ((sf == of)) goto L_7bb51f;
L_7bb4e5: /* 7bb4e5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7bb4e7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7bb4ea: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7bb4ed: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bb4ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb4f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb4f1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb4f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb4f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb4f6: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7bb4f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb4fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb4fb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb4fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb4fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb500: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 7bb503: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bb504: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb505: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb507u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb507: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb50a: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bb50d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb50e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb50f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb511u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb511: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bb514: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb517: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bb518: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bb51b: mov esi, eax */
  esi = eax;
/* 7bb51d: jmp 0x7bb4e0 */
  goto L_7bb4e0;
L_7bb51f: /* 7bb51f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_7bb522: /* 7bb522: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bb525: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bb526: mov eax, esi */
  eax = esi;
/* 7bb528: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb529: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bb530: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bb531: mov esp, ebp */
  esp = ebp;
/* 7bb533: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bb534: ret  */
  esp += 4; SPILL(); return;
}

void f_7bb535(void) {
  LOAD_REGS();
L_7bb535: /* 7bb535: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7bb538: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bb53d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7bb540: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb541: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7bb544: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bb549u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bb549(); return;
}

void f_7bb549(void) {
  LOAD_REGS();
L_7bb549: /* 7bb549: push 0xa0d680 */
  { uint32_t v = 0xa0d680u; esp -= 4; W32(esp, v); }
/* 7bb54e: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7bb553: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bb559u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bb559: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb55c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb55e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb560: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bb565u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bb565: guest_badaddr(0x7bb565); return;
}

void f_7bb5d0(void) {
  LOAD_REGS();
L_7bb5d0: /* 7bb5d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb5d1: mov esi, ecx */
  esi = ecx;
/* 7bb5d3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7bb5d6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7bb5dcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7bb5dc: mov eax, esi */
  eax = esi;
/* 7bb5de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb5df: ret  */
  esp += 4; SPILL(); return;
}

void f_7bb5f0(void) {
  LOAD_REGS();
L_7bb5f0: /* 7bb5f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7bb5f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb5f5: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 7bb5fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb5fc: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7bb600: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 7bb603: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb604: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 7bb607: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bb608: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 7bb60b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb60c: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 7bb60f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bb610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb611: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb612: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bb614u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb614: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb618: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bb61au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb61a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb61d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb61e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bb620u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb620: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb623: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb624: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bb626u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb626: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb629: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb62a: call 0x6c1505 */
  esp -= 4; W32(esp, 0x7bb62fu); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 7bb62f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb632: mov eax, edi */
  eax = edi;
/* 7bb634: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bb635: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb636: ret  */
  esp += 4; SPILL(); return;
}

void f_7bb660(void) {
  LOAD_REGS();
L_7bb660: /* 7bb660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bb661: mov ebp, esp */
  ebp = esp;
/* 7bb663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bb665: push 0x9cf190 */
  { uint32_t v = 0x9cf190u; esp -= 4; W32(esp, v); }
/* 7bb66a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bb670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bb678: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bb67b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bb67c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7bb67f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb680: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7bb683: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb684: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bb687: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7bb689: xor edi, edi */
  edi = 0;
/* 7bb68b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bb68c: mov ecx, esi */
  ecx = esi;
/* 7bb68e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7bb691: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7bb697u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7bb697: mov ecx, ebx */
  ecx = ebx;
/* 7bb699: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7bb69fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7bb69f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bb6a1: je 0x7bb742 */
  if (zf) goto L_7bb742;
L_7bb6a7: /* 7bb6a7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7bb6aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb6ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bb6ac: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7bb6b2u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7bb6b2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bb6b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb6b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb6b9: mov ecx, esi */
  ecx = esi;
/* 7bb6bb: call 0x6c1375 */
  esp -= 4; W32(esp, 0x7bb6c0u); SPILL(); f_6c1375(); if (g_unwind) return; RELOAD();
/* 7bb6c0: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7bb6c3: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 7bb6c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7bb6d0: /* 7bb6d0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bb6d3: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bb6d6: jge 0x7bb7ac */
  if ((sf == of)) goto L_7bb7ac;
L_7bb6dc: /* 7bb6dc: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7bb6de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bb6e0: mov ecx, esi */
  ecx = esi;
/* 7bb6e2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7bb6e8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7bb6e8: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7bb6eb: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7bb6ed: mov esi, eax */
  esi = eax;
/* 7bb6ef: je 0x7bb6fc */
  if (zf) goto L_7bb6fc;
L_7bb6f1: /* 7bb6f1: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7bb6f4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7bb6fau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7bb6fa: jmp 0x7bb6fe */
  goto L_7bb6fe;
L_7bb6fc: /* 7bb6fc: xor esi, esi */
  esi = 0;
L_7bb6fe: /* 7bb6fe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7bb701: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb702: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb703: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb705u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb705: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb708: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7bb70b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb70c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb70d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb70fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb70f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb712: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 7bb715: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bb716: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb717: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb719u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb719: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb71c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7bb71f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb721: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb723u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb723: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb726: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bb729: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb72a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb72b: call 0x6c1505 */
  esp -= 4; W32(esp, 0x7bb730u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 7bb730: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bb733: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7bb736: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7bb739: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb73c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7bb73d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bb740: jmp 0x7bb6d0 */
  goto L_7bb6d0;
L_7bb742: /* 7bb742: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7bb745: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb746: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bb747: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7bb74du); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7bb74d: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 7bb753: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb756: xor ebx, ebx */
  ebx = 0;
L_7bb758: /* 7bb758: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7bb75b: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bb75d: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7bb760: jge 0x7bb7a9 */
  if ((sf == of)) goto L_7bb7a9;
L_7bb762: /* 7bb762: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7bb765: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7bb767: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7bb76a: mov esi, ebx */
  esi = ebx;
/* 7bb76c: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7bb76f: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bb771: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb773: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb775u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb775: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb778: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7bb77b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb77c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb77d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb77fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb77f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb782: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 7bb785: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bb786: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb787: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb789: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb78c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7bb78f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb791: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bb793u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bb793: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb796: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bb799: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb79a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb79b: call 0x6c1505 */
  esp -= 4; W32(esp, 0x7bb7a0u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 7bb7a0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7bb7a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb7a6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7bb7a7: jmp 0x7bb758 */
  goto L_7bb758;
L_7bb7a9: /* 7bb7a9: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_7bb7ac: /* 7bb7ac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bb7af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bb7b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb7b1: mov eax, ebx */
  eax = ebx;
/* 7bb7b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bb7ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bb7bb: mov esp, ebp */
  esp = ebp;
/* 7bb7bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bb7be: ret  */
  esp += 4; SPILL(); return;
}

void f_7bb7bf(void) {
  LOAD_REGS();
L_7bb7bf: /* 7bb7bf: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7bb7c2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bb7c7: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7bb7ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb7cb: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7bb7ce: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bb7d3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bb7d3(); return;
}

void f_7bb7d3(void) {
  LOAD_REGS();
L_7bb7d3: /* 7bb7d3: push 0xa0d698 */
  { uint32_t v = 0xa0d698u; esp -= 4; W32(esp, v); }
/* 7bb7d8: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7bb7dd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bb7e3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bb7e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb7e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb7e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb7ea: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bb7efu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bb7ef: guest_badaddr(0x7bb7ef); return;
}

void f_7bb860(void) {
  LOAD_REGS();
L_7bb860: /* 7bb860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bb862: push 0x9cf1be */
  { uint32_t v = 0x9cf1beu; esp -= 4; W32(esp, v); }
/* 7bb867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bb86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb86e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bb875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb876: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb877: mov esi, ecx */
  esi = ecx;
/* 7bb879: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7bb87d: call 0x6cc93c */
  esp -= 4; W32(esp, 0x7bb882u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 7bb882: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 7bb885: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7bb88d: mov dword ptr [esi], 0xa06110 */
  W32((uint32_t)(esi), 0xa06110u);
/* 7bb893: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7bb899u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7bb899: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 7bb89c: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7bb8a1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7bb8a7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7bb8a7: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* 7bb8aa: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 7bb8af: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x7bb8b5u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 7bb8b5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7bb8b9: mov eax, esi */
  eax = esi;
/* 7bb8bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb8bc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bb8c3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb8c6: ret  */
  esp += 4; SPILL(); return;
}

void f_7bb8f0(void) {
  LOAD_REGS();
L_7bb8f0: /* 7bb8f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bb8f1: mov ebp, esp */
  ebp = esp;
/* 7bb8f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bb8f5: push 0x9cf1e0 */
  { uint32_t v = 0x9cf1e0u; esp -= 4; W32(esp, v); }
/* 7bb8fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bb900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb901: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bb908: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bb90b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bb90c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb90d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb90e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7bb911: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bb914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb915: mov esi, ecx */
  esi = ecx;
/* 7bb917: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bb91e: call 0x6c974b */
  esp -= 4; W32(esp, 0x7bb923u); SPILL(); f_6c974b(); if (g_unwind) return; RELOAD();
/* 7bb923: lea eax, [esi + 0x54] */
  eax = (uint32_t)(esi + 0x54u);
/* 7bb926: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb927: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb928: call 0x6cb631 */
  esp -= 4; W32(esp, 0x7bb92du); SPILL(); f_6cb631(); if (g_unwind) return; RELOAD();
/* 7bb92d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb930: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 7bb933: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb935: call 0x6cc775 */
  esp -= 4; W32(esp, 0x7bb93au); SPILL(); f_6cc775(); if (g_unwind) return; RELOAD();
/* 7bb93a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb93d: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bb940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb941: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb942: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x7bb947u); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 7bb947: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bb94a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb94d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bb94e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bb94f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bb956: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bb957: mov esp, ebp */
  esp = ebp;
/* 7bb959: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bb95a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bb95d(void) {
  LOAD_REGS();
L_7bb95d: /* 7bb95d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bb960: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bb965: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7bb968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb969: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7bb96c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bb971u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bb971(); return;
}

void f_7bb971(void) {
  LOAD_REGS();
L_7bb971: /* 7bb971: push 0xa0d6b0 */
  { uint32_t v = 0xa0d6b0u; esp -= 4; W32(esp, v); }
/* 7bb976: push 0xacfc60 */
  { uint32_t v = 0xacfc60u; esp -= 4; W32(esp, v); }
/* 7bb97b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bb981u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bb981: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bb984: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb986: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bb988: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bb98du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bb98d: guest_badaddr(0x7bb98d); return;
}

void f_7bb9c0(void) {
  LOAD_REGS();
L_7bb9c0: /* 7bb9c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bb9c1: mov ebp, esp */
  ebp = esp;
/* 7bb9c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bb9c5: push 0x9cf1f0 */
  { uint32_t v = 0x9cf1f0u; esp -= 4; W32(esp, v); }
/* 7bb9ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bb9d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bb9d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bb9d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bb9db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bb9dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bb9dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bb9de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bb9e1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bb9e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bb9e4: mov esi, ecx */
  esi = ecx;
/* 7bb9e6: mov ecx, esp */
  ecx = esp;
/* 7bb9e8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7bb9eb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bb9ed: push 0xacfca4 */
  { uint32_t v = 0xacfca4u; esp -= 4; W32(esp, v); }
/* 7bb9f2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bb9f9: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7bb9ffu); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7bb9ff: mov ecx, esi */
  ecx = esi;
/* 7bba01: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7bba07u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7bba07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bba08: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7bba0a: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x7bba10u); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7bba10: mov esi, eax */
  esi = eax;
/* 7bba12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bba15: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bba17: je 0x7bba35 */
  if (zf) goto L_7bba35;
L_7bba19: /* 7bba19: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7bba1e: push 0xacfcc0 */
  { uint32_t v = 0xacfcc0u; esp -= 4; W32(esp, v); }
/* 7bba23: push 0x74 */
  { uint32_t v = 0x74u; esp -= 4; W32(esp, v); }
/* 7bba25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bba27: mov ecx, esi */
  ecx = esi;
/* 7bba29: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x7bba2fu); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7bba2f: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_7bba35: /* 7bba35: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bba38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bba39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bba3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bba41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bba42: mov esp, ebp */
  esp = ebp;
/* 7bba44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bba45: ret  */
  esp += 4; SPILL(); return;
}

void f_7bba46(void) {
  LOAD_REGS();
L_7bba46: /* 7bba46: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7bba49: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bba4e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7bba51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bba52: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bba55: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bba5au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bba5a(); return;
}

void f_7bba5a(void) {
  LOAD_REGS();
L_7bba5a: /* 7bba5a: push 0xa0d6ec */
  { uint32_t v = 0xa0d6ecu; esp -= 4; W32(esp, v); }
/* 7bba5f: push 0xacfcd4 */
  { uint32_t v = 0xacfcd4u; esp -= 4; W32(esp, v); }
/* 7bba64: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bba6au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bba6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bba6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bba6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bba71: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bba76u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bba76: guest_badaddr(0x7bba76); return;
}

void f_7bbab0(void) {
  LOAD_REGS();
L_7bbab0: /* 7bbab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbab1: mov esi, ecx */
  esi = ecx;
/* 7bbab3: call 0x6c266c */
  esp -= 4; W32(esp, 0x7bbab8u); SPILL(); f_6c266c(); if (g_unwind) return; RELOAD();
/* 7bbab8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bbabd: je 0x7bbacc */
  if (zf) goto L_7bbacc;
L_7bbabf: /* 7bbabf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7bbac4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bbac6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bbac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbac9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7bbaccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7bbacc: /* 7bbacc: mov eax, esi */
  eax = esi;
/* 7bbace: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bbacf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bbaf0(void) {
  LOAD_REGS();
L_7bbaf0: /* 7bbaf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bbaf1: mov ebp, esp */
  ebp = esp;
/* 7bbaf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bbaf5: push 0x9cf200 */
  { uint32_t v = 0x9cf200u; esp -= 4; W32(esp, v); }
/* 7bbafa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bbb00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bbb01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bbb08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bbb0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bbb0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbb0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bbb0e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bbb11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbb13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bbb15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbb17: mov esi, ecx */
  esi = ecx;
/* 7bbb19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbb1b: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7bbb20: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bbb27: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7bbb2du); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7bbb2d: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 7bbb30: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bbb32: je 0x7bbb3d */
  if (zf) goto L_7bbb3d;
L_7bbb34: /* 7bbb34: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7bbb37: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7bbb39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bbb3a: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x7bbb3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7bbb3d: /* 7bbb3d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bbb40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bbb41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bbb42: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bbb49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bbb4a: mov esp, ebp */
  esp = ebp;
/* 7bbb4c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bbb4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bbb50(void) {
  LOAD_REGS();
L_7bbb50: /* 7bbb50: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bbb53: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bbb58: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7bbb5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bbb5c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bbb5f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bbb64u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bbb64(); return;
}

void f_7bbb64(void) {
  LOAD_REGS();
L_7bbb64: /* 7bbb64: push 0xa0d72c */
  { uint32_t v = 0xa0d72cu; esp -= 4; W32(esp, v); }
/* 7bbb69: push 0xad1604 */
  { uint32_t v = 0xad1604u; esp -= 4; W32(esp, v); }
/* 7bbb6e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bbb74u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bbb74: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bbb77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbb79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbb7b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bbb80u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bbb80: guest_badaddr(0x7bbb80); return;
}

void f_7bbbc0(void) {
  LOAD_REGS();
L_7bbbc0: /* 7bbbc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bbbc1: mov ebp, esp */
  ebp = esp;
/* 7bbbc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bbbc5: push 0x9cf210 */
  { uint32_t v = 0x9cf210u; esp -= 4; W32(esp, v); }
/* 7bbbca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bbbd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bbbd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bbbd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bbbdb: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7bbbde: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bbbe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bbbe1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbbe2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bbbe3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bbbe6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bbbed: je 0x7bbbf4 */
  if (zf) goto L_7bbbf4;
L_7bbbef: /* 7bbbef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7bbbf1: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x7bbbf4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7bbbf4: /* 7bbbf4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bbbf7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bbbf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bbbf9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bbc00: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bbc01: mov esp, ebp */
  esp = ebp;
/* 7bbc03: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bbc04: ret  */
  esp += 4; SPILL(); return;
}

void f_7bbc05(void) {
  LOAD_REGS();
L_7bbc05: /* 7bbc05: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bbc08: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bbc0d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7bbc10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bbc11: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7bbc14: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bbc19u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bbc19(); return;
}

void f_7bbc19(void) {
  LOAD_REGS();
L_7bbc19: /* 7bbc19: push 0xa0d750 */
  { uint32_t v = 0xa0d750u; esp -= 4; W32(esp, v); }
/* 7bbc1e: push 0xad160c */
  { uint32_t v = 0xad160cu; esp -= 4; W32(esp, v); }
/* 7bbc23: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bbc29u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bbc29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bbc2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbc2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbc30: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bbc35u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bbc35: guest_badaddr(0x7bbc35); return;
}

void f_7bbc60(void) {
  LOAD_REGS();
L_7bbc60: /* 7bbc60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bbc61: mov ebp, esp */
  ebp = esp;
/* 7bbc63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bbc65: push 0x9cf220 */
  { uint32_t v = 0x9cf220u; esp -= 4; W32(esp, v); }
/* 7bbc6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bbc70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bbc71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bbc78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bbc7b: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7bbc7e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bbc80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bbc81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbc82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bbc83: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bbc86: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bbc8d: je 0x7bbc94 */
  if (zf) goto L_7bbc94;
L_7bbc8f: /* 7bbc8f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7bbc91: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x7bbc94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7bbc94: /* 7bbc94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bbc97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bbc98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bbc99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bbca0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bbca1: mov esp, ebp */
  esp = ebp;
/* 7bbca3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bbca4: ret  */
  esp += 4; SPILL(); return;
}

void f_7bbca5(void) {
  LOAD_REGS();
L_7bbca5: /* 7bbca5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bbca8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bbcad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7bbcb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bbcb1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7bbcb4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bbcb9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bbcb9(); return;
}

void f_7bbcb9(void) {
  LOAD_REGS();
L_7bbcb9: /* 7bbcb9: push 0xa0d784 */
  { uint32_t v = 0xa0d784u; esp -= 4; W32(esp, v); }
/* 7bbcbe: push 0xad1614 */
  { uint32_t v = 0xad1614u; esp -= 4; W32(esp, v); }
/* 7bbcc3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bbcc9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bbcc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bbccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbcce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbcd0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bbcd5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bbcd5: guest_badaddr(0x7bbcd5); return;
}

void f_7bbd00(void) {
  LOAD_REGS();
L_7bbd00: /* 7bbd00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bbd01: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7bbd06: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bbd08: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 7bbd0a: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 7bbd0c: and ecx, 0x1e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7bbd0f: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 7bbd13: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 7bbd17: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7bbd18: ret  */
  esp += 4; SPILL(); return;
}

void f_7bbd30(void) {
  LOAD_REGS();
L_7bbd30: /* 7bbd30: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7bbd50(void) {
  LOAD_REGS();
L_7bbd50: /* 7bbd50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bbd51: mov ebp, esp */
  ebp = esp;
/* 7bbd53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bbd55: push 0x9cf230 */
  { uint32_t v = 0x9cf230u; esp -= 4; W32(esp, v); }
/* 7bbd5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bbd60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bbd61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bbd68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bbd6b: mov eax, dword ptr [0xcfa78c] */
  eax = R32((uint32_t)(0xcfa78cu));
/* 7bbd70: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bbd73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bbd74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbd75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bbd76: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bbd79: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bbd80: je 0x7bbddf */
  if (zf) goto L_7bbddf;
L_7bbd82: /* 7bbd82: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7bbd85: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* 7bbd8b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bbd8d: je 0x7bbddf */
  if (zf) goto L_7bbddf;
L_7bbd8f: /* 7bbd8f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7bbd92: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7bbd95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bbd96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bbd97: call 0x6c507e */
  esp -= 4; W32(esp, 0x7bbd9cu); SPILL(); f_6c507e(); if (g_unwind) return; RELOAD();
/* 7bbd9c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bbd9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bbda6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bbda7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bbda8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bbda9: mov esp, ebp */
  esp = ebp;
/* 7bbdab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bbdac: ret 0xc */
  esp += 16; SPILL(); return;
L_7bbddf: /* 7bbddf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bbde2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bbde3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bbde4: xor eax, eax */
  eax = 0;
/* 7bbde6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bbded: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bbdee: mov esp, ebp */
  esp = ebp;
/* 7bbdf0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bbdf1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7bbdaf(void) {
  LOAD_REGS();
L_7bbdaf: /* 7bbdaf: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bbdb2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bbdb7: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7bbdba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bbdbb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7bbdbe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bbdc3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bbdc3(); return;
}

void f_7bbdc3(void) {
  LOAD_REGS();
L_7bbdc3: /* 7bbdc3: push 0xa0d7b8 */
  { uint32_t v = 0xa0d7b8u; esp -= 4; W32(esp, v); }
/* 7bbdc8: push 0xad1898 */
  { uint32_t v = 0xad1898u; esp -= 4; W32(esp, v); }
/* 7bbdcd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bbdd3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bbdd3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bbdd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbdd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbdda: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bbddfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7bbddf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bbde2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bbde3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bbde4: xor eax, eax */
  eax = 0;
/* 7bbde6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bbded: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bbdee: mov esp, ebp */
  esp = ebp;
/* 7bbdf0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bbdf1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7bbe30(void) {
  LOAD_REGS();
L_7bbe30: /* 7bbe30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bbe31: mov ebp, esp */
  ebp = esp;
/* 7bbe33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bbe35: push 0x9cf240 */
  { uint32_t v = 0x9cf240u; esp -= 4; W32(esp, v); }
/* 7bbe3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bbe40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bbe41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bbe48: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bbe4b: mov eax, dword ptr [0xcfa78c] */
  eax = R32((uint32_t)(0xcfa78cu));
/* 7bbe50: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bbe53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bbe54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbe55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bbe56: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bbe59: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7bbe5c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bbe63: jne 0x7bbe7a */
  if (!zf) goto L_7bbe7a;
L_7bbe65: /* 7bbe65: xor eax, eax */
  eax = 0;
/* 7bbe67: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bbe6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bbe71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bbe72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bbe73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bbe74: mov esp, ebp */
  esp = ebp;
/* 7bbe76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bbe77: ret 0x10 */
  esp += 20; SPILL(); return;
L_7bbe7a: /* 7bbe7a: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7bbe7d: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* 7bbe83: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bbe85: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7bbe88: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7bbe8b: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7bbe8e: je 0x7bbed9 */
  if (zf) goto L_7bbed9;
L_7bbe90: /* 7bbe90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bbe91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbe92: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bbe93: call 0x6cccd9 */
  esp -= 4; W32(esp, 0x7bbe98u); SPILL(); f_6cccd9(); if (g_unwind) return; RELOAD();
/* 7bbe98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bbe9a: je 0x7bbed9 */
  if (zf) goto L_7bbed9;
L_7bbe9c: /* 7bbe9c: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bbe9f: je 0x7bbeb3 */
  if (zf) goto L_7bbeb3;
L_7bbea1: /* 7bbea1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bbea4: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7bbea7: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7bbead: test byte ptr [ecx + 0x40], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x40u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bbeb1: je 0x7bbec1 */
  if (zf) goto L_7bbec1;
L_7bbeb3: /* 7bbeb3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7bbeb6: mov ecx, dword ptr [edx + 0x6c] */
  ecx = R32((uint32_t)(edx + 0x6cu));
/* 7bbeb9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7bbebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bbebc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbebd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bbebe: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x7bbec1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7bbec1: /* 7bbec1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bbec4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bbec5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bbec6: mov eax, 1 */
  eax = 0x1u;
/* 7bbecb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bbed2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bbed3: mov esp, ebp */
  esp = ebp;
/* 7bbed5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bbed6: ret 0x10 */
  esp += 20; SPILL(); return;
L_7bbed9: /* 7bbed9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7bbedc: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 7bbedf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bbee1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bbee2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbee3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bbee4: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7bbee7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bbee7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bbee9: je 0x7bbe65 */
  if (zf) goto L_7bbe65;
L_7bbeef: /* 7bbeef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7bbef2: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 7bbef5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7bbefa: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bbefc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bbefe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bbeff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bbf00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bbf01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bbf02: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7bbf05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bbf05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bbf07: je 0x7bbe65 */
  if (zf) goto L_7bbe65;
L_7bbf0d: /* 7bbf0d: jmp 0x7bbec1 */
  goto L_7bbec1;
}

void f_7bbf0f(void) {
  LOAD_REGS();
L_7bbf0f: /* 7bbf0f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7bbf12: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bbf17: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7bbf1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bbf1b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7bbf1e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bbf23u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bbf23(); return;
}

void f_7bbf23(void) {
  LOAD_REGS();
L_7bbf23: /* 7bbf23: push 0xa0d7d8 */
  { uint32_t v = 0xa0d7d8u; esp -= 4; W32(esp, v); }
/* 7bbf28: push 0xad18a0 */
  { uint32_t v = 0xad18a0u; esp -= 4; W32(esp, v); }
/* 7bbf2d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bbf33u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bbf33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bbf36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbf38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bbf3a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bbf3fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bbf3f: guest_badaddr(0x7bbf3f); return;
}

void f_7bbf90(void) {
  LOAD_REGS();
L_7bbf90: /* 7bbf90: xor eax, eax */
  eax = 0;
/* 7bbf92: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bbfb0(void) {
  LOAD_REGS();
L_7bbfb0: /* 7bbfb0: mov eax, dword ptr [ecx + 0x1d8] */
  eax = R32((uint32_t)(ecx + 0x1d8u));
/* 7bbfb6: and eax, 0xfffffff3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7bbfb9: or eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7bbfbc: mov dword ptr [ecx + 0x1d8], eax */
  W32((uint32_t)(ecx + 0x1d8u), eax);
/* 7bbfc2: ret  */
  esp += 4; SPILL(); return;
}

void f_7bbfe0(void) {
  LOAD_REGS();
L_7bbfe0: /* 7bbfe0: or dword ptr [ecx + 0x1d8], 0x3f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1d8u))); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x1d8u), r);
  }
/* 7bbfe7: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc000(void) {
  LOAD_REGS();
L_7bc000: /* 7bc000: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bc001: mov ebp, esp */
  ebp = esp;
/* 7bc003: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bc005: push 0x9cf262 */
  { uint32_t v = 0x9cf262u; esp -= 4; W32(esp, v); }
/* 7bc00a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bc010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc011: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bc018: sub esp, 0x8c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bc01e: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bc023: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bc025: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bc026: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 7bc02c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc02d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7bc030: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc031: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bc034: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bc037: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc038: push 0xad2360 */
  { uint32_t v = 0xad2360u; esp -= 4; W32(esp, v); }
/* 7bc03d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc03e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bc045: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bc047u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc047: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bc04d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bc04f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc052: push 0xad2394 */
  { uint32_t v = 0xad2394u; esp -= 4; W32(esp, v); }
/* 7bc057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc058: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bc05au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc05a: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 7bc05f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bc061: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7bc067: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7bc069: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc06b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc06e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc06f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc071: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc072: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7bc075u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc075: mov edi, eax */
  edi = eax;
/* 7bc077: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bc079: jne 0x7bc0b7 */
  if (!zf) goto L_7bc0b7;
L_7bc07b: /* 7bc07b: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7bc081: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc083: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc084: push 0xad2398 */
  { uint32_t v = 0xad2398u; esp -= 4; W32(esp, v); }
/* 7bc089: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc08a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bc08cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc08c: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bc091: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bc093: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc096: push 0xad23e8 */
  { uint32_t v = 0xad23e8u; esp -= 4; W32(esp, v); }
/* 7bc09b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc09c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bc09eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc09e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc0a1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7bc0a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bc0a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bc0ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bc0af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc0b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bc0b1: mov esp, ebp */
  esp = ebp;
/* 7bc0b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bc0b4: ret 4 */
  esp += 8; SPILL(); return;
L_7bc0b7: /* 7bc0b7: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 7bc0bd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7bc0bf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7bc0c1: push 0xb7d814 */
  { uint32_t v = 0xb7d814u; esp -= 4; W32(esp, v); }
/* 7bc0c6: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 7bc0cb: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7bc0cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc0cd: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7bc0d3: mov ebx, eax */
  ebx = eax;
/* 7bc0d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc0d6: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 7bc0d9: call dword ptr [0xcfa658] */
  esp -= 4; W32(esp, 0x7bc0dfu); SPILL(); f_4e2423(); if (g_unwind) return; /* Core!?appMD5Init@@YAXPAUFMD5Context@@@Z */ RELOAD();
/* 7bc0df: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bc0e2: /* 7bc0e2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7bc0e4: mov ecx, edi */
  ecx = edi;
/* 7bc0e6: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x7bc0e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc0e9: mov esi, eax */
  esi = eax;
/* 7bc0eb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7bc0ed: mov ecx, edi */
  ecx = edi;
/* 7bc0ef: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x7bc0f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc0f2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bc0f4: jge 0x7bc132 */
  if ((sf == of)) goto L_7bc132;
L_7bc0f6: /* 7bc0f6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7bc0f8: mov ecx, edi */
  ecx = edi;
/* 7bc0fa: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7bc0fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc0fd: mov esi, eax */
  esi = eax;
/* 7bc0ff: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7bc101: mov ecx, edi */
  ecx = edi;
/* 7bc103: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x7bc106u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc106: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 7bc108: cmp esi, 0xffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bc10e: jle 0x7bc115 */
  if ((zf || sf != of)) goto L_7bc115;
L_7bc110: /* 7bc110: mov esi, 0xffff */
  esi = 0xffffu;
L_7bc115: /* 7bc115: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7bc117: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc118: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bc119: mov ecx, edi */
  ecx = edi;
/* 7bc11b: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7bc11eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc11e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc11f: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 7bc125: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bc126: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc127: call dword ptr [0xcfa654] */
  esp -= 4; W32(esp, 0x7bc12du); SPILL(); f_4e41d8(); if (g_unwind) return; /* Core!?appMD5Update@@YAXPAUFMD5Context@@PAEH@Z */ RELOAD();
/* 7bc12d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc130: jmp 0x7bc0e2 */
  goto L_7bc0e2;
L_7bc132: /* 7bc132: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7bc138: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc139: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 7bc13c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc13d: call dword ptr [0xcfa650] */
  esp -= 4; W32(esp, 0x7bc143u); SPILL(); f_4e281a(); if (g_unwind) return; /* Core!?appMD5Final@@YAXPAEPAUFMD5Context@@@Z */ RELOAD();
/* 7bc143: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc146: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc149: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7bc14fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7bc14f: mov ebx, dword ptr [0xcfa540] */
  ebx = R32((uint32_t)(0xcfa540u));
/* 7bc155: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bc159: xor esi, esi */
  esi = 0;
/* 7bc15b: jmp 0x7bc160 */
  goto L_7bc160;
L_7bc160: /* 7bc160: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bc163: jge 0x7bc197 */
  if ((sf == of)) goto L_7bc197;
L_7bc165: /* 7bc165: movzx eax, byte ptr [ebp + esi - 0x40] */
  eax = (uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffc0u)));
/* 7bc16a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc16b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7bc16e: push 0xad23ec */
  { uint32_t v = 0xad23ecu; esp -= 4; W32(esp, v); }
/* 7bc173: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc174: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bc176u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc176: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc17a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc17d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7bc181: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7bc187u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7bc187: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7bc18a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bc18e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bc194u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bc194: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7bc195: jmp 0x7bc160 */
  goto L_7bc160;
L_7bc197: /* 7bc197: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc19a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bc1a0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bc1a0: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bc1a6: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7bc1ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc1ad: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bc1af: push 0xad23f8 */
  { uint32_t v = 0xad23f8u; esp -= 4; W32(esp, v); }
/* 7bc1b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc1b5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bc1b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc1b7: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7bc1bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc1bf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc1c2: push 0xad2414 */
  { uint32_t v = 0xad2414u; esp -= 4; W32(esp, v); }
/* 7bc1c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc1c8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bc1cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc1ca: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7bc1cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bc1d1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7bc1d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc1d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc1d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc1da: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7bc1ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc1dd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bc1df: je 0x7bc1e9 */
  if (zf) goto L_7bc1e9;
L_7bc1e1: /* 7bc1e1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7bc1e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bc1e5: mov ecx, edi */
  ecx = edi;
/* 7bc1e7: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7bc1e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7bc1e9: /* 7bc1e9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc1ec: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bc1f0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bc1f6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bc1f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bc1f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bc1fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc1fb: xor eax, eax */
  eax = 0;
/* 7bc1fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bc204: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bc205: mov esp, ebp */
  esp = ebp;
/* 7bc207: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bc208: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bc15d(void) {
  LOAD_REGS();
L_7bc15d: /* 7bc15d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7bc160: /* 7bc160: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bc163: jge 0x7bc197 */
  if ((sf == of)) goto L_7bc197;
L_7bc165: /* 7bc165: movzx eax, byte ptr [ebp + esi - 0x40] */
  eax = (uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffc0u)));
/* 7bc16a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc16b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7bc16e: push 0xad23ec */
  { uint32_t v = 0xad23ecu; esp -= 4; W32(esp, v); }
/* 7bc173: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc174: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bc176u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc176: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc17a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc17d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7bc181: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7bc187u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7bc187: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7bc18a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bc18e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bc194u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bc194: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7bc195: jmp 0x7bc160 */
  goto L_7bc160;
L_7bc197: /* 7bc197: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc19a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bc1a0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bc1a0: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bc1a6: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7bc1ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc1ad: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bc1af: push 0xad23f8 */
  { uint32_t v = 0xad23f8u; esp -= 4; W32(esp, v); }
/* 7bc1b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc1b5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bc1b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc1b7: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7bc1bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc1bf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc1c2: push 0xad2414 */
  { uint32_t v = 0xad2414u; esp -= 4; W32(esp, v); }
/* 7bc1c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc1c8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bc1cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc1ca: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7bc1cf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bc1d1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7bc1d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc1d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc1d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc1da: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7bc1ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc1dd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bc1df: je 0x7bc1e9 */
  if (zf) goto L_7bc1e9;
L_7bc1e1: /* 7bc1e1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7bc1e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bc1e5: mov ecx, edi */
  ecx = edi;
/* 7bc1e7: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7bc1e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7bc1e9: /* 7bc1e9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc1ec: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bc1f0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bc1f6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bc1f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bc1f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bc1fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc1fb: xor eax, eax */
  eax = 0;
/* 7bc1fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bc204: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bc205: mov esp, ebp */
  esp = ebp;
/* 7bc207: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bc208: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bc20b(void) {
  LOAD_REGS();
L_7bc20b: /* 7bc20b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7bc20e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bc213: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7bc216: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc217: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bc21a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bc21fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bc21f(); return;
}

void f_7bc21f(void) {
  LOAD_REGS();
L_7bc21f: /* 7bc21f: push 0xa0d808 */
  { uint32_t v = 0xa0d808u; esp -= 4; W32(esp, v); }
/* 7bc224: push 0xad2418 */
  { uint32_t v = 0xad2418u; esp -= 4; W32(esp, v); }
/* 7bc229: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bc22fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bc22f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc232: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc234: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc236: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bc23bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bc23b: guest_badaddr(0x7bc23b); return;
}

void f_7bc2d0(void) {
  LOAD_REGS();
L_7bc2d0: /* 7bc2d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bc2d1: mov ebp, esp */
  ebp = esp;
/* 7bc2d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bc2d5: push 0x9cf29b */
  { uint32_t v = 0x9cf29bu; esp -= 4; W32(esp, v); }
/* 7bc2da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bc2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc2e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bc2e8: sub esp, 0x14c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bc2ee: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 7bc2f3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bc2f5: mov eax, dword ptr [0xcfa3b4] */
  eax = R32((uint32_t)(0xcfa3b4u));
/* 7bc2fa: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7bc2fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc2fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bc2ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc301: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7bc304: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bc307: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc308: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc30a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc30b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bc312: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7bc315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc315: mov esi, eax */
  esi = eax;
/* 7bc317: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bc319: jne 0x7bc35c */
  if (!zf) goto L_7bc35c;
L_7bc31b: /* 7bc31b: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7bc321: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc323: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 7bc329: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc32a: push 0xad2488 */
  { uint32_t v = 0xad2488u; esp -= 4; W32(esp, v); }
/* 7bc32f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc330: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bc332u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc332: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bc337: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bc339: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc33c: push 0xad24d8 */
  { uint32_t v = 0xad24d8u; esp -= 4; W32(esp, v); }
/* 7bc341: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc342: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bc344u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc344: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc347: xor eax, eax */
  eax = 0;
/* 7bc349: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bc34c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bc353: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bc354: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc355: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bc356: mov esp, ebp */
  esp = ebp;
/* 7bc358: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bc359: ret 0xc */
  esp += 16; SPILL(); return;
L_7bc35c: /* 7bc35c: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 7bc35f: call dword ptr [0xcfad04] */
  esp -= 4; W32(esp, 0x7bc365u); SPILL(); f_4e18de(); if (g_unwind) return; /* Core!??0FPackageFileSummary@@QAE@XZ */ RELOAD();
/* 7bc365: lea edx, [ebp - 0x64] */
  edx = (uint32_t)(ebp + 0xffffff9cu);
/* 7bc368: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc369: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc36a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bc36e: call dword ptr [0xcfa7f8] */
  esp -= 4; W32(esp, 0x7bc374u); SPILL(); f_4e36a2(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAUFPackageFileSummary@@@Z */ RELOAD();
/* 7bc374: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7bc377: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc37a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bc37c: jle 0x7bc3a6 */
  if ((zf || sf != of)) goto L_7bc3a6;
L_7bc37e: /* 7bc37e: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7bc381: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7bc383: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc384: mov ecx, esi */
  ecx = esi;
/* 7bc386: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x7bc389u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc389: mov ebx, dword ptr [0xcfa7f4] */
  ebx = R32((uint32_t)(0xcfa7f4u));
/* 7bc38f: xor edi, edi */
  edi = 0;
L_7bc391: /* 7bc391: cmp edi, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bc394: jge 0x7bc3a6 */
  if ((sf == of)) goto L_7bc3a6;
L_7bc396: /* 7bc396: lea edx, [ebp - 0x158] */
  edx = (uint32_t)(ebp + 0xfffffea8u);
/* 7bc39c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc39d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc39e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bc3a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc3a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc3a3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7bc3a4: jmp 0x7bc391 */
  goto L_7bc391;
L_7bc3a6: /* 7bc3a6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7bc3a8: mov ecx, esi */
  ecx = esi;
/* 7bc3aa: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x7bc3adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc3ad: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7bc3af: mov ecx, esi */
  ecx = esi;
/* 7bc3b1: mov ebx, eax */
  ebx = eax;
/* 7bc3b3: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x7bc3b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc3b6: sub eax, dword ptr [ebp - 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffbcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7bc3b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bc3bb: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7bc3be: jge 0x7bc3c2 */
  if ((sf == of)) goto L_7bc3c2;
L_7bc3c0: /* 7bc3c0: mov eax, ebx */
  eax = ebx;
L_7bc3c2: /* 7bc3c2: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7bc3c8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7bc3ca: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc3cc: push 0xb7d818 */
  { uint32_t v = 0xb7d818u; esp -= 4; W32(esp, v); }
/* 7bc3d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc3d2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7bc3d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc3d4: mov edi, eax */
  edi = eax;
/* 7bc3d6: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 7bc3dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc3dd: call dword ptr [0xcfa658] */
  esp -= 4; W32(esp, 0x7bc3e3u); SPILL(); f_4e2423(); if (g_unwind) return; /* Core!?appMD5Init@@YAXPAUFMD5Context@@@Z */ RELOAD();
/* 7bc3e3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7bc3e5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc3e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc3ea: mov ecx, esi */
  ecx = esi;
/* 7bc3ec: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7bc3efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc3ef: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7bc3f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bc3f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc3f3: mov ecx, esi */
  ecx = esi;
/* 7bc3f5: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x7bc3f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc3f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bc3f9: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7bc3ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc400: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc401: call dword ptr [0xcfa654] */
  esp -= 4; W32(esp, 0x7bc407u); SPILL(); f_4e41d8(); if (g_unwind) return; /* Core!?appMD5Update@@YAXPAUFMD5Context@@PAEH@Z */ RELOAD();
/* 7bc407: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7bc40a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7bc40c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc40f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc410: mov ecx, esi */
  ecx = esi;
/* 7bc412: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7bc415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc415: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7bc418: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7bc41a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bc41b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc41c: mov ecx, esi */
  ecx = esi;
/* 7bc41e: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7bc421u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc421: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bc422: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 7bc428: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc42a: call dword ptr [0xcfa654] */
  esp -= 4; W32(esp, 0x7bc430u); SPILL(); f_4e41d8(); if (g_unwind) return; /* Core!?appMD5Update@@YAXPAUFMD5Context@@PAEH@Z */ RELOAD();
/* 7bc430: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc433: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7bc439: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc43a: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 7bc43d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc43e: call dword ptr [0xcfa650] */
  esp -= 4; W32(esp, 0x7bc444u); SPILL(); f_4e281a(); if (g_unwind) return; /* Core!?appMD5Final@@YAXPAEPAUFMD5Context@@@Z */ RELOAD();
/* 7bc444: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7bc449: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bc44b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc44d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc450: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc451: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7bc454u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc454: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7bc457: push 0xb7d81c */
  { uint32_t v = 0xb7d81cu; esp -= 4; W32(esp, v); }
/* 7bc45c: mov ecx, ebx */
  ecx = ebx;
/* 7bc45e: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7bc464u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7bc464: mov edi, dword ptr [0xcfa540] */
  edi = R32((uint32_t)(0xcfa540u));
/* 7bc46a: xor esi, esi */
  esi = 0;
/* 7bc46c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7bc470: /* 7bc470: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bc473: jge 0x7bc4a6 */
  if ((sf == of)) goto L_7bc4a6;
L_7bc475: /* 7bc475: movzx eax, byte ptr [ebp + esi - 0x74] */
  eax = (uint32_t)(R8((uint32_t)(ebp + esi + 0xffffff8cu)));
/* 7bc47a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc47b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc47e: push 0xad24dc */
  { uint32_t v = 0xad24dcu; esp -= 4; W32(esp, v); }
/* 7bc483: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc484: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bc486u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc486: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc489: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc48a: mov ecx, ebx */
  ecx = ebx;
/* 7bc48c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7bc490: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7bc496u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7bc496: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc499: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bc49d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bc4a3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bc4a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7bc4a4: jmp 0x7bc470 */
  goto L_7bc470;
L_7bc4a6: /* 7bc4a6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7bc4a9: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x7bc4afu); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 7bc4af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc4b0: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc4b3: push 0xad24e8 */
  { uint32_t v = 0xad24e8u; esp -= 4; W32(esp, v); }
/* 7bc4b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc4b9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7bc4bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc4bb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc4be: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7bc4c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc4c2: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7bc4c6: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7bc4ccu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7bc4cc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7bc4cf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bc4d3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bc4d9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bc4d9: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 7bc4dc: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bc4e0: call dword ptr [0xcfa7ec] */
  esp -= 4; W32(esp, 0x7bc4e6u); SPILL(); f_4e4476(); if (g_unwind) return; /* Core!??1FPackageFileSummary@@QAE@XZ */ RELOAD();
/* 7bc4e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bc4e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bc4ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc4eb: mov eax, 1 */
  eax = 0x1u;
/* 7bc4f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bc4f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bc4f8: mov esp, ebp */
  esp = ebp;
/* 7bc4fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bc4fb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7bc4fe(void) {
  LOAD_REGS();
L_7bc4fe: /* 7bc4fe: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7bc501: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bc506: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7bc509: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc50a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bc50d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bc512u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bc512(); return;
}

void f_7bc512(void) {
  LOAD_REGS();
L_7bc512: /* 7bc512: push 0xa0d850 */
  { uint32_t v = 0xa0d850u; esp -= 4; W32(esp, v); }
/* 7bc517: push 0xad24f0 */
  { uint32_t v = 0xad24f0u; esp -= 4; W32(esp, v); }
/* 7bc51c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bc522u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bc522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc525: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc527: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc529: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bc52eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bc52e: guest_badaddr(0x7bc52e); return;
}

void f_7bc5d0(void) {
  LOAD_REGS();
L_7bc5d0: /* 7bc5d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7bc5d4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bc5d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc5d7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7bc5ddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7bc5dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bc5f0(void) {
  LOAD_REGS();
L_7bc5f0: /* 7bc5f0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7bc5f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7bc5f8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 7bc5fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc5fd: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7bc601: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc602: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7bc606: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc608: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc609: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x7bc60fu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 7bc60f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc610: call dword ptr [0xcfa7c4] */
  esp -= 4; W32(esp, 0x7bc616u); SPILL(); f_4e302b(); if (g_unwind) return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7bc616: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc619: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc630(void) {
  LOAD_REGS();
L_7bc630: /* 7bc630: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7bc634: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7bc638: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7bc63a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc63b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7bc63eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc63e: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc650(void) {
  LOAD_REGS();
L_7bc650: /* 7bc650: mov eax, 0xb7e648 */
  eax = 0xb7e648u;
/* 7bc655: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc670(void) {
  LOAD_REGS();
L_7bc670: /* 7bc670: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7bc674: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc690(void) {
  LOAD_REGS();
L_7bc690: /* 7bc690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc691: mov esi, ecx */
  esi = ecx;
/* 7bc693: call dword ptr [0xcfa804] */
  esp -= 4; W32(esp, 0x7bc699u); SPILL(); f_4e26e4(); if (g_unwind) return; /* Core!??0UCommandlet@@QAE@XZ */ RELOAD();
/* 7bc699: mov dword ptr [esi], 0xa0d8a0 */
  W32((uint32_t)(esi), 0xa0d8a0u);
/* 7bc69f: mov eax, esi */
  eax = esi;
/* 7bc6a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc6a2: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc6c0(void) {
  LOAD_REGS();
L_7bc6c0: /* 7bc6c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc6c1: mov esi, ecx */
  esi = ecx;
/* 7bc6c3: call 0x6cc298 */
  esp -= 4; W32(esp, 0x7bc6c8u); SPILL(); f_6cc298(); if (g_unwind) return; RELOAD();
/* 7bc6c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bc6cd: je 0x7bc6de */
  if (zf) goto L_7bc6de;
L_7bc6cf: /* 7bc6cf: push 0x1dc */
  { uint32_t v = 0x1dcu; esp -= 4; W32(esp, v); }
/* 7bc6d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc6d5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7bc6dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7bc6db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bc6de: /* 7bc6de: mov eax, esi */
  eax = esi;
/* 7bc6e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc6e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bc700(void) {
  LOAD_REGS();
L_7bc700: /* 7bc700: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bc702: push 0x9cf2b9 */
  { uint32_t v = 0x9cf2b9u; esp -= 4; W32(esp, v); }
/* 7bc707: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bc70d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc70e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bc715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc717: mov esi, ecx */
  esi = ecx;
/* 7bc719: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7bc71d: mov dword ptr [esi], 0xa0d8a0 */
  W32((uint32_t)(esi), 0xa0d8a0u);
/* 7bc723: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7bc72b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7bc731u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7bc731: mov ecx, esi */
  ecx = esi;
/* 7bc733: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7bc73b: call dword ptr [0xcfa808] */
  esp -= 4; W32(esp, 0x7bc741u); SPILL(); f_4e189d(); if (g_unwind) return; /* Core!??1UCommandlet@@UAE@XZ */ RELOAD();
/* 7bc741: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7bc745: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc746: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bc74d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc750: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc780(void) {
  LOAD_REGS();
L_7bc780: /* 7bc780: mov eax, 0xb7eb78 */
  eax = 0xb7eb78u;
/* 7bc785: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc7a0(void) {
  LOAD_REGS();
L_7bc7a0: /* 7bc7a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7bc7a4: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc7c0(void) {
  LOAD_REGS();
L_7bc7c0: /* 7bc7c0: mov eax, 0xb7f0a8 */
  eax = 0xb7f0a8u;
/* 7bc7c5: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc7e0(void) {
  LOAD_REGS();
L_7bc7e0: /* 7bc7e0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7bc7e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bc7e7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7bc7eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7bc7ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc7f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc7f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc7f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7bc7f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc7fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc7fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc7fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc7fd: push 0xb7f0a8 */
  { uint32_t v = 0xb7f0a8u; esp -= 4; W32(esp, v); }
/* 7bc802: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x7bc808u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 7bc808: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc80b: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc820(void) {
  LOAD_REGS();
L_7bc820: /* 7bc820: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7bc824: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc840(void) {
  LOAD_REGS();
L_7bc840: /* 7bc840: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7bc844: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7bc848: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7bc84a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc84b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7bc84eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc84e: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc860(void) {
  LOAD_REGS();
L_7bc860: /* 7bc860: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7bc864: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7bc868: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7bc86a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bc86b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7bc86eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc86e: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc880(void) {
  LOAD_REGS();
L_7bc880: /* 7bc880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc881: mov esi, ecx */
  esi = ecx;
/* 7bc883: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7bc889u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7bc889: mov eax, esi */
  eax = esi;
/* 7bc88b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc88c: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc8a0(void) {
  LOAD_REGS();
L_7bc8a0: /* 7bc8a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc8a1: mov esi, ecx */
  esi = ecx;
/* 7bc8a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7bc8a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7bc8a9: mov eax, esi */
  eax = esi;
/* 7bc8ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc8ac: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc8c0(void) {
  LOAD_REGS();
L_7bc8c0: /* 7bc8c0: mov eax, 1 */
  eax = 0x1u;
/* 7bc8c5: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc8e0(void) {
  LOAD_REGS();
L_7bc8e0: /* 7bc8e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bc8e2: push 0x9cf2d9 */
  { uint32_t v = 0x9cf2d9u; esp -= 4; W32(esp, v); }
/* 7bc8e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bc8ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc8ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bc8f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc8f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc8f7: mov esi, ecx */
  esi = ecx;
/* 7bc8f9: call dword ptr [0xcfa2a4] */
  esp -= 4; W32(esp, 0x7bc8ffu); SPILL(); f_4e22e3(); if (g_unwind) return; /* Core!??0USubsystem@@IAE@XZ */ RELOAD();
/* 7bc8ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7bc903: mov dword ptr [esi], 0x9f6b28 */
  W32((uint32_t)(esi), 0x9f6b28u);
/* 7bc909: mov dword ptr [esi + 0x28], 0x9f6b24 */
  W32((uint32_t)(esi + 0x28u), 0x9f6b24u);
/* 7bc910: mov eax, esi */
  eax = esi;
/* 7bc912: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc913: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bc91a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc91d: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc930(void) {
  LOAD_REGS();
L_7bc930: /* 7bc930: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7bc933: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7bc939: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bc93b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7bc93e: ret  */
  esp += 4; SPILL(); return;
}

void f_7bc950(void) {
  LOAD_REGS();
L_7bc950: /* 7bc950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bc951: mov ebp, esp */
  ebp = esp;
/* 7bc953: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bc955: push 0x9cf2f0 */
  { uint32_t v = 0x9cf2f0u; esp -= 4; W32(esp, v); }
/* 7bc95a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bc960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc961: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bc968: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bc96b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bc96c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc96d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc96e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7bc971: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bc974: mov esi, ecx */
  esi = ecx;
/* 7bc976: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bc977: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7bc97a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bc981: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x7bc987u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 7bc987: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7bc989: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 7bc98c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc98d: mov ecx, edi */
  ecx = edi;
/* 7bc98f: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7bc992u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc992: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bc994: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 7bc997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc998: mov ecx, eax */
  ecx = eax;
/* 7bc99a: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7bc99du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc99d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bc99f: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7bc9a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc9a3: mov ecx, eax */
  ecx = eax;
/* 7bc9a5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7bc9a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc9a8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bc9aa: add esi, 0x38 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bc9ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bc9ae: mov ecx, eax */
  ecx = eax;
/* 7bc9b0: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7bc9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc9b3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bc9b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bc9b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bc9b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bc9bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bc9c0: mov esp, ebp */
  esp = ebp;
/* 7bc9c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bc9c3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bc9c6(void) {
  LOAD_REGS();
L_7bc9c6: /* 7bc9c6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7bc9c9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bc9ce: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7bc9d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bc9d2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bc9d5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bc9dau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bc9da(); return;
}

void f_7bc9da(void) {
  LOAD_REGS();
L_7bc9da: /* 7bc9da: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7bc9e0: push 0xa0d924 */
  { uint32_t v = 0xa0d924u; esp -= 4; W32(esp, v); }
/* 7bc9e5: push 0xad162c */
  { uint32_t v = 0xad162cu; esp -= 4; W32(esp, v); }
/* 7bc9ea: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bc9ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bc9ec: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bc9ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bc9f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bc9f4: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7bc9fau); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7bc9fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bc9fb: push 0xad1634 */
  { uint32_t v = 0xad1634u; esp -= 4; W32(esp, v); }
/* 7bca00: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7bca02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bca02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bca05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bca07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bca09: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bca0eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bca0e: guest_badaddr(0x7bca0e); return;
}

void f_7bca40(void) {
  LOAD_REGS();
L_7bca40: /* 7bca40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bca41: mov ebp, esp */
  ebp = esp;
/* 7bca43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bca45: push 0x9cf312 */
  { uint32_t v = 0x9cf312u; esp -= 4; W32(esp, v); }
/* 7bca4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bca50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bca51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bca58: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bca5b: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bca60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bca61: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 7bca67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bca68: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7bca6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bca6c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bca6f: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7bca72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bca73: mov edi, ecx */
  edi = ecx;
/* 7bca75: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bca77: push 0xad2420 */
  { uint32_t v = 0xad2420u; esp -= 4; W32(esp, v); }
/* 7bca7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bca7d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bca84: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bca86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bca86: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bca8c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bca8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bca91: push 0xad2458 */
  { uint32_t v = 0xad2458u; esp -= 4; W32(esp, v); }
/* 7bca96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bca97: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bca99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bca99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bca9c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bca9f: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7bcaa5u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7bcaa5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7bcaa8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bcaac: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7bcab2u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7bcab2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7bcab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bcab6: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bcab9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bcaba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bcabb: mov ecx, edi */
  ecx = edi;
/* 7bcabd: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7bcac1: call 0x6c9d09 */
  esp -= 4; W32(esp, 0x7bcac6u); SPILL(); f_6c9d09(); if (g_unwind) return; RELOAD();
/* 7bcac6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bcac8: je 0x7bcaf9 */
  if (zf) goto L_7bcaf9;
L_7bcaca: /* 7bcaca: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bcacd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7bcad3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7bcad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bcad4: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7bcad9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bcadb: push 0xad245c */
  { uint32_t v = 0xad245cu; esp -= 4; W32(esp, v); }
/* 7bcae0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bcae1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bcae3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bcae3: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7bcae9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7bcaeb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bcaee: push 0xad2478 */
  { uint32_t v = 0xad2478u; esp -= 4; W32(esp, v); }
/* 7bcaf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bcaf4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7bcaf6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bcaf6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bcaf9: /* 7bcaf9: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7bcafc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bcb00: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bcb06u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bcb06: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7bcb09: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bcb0d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7bcb13u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7bcb13: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bcb16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bcb17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bcb18: xor eax, eax */
  eax = 0;
/* 7bcb1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bcb21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bcb22: mov esp, ebp */
  esp = ebp;
/* 7bcb24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bcb25: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bcb28(void) {
  LOAD_REGS();
L_7bcb28: /* 7bcb28: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bcb2b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bcb30: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7bcb33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bcb34: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7bcb37: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bcb3cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bcb3c(); return;
}

void f_7bcb3c(void) {
  LOAD_REGS();
L_7bcb3c: /* 7bcb3c: push 0xa0d95c */
  { uint32_t v = 0xa0d95cu; esp -= 4; W32(esp, v); }
/* 7bcb41: push 0xad247c */
  { uint32_t v = 0xad247cu; esp -= 4; W32(esp, v); }
/* 7bcb46: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bcb4cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bcb4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bcb4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bcb51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bcb53: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bcb58u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bcb58: guest_badaddr(0x7bcb58); return;
}

void f_7bcbb0(void) {
  LOAD_REGS();
L_7bcbb0: /* 7bcbb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bcbb1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bcbb3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bcbb5: mov esi, ecx */
  esi = ecx;
/* 7bcbb7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7bcbbdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7bcbbd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7bcbc1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7bcbc3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7bcbc5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7bcbc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bcbc9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7bcbe0(void) {
  LOAD_REGS();
L_7bcbe0: /* 7bcbe0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7bcbe3: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7bcbe9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bcbeb: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7bcbee: ret  */
  esp += 4; SPILL(); return;
}

void f_7bcc00(void) {
  LOAD_REGS();
L_7bcc00: /* 7bcc00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bcc01: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7bcc05: push 0xb78580 */
  { uint32_t v = 0xb78580u; esp -= 4; W32(esp, v); }
/* 7bcc0a: mov ecx, esi */
  ecx = esi;
/* 7bcc0c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7bcc12u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7bcc12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bcc14: jne 0x7bcc2e */
  if (!zf) goto L_7bcc2e;
L_7bcc16: /* 7bcc16: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7bcc1b: push 0xad2878 */
  { uint32_t v = 0xad2878u; esp -= 4; W32(esp, v); }
/* 7bcc20: push 0xad28bc */
  { uint32_t v = 0xad28bcu; esp -= 4; W32(esp, v); }
/* 7bcc25: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7bcc2bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7bcc2b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bcc2e: /* 7bcc2e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7bcc32: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bcc35: jne 0x7bcc3d */
  if (!zf) goto L_7bcc3d;
L_7bcc37: /* 7bcc37: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7bcc3du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7bcc3d: /* 7bcc3d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7bcc43: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bcc45: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7bcc49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bcc4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bcc4c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7bcc50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bcc52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bcc53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bcc54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bcc55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bcc56: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7bcc5cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7bcc5c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bcc5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bcc60: ret  */
  esp += 4; SPILL(); return;
}

void f_7bcc90(void) {
  LOAD_REGS();
L_7bcc90: /* 7bcc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bcc91: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7bcc95: push 0xb7d828 */
  { uint32_t v = 0xb7d828u; esp -= 4; W32(esp, v); }
/* 7bcc9a: mov ecx, esi */
  ecx = esi;
/* 7bcc9c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7bcca2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7bcca2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bcca4: jne 0x7bccbe */
  if (!zf) goto L_7bccbe;
L_7bcca6: /* 7bcca6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7bccab: push 0xad28e0 */
  { uint32_t v = 0xad28e0u; esp -= 4; W32(esp, v); }
/* 7bccb0: push 0xad2924 */
  { uint32_t v = 0xad2924u; esp -= 4; W32(esp, v); }
/* 7bccb5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7bccbbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7bccbb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bccbe: /* 7bccbe: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7bccc2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bccc5: jne 0x7bcccd */
  if (!zf) goto L_7bcccd;
L_7bccc7: /* 7bccc7: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7bcccdu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7bcccd: /* 7bcccd: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7bccd3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bccd5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7bccd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bccdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bccdc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7bcce0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bcce2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bcce3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bcce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bcce5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bcce6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7bccecu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7bccec: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bccef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bccf0: ret  */
  esp += 4; SPILL(); return;
}

void f_7bcd20(void) {
  LOAD_REGS();
L_7bcd20: /* 7bcd20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bcd21: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7bcd25: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 7bcd2a: mov ecx, esi */
  ecx = esi;
/* 7bcd2c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7bcd32u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7bcd32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bcd34: jne 0x7bcd4e */
  if (!zf) goto L_7bcd4e;
L_7bcd36: /* 7bcd36: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7bcd3b: push 0xad2948 */
  { uint32_t v = 0xad2948u; esp -= 4; W32(esp, v); }
/* 7bcd40: push 0xad298c */
  { uint32_t v = 0xad298cu; esp -= 4; W32(esp, v); }
/* 7bcd45: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7bcd4bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7bcd4b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bcd4e: /* 7bcd4e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7bcd52: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bcd55: jne 0x7bcd5d */
  if (!zf) goto L_7bcd5d;
L_7bcd57: /* 7bcd57: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7bcd5du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7bcd5d: /* 7bcd5d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7bcd63: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bcd65: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7bcd69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bcd6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bcd6c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7bcd70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bcd72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bcd73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bcd74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bcd75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bcd76: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7bcd7cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7bcd7c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bcd7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bcd80: ret  */
  esp += 4; SPILL(); return;
}

void f_7bcdb0(void) {
  LOAD_REGS();
L_7bcdb0: /* 7bcdb0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7bcdb4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bcdb6: je 0x7bcdbd */
  if (zf) goto L_7bcdbd;
L_7bcdb8: /* 7bcdb8: jmp 0x6c8c7e */
  SPILL(); f_6c8c7e(); return;
L_7bcdbd: /* 7bcdbd: ret  */
  esp += 4; SPILL(); return;
}

void f_7bcdd0(void) {
  LOAD_REGS();
L_7bcdd0: /* 7bcdd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bcdd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bcdd2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7bcdd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bcdd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bcdda: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7bcdde: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bcde0: mov esi, ecx */
  esi = ecx;
/* 7bcde2: jge 0x7bcdf8 */
  if ((sf == of)) goto L_7bcdf8;
L_7bcde4: /* 7bcde4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7bcde9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7bcdee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7bcdf3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7bcdf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bcdf5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bcdf8: /* 7bcdf8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bcdfb: jle 0x7bce11 */
  if ((zf || sf != of)) goto L_7bce11;
L_7bcdfd: /* 7bcdfd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7bce02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7bce07: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7bce0c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7bce0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bce0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bce11: /* 7bce11: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7bce15: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7bce18: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7bce1b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7bce1d: jle 0x7bce33 */
  if ((zf || sf != of)) goto L_7bce33;
L_7bce1f: /* 7bce1f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7bce24: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7bce29: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7bce2e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7bce30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bce30: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bce33: /* 7bce33: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7bce35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bce36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bce37: mov ecx, esi */
  ecx = esi;
/* 7bce39: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7bce3fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7bce3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bce40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bce41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bce42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bce43: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7bce70(void) {
  LOAD_REGS();
L_7bce70: /* 7bce70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bce71: mov ebp, esp */
  ebp = esp;
/* 7bce73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bce75: push 0x9cf330 */
  { uint32_t v = 0x9cf330u; esp -= 4; W32(esp, v); }
/* 7bce7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bce80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bce81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bce88: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bce8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bce8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bce8d: mov esi, ecx */
  esi = ecx;
/* 7bce8f: test byte ptr [esi + 0x78], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x78u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bce93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bce94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bce97: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7bce9e: je 0x7bcf3e */
  if (zf) goto L_7bcf3e;
L_7bcea4: /* 7bcea4: mov eax, dword ptr [0xcfa814] */
  eax = R32((uint32_t)(0xcfa814u));
/* 7bcea9: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bceac: je 0x7bcf3e */
  if (zf) goto L_7bcf3e;
L_7bceb2: /* 7bceb2: call dword ptr [0xcfa810] */
  esp -= 4; W32(esp, 0x7bceb8u); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 7bceb8: push 0xad007c */
  { uint32_t v = 0xad007cu; esp -= 4; W32(esp, v); }
/* 7bcebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bcebe: call dword ptr [0xcfa80c] */
  esp -= 4; W32(esp, 0x7bcec4u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 7bcec4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bcec7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bcec9: jne 0x7bcf3e */
  if (!zf) goto L_7bcf3e;
L_7bcecb: /* 7bcecb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bcecc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bcece: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bcecf: push 0xad008c */
  { uint32_t v = 0xad008cu; esp -= 4; W32(esp, v); }
/* 7bced4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bced5: push 0xb78580 */
  { uint32_t v = 0xb78580u; esp -= 4; W32(esp, v); }
/* 7bceda: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x7bcee0u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7bcee0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bcee3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bcee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bcee6: mov ecx, esp */
  ecx = esp;
/* 7bcee8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7bceeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bceed: mov edi, eax */
  edi = eax;
/* 7bceef: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7bcef5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7bcef5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bcef7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bcef8: call 0x6c3003 */
  esp -= 4; W32(esp, 0x7bcefdu); SPILL(); f_6c3003(); if (g_unwind) return; RELOAD();
/* 7bcefd: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 7bcf00: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7bcf02: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bcf05: mov ecx, eax */
  ecx = eax;
/* 7bcf07: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7bcf0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bcf0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bcf0c: jne 0x7bcf3e */
  if (!zf) goto L_7bcf3e;
L_7bcf0e: /* 7bcf0e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7bcf13: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bcf15: push 0xad00c8 */
  { uint32_t v = 0xad00c8u; esp -= 4; W32(esp, v); }
/* 7bcf1a: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 7bcf1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bcf20: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7bcf26u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7bcf26: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7bcf29: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bcf2c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7bcf2e: je 0x7bcf37 */
  if (zf) goto L_7bcf37;
L_7bcf30: /* 7bcf30: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bcf32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bcf34: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7bcf37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7bcf37: /* 7bcf37: mov dword ptr [esi + 0x34], 0 */
  W32((uint32_t)(esi + 0x34u), 0x0u);
L_7bcf3e: /* 7bcf3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bcf41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bcf42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bcf43: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bcf4a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bcf4b: mov esp, ebp */
  esp = ebp;
/* 7bcf4d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bcf4e: ret  */
  esp += 4; SPILL(); return;
}

void f_7bcf4f(void) {
  LOAD_REGS();
L_7bcf4f: /* 7bcf4f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7bcf52: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7bcf57: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7bcf5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bcf5b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7bcf5e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bcf63u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7bcf63(); return;
}

void f_7bcf63(void) {
  LOAD_REGS();
L_7bcf63: /* 7bcf63: push 0xa0d9a8 */
  { uint32_t v = 0xa0d9a8u; esp -= 4; W32(esp, v); }
/* 7bcf68: push 0xad0104 */
  { uint32_t v = 0xad0104u; esp -= 4; W32(esp, v); }
/* 7bcf6d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7bcf73u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7bcf73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bcf76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bcf78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7bcf7a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7bcf7fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7bcf7f: guest_badaddr(0x7bcf7f); return;
}

void f_7bcfd0(void) {
  LOAD_REGS();
L_7bcfd0: /* 7bcfd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7bcfd1: mov ebp, esp */
  ebp = esp;
/* 7bcfd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7bcfd5: push 0x9cf340 */
  { uint32_t v = 0x9cf340u; esp -= 4; W32(esp, v); }
/* 7bcfda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7bcfe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bcfe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7bcfe8: sub esp, 0x254 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x254u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7bcfee: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 7bcff3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7bcff5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7bcff7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bcff8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bcff9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7bcffa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7bcffd: xor ebx, ebx */
  ebx = 0;
/* 7bcfff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd000: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7bd005: lea eax, [ebp - 0x260] */
  eax = (uint32_t)(ebp + 0xfffffda0u);
/* 7bd00b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd00c: push 0xad18b8 */
  { uint32_t v = 0xad18b8u; esp -= 4; W32(esp, v); }
/* 7bd011: push 0xad18cc */
  { uint32_t v = 0xad18ccu; esp -= 4; W32(esp, v); }
/* 7bd016: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7bd019: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7bd01cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd01c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bd01e: je 0x7bd030 */
  if (zf) goto L_7bd030;
L_7bd020: /* 7bd020: lea ecx, [ebp - 0x260] */
  ecx = (uint32_t)(ebp + 0xfffffda0u);
/* 7bd026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd027: call dword ptr [0xcfa820] */
  esp -= 4; W32(esp, 0x7bd02du); SPILL(); f_4e31f2(); if (g_unwind) return; /* Core!?SetLanguage@UObject@@SAXPBG@Z */ RELOAD();
/* 7bd02d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bd030: /* 7bd030: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd031: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7bd033: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd034: push 0xad18e8 */
  { uint32_t v = 0xad18e8u; esp -= 4; W32(esp, v); }
/* 7bd039: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd03a: push 0xb7d828 */
  { uint32_t v = 0xb7d828u; esp -= 4; W32(esp, v); }
/* 7bd03f: call dword ptr [0xcfa7b8] */
  esp -= 4; W32(esp, 0x7bd045u); SPILL(); f_4e157d(); if (g_unwind) return; /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7bd045: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd048: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd049: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7bd04c: mov esi, eax */
  esi = eax;
/* 7bd04e: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7bd054u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7bd054: push 0xb7d828 */
  { uint32_t v = 0xb7d828u; esp -= 4; W32(esp, v); }
/* 7bd059: mov ecx, esi */
  ecx = esi;
/* 7bd05b: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7bd061u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7bd061: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bd063: jne 0x7bd07d */
  if (!zf) goto L_7bd07d;
L_7bd065: /* 7bd065: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7bd06a: push 0xad28e0 */
  { uint32_t v = 0xad28e0u; esp -= 4; W32(esp, v); }
/* 7bd06f: push 0xad2924 */
  { uint32_t v = 0xad2924u; esp -= 4; W32(esp, v); }
/* 7bd074: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7bd07au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7bd07a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bd07d: /* 7bd07d: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7bd083u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7bd083: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7bd089: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7bd08b: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7bd08e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd08f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd091: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7bd092: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7bd093: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7bd094: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7bd095: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7bd09bu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7bd09b: mov esi, eax */
  esi = eax;
/* 7bd09d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7bd09f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7bd0a2: mov ecx, esi */
  ecx = esi;
/* 7bd0a4: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x7bd0a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd0a7: mov ecx, dword ptr [0xcfa78c] */
  ecx = R32((uint32_t)(0xcfa78cu));
/* 7bd0ad: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 7bd0b3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7bd0b5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7bd0b8: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7bd0bb: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7bd0be: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bd0c1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bd0c3: jge 0x7bd0cb */
  if ((sf == of)) goto L_7bd0cb;
L_7bd0c5: /* 7bd0c5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7bd0cb: /* 7bd0cb: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7bd0ce: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 7bd0d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bd0d6: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7bd0d9: jge 0x7bd0e1 */
  if ((sf == of)) goto L_7bd0e1;
L_7bd0db: /* 7bd0db: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7bd0e1: /* 7bd0e1: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 7bd0e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7bd0e9: xor edi, edi */
  edi = 0;
/* 7bd0eb: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 7bd0ed: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 7bd0f3: fst qword ptr [ebp - 0x54] */
  WF64((uint32_t)(ebp + 0xffffffacu), ST0);
/* 7bd0f6: fstp qword ptr [ebp - 0x4c] */
  WF64((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7bd0f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7bd100: /* 7bd100: mov eax, dword ptr [0xcfa78c] */
  eax = R32((uint32_t)(0xcfa78cu));
/* 7bd105: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bd107: je 0x7bd2b8 */
  if (zf) goto L_7bd2b8;
L_7bd10d: /* 7bd10d: mov edx, dword ptr [0xcfa81c] */
  edx = R32((uint32_t)(0xcfa81cu));
/* 7bd113: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7bd115: jne 0x7bd2b8 */
  if (!zf) goto L_7bd2b8;
L_7bd11b: /* 7bd11b: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 7bd120: call 0x6c7b0d */
  esp -= 4; W32(esp, 0x7bd125u); SPILL(); f_6c7b0d(); if (g_unwind) return; RELOAD();
/* 7bd125: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7bd129: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7bd12b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 7bd12e: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7bd131: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7bd134: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7bd137: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bd139: jge 0x7bd141 */
  if ((sf == of)) goto L_7bd141;
L_7bd13b: /* 7bd13b: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7bd141: /* 7bd141: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7bd144: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 7bd14a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bd14c: fild dword ptr [ebp - 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7bd14f: jge 0x7bd157 */
  if ((sf == of)) goto L_7bd157;
L_7bd151: /* 7bd151: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7bd157: /* 7bd157: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 7bd15d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7bd15f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7bd161: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd162: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 7bd164: mov ecx, esi */
  ecx = esi;
/* 7bd166: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 7bd16c: fstp qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7bd16f: fld qword ptr [ebp - 0x34] */
  { double v = F64((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7bd172: fsub qword ptr [ebp - 0x54] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffffacu)));
/* 7bd175: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7bd178: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7bd17bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd17b: fld qword ptr [ebp - 0x34] */
  { double v = F64((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7bd17e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7bd17f: fst qword ptr [ebp - 0x54] */
  WF64((uint32_t)(ebp + 0xffffffacu), ST0);
/* 7bd182: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7bd185: fld qword ptr [ebp - 0x4c] */
  { double v = F64((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7bd188: fadd qword ptr [0xa0da58] */
  ST0 = ST0 + (F64((uint32_t)(0xa0da58u)));
/* 7bd18e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7bd190: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7bd192: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7bd194: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd197: jne 0x7bd1ad */
  if (!zf) goto L_7bd1ad;
L_7bd199: /* 7bd199: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7bd19c: xor edi, edi */
  edi = 0;
/* 7bd19e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7bd1a0: fsub qword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffffb4u)));
/* 7bd1a3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 7bd1a5: fstp dword ptr [esi + 0x7c] */
  WF32((uint32_t)(esi + 0x7cu), ST0); FPOP();
/* 7bd1a8: fstp qword ptr [ebp - 0x4c] */
  WF64((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7bd1ab: jmp 0x7bd1af */
  goto L_7bd1af;
L_7bd1ad: /* 7bd1ad: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7bd1af: /* 7bd1af: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7bd1b1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7bd1b4: mov ecx, esi */
  ecx = esi;
/* 7bd1b6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7bd1ba: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7bd1c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7bd1c0: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7bd1c3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7bd1c6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7bd1c9: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7bd1cc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7bd1d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7bd1d4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd1d7: jne 0x7bd250 */
  if (!zf) goto L_7bd250;
L_7bd1d9: /* 7bd1d9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7bd1db: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7bd1de: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7bd1e1: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7bd1e4: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7bd1e7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bd1e9: jge 0x7bd1f1 */
  if ((sf == of)) goto L_7bd1f1;
L_7bd1eb: /* 7bd1eb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7bd1f1: /* 7bd1f1: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7bd1f4: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 7bd1fa: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7bd1fc: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7bd1ff: jge 0x7bd207 */
  if ((sf == of)) goto L_7bd207;
L_7bd201: /* 7bd201: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7bd207: /* 7bd207: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 7bd20c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7bd20e: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 7bd210: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 7bd216: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7bd21c: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7bd21f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7bd221: fsub qword ptr [ebp - 0x34] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffffccu)));
/* 7bd224: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7bd226: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7bd22c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7bd22e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7bd230: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7bd233: jne 0x7bd240 */
  if (!zf) goto L_7bd240;
L_7bd235: /* 7bd235: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7bd237: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7bd23e: jmp 0x7bd243 */
  goto L_7bd243;
L_7bd240: /* 7bd240: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_7bd243: /* 7bd243: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7bd246: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7bd247: call dword ptr [0xcfa818] */
  esp -= 4; W32(esp, 0x7bd24du); SPILL(); f_4e3e22(); if (g_unwind) return; /* Core!?appSleep@@YAXM@Z */ RELOAD();
/* 7bd24d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7bd250: /* 7bd250: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7bd253: jmp 0x7bd100 */
  goto L_7bd100;
L_7bd2b8: /* 7bd2b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7bd2bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7bd2bc: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7bd2be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7bd2bf: xor eax, eax */
  eax = 0;
/* 7bd2c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7bd2c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7bd2c9: mov esp, ebp */
  esp = ebp;
/* 7bd2cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7bd2cc: ret 4 */
  esp += 8; SPILL(); return;
}
