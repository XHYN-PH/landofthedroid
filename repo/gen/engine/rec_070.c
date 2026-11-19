#include "recomp.h"
#include "rec_mod.h"

void f_842c10(void) {
  LOAD_REGS();
L_842c10: /* 842c10: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 842c13: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 842c18: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 842c1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 842c1c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 842c1f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x842c24u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_842c24(); return;
}

void f_842c24(void) {
  LOAD_REGS();
L_842c24: /* 842c24: push 0xa163d4 */
  { uint32_t v = 0xa163d4u; esp -= 4; W32(esp, v); }
/* 842c29: push 0xae3e9c */
  { uint32_t v = 0xae3e9cu; esp -= 4; W32(esp, v); }
/* 842c2e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x842c34u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 842c34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 842c37: xor ebx, ebx */
  ebx = 0;
/* 842c39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842c3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842c3b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x842c40u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_842c40: guest_badaddr(0x842c40); return;
}

void f_842c90(void) {
  LOAD_REGS();
L_842c90: /* 842c90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 842c91: mov ebp, esp */
  ebp = esp;
/* 842c93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 842c95: push 0x9d3620 */
  { uint32_t v = 0x9d3620u; esp -= 4; W32(esp, v); }
/* 842c9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 842ca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842ca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 842ca8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 842cab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842cac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842cad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842cae: mov edi, ecx */
  edi = ecx;
/* 842cb0: mov eax, dword ptr [edi + 0x434] */
  eax = R32((uint32_t)(edi + 0x434u));
/* 842cb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 842cb8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 842cbb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 842cc2: je 0x842cf3 */
  if (zf) goto L_842cf3;
L_842cc4: /* 842cc4: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 842cca: mov esi, dword ptr [edi + 0x434] */
  esi = R32((uint32_t)(edi + 0x434u));
/* 842cd0: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 842cd3: jne 0x842ce9 */
  if (!zf) goto L_842ce9;
L_842cd5: /* 842cd5: mov ecx, esi */
  ecx = esi;
/* 842cd7: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x842cdcu); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 842cdc: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 842ce1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 842ce3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 842ce5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842ce6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x842ce9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_842ce9: /* 842ce9: mov dword ptr [edi + 0x434], 0 */
  W32((uint32_t)(edi + 0x434u), 0x0u);
L_842cf3: /* 842cf3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 842cf6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 842cf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 842cf8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 842cff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 842d00: mov esp, ebp */
  esp = ebp;
/* 842d02: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 842d03: ret  */
  esp += 4; SPILL(); return;
}

void f_842d04(void) {
  LOAD_REGS();
L_842d04: /* 842d04: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 842d07: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 842d0c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 842d0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 842d10: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 842d13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x842d18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_842d18(); return;
}

void f_842d18(void) {
  LOAD_REGS();
L_842d18: /* 842d18: push 0xa16404 */
  { uint32_t v = 0xa16404u; esp -= 4; W32(esp, v); }
/* 842d1d: push 0xae3ea4 */
  { uint32_t v = 0xae3ea4u; esp -= 4; W32(esp, v); }
/* 842d22: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x842d28u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 842d28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 842d2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842d2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842d2f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x842d34u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_842d34: guest_badaddr(0x842d34); return;
}

void f_842d70(void) {
  LOAD_REGS();
L_842d70: /* 842d70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842d71: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 842d75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842d76: mov esi, ecx */
  esi = ecx;
/* 842d78: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 842d7b: xor eax, eax */
  eax = 0;
/* 842d7d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 842d7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842d80: jle 0x842d92 */
  if ((zf || sf != of)) goto L_842d92;
L_842d82: /* 842d82: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 842d84: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
L_842d86: /* 842d86: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 842d88: je 0x842da5 */
  if (zf) goto L_842da5;
L_842d8a: /* 842d8a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 842d8b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 842d8e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 842d90: jl 0x842d86 */
  if ((sf != of)) goto L_842d86;
L_842d92: /* 842d92: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 842d94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 842d96: mov ecx, esi */
  ecx = esi;
/* 842d98: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x842d9eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 842d9e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 842da0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 842da2: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_842da5: /* 842da5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 842da6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 842da7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 842da8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_842dc0(void) {
  LOAD_REGS();
L_842dc0: /* 842dc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 842dc2: push 0x9d3639 */
  { uint32_t v = 0x9d3639u; esp -= 4; W32(esp, v); }
/* 842dc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 842dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842dce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 842dd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 842dd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842dd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842dd8: mov esi, ecx */
  esi = ecx;
/* 842dda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842ddb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 842ddf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 842de2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 842de4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 842dea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 842df2: jge 0x842e08 */
  if ((sf == of)) goto L_842e08;
L_842df4: /* 842df4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 842df9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 842dfe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 842e03: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x842e05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 842e05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_842e08: /* 842e08: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 842e0b: jle 0x842e21 */
  if ((zf || sf != of)) goto L_842e21;
L_842e0d: /* 842e0d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 842e12: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 842e17: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 842e1c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x842e1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 842e1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_842e21: /* 842e21: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 842e23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842e24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842e26: mov ecx, esi */
  ecx = esi;
/* 842e28: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x842e2eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 842e2e: mov ecx, esi */
  ecx = esi;
/* 842e30: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 842e38: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x842e3eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 842e3e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 842e42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 842e43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 842e44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 842e45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 842e4c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 842e4f: ret  */
  esp += 4; SPILL(); return;
}

void f_842e80(void) {
  LOAD_REGS();
L_842e80: /* 842e80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 842e82: push 0x9d3659 */
  { uint32_t v = 0x9d3659u; esp -= 4; W32(esp, v); }
/* 842e87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 842e8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842e8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 842e95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 842e96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842e97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842e98: mov esi, ecx */
  esi = ecx;
/* 842e9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842e9b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 842e9f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 842ea2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 842ea4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 842eaa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 842eb2: jge 0x842ec8 */
  if ((sf == of)) goto L_842ec8;
L_842eb4: /* 842eb4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 842eb9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 842ebe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 842ec3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x842ec5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 842ec5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_842ec8: /* 842ec8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 842ecb: jle 0x842ee1 */
  if ((zf || sf != of)) goto L_842ee1;
L_842ecd: /* 842ecd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 842ed2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 842ed7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 842edc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x842edeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 842ede: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_842ee1: /* 842ee1: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 842ee3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842ee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842ee6: mov ecx, esi */
  ecx = esi;
/* 842ee8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x842eeeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 842eee: mov ecx, esi */
  ecx = esi;
/* 842ef0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 842ef8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x842efeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 842efe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 842f02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 842f03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 842f04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 842f05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 842f0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 842f0f: ret  */
  esp += 4; SPILL(); return;
}

void f_842f40(void) {
  LOAD_REGS();
L_842f40: /* 842f40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 842f41: mov ebp, esp */
  ebp = esp;
/* 842f43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 842f45: push 0x9d3670 */
  { uint32_t v = 0x9d3670u; esp -= 4; W32(esp, v); }
/* 842f4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 842f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842f51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 842f58: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 842f5b: mov eax, dword ptr [0xcc9a40] */
  eax = R32((uint32_t)(0xcc9a40u));
/* 842f60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 842f62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842f63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842f64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842f65: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 842f68: mov ebx, ecx */
  ebx = ecx;
/* 842f6a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 842f71: jne 0x842fed */
  if (!zf) goto L_842fed;
L_842f73: /* 842f73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842f75: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 842f78: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x842f7eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 842f7e: push 0xcc91e8 */
  { uint32_t v = 0xcc91e8u; esp -= 4; W32(esp, v); }
/* 842f83: mov ecx, 0xcc91e8 */
  ecx = 0xcc91e8u;
/* 842f88: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x842f8eu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 842f8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 842f90: jne 0x842faa */
  if (!zf) goto L_842faa;
L_842f92: /* 842f92: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 842f97: push 0xae3ef0 */
  { uint32_t v = 0xae3ef0u; esp -= 4; W32(esp, v); }
/* 842f9c: push 0xae3f34 */
  { uint32_t v = 0xae3f34u; esp -= 4; W32(esp, v); }
/* 842fa1: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x842fa7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 842fa7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_842faa: /* 842faa: mov edi, dword ptr [0xcfa550] */
  edi = R32((uint32_t)(0xcfa550u));
/* 842fb0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x842fb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 842fb2: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 842fb8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 842fba: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 842fbd: mov esi, dword ptr [0xcfa54c] */
  esi = R32((uint32_t)(0xcfa54cu));
/* 842fc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842fc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 842fc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842fc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842fca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 842fcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842fcc: push 0xcc91e8 */
  { uint32_t v = 0xcc91e8u; esp -= 4; W32(esp, v); }
/* 842fd1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x842fd3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 842fd3: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 842fd9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 842fdc: push 0xcc9a40 */
  { uint32_t v = 0xcc9a40u; esp -= 4; W32(esp, v); }
/* 842fe1: mov dword ptr [0xcc9a40], eax */
  W32((uint32_t)(0xcc9a40u), eax);
/* 842fe6: call 0x6c1203 */
  esp -= 4; W32(esp, 0x842febu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 842feb: jmp 0x842ff9 */
  goto L_842ff9;
L_842fed: /* 842fed: mov edi, dword ptr [0xcfa550] */
  edi = R32((uint32_t)(0xcfa550u));
/* 842ff3: mov esi, dword ptr [0xcfa54c] */
  esi = R32((uint32_t)(0xcfa54cu));
L_842ff9: /* 842ff9: mov eax, dword ptr [0xcc9a3c] */
  eax = R32((uint32_t)(0xcc9a3cu));
/* 842ffe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 843000: jne 0x84306e */
  if (!zf) goto L_84306e;
L_843002: /* 843002: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 843004: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 843007: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84300du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84300d: push 0xcc91e8 */
  { uint32_t v = 0xcc91e8u; esp -= 4; W32(esp, v); }
/* 843012: mov ecx, 0xcc91e8 */
  ecx = 0xcc91e8u;
/* 843017: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84301du); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84301d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84301f: jne 0x843039 */
  if (!zf) goto L_843039;
L_843021: /* 843021: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 843026: push 0xae3ef0 */
  { uint32_t v = 0xae3ef0u; esp -= 4; W32(esp, v); }
/* 84302b: push 0xae3f34 */
  { uint32_t v = 0xae3f34u; esp -= 4; W32(esp, v); }
/* 843030: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x843036u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 843036: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_843039: /* 843039: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x84303bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84303b: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 843041: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 843043: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 843046: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 843048: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 843049: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84304b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84304d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84304e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84304f: push 0xcc91e8 */
  { uint32_t v = 0xcc91e8u; esp -= 4; W32(esp, v); }
/* 843054: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x843056u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 843056: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 84305c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84305f: push 0xcc9a3c */
  { uint32_t v = 0xcc9a3cu; esp -= 4; W32(esp, v); }
/* 843064: mov dword ptr [0xcc9a3c], eax */
  W32((uint32_t)(0xcc9a3cu), eax);
/* 843069: call 0x6c1203 */
  esp -= 4; W32(esp, 0x84306eu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_84306e: /* 84306e: mov eax, dword ptr [0xcc9a38] */
  eax = R32((uint32_t)(0xcc9a38u));
/* 843073: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 843075: jne 0x8430e3 */
  if (!zf) goto L_8430e3;
L_843077: /* 843077: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 843079: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 84307c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x843082u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 843082: push 0xcc91e8 */
  { uint32_t v = 0xcc91e8u; esp -= 4; W32(esp, v); }
/* 843087: mov ecx, 0xcc91e8 */
  ecx = 0xcc91e8u;
/* 84308c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x843092u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 843092: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 843094: jne 0x8430ae */
  if (!zf) goto L_8430ae;
L_843096: /* 843096: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 84309b: push 0xae3ef0 */
  { uint32_t v = 0xae3ef0u; esp -= 4; W32(esp, v); }
/* 8430a0: push 0xae3f34 */
  { uint32_t v = 0xae3f34u; esp -= 4; W32(esp, v); }
/* 8430a5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8430abu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8430ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8430ae: /* 8430ae: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8430b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8430b0: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8430b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8430b8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8430bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8430bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8430be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8430c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8430c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8430c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8430c4: push 0xcc91e8 */
  { uint32_t v = 0xcc91e8u; esp -= 4; W32(esp, v); }
/* 8430c9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8430cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8430cb: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8430d1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8430d4: push 0xcc9a38 */
  { uint32_t v = 0xcc9a38u; esp -= 4; W32(esp, v); }
/* 8430d9: mov dword ptr [0xcc9a38], eax */
  W32((uint32_t)(0xcc9a38u), eax);
/* 8430de: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8430e3u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8430e3: /* 8430e3: mov eax, dword ptr [0xcc9a40] */
  eax = R32((uint32_t)(0xcc9a40u));
/* 8430e8: mov ecx, dword ptr [0xcc9a3c] */
  ecx = R32((uint32_t)(0xcc9a3cu));
/* 8430ee: mov edx, dword ptr [0xcc9a38] */
  edx = R32((uint32_t)(0xcc9a38u));
/* 8430f4: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8430f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8430f9: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 8430fc: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8430ff: mov eax, dword ptr [0xcc9a3c] */
  eax = R32((uint32_t)(0xcc9a3cu));
/* 843104: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 843107: mov ecx, dword ptr [0xcc9a38] */
  ecx = R32((uint32_t)(0xcc9a38u));
/* 84310d: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 843110: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 843113: je 0x84312a */
  if (zf) goto L_84312a;
L_843115: /* 843115: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 84311a: mov ecx, esi */
  ecx = esi;
/* 84311c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x843122u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 843122: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 843124: je 0x84312a */
  if (zf) goto L_84312a;
L_843126: /* 843126: mov edi, esi */
  edi = esi;
/* 843128: jmp 0x84312c */
  goto L_84312c;
L_84312a: /* 84312a: xor edi, edi */
  edi = 0;
L_84312c: /* 84312c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84312e: je 0x843175 */
  if (zf) goto L_843175;
L_843130: /* 843130: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 843135: mov ecx, esi */
  ecx = esi;
/* 843137: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84313du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84313d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84313f: je 0x843175 */
  if (zf) goto L_843175;
L_843141: /* 843141: mov eax, esi */
  eax = esi;
/* 843143: jmp 0x843177 */
  goto L_843177;
L_843175: /* 843175: xor eax, eax */
  eax = 0;
L_843177: /* 843177: xor edx, edx */
  edx = 0;
/* 843179: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84317b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 84317e: je 0x843185 */
  if (zf) goto L_843185;
L_843180: /* 843180: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 843183: jmp 0x84318f */
  goto L_84318f;
L_843185: /* 843185: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 843187: je 0x843195 */
  if (zf) goto L_843195;
L_843189: /* 843189: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 84318c: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
L_84318f: /* 84318f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 843192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_843195: /* 843195: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 843198: jge 0x84325b */
  if ((sf == of)) goto L_84325b;
L_84319e: /* 84319e: mov eax, dword ptr [ebp + edx*4 - 0x28] */
  eax = R32((uint32_t)(ebp + edx*4 + 0xffffffd8u));
/* 8431a2: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 8431a5: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 8431a8: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 8431ab: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 8431ae: mov dword ptr [eax + 0x40], esi */
  W32((uint32_t)(eax + 0x40u), esi);
/* 8431b1: mov cl, byte ptr [ebx + 0x20] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x20u))) & 0xffu);
/* 8431b4: mov byte ptr [eax + 0x44], cl */
  W8((uint32_t)(eax + 0x44u), (ecx & 0xffu));
/* 8431b7: mov cl, byte ptr [ebx + 0x21] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x21u))) & 0xffu);
/* 8431ba: mov byte ptr [eax + 0x45], cl */
  W8((uint32_t)(eax + 0x45u), (ecx & 0xffu));
/* 8431bd: lea esi, [ebx + 0x24] */
  esi = (uint32_t)(ebx + 0x24u);
/* 8431c0: lea edi, [eax + 0x48] */
  edi = (uint32_t)(eax + 0x48u);
/* 8431c3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8431c8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8431ca: lea esi, [ebx + 0x11c] */
  esi = (uint32_t)(ebx + 0x11cu);
/* 8431d0: lea edi, [eax + 0x88] */
  edi = (uint32_t)(eax + 0x88u);
/* 8431d6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8431db: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8431dd: and dword ptr [eax + 0x30], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x30u), r);
  }
/* 8431e1: mov esi, dword ptr [eax + 0xc8] */
  esi = R32((uint32_t)(eax + 0xc8u));
/* 8431e7: mov ecx, dword ptr [ebx + 0x15c] */
  ecx = R32((uint32_t)(ebx + 0x15cu));
/* 8431ed: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8431ef: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8431f2: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 8431f4: mov dword ptr [eax + 0xc8], esi */
  W32((uint32_t)(eax + 0xc8u), esi);
/* 8431fa: mov ecx, dword ptr [ebx + 0x15c] */
  ecx = R32((uint32_t)(ebx + 0x15cu));
/* 843200: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 843202: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 843205: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 843207: mov dword ptr [eax + 0xc8], ecx */
  W32((uint32_t)(eax + 0xc8u), ecx);
/* 84320d: mov esi, dword ptr [ebx + 0x15c] */
  esi = R32((uint32_t)(ebx + 0x15cu));
/* 843213: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 843215: and esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 843218: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 84321a: mov dword ptr [eax + 0xc8], esi */
  W32((uint32_t)(eax + 0xc8u), esi);
/* 843220: mov ecx, dword ptr [ebx + 0x15c] */
  ecx = R32((uint32_t)(ebx + 0x15cu));
/* 843226: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 843228: and ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 84322b: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 84322d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 843230: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 843233: mov dword ptr [eax + 0xc8], ecx */
  W32((uint32_t)(eax + 0xc8u), ecx);
/* 843239: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 84323c: and ecx, 0xffffff8f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff8fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 84323f: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 843241: mov ecx, dword ptr [ebx + 0x15c] */
  ecx = R32((uint32_t)(ebx + 0x15cu));
/* 843247: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 84324a: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 84324c: mov dword ptr [eax + 0xc8], esi */
  W32((uint32_t)(eax + 0xc8u), esi);
/* 843252: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 843255: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 843256: jmp 0x843195 */
  goto L_843195;
L_84325b: /* 84325b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84325e: mov edi, dword ptr [eax + 0xc8] */
  edi = R32((uint32_t)(eax + 0xc8u));
/* 843264: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 843267: and edi, 0xfffffffb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 84326a: mov dword ptr [eax + 0xc8], edi */
  W32((uint32_t)(eax + 0xc8u), edi);
/* 843270: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 843273: mov edx, dword ptr [eax + 0xc8] */
  edx = R32((uint32_t)(eax + 0xc8u));
/* 843279: and edx, 0xfffffffb */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 84327c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84327d: or edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 843280: mov dword ptr [eax + 0xc8], edx */
  W32((uint32_t)(eax + 0xc8u), edx);
/* 843286: mov eax, dword ptr [0xcc9a40] */
  eax = R32((uint32_t)(0xcc9a40u));
/* 84328b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84328c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 843293: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 843294: mov esp, ebp */
  esp = ebp;
/* 843296: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 843297: ret 8 */
  esp += 12; SPILL(); return;
}

void f_843145(void) {
  LOAD_REGS();
L_843145: /* 843145: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 843148: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84314d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 843150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 843151: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 843154: call 0x99caf8 */
  esp -= 4; W32(esp, 0x843159u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_843159(); return;
}

void f_843159(void) {
  LOAD_REGS();
L_843159: /* 843159: push 0xa16438 */
  { uint32_t v = 0xa16438u; esp -= 4; W32(esp, v); }
/* 84315e: push 0xae3da8 */
  { uint32_t v = 0xae3da8u; esp -= 4; W32(esp, v); }
/* 843163: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x843169u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 843169: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84316c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84316e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 843170: call 0x99caf8 */
  esp -= 4; W32(esp, 0x843175u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 843175: xor eax, eax */
  eax = 0;
/* 843177: xor edx, edx */
  edx = 0;
/* 843179: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84317b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 84317e: je 0x843185 */
  if (zf) goto L_843185;
L_843180: /* 843180: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 843183: jmp 0x84318f */
  goto L_84318f;
L_843185: /* 843185: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 843187: je 0x843195 */
  if (zf) goto L_843195;
L_843189: /* 843189: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 84318c: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
L_84318f: /* 84318f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 843192: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_843195: /* 843195: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 843198: jge 0x84325b */
  if ((sf == of)) goto L_84325b;
L_84319e: /* 84319e: mov eax, dword ptr [ebp + edx*4 - 0x28] */
  eax = R32((uint32_t)(ebp + edx*4 + 0xffffffd8u));
/* 8431a2: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 8431a5: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 8431a8: mov ecx, dword ptr [ebx + 0x18] */
  ecx = R32((uint32_t)(ebx + 0x18u));
/* 8431ab: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
/* 8431ae: mov dword ptr [eax + 0x40], esi */
  W32((uint32_t)(eax + 0x40u), esi);
/* 8431b1: mov cl, byte ptr [ebx + 0x20] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x20u))) & 0xffu);
/* 8431b4: mov byte ptr [eax + 0x44], cl */
  W8((uint32_t)(eax + 0x44u), (ecx & 0xffu));
/* 8431b7: mov cl, byte ptr [ebx + 0x21] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x21u))) & 0xffu);
/* 8431ba: mov byte ptr [eax + 0x45], cl */
  W8((uint32_t)(eax + 0x45u), (ecx & 0xffu));
/* 8431bd: lea esi, [ebx + 0x24] */
  esi = (uint32_t)(ebx + 0x24u);
/* 8431c0: lea edi, [eax + 0x48] */
  edi = (uint32_t)(eax + 0x48u);
/* 8431c3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8431c8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8431ca: lea esi, [ebx + 0x11c] */
  esi = (uint32_t)(ebx + 0x11cu);
/* 8431d0: lea edi, [eax + 0x88] */
  edi = (uint32_t)(eax + 0x88u);
/* 8431d6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8431db: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8431dd: and dword ptr [eax + 0x30], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x30u), r);
  }
/* 8431e1: mov esi, dword ptr [eax + 0xc8] */
  esi = R32((uint32_t)(eax + 0xc8u));
/* 8431e7: mov ecx, dword ptr [ebx + 0x15c] */
  ecx = R32((uint32_t)(ebx + 0x15cu));
/* 8431ed: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8431ef: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8431f2: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 8431f4: mov dword ptr [eax + 0xc8], esi */
  W32((uint32_t)(eax + 0xc8u), esi);
/* 8431fa: mov ecx, dword ptr [ebx + 0x15c] */
  ecx = R32((uint32_t)(ebx + 0x15cu));
/* 843200: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 843202: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 843205: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 843207: mov dword ptr [eax + 0xc8], ecx */
  W32((uint32_t)(eax + 0xc8u), ecx);
/* 84320d: mov esi, dword ptr [ebx + 0x15c] */
  esi = R32((uint32_t)(ebx + 0x15cu));
/* 843213: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 843215: and esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 843218: xor esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 84321a: mov dword ptr [eax + 0xc8], esi */
  W32((uint32_t)(eax + 0xc8u), esi);
/* 843220: mov ecx, dword ptr [ebx + 0x15c] */
  ecx = R32((uint32_t)(ebx + 0x15cu));
/* 843226: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 843228: and ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 84322b: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 84322d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 843230: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 843233: mov dword ptr [eax + 0xc8], ecx */
  W32((uint32_t)(eax + 0xc8u), ecx);
/* 843239: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 84323c: and ecx, 0xffffff8f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff8fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 84323f: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 843241: mov ecx, dword ptr [ebx + 0x15c] */
  ecx = R32((uint32_t)(ebx + 0x15cu));
/* 843247: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 84324a: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 84324c: mov dword ptr [eax + 0xc8], esi */
  W32((uint32_t)(eax + 0xc8u), esi);
/* 843252: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 843255: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 843256: jmp 0x843195 */
  goto L_843195;
L_84325b: /* 84325b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 84325e: mov edi, dword ptr [eax + 0xc8] */
  edi = R32((uint32_t)(eax + 0xc8u));
/* 843264: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 843267: and edi, 0xfffffffb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 84326a: mov dword ptr [eax + 0xc8], edi */
  W32((uint32_t)(eax + 0xc8u), edi);
/* 843270: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 843273: mov edx, dword ptr [eax + 0xc8] */
  edx = R32((uint32_t)(eax + 0xc8u));
/* 843279: and edx, 0xfffffffb */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 84327c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84327d: or edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 843280: mov dword ptr [eax + 0xc8], edx */
  W32((uint32_t)(eax + 0xc8u), edx);
/* 843286: mov eax, dword ptr [0xcc9a40] */
  eax = R32((uint32_t)(0xcc9a40u));
/* 84328b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84328c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 843293: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 843294: mov esp, ebp */
  esp = ebp;
/* 843296: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 843297: ret 8 */
  esp += 12; SPILL(); return;
}

void f_843380(void) {
  LOAD_REGS();
L_843380: /* 843380: sub esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 843386: mov edx, dword ptr [esp + 0xcc] */
  edx = R32((uint32_t)(esp + 0xccu));
/* 84338d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84338e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84338f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 843390: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 843391: mov edi, ecx */
  edi = ecx;
/* 843393: xor ebx, ebx */
  ebx = 0;
/* 843395: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 843397: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 84339b: jge 0x8433aa */
  if ((sf == of)) goto L_8433aa;
L_84339d: /* 84339d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 84339e: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8433a1: mov eax, edx */
  eax = edx;
/* 8433a3: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8433a6: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8433a8: jmp 0x8433b2 */
  goto L_8433b2;
L_8433aa: /* 8433aa: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 8433ad: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 8433b0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_8433b2: /* 8433b2: mov ebp, dword ptr [esp + 0xe0] */
  ebp = R32((uint32_t)(esp + 0xe0u));
/* 8433b9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8433bb: jge 0x8433cc */
  if ((sf == of)) goto L_8433cc;
L_8433bd: /* 8433bd: lea ecx, [ebp + 1] */
  ecx = (uint32_t)(ebp + 0x1u);
/* 8433c0: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8433c3: mov eax, ecx */
  eax = ecx;
/* 8433c5: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8433c8: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8433ca: jmp 0x8433d6 */
  goto L_8433d6;
L_8433cc: /* 8433cc: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 8433cf: mov ecx, ebp */
  ecx = ebp;
/* 8433d1: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 8433d4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_8433d6: /* 8433d6: mov esi, dword ptr [esp + 0xe4] */
  esi = R32((uint32_t)(esp + 0xe4u));
/* 8433dd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8433df: jge 0x8433f7 */
  if ((sf == of)) goto L_8433f7;
L_8433e1: /* 8433e1: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 8433e4: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8433e7: mov ebp, eax */
  ebp = eax;
/* 8433e9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8433ec: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8433ee: mov ebp, dword ptr [esp + 0xe0] */
  ebp = R32((uint32_t)(esp + 0xe0u));
/* 8433f5: jmp 0x8433ff */
  goto L_8433ff;
L_8433f7: /* 8433f7: mov eax, esi */
  eax = esi;
/* 8433f9: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8433fc: add eax, dword ptr [edi + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_8433ff: /* 8433ff: mov al, byte ptr [eax + 0x1c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1cu))) & 0xffu);
/* 843402: and al, byte ptr [ecx + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx + 0x1cu)));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 843405: test byte ptr [edx + 0x1c], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1cu))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 843408: jne 0x843705 */
  if (!zf) goto L_843705;
L_84340e: /* 84340e: mov ecx, dword ptr [esp + 0xdc] */
  ecx = R32((uint32_t)(esp + 0xdcu));
/* 843415: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 843419: mov dword ptr [esp + 0x5c], esi */
  W32((uint32_t)(esp + 0x5cu), esi);
/* 84341d: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 843421: mov dword ptr [esp + 0x58], ebp */
  W32((uint32_t)(esp + 0x58u), ebp);
/* 843425: mov dword ptr [esp + 0x30], 3 */
  W32((uint32_t)(esp + 0x30u), 0x3u);
/* 84342d: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
/* 843435: mov dword ptr [esp + 0x40], 2 */
  W32((uint32_t)(esp + 0x40u), 0x2u);
/* 84343d: mov dword ptr [esp + 0x44], 4 */
  W32((uint32_t)(esp + 0x44u), 0x4u);
/* 843445: mov dword ptr [esp + 0x48], 8 */
  W32((uint32_t)(esp + 0x48u), 0x8u);
/* 84344d: mov dword ptr [esp + 0x4c], 0x10 */
  W32((uint32_t)(esp + 0x4cu), 0x10u);
/* 843455: mov dword ptr [esp + 0x50], 0x20 */
  W32((uint32_t)(esp + 0x50u), 0x20u);
/* 84345d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 843465: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 843469: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 84346d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_843470: /* 843470: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 843472: mov eax, ebx */
  eax = ebx;
/* 843474: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 843477: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 843479: mov ebp, dword ptr [esp + eax*4 + 0x50] */
  ebp = R32((uint32_t)(esp + eax*4 + 0x50u));
/* 84347d: mov ecx, 1 */
  ecx = 0x1u;
/* 843482: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 843484: mov ebx, ecx */
  ebx = ecx;
/* 843486: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 84348d: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 843491: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 843493: lea esi, [esp + eax + 0x30] */
  esi = (uint32_t)(esp + eax + 0x30u);
/* 843497: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84349a: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 84349e: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 8434a4: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8434ac: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8434b0: jle 0x8435bd */
  if ((zf || sf != of)) goto L_8435bd;
L_8434b6: /* 8434b6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8434ba: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8434bc: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8434bf: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 8434c3: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
/* 8434ca: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 8434d1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8434d3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8434d7: jmp 0x8434e0 */
  goto L_8434e0;
L_8434d9: /* 8434d9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8434dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8434e0: /* 8434e0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8434e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8434e4: jge 0x8434f3 */
  if ((sf == of)) goto L_8434f3;
L_8434e6: /* 8434e6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8434e9: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 8434ec: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8434ef: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8434f1: jmp 0x8434fd */
  goto L_8434fd;
L_8434f3: /* 8434f3: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 8434f6: mov eax, ecx */
  eax = ecx;
/* 8434f8: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8434fb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_8434fd: /* 8434fd: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8434ff: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 843503: jge 0x843514 */
  if ((sf == of)) goto L_843514;
L_843505: /* 843505: lea eax, [ebp + 1] */
  eax = (uint32_t)(ebp + 0x1u);
/* 843508: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 84350b: mov edx, eax */
  edx = eax;
/* 84350d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 843510: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 843512: jmp 0x84351e */
  goto L_84351e;
L_843514: /* 843514: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 843517: mov eax, ebp */
  eax = ebp;
/* 843519: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 84351c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_84351e: /* 84351e: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 843522: mov dl, byte ptr [esp + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x38u))) & 0xffu);
/* 843526: test byte ptr [edi + 0x1c], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1cu))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 843529: je 0x843552 */
  if (zf) goto L_843552;
L_84352b: /* 84352b: test byte ptr [eax + 0x1c], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84352e: jne 0x843591 */
  if (!zf) goto L_843591;
L_843530: /* 843530: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 843534: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 843536: xor edx, edx */
  edx = 0;
/* 843538: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 84353a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84353b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84353c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 843540: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 843541: call 0x6cca22 */
  esp -= 4; W32(esp, 0x843546u); SPILL(); f_6cca22(); if (g_unwind) return; RELOAD();
/* 843546: lea ecx, [edi + ebx] */
  ecx = (uint32_t)(edi + ebx);
/* 843549: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 84354a: mov dword ptr [esp + ecx*4 + 0x54], eax */
  W32((uint32_t)(esp + ecx*4 + 0x54u), eax);
/* 84354e: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 843550: jmp 0x843591 */
  goto L_843591;
L_843552: /* 843552: test byte ptr [eax + 0x1c], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 843555: je 0x843585 */
  if (zf) goto L_843585;
L_843557: /* 843557: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 84355b: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 84355d: xor eax, eax */
  eax = 0;
/* 84355f: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 843561: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 843562: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 843563: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 843567: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 843568: call 0x6cca22 */
  esp -= 4; W32(esp, 0x84356du); SPILL(); f_6cca22(); if (g_unwind) return; RELOAD();
/* 84356d: lea ecx, [edi + ebx] */
  ecx = (uint32_t)(edi + ebx);
/* 843570: mov dword ptr [esp + ecx*4 + 0x54], eax */
  W32((uint32_t)(esp + ecx*4 + 0x54u), eax);
/* 843574: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 843578: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84357a: lea edx, [edi + ebx + 1] */
  edx = (uint32_t)(edi + ebx + 0x1u);
/* 84357e: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 843581: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 843583: jmp 0x84358d */
  goto L_84358d;
L_843585: /* 843585: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 843587: lea edx, [eax + ebx] */
  edx = (uint32_t)(eax + ebx);
/* 84358a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84358b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_84358d: /* 84358d: mov dword ptr [esp + edx*4 + 0x54], ecx */
  W32((uint32_t)(esp + edx*4 + 0x54u), ecx);
L_843591: /* 843591: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 843595: mov ebp, dword ptr [ecx] */
  ebp = R32((uint32_t)(ecx));
/* 843597: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 84359b: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 84359f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8435a2: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8435a6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8435aa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8435ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8435ad: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8435af: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8435b3: jl 0x8434d9 */
  if ((sf != of)) goto L_8434d9;
L_8435b9: /* 8435b9: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
L_8435bd: /* 8435bd: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8435c0: je 0x8435e3 */
  if (zf) goto L_8435e3;
L_8435c2: /* 8435c2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8435c6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8435ca: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 8435ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8435cf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8435d2: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8435d5: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8435d9: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8435dd: jl 0x843470 */
  if ((sf != of)) goto L_843470;
L_8435e3: /* 8435e3: mov ebp, dword ptr [esp + ebx*4 + 0x30] */
  ebp = R32((uint32_t)(esp + ebx*4 + 0x30u));
/* 8435e7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8435e9: lea eax, [esp + ebx*4 + 0x30] */
  eax = (uint32_t)(esp + ebx*4 + 0x30u);
/* 8435ed: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8435f1: je 0x843705 */
  if (zf) goto L_843705;
L_8435f7: /* 8435f7: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8435fa: lea esi, [edi + 0x1c] */
  esi = (uint32_t)(edi + 0x1cu);
/* 8435fd: shl ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 843600: xor eax, eax */
  eax = 0;
/* 843602: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 843604: jle 0x84361c */
  if ((zf || sf != of)) goto L_84361c;
L_843606: /* 843606: mov edi, dword ptr [esp + ebx + 0x54] */
  edi = R32((uint32_t)(esp + ebx + 0x54u));
/* 84360a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84360c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_843610: /* 843610: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 843612: je 0x843631 */
  if (zf) goto L_843631;
L_843614: /* 843614: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 843615: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 843618: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84361a: jl 0x843610 */
  if ((sf != of)) goto L_843610;
L_84361c: /* 84361c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 84361e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 843620: mov ecx, esi */
  ecx = esi;
/* 843622: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x843628u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 843628: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84362a: mov ecx, dword ptr [esp + ebx + 0x54] */
  ecx = R32((uint32_t)(esp + ebx + 0x54u));
/* 84362e: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_843631: /* 843631: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 843634: xor edi, edi */
  edi = 0;
/* 843636: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 843638: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 84363c: jle 0x843650 */
  if ((zf || sf != of)) goto L_843650;
L_84363e: /* 84363e: mov edx, dword ptr [esp + ebx + 0x58] */
  edx = R32((uint32_t)(esp + ebx + 0x58u));
/* 843642: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
L_843644: /* 843644: cmp dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 843646: je 0x843667 */
  if (zf) goto L_843667;
L_843648: /* 843648: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 843649: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84364c: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84364e: jl 0x843644 */
  if ((sf != of)) goto L_843644;
L_843650: /* 843650: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 843652: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 843654: mov ecx, esi */
  ecx = esi;
/* 843656: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x84365cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 84365c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84365e: mov ecx, dword ptr [esp + ebx + 0x58] */
  ecx = R32((uint32_t)(esp + ebx + 0x58u));
/* 843662: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 843665: mov edi, eax */
  edi = eax;
L_843667: /* 843667: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84366a: jle 0x843705 */
  if ((zf || sf != of)) goto L_843705;
L_843670: /* 843670: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 843674: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 843676: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 843679: lea ebp, [esp + ebx + 0x5c] */
  ebp = (uint32_t)(esp + ebx + 0x5cu);
/* 84367d: mov ebx, dword ptr [esp + 0xd8] */
  ebx = R32((uint32_t)(esp + 0xd8u));
/* 843684: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 843688: jmp 0x843690 */
  goto L_843690;
L_843690: /* 843690: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 843694: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 843698: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 843699: mov ecx, ebx */
  ecx = ebx;
/* 84369b: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 84369f: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8436a5u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8436a5: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 8436a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8436aa: mov ecx, ebx */
  ecx = ebx;
/* 8436ac: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 8436b0: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8436b6u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8436b6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8436b9: xor edi, edi */
  edi = 0;
/* 8436bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8436bd: jle 0x8436d0 */
  if ((zf || sf != of)) goto L_8436d0;
L_8436bf: /* 8436bf: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 8436c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
L_8436c4: /* 8436c4: cmp dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8436c6: je 0x8436e6 */
  if (zf) goto L_8436e6;
L_8436c8: /* 8436c8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8436c9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8436cc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8436ce: jl 0x8436c4 */
  if ((sf != of)) goto L_8436c4;
L_8436d0: /* 8436d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8436d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8436d4: mov ecx, esi */
  ecx = esi;
/* 8436d6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8436dcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8436dc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8436de: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 8436e1: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8436e4: mov edi, eax */
  edi = eax;
L_8436e6: /* 8436e6: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 8436ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8436eb: mov ecx, ebx */
  ecx = ebx;
/* 8436ed: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 8436f1: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8436f7u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8436f7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8436fb: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8436fe: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8436ff: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 843703: jne 0x843690 */
  if (!zf) goto L_843690;
L_843705: /* 843705: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 843706: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 843707: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 843708: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 843709: add esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84370f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_84368a(void) {
  LOAD_REGS();
L_84368a: /* 84368a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_843690: /* 843690: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 843694: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 843698: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 843699: mov ecx, ebx */
  ecx = ebx;
/* 84369b: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 84369f: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8436a5u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8436a5: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 8436a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8436aa: mov ecx, ebx */
  ecx = ebx;
/* 8436ac: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 8436b0: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8436b6u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8436b6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8436b9: xor edi, edi */
  edi = 0;
/* 8436bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8436bd: jle 0x8436d0 */
  if ((zf || sf != of)) goto L_8436d0;
L_8436bf: /* 8436bf: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 8436c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
L_8436c4: /* 8436c4: cmp dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8436c6: je 0x8436e6 */
  if (zf) goto L_8436e6;
L_8436c8: /* 8436c8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8436c9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8436cc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8436ce: jl 0x8436c4 */
  if ((sf != of)) goto L_8436c4;
L_8436d0: /* 8436d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8436d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8436d4: mov ecx, esi */
  ecx = esi;
/* 8436d6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8436dcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8436dc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8436de: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 8436e1: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8436e4: mov edi, eax */
  edi = eax;
L_8436e6: /* 8436e6: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 8436ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8436eb: mov ecx, ebx */
  ecx = ebx;
/* 8436ed: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 8436f1: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8436f7u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8436f7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8436fb: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8436fe: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8436ff: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 843703: jne 0x843690 */
  if (!zf) goto L_843690;
L_843705: /* 843705: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 843706: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 843707: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 843708: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 843709: add esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84370f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_843810(void) {
  LOAD_REGS();
L_843810: /* 843810: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 843812: push 0x9d3696 */
  { uint32_t v = 0x9d3696u; esp -= 4; W32(esp, v); }
/* 843817: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84381d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84381e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 843825: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 843826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 843827: mov esi, ecx */
  esi = ecx;
/* 843829: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 84382d: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 843830: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 843838: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x84383du); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 84383d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 843840: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 843845: call 0x6cc342 */
  esp -= 4; W32(esp, 0x84384au); SPILL(); f_6cc342(); if (g_unwind) return; RELOAD();
/* 84384a: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 84384d: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 843855: call 0x6c1ee2 */
  esp -= 4; W32(esp, 0x84385au); SPILL(); f_6c1ee2(); if (g_unwind) return; RELOAD();
/* 84385a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 84385e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84385f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 843866: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 843869: ret  */
  esp += 4; SPILL(); return;
}

void f_843890(void) {
  LOAD_REGS();
L_843890: /* 843890: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 843891: mov ebp, esp */
  ebp = esp;
/* 843893: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 843895: push 0x9d3703 */
  { uint32_t v = 0x9d3703u; esp -= 4; W32(esp, v); }
/* 84389a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8438a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8438a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8438a8: sub esp, 0xa8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8438ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8438af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8438b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8438b1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8438b4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8438b7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8438ba: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8438c0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8438c0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8438c3: xor ebx, ebx */
  ebx = 0;
/* 8438c5: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8438c8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8438cb: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8438d1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8438d1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8438d4: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8438d7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8438db: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8438e1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8438e1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8438e4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8438e7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8438e9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8438ec: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8438ef: mov dword ptr [edx + 0x28], eax */
  W32((uint32_t)(edx + 0x28u), eax);
/* 8438f2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8438f5: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8438f8: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8438fa: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8438fe: jne 0x843918 */
  if (!zf) goto L_843918;
L_843900: /* 843900: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 843905: push 0xae40fc */
  { uint32_t v = 0xae40fcu; esp -= 4; W32(esp, v); }
/* 84390a: push 0xae40e0 */
  { uint32_t v = 0xae40e0u; esp -= 4; W32(esp, v); }
/* 84390f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x843915u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 843915: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_843918: /* 843918: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84391b: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 84391e: cmp dword ptr [ecx + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 843921: jne 0x84393b */
  if (!zf) goto L_84393b;
L_843923: /* 843923: push 0x34d */
  { uint32_t v = 0x34du; esp -= 4; W32(esp, v); }
/* 843928: push 0xae40fc */
  { uint32_t v = 0xae40fcu; esp -= 4; W32(esp, v); }
/* 84392d: push 0xae40c4 */
  { uint32_t v = 0xae40c4u; esp -= 4; W32(esp, v); }
/* 843932: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x843938u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 843938: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_84393b: /* 84393b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84393e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 843940: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x843945u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 843945: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 843948: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 84394b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84394d: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 843950: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 843953: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 843956: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 843957: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84395d: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x843963u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 843963: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 843966: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 843969: fchs  */
  ST0 = -ST0;
/* 84396b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84396d: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 843970: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 843973: fchs  */
  ST0 = -ST0;
/* 843975: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 843978: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 84397b: fchs  */
  ST0 = -ST0;
/* 84397d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 843980: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x843985u); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 843985: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 843988: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84398b: add eax, 0x48 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84398e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 843991: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 843994: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 843997: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 84399a: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 84399d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8439a0: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8439a7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8439aa: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8439ad: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8439b0: lea edi, [ebp - 0x70] */
  edi = (uint32_t)(ebp + 0xffffff90u);
/* 8439b3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8439b5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8439b7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8439b9: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8439bc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8439be: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8439c1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8439c3: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8439c6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8439c9: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8439cc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8439cf: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8439d2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8439d5: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8439d8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8439db: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8439de: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8439e0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8439e2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8439e4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8439e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8439e8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8439eb: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8439ee: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8439f1: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8439f4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8439f7: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8439fa: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8439fd: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 843a00: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843a02: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 843a04: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843a06: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843a08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843a0a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843a0d: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 843a10: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843a13: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 843a16: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843a19: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 843a1c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843a1f: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 843a22: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843a24: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 843a26: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843a28: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843a2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843a2c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843a2e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 843a30: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 843a32: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 843a35: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 843a38: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 843a3b: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 843a3e: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 843a41: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 843a44: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 843a47: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 843a4a: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 843a4d: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 843a50: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 843a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 843a54: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 843a57: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 843a5a: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x843a60u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 843a60: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 843a63: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 843a65: call 0x6ca2c2 */
  esp -= 4; W32(esp, 0x843a6au); SPILL(); f_6ca2c2(); if (g_unwind) return; RELOAD();
/* 843a6a: mov edx, dword ptr [eax + 0x88] */
  edx = R32((uint32_t)(eax + 0x88u));
/* 843a70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 843a73: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 843a76: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 843a78: fild dword ptr [ecx + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x348u)); FPUSH(v); }
/* 843a7e: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 843a81: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 843a84: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 843a86: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 843a8c: mov ecx, eax */
  ecx = eax;
/* 843a8e: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 843a91: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x843a94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 843a94: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 843a97: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 843a9a: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 843a9d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 843a9f: fild dword ptr [edx + 0x344] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x344u)); FPUSH(v); }
/* 843aa5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 843aa8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 843aae: fmul qword ptr [0xa16260] */
  ST0 = ST0 * (F64((uint32_t)(0xa16260u)));
/* 843ab4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 843ab7: call dword ptr [0xcfab08] */
  esp -= 4; W32(esp, 0x843abdu); SPILL(); f_4e2a3b(); if (g_unwind) return; /* Core!?appTan@@YANN@Z */ RELOAD();
/* 843abd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 843ac0: fstp qword ptr [ebp - 0x30] */
  WF64((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 843ac3: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 843ac6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 843ac8: fld dword ptr [edx + 0x284] */
  { double v = F32((uint32_t)(edx + 0x284u)); FPUSH(v); }
/* 843ace: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 843ad1: fdiv qword ptr [ebp - 0x30] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xffffffd0u)));
/* 843ad4: fimul dword ptr [ebp - 0x18] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)));
/* 843ad7: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 843add: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 843adf: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* 843ae2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 843ae5: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 843ae8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 843aea: fild dword ptr [edx + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x348u)); FPUSH(v); }
/* 843af0: fadd dword ptr [eax + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x2cu)));
/* 843af3: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 843af6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 843af9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 843afb: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 843afe: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 843b01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 843b02: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 843b05: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x843b0bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 843b0b: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 843b0e: mov edi, edi */
  edi = edi;
L_843b10: /* 843b10: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 843b13: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 843b15: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 843b18: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 843b1b: cmp edx, dword ptr [ecx + 0x68] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 843b1e: jge 0x843db8 */
  if ((sf == of)) goto L_843db8;
L_843b24: /* 843b24: mov ecx, dword ptr [ecx + 0x64] */
  ecx = R32((uint32_t)(ecx + 0x64u));
/* 843b27: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 843b2a: mov ebx, edx */
  ebx = edx;
/* 843b2c: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 843b2f: fld dword ptr [ecx + edx*8 + 4] */
  { double v = F32((uint32_t)(ecx + edx*8 + 0x4u)); FPUSH(v); }
/* 843b33: lea ecx, [ecx + edx*8] */
  ecx = (uint32_t)(ecx + edx*8);
/* 843b36: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 843b38: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 843b3b: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 843b3e: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 843b41: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 843b44: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 843b47: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 843b4a: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 843b4c: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 843b4f: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
/* 843b56: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 843b59: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 843b5c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 843b5f: lea edi, [ebp - 0x38] */
  edi = (uint32_t)(ebp + 0xffffffc8u);
/* 843b62: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 843b64: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 843b66: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 843b68: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 843b6b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 843b6d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 843b70: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 843b72: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 843b75: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 843b78: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 843b7b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 843b7e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 843b81: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 843b84: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 843b87: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 843b8a: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 843b8d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843b8f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 843b91: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843b93: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843b95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843b97: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 843b9a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 843b9d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 843ba0: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 843ba3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 843ba6: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 843ba9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 843bac: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 843baf: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843bb1: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 843bb3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843bb5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843bb7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843bb9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843bbc: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 843bbf: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843bc2: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 843bc5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843bc8: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 843bcb: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843bce: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 843bd1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843bd3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 843bd5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843bd7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843bd9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843bdb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843bdd: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 843bdf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 843be1: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 843be4: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 843be7: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 843bea: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 843bed: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 843bf0: mov ecx, ebx */
  ecx = ebx;
/* 843bf2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 843bf4: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 843bf7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 843bfa: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 843bfd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 843c00: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 843c03: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 843c05: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 843c08: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 843c0b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 843c0e: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 843c11: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 843c14: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 843c17: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 843c1a: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 843c1d: mov dword ptr [ebp - 0x64], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x3f800000u);
/* 843c24: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 843c27: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 843c2a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 843c2d: lea edi, [ebp - 0xb0] */
  edi = (uint32_t)(ebp + 0xffffff50u);
/* 843c33: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 843c35: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 843c37: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 843c39: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 843c3c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 843c3e: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 843c41: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 843c43: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 843c46: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 843c49: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 843c4c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 843c4f: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 843c52: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 843c55: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 843c58: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 843c5b: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 843c5e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843c60: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 843c62: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843c64: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843c66: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843c68: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 843c6b: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 843c6e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 843c71: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 843c74: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 843c77: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 843c7a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 843c7d: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 843c80: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843c82: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 843c84: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843c86: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843c88: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843c8a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843c8d: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 843c90: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843c93: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 843c96: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843c99: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 843c9c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 843c9f: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 843ca2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843ca4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 843ca6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843ca8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 843caa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843cac: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 843cae: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 843cb0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 843cb2: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 843cb5: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 843cb8: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 843cbb: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 843cc1: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 843cc7: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 843cca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 843ccc: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 843cd2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 843cd5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 843cd8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 843cdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 843cdc: call 0x6c5ec5 */
  esp -= 4; W32(esp, 0x843ce1u); SPILL(); f_6c5ec5(); if (g_unwind) return; RELOAD();
/* 843ce1: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 843ce7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 843cea: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 843ced: mov edx, dword ptr [ecx + 0x15c] */
  edx = R32((uint32_t)(ecx + 0x15cu));
/* 843cf3: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 843cf6: jne 0x843d28 */
  if (!zf) goto L_843d28;
L_843cf8: /* 843cf8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 843cfb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 843cfd: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 843d00: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 843d03: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 843d06: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 843d09: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843d0b: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 843d0e: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 843d11: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843d13: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 843d19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 843d1b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 843d1e: je 0x843d28 */
  if (zf) goto L_843d28;
L_843d20: /* 843d20: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 843d22: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_843d28: /* 843d28: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 843d2b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 843d31: je 0x843da5 */
  if (zf) goto L_843da5;
L_843d33: /* 843d33: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 843d35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 843d37: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 843d39: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 843d3e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 843d40: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 843d43: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 843d46: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 843d49: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 843d4c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 843d4e: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 843d51: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 843d53: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 843d56: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843d58: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 843d5a: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 843d5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 843d5f: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 843d62: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 843d68: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 843d6e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 843d70: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 843d73: jp 0x843d90 */
  if (pf) goto L_843d90;
L_843d75: /* 843d75: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 843d78: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 843d7a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 843d80: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 843d81: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 843d83: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 843d86: fstp dword ptr [ebx + 0x18] */
  WF32((uint32_t)(ebx + 0x18u), ST0); FPOP();
/* 843d89: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 843d8b: jmp 0x843b10 */
  goto L_843b10;
L_843d90: /* 843d90: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 843d96: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 843d98: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 843d9b: jnp 0x843da5 */
  if (!pf) goto L_843da5;
L_843d9d: /* 843d9d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 843d9f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_843da5: /* 843da5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 843da8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 843daa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 843dab: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 843dae: fstp dword ptr [ebx + 0x18] */
  WF32((uint32_t)(ebx + 0x18u), ST0); FPOP();
/* 843db1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 843db3: jmp 0x843b10 */
  goto L_843b10;
L_843db8: /* 843db8: xor edx, edx */
  edx = 0;
/* 843dba: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 843dbd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_843dc0: /* 843dc0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 843dc2: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 843dc5: cmp edx, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 843dc8: jge 0x8444ec */
  if ((sf == of)) goto L_8444ec;
L_843dce: /* 843dce: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 843dd1: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 843dd7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 843dd9: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 843ddc: lea ebx, [eax + edx*4] */
  ebx = (uint32_t)(eax + edx*4);
/* 843ddf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 843de1: push 0xae4078 */
  { uint32_t v = 0xae4078u; esp -= 4; W32(esp, v); }
/* 843de6: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 843de8: mov dword ptr [ebp - 0x80], ebx */
  W32((uint32_t)(ebp + 0xffffff80u), ebx);
/* 843deb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x843dedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 843ded: mov esi, eax */
  esi = eax;
/* 843def: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 843df1: mov dword ptr [ebp - 0x84], esi */
  W32((uint32_t)(ebp + 0xffffff7cu), esi);
/* 843df7: je 0x843e24 */
  if (zf) goto L_843e24;
L_843df9: /* 843df9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 843dfc: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x843e02u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 843e02: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 843e05: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 843e09: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x843e0fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 843e0f: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 843e12: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 843e16: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x843e1cu); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 843e1c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 843e20: mov edi, esi */
  edi = esi;
/* 843e22: jmp 0x843e26 */
  goto L_843e26;
L_843e24: /* 843e24: xor edi, edi */
  edi = 0;
L_843e26: /* 843e26: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 843e29: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 843e2c: xor eax, eax */
  eax = 0;
L_843e2e: /* 843e2e: movzx edx, word ptr [ebx + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x10u)));
/* 843e32: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 843e34: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 843e37: jge 0x84417f */
  if ((sf == of)) goto L_84417f;
L_843e3d: /* 843e3d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 843e3f: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 843e42: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 843e45: movzx eax, word ptr [ebx + 8] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x8u)));
/* 843e49: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 843e4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 843e4c: add ecx, 0xc4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 843e52: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x843e58u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 843e58: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 843e5b: movzx eax, word ptr [ebx + 8] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0x8u)));
/* 843e5f: mov word ptr [ebp - 0x30], dx */
  W16((uint32_t)(ebp + 0xffffffd0u), (edx & 0xffffu));
/* 843e63: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 843e66: lea ecx, [eax + esi + 1] */
  ecx = (uint32_t)(eax + esi + 0x1u);
/* 843e6a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 843e6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 843e6d: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 843e70: add ecx, 0xc4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 843e76: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x843e7cu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 843e7c: movzx ecx, word ptr [ebx + 8] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x8u)));
/* 843e80: mov di, word ptr [eax] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 843e83: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 843e86: lea edx, [ecx + esi + 2] */
  edx = (uint32_t)(ecx + esi + 0x2u);
/* 843e8a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 843e8c: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 843e8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 843e90: add ecx, 0xc4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 843e96: mov word ptr [ebp - 0x2e], di */
  W16((uint32_t)(ebp + 0xffffffd2u), (edi & 0xffffu));
/* 843e9a: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x843ea0u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 843ea0: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 843ea3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 843ea6: movzx esi, ax */
  esi = (uint32_t)((eax & 0xffffu));
/* 843ea9: mov word ptr [ebp - 0x2c], ax */
  W16((uint32_t)(ebp + 0xffffffd4u), (eax & 0xffffu));
/* 843ead: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 843eb0: mov edx, esi */
  edx = esi;
/* 843eb2: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 843eb5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 843eb7: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 843eba: movzx edx, di */
  edx = (uint32_t)((edi & 0xffffu));
/* 843ebd: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 843ec0: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 843ec3: mov bl, byte ptr [edx + eax + 0x1c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax + 0x1cu))) & 0xffu);
/* 843ec7: lea edi, [edx + eax] */
  edi = (uint32_t)(edx + eax);
/* 843eca: mov dword ptr [ebp - 0x84], edi */
  W32((uint32_t)(ebp + 0xffffff7cu), edi);
/* 843ed0: movzx edi, word ptr [ebp - 0x30] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0xffffffd0u)));
/* 843ed4: mov edx, edi */
  edx = edi;
/* 843ed6: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 843ed9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 843edb: mov dl, byte ptr [eax + 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1cu))) & 0xffu);
/* 843ede: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 843ee1: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 843ee3: and al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 843ee5: mov byte ptr [ebp - 0x21], bl */
  W8((uint32_t)(ebp + 0xffffffdfu), (ebx & 0xffu));
/* 843ee8: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 843eeb: mov bl, byte ptr [ebx + 0x1c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x1cu))) & 0xffu);
/* 843eee: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 843ef0: jne 0x844170 */
  if (!zf) goto L_844170;
L_843ef6: /* 843ef6: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 843ef9: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 843efc: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 843f02: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* 843f05: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 843f08: fadd dword ptr [eax + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x18u)));
/* 843f0b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 843f11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 843f13: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 843f16: jnp 0x844170 */
  if (!pf) goto L_844170;
L_843f1c: /* 843f1c: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 843f1f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 843f21: test byte ptr [eax + 0x34c], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 843f28: je 0x843faf */
  if (zf) goto L_843faf;
L_843f2e: /* 843f2e: or dl, byte ptr [ebp - 0x21] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdfu)));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 843f31: or dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  zf = (r) == 0;
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 843f33: je 0x843faf */
  if (zf) goto L_843faf;
L_843f35: /* 843f35: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 843f38: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 843f3e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 843f40: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 843f43: jp 0x843f7c */
  if (pf) goto L_843f7c;
L_843f45: /* 843f45: mov edx, 0xffffffff */
  edx = 0xffffffffu;
/* 843f4a: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 843f4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 843f4d: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 843f50: mov eax, 0xffffffff */
  eax = 0xffffffffu;
/* 843f55: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 843f57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 843f58: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 843f5b: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 843f5e: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 843f60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 843f61: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 843f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 843f65: call 0x6c4b6a */
  esp -= 4; W32(esp, 0x843f6au); SPILL(); f_6c4b6a(); if (g_unwind) return; RELOAD();
/* 843f6a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 843f6d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 843f70: mov ebx, dword ptr [ebp - 0x80] */
  ebx = R32((uint32_t)(ebp + 0xffffff80u));
/* 843f73: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 843f76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 843f77: jmp 0x843e2e */
  goto L_843e2e;
L_843f7c: /* 843f7c: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 843f7f: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 843f81: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 843f84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 843f85: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 843f88: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 843f8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 843f8b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 843f8e: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 843f91: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 843f93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 843f94: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 843f97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 843f98: call 0x6c4b6a */
  esp -= 4; W32(esp, 0x843f9du); SPILL(); f_6c4b6a(); if (g_unwind) return; RELOAD();
/* 843f9d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 843fa0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 843fa3: mov ebx, dword ptr [ebp - 0x80] */
  ebx = R32((uint32_t)(ebp + 0xffffff80u));
/* 843fa6: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 843fa9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 843faa: jmp 0x843e2e */
  goto L_843e2e;
L_843faf: /* 843faf: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 843fb2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 843fb8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 843fba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 843fbd: jp 0x844098 */
  if (pf) goto L_844098;
L_843fc3: /* 843fc3: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 843fc6: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 843fc8: lea esi, [ecx + 0x1c] */
  esi = (uint32_t)(ecx + 0x1cu);
/* 843fcb: xor eax, eax */
  eax = 0;
/* 843fcd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_843fd0: /* 843fd0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 843fd3: jge 0x843fdf */
  if ((sf == of)) goto L_843fdf;
L_843fd5: /* 843fd5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 843fd7: cmp dword ptr [ecx + eax*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 843fda: je 0x843ff0 */
  if (zf) goto L_843ff0;
L_843fdc: /* 843fdc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 843fdd: jmp 0x843fd0 */
  goto L_843fd0;
L_843fdf: /* 843fdf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 843fe1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 843fe3: mov ecx, esi */
  ecx = esi;
/* 843fe5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x843febu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 843feb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 843fed: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
L_843ff0: /* 843ff0: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 843ff3: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 843ff9: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 843fff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844000: lea ecx, [ebx + 0x20] */
  ecx = (uint32_t)(ebx + 0x20u);
/* 844003: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x844009u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 844009: movzx ecx, word ptr [ebp - 0x2e] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xffffffd2u)));
/* 84400d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 844010: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 844013: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 844015: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 844018: xor eax, eax */
  eax = 0;
/* 84401a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_844020: /* 844020: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844023: jge 0x84402f */
  if ((sf == of)) goto L_84402f;
L_844025: /* 844025: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 844027: cmp dword ptr [edx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84402a: je 0x844040 */
  if (zf) goto L_844040;
L_84402c: /* 84402c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84402d: jmp 0x844020 */
  goto L_844020;
L_84402f: /* 84402f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 844031: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 844033: mov ecx, edi */
  ecx = edi;
/* 844035: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x84403bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 84403b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 84403d: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
L_844040: /* 844040: lea edx, [ebp - 0x9c] */
  edx = (uint32_t)(ebp + 0xffffff64u);
/* 844046: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844047: lea ecx, [ebx + 0x20] */
  ecx = (uint32_t)(ebx + 0x20u);
/* 84404a: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 844050: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x844056u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 844056: movzx eax, word ptr [ebp - 0x30] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffd0u)));
/* 84405a: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 84405d: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 844060: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 844062: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 844065: xor eax, eax */
  eax = 0;
L_844067: /* 844067: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84406a: jge 0x844076 */
  if ((sf == of)) goto L_844076;
L_84406c: /* 84406c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 84406e: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 844071: je 0x844087 */
  if (zf) goto L_844087;
L_844073: /* 844073: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 844074: jmp 0x844067 */
  goto L_844067;
L_844076: /* 844076: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 844078: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84407a: mov ecx, edi */
  ecx = edi;
/* 84407c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x844082u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 844082: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 844084: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_844087: /* 844087: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 84408d: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 844093: jmp 0x844163 */
  goto L_844163;
L_844098: /* 844098: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 84409b: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 84409d: lea edi, [ecx + 0x1c] */
  edi = (uint32_t)(ecx + 0x1cu);
/* 8440a0: xor eax, eax */
  eax = 0;
L_8440a2: /* 8440a2: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8440a5: jge 0x8440b1 */
  if ((sf == of)) goto L_8440b1;
L_8440a7: /* 8440a7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8440a9: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8440ac: je 0x8440c2 */
  if (zf) goto L_8440c2;
L_8440ae: /* 8440ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8440af: jmp 0x8440a2 */
  goto L_8440a2;
L_8440b1: /* 8440b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8440b3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8440b5: mov ecx, edi */
  ecx = edi;
/* 8440b7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8440bdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8440bd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8440bf: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_8440c2: /* 8440c2: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8440c5: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 8440cb: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 8440d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8440d2: lea ecx, [ebx + 0x20] */
  ecx = (uint32_t)(ebx + 0x20u);
/* 8440d5: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8440dbu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8440db: movzx ecx, word ptr [ebp - 0x2e] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xffffffd2u)));
/* 8440df: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8440e2: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8440e5: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8440e7: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8440ea: xor eax, eax */
  eax = 0;
/* 8440ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8440f0: /* 8440f0: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8440f3: jge 0x8440ff */
  if ((sf == of)) goto L_8440ff;
L_8440f5: /* 8440f5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8440f7: cmp dword ptr [edx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8440fa: je 0x844110 */
  if (zf) goto L_844110;
L_8440fc: /* 8440fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8440fd: jmp 0x8440f0 */
  goto L_8440f0;
L_8440ff: /* 8440ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 844101: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 844103: mov ecx, edi */
  ecx = edi;
/* 844105: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x84410bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 84410b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 84410d: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
L_844110: /* 844110: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 844116: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844117: lea ecx, [ebx + 0x20] */
  ecx = (uint32_t)(ebx + 0x20u);
/* 84411a: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 844120: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x844126u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 844126: movzx eax, word ptr [ebp - 0x2c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffd4u)));
/* 84412a: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 84412d: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 844130: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 844132: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 844135: xor eax, eax */
  eax = 0;
L_844137: /* 844137: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84413a: jge 0x844146 */
  if ((sf == of)) goto L_844146;
L_84413c: /* 84413c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 84413e: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 844141: je 0x844157 */
  if (zf) goto L_844157;
L_844143: /* 844143: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 844144: jmp 0x844137 */
  goto L_844137;
L_844146: /* 844146: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 844148: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84414a: mov ecx, edi */
  ecx = edi;
/* 84414c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x844152u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 844152: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 844154: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_844157: /* 844157: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 84415d: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
L_844163: /* 844163: lea ecx, [ebx + 0x20] */
  ecx = (uint32_t)(ebx + 0x20u);
/* 844166: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844167: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x84416du); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 84416d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_844170: /* 844170: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 844173: mov ebx, dword ptr [ebp - 0x80] */
  ebx = R32((uint32_t)(ebp + 0xffffff80u));
/* 844176: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 844179: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84417a: jmp 0x843e2e */
  goto L_843e2e;
L_84417f: /* 84417f: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 844182: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844184: jne 0x8441ca */
  if (!zf) goto L_8441ca;
L_844186: /* 844186: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 844189: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 84418c: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 844190: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x844196u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 844196: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 844199: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 84419d: call 0x6cb555 */
  esp -= 4; W32(esp, 0x8441a2u); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 8441a2: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 8441a5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8441a9: call 0x6cae43 */
  esp -= 4; W32(esp, 0x8441aeu); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 8441ae: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8441b4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8441b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8441b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8441b9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8441bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8441bc: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 8441bf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8441c2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8441c5: jmp 0x843dc0 */
  goto L_843dc0;
L_8441ca: /* 8441ca: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 8441cd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8441cf: lea esi, [edi + 8] */
  esi = (uint32_t)(edi + 0x8u);
/* 8441d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8441d3: mov ecx, esi */
  ecx = esi;
/* 8441d5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8441dbu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8441db: xor edx, edx */
  edx = 0;
/* 8441dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8441e0: /* 8441e0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8441e3: cmp edx, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8441e6: jge 0x844235 */
  if ((sf == of)) goto L_844235;
L_8441e8: /* 8441e8: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 8441eb: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8441ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8441f0: jge 0x8441ff */
  if ((sf == of)) goto L_8441ff;
L_8441f2: /* 8441f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8441f3: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8441f6: mov edi, eax */
  edi = eax;
/* 8441f8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8441fb: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8441fd: jmp 0x844207 */
  goto L_844207;
L_8441ff: /* 8441ff: mov edi, dword ptr [ecx + 0x10] */
  edi = R32((uint32_t)(ecx + 0x10u));
/* 844202: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 844205: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_844207: /* 844207: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844209: mov ecx, edx */
  ecx = edx;
/* 84420b: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 84420e: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 844210: mov edi, eax */
  edi = eax;
/* 844212: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 844214: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 844216: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 844219: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 84421c: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 84421f: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 844222: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 844225: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 844228: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 84422b: lea esi, [edi + 8] */
  esi = (uint32_t)(edi + 0x8u);
/* 84422e: mov dword ptr [ecx + ebx + 0xc], eax */
  W32((uint32_t)(ecx + ebx + 0xcu), eax);
/* 844232: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 844233: jmp 0x8441e0 */
  goto L_8441e0;
L_844235: /* 844235: xor eax, eax */
  eax = 0;
/* 844237: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 84423a: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
/* 84423d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844240: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 844243: mov dl, byte ptr [ecx + 0x20] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x20u))) & 0xffu);
/* 844246: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 844248: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84424a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84424c: je 0x8442d6 */
  if (zf) goto L_8442d6;
L_844252: /* 844252: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 844255: mov esi, dword ptr [ecx + 0x54] */
  esi = R32((uint32_t)(ecx + 0x54u));
/* 844258: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 844259: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x84425fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84425f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844261: jne 0x8442ce */
  if (!zf) goto L_8442ce;
L_844263: /* 844263: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 844269: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 84426c: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 84426f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844271: jne 0x8442ce */
  if (!zf) goto L_8442ce;
L_844273: /* 844273: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 844278: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x84427eu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 84427e: mov ebx, eax */
  ebx = eax;
/* 844280: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844282: je 0x8442a2 */
  if (zf) goto L_8442a2;
L_844284: /* 844284: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 844289: mov ecx, ebx */
  ecx = ebx;
/* 84428b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x844291u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 844291: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844293: jne 0x8442cb */
  if (!zf) goto L_8442cb;
L_844295: /* 844295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844296: mov ecx, ebx */
  ecx = ebx;
/* 844298: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x84429eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 84429e: mov esi, eax */
  esi = eax;
/* 8442a0: jmp 0x8442a7 */
  goto L_8442a7;
L_8442a2: /* 8442a2: mov esi, 0xae3fc0 */
  esi = 0xae3fc0u;
L_8442a7: /* 8442a7: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 8442ac: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8442b2u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8442b2: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8442b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8442b9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8442bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8442bc: push 0xae3fcc */
  { uint32_t v = 0xae3fccu; esp -= 4; W32(esp, v); }
/* 8442c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8442c2: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8442c8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8442c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8442cb: /* 8442cb: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
L_8442ce: /* 8442ce: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8442d1: jmp 0x8443ef */
  goto L_8443ef;
L_8442d6: /* 8442d6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8442d9: mov ebx, dword ptr [ecx + 0x54] */
  ebx = R32((uint32_t)(ecx + 0x54u));
/* 8442dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8442dd: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x8442e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8442e3: mov esi, eax */
  esi = eax;
/* 8442e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8442e7: jne 0x84435a */
  if (!zf) goto L_84435a;
L_8442e9: /* 8442e9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8442ec: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 8442f2: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8442f5: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 8442f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8442fa: jne 0x84435a */
  if (!zf) goto L_84435a;
L_8442fc: /* 8442fc: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 844301: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x844307u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 844307: mov esi, eax */
  esi = eax;
/* 844309: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84430b: je 0x84432b */
  if (zf) goto L_84432b;
L_84430d: /* 84430d: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 844312: mov ecx, esi */
  ecx = esi;
/* 844314: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x84431au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 84431a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84431c: jne 0x844353 */
  if (!zf) goto L_844353;
L_84431e: /* 84431e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84431f: mov ecx, esi */
  ecx = esi;
/* 844321: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x844327u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 844327: mov ebx, eax */
  ebx = eax;
/* 844329: jmp 0x844330 */
  goto L_844330;
L_84432b: /* 84432b: mov ebx, 0xae3fc0 */
  ebx = 0xae3fc0u;
L_844330: /* 844330: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 844335: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x84433bu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 84433b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84433c: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 844341: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 844343: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 844344: push 0xae3fcc */
  { uint32_t v = 0xae3fccu; esp -= 4; W32(esp, v); }
/* 844349: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84434a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x844350u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 844350: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_844353: /* 844353: mov esi, dword ptr [esi + 0x2c] */
  esi = R32((uint32_t)(esi + 0x2cu));
/* 844356: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844358: je 0x84436e */
  if (zf) goto L_84436e;
L_84435a: /* 84435a: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 84435f: mov ecx, esi */
  ecx = esi;
/* 844361: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x844367u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 844367: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844369: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 84436c: jne 0x844375 */
  if (!zf) goto L_844375;
L_84436e: /* 84436e: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_844375: /* 844375: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844377: je 0x84438e */
  if (zf) goto L_84438e;
L_844379: /* 844379: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 84437e: mov ecx, esi */
  ecx = esi;
/* 844380: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x844386u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 844386: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844388: je 0x84438e */
  if (zf) goto L_84438e;
L_84438a: /* 84438a: mov ebx, esi */
  ebx = esi;
/* 84438c: jmp 0x844390 */
  goto L_844390;
L_84438e: /* 84438e: xor ebx, ebx */
  ebx = 0;
L_844390: /* 844390: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844392: je 0x8443a9 */
  if (zf) goto L_8443a9;
L_844394: /* 844394: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 844399: mov ecx, esi */
  ecx = esi;
/* 84439b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8443a1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8443a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8443a3: je 0x8443a9 */
  if (zf) goto L_8443a9;
L_8443a5: /* 8443a5: mov eax, esi */
  eax = esi;
/* 8443a7: jmp 0x8443ab */
  goto L_8443ab;
L_8443a9: /* 8443a9: xor eax, eax */
  eax = 0;
L_8443ab: /* 8443ab: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8443ad: je 0x8443ba */
  if (zf) goto L_8443ba;
L_8443af: /* 8443af: test byte ptr [ebx + 0x7c], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x7cu))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8443b3: je 0x8443ba */
  if (zf) goto L_8443ba;
L_8443b5: /* 8443b5: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 8443b8: jmp 0x8443ef */
  goto L_8443ef;
L_8443ba: /* 8443ba: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8443bd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8443bf: je 0x8443d6 */
  if (zf) goto L_8443d6;
L_8443c1: /* 8443c1: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 8443c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8443c6: je 0x8443cb */
  if (zf) goto L_8443cb;
L_8443c8: /* 8443c8: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
L_8443cb: /* 8443cb: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* 8443ce: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8443d1: mov dword ptr [edi + 0x2c], edx */
  W32((uint32_t)(edi + 0x2cu), edx);
/* 8443d4: jmp 0x8443ef */
  goto L_8443ef;
L_8443d6: /* 8443d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8443d8: je 0x8443ef */
  if (zf) goto L_8443ef;
L_8443da: /* 8443da: cmp byte ptr [eax + 0x3c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8443de: jne 0x8443ef */
  if (!zf) goto L_8443ef;
L_8443e0: /* 8443e0: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 8443e3: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8443e6: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8443e9: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8443ec: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
L_8443ef: /* 8443ef: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8443f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8443f4: je 0x84446e */
  if (zf) goto L_84446e;
L_8443f6: /* 8443f6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8443f9: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 8443fc: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8443fe: lea esi, [edi + 0x14] */
  esi = (uint32_t)(edi + 0x14u);
/* 844401: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844402: mov ecx, esi */
  ecx = esi;
/* 844404: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x84440au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 84440a: xor ecx, ecx */
  ecx = 0;
/* 84440c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_844410: /* 844410: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844413: cmp ecx, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844416: jge 0x844471 */
  if ((sf == of)) goto L_844471;
L_844418: /* 844418: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84441a: mov edx, dword ptr [edx + 0x54] */
  edx = R32((uint32_t)(edx + 0x54u));
/* 84441d: mov ebx, dword ptr [edx + 0xb8] */
  ebx = R32((uint32_t)(edx + 0xb8u));
/* 844423: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844425: je 0x844458 */
  if (zf) goto L_844458;
L_844427: /* 844427: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 84442a: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 84442d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 84442f: jge 0x844458 */
  if ((sf == of)) goto L_844458;
L_844431: /* 844431: mov edx, dword ptr [edx + 0xb4] */
  edx = R32((uint32_t)(edx + 0xb4u));
/* 844437: lea eax, [eax*8 + 8] */
  eax = (uint32_t)(eax*8 + 0x8u);
/* 84443e: mov ebx, eax */
  ebx = eax;
/* 844440: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 844443: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 844445: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 844447: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 844449: mov dword ptr [edx + ecx*8], ebx */
  W32((uint32_t)(edx + ecx*8), ebx);
/* 84444c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84444e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 844451: mov dword ptr [edx + ecx*8 + 4], eax */
  W32((uint32_t)(edx + ecx*8 + 0x4u), eax);
/* 844455: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 844456: jmp 0x844410 */
  goto L_844410;
L_844458: /* 844458: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84445a: mov dword ptr [edx + ecx*8], 0 */
  W32((uint32_t)(edx + ecx*8), 0x0u);
/* 844461: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 844463: mov dword ptr [eax + ecx*8 + 4], 0 */
  W32((uint32_t)(eax + ecx*8 + 0x4u), 0x0u);
/* 84446b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 84446c: jmp 0x844410 */
  goto L_844410;
L_84446e: /* 84446e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_844471: /* 844471: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 844474: inc dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 844477: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 844479: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84447c: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 84447e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 844480: add esi, 0x26c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x26cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 844486: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 844488: mov ecx, esi */
  ecx = esi;
/* 84448a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x844490u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 844490: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 844492: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 844495: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844498: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84449a: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84449d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 84449f: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8444a5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8444a5: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 8444a8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8444ab: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8444ae: jmp 0x843dc0 */
  goto L_843dc0;
L_8444ec: /* 8444ec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8444ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8444f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8444f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8444f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8444f9: mov esp, ebp */
  esp = ebp;
/* 8444fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8444fc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8444b3(void) {
  LOAD_REGS();
L_8444b3: /* 8444b3: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 8444b9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8444be: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8444c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8444c5: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 8444cb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8444d0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8444d0(); return;
}

void f_8444d0(void) {
  LOAD_REGS();
L_8444d0: /* 8444d0: push 0xa16490 */
  { uint32_t v = 0xa16490u; esp -= 4; W32(esp, v); }
/* 8444d5: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8444da: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8444e0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8444e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8444e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8444e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8444e7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8444ecu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8444ec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8444ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8444f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8444f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8444f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8444f9: mov esp, ebp */
  esp = ebp;
/* 8444fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8444fc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_844820(void) {
  LOAD_REGS();
L_844820: /* 844820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 844821: mov ebp, esp */
  ebp = esp;
/* 844823: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 844825: push 0x9d3738 */
  { uint32_t v = 0x9d3738u; esp -= 4; W32(esp, v); }
/* 84482a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 844830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844831: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 844838: sub esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84483e: mov eax, dword ptr [0xce9ec0] */
  eax = R32((uint32_t)(0xce9ec0u));
/* 844843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844845: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 844846: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 844847: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 844848: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84484b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 84484e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 844855: je 0x844873 */
  if (zf) goto L_844873;
L_844857: /* 844857: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 84485a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84485c: je 0x84496c */
  if (zf) goto L_84496c;
L_844862: /* 844862: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 844865: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 844868: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 84486b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84486d: je 0x84496c */
  if (zf) goto L_84496c;
L_844873: /* 844873: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844876: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* 84487c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84487e: je 0x84496c */
  if (zf) goto L_84496c;
L_844884: /* 844884: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 84488a: cmp byte ptr [edx + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 844891: je 0x84496c */
  if (zf) goto L_84496c;
L_844897: /* 844897: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 844899: call dword ptr [eax + 0x19c] */
  { uint32_t t = R32((uint32_t)(eax + 0x19cu)); esp -= 4; W32(esp, 0x84489fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84489f: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 8448a5: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8448a8: je 0x8448d7 */
  if (zf) goto L_8448d7;
L_8448aa: /* 8448aa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8448ad: lea edx, [eax + 0x170] */
  edx = (uint32_t)(eax + 0x170u);
/* 8448b3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8448b5: add eax, 0x4bc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4bcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8448ba: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8448bc: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8448bf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8448c2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8448c5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8448c8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8448cb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8448cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8448cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8448d1: call dword ptr [eax + 0x10c] */
  { uint32_t t = R32((uint32_t)(eax + 0x10cu)); esp -= 4; W32(esp, 0x8448d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8448d7: /* 8448d7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8448dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8448df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8448e1: push 0xae3e58 */
  { uint32_t v = 0xae3e58u; esp -= 4; W32(esp, v); }
/* 8448e6: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 8448eb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8448edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8448ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8448ef: je 0x844900 */
  if (zf) goto L_844900;
L_8448f1: /* 8448f1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8448f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8448f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8448f7: mov ecx, eax */
  ecx = eax;
/* 8448f9: call 0x6c9d31 */
  esp -= 4; W32(esp, 0x8448feu); SPILL(); f_6c9d31(); if (g_unwind) return; RELOAD();
/* 8448fe: jmp 0x844902 */
  goto L_844902;
L_844900: /* 844900: xor eax, eax */
  eax = 0;
L_844902: /* 844902: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844905: mov dword ptr [edx + 0x434], eax */
  W32((uint32_t)(edx + 0x434u), eax);
/* 84490b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84490e: mov eax, dword ptr [eax + 0x434] */
  eax = R32((uint32_t)(eax + 0x434u));
/* 844914: inc dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 844917: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 844919: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 84491c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84491f: test byte ptr [eax + 0x354], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x354u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844926: je 0x84497d */
  if (zf) goto L_84497d;
L_844928: /* 844928: mov edi, dword ptr [eax + 0x434] */
  edi = R32((uint32_t)(eax + 0x434u));
/* 84492e: inc dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0x4u), r);
  }
/* 844931: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844934: mov esi, dword ptr [ecx + 0xb4] */
  esi = R32((uint32_t)(ecx + 0xb4u));
/* 84493a: add esi, 0x1134 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1134u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 844940: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 844942: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 844944: mov ecx, esi */
  ecx = esi;
/* 844946: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x84494cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 84494c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 84494e: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
L_844951: /* 844951: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 844957: mov eax, dword ptr [0xce8368] */
  eax = R32((uint32_t)(0xce8368u));
/* 84495c: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 84495f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 844961: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 844964: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 844966: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 844968: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84496a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_84496c: /* 84496c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84496f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 844970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 844971: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 844978: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 844979: mov esp, ebp */
  esp = ebp;
/* 84497b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84497c: ret  */
  esp += 4; SPILL(); return;
L_84497d: /* 84497d: test byte ptr [eax + 0x34c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844984: je 0x844b88 */
  if (zf) goto L_844b88;
L_84498a: /* 84498a: xor ecx, ecx */
  ecx = 0;
/* 84498c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 844990: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_844993: /* 844993: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844996: mov edx, dword ptr [eax + 0xc0] */
  edx = R32((uint32_t)(eax + 0xc0u));
/* 84499c: cmp ecx, dword ptr [edx + 0x360] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8449a2: mov edi, dword ptr [0xcfa3dc] */
  edi = R32((uint32_t)(0xcfa3dcu));
/* 8449a8: jge 0x844b88 */
  if ((sf == of)) goto L_844b88;
L_8449ae: /* 8449ae: mov edx, dword ptr [edx + 0x35c] */
  edx = R32((uint32_t)(edx + 0x35cu));
/* 8449b4: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 8449b7: lea ecx, [esi + 0x12dc] */
  ecx = (uint32_t)(esi + 0x12dcu);
/* 8449bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8449be: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 8449c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8449c5: lea ecx, [eax + 0x418] */
  ecx = (uint32_t)(eax + 0x418u);
/* 8449cb: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8449ce: call dword ptr [0xcfa890] */
  esp -= 4; W32(esp, 0x8449d4u); SPILL(); f_4e3ea9(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8449d4: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 8449da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8449db: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8449ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8449dd: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 8449e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8449e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8449e4: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8449e7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8449e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8449e9: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8449ef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8449f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8449f3: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8449f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8449f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8449f8: mov ebx, eax */
  ebx = eax;
/* 8449fa: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 8449fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 844a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844a01: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 844a04: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x844a06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 844a06: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 844a0c: mov edi, eax */
  edi = eax;
/* 844a0e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 844a11: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a12: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a12);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a14: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 844a17: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 844a1a: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 844a1d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 844a20: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a21: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a21);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a23: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 844a26: mov eax, ebx */
  eax = ebx;
/* 844a28: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a29: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a29);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a2b: mov ebx, eax */
  ebx = eax;
/* 844a2d: mov eax, edi */
  eax = edi;
/* 844a2f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a30: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a30);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a32: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
L_844a35: /* 844a35: cmp ebx, dword ptr [ebp - 0x68] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a38: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 844a3b: jg 0x844b4a */
  if ((!zf && sf == of)) goto L_844b4a;
L_844a41: /* 844a41: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 844a43: jl 0x844b44 */
  if ((sf != of)) goto L_844b44;
L_844a49: /* 844a49: cmp ebx, dword ptr [esi + 0x1298] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1298u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a4f: jge 0x844b44 */
  if ((sf == of)) goto L_844b44;
L_844a55: /* 844a55: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 844a58: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 844a5b: jmp 0x844a60 */
  goto L_844a60;
L_844a60: /* 844a60: cmp eax, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a63: jg 0x844b44 */
  if ((!zf && sf == of)) goto L_844b44;
L_844a69: /* 844a69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 844a6b: jl 0x844b38 */
  if ((sf != of)) goto L_844b38;
L_844a71: /* 844a71: mov eax, dword ptr [esi + 0x1294] */
  eax = R32((uint32_t)(esi + 0x1294u));
/* 844a77: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 844a7a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a7c: jge 0x844b38 */
  if ((sf == of)) goto L_844b38;
L_844a82: /* 844a82: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844a85: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 844a88: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 844a8a: mov ecx, dword ptr [esi + 0x1274] */
  ecx = R32((uint32_t)(esi + 0x1274u));
/* 844a90: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 844a93: add edx, 0x418 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 844a99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844a9a: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 844a9d: call dword ptr [0xcfa88c] */
  esp -= 4; W32(esp, 0x844aa3u); SPILL(); f_4e21d5(); if (g_unwind) return; /* Core!?Intersect@FBox@@QBE_NABV1@@Z */ RELOAD();
/* 844aa3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844aa5: je 0x844b38 */
  if (zf) goto L_844b38;
L_844aab: /* 844aab: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 844ab1: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 844ab4: mov edx, esi */
  edx = esi;
/* 844ab6: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 844ab9: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 844abc: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 844abf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 844ac1: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 844ac4: jns 0x844acf */
  if (!sf) goto L_844acf;
L_844ac6: /* 844ac6: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 844acd: jmp 0x844ad9 */
  goto L_844ad9;
L_844acf: /* 844acf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844ad1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 844ad4: jl 0x844ad9 */
  if ((sf != of)) goto L_844ad9;
L_844ad6: /* 844ad6: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_844ad9: /* 844ad9: imul esi, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  esi = (uint32_t)r;
  }
/* 844add: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 844ae0: lea ebx, [ecx - 1] */
  ebx = (uint32_t)(ecx + 0xffffffffu);
/* 844ae3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 844ae6: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 844ae8: jns 0x844aee */
  if (!sf) goto L_844aee;
L_844aea: /* 844aea: xor ecx, ecx */
  ecx = 0;
/* 844aec: jmp 0x844af4 */
  goto L_844af4;
L_844aee: /* 844aee: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844af0: jl 0x844af4 */
  if ((sf != of)) goto L_844af4;
L_844af2: /* 844af2: mov ecx, ebx */
  ecx = ebx;
L_844af4: /* 844af4: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 844af7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 844af9: jns 0x844aff */
  if (!sf) goto L_844aff;
L_844afb: /* 844afb: xor eax, eax */
  eax = 0;
/* 844afd: jmp 0x844b08 */
  goto L_844b08;
L_844aff: /* 844aff: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 844b02: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844b04: jl 0x844b08 */
  if ((sf != of)) goto L_844b08;
L_844b06: /* 844b06: mov eax, edx */
  eax = edx;
L_844b08: /* 844b08: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 844b0b: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 844b0d: jns 0x844b13 */
  if (!sf) goto L_844b13;
L_844b0f: /* 844b0f: xor edx, edx */
  edx = 0;
/* 844b11: jmp 0x844b19 */
  goto L_844b19;
L_844b13: /* 844b13: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844b15: jl 0x844b19 */
  if ((sf != of)) goto L_844b19;
L_844b17: /* 844b17: mov edx, ebx */
  edx = ebx;
L_844b19: /* 844b19: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 844b1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 844b1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844b1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844b1f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844b22: mov ecx, dword ptr [eax + 0x434] */
  ecx = R32((uint32_t)(eax + 0x434u));
/* 844b28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844b29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844b2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844b2b: mov ecx, edi */
  ecx = edi;
/* 844b2d: call 0x6c57ae */
  esp -= 4; W32(esp, 0x844b32u); SPILL(); f_6c57ae(); if (g_unwind) return; RELOAD();
/* 844b32: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 844b35: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_844b38: /* 844b38: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 844b3b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 844b3c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 844b3f: jmp 0x844a60 */
  goto L_844a60;
L_844b44: /* 844b44: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 844b45: jmp 0x844a35 */
  goto L_844a35;
L_844b4a: /* 844b4a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 844b4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 844b4e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 844b51: mov ecx, eax */
  ecx = eax;
/* 844b53: jmp 0x844993 */
  goto L_844993;
L_844b88: /* 844b88: mov cl, byte ptr [eax + 0x34c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x34cu))) & 0xffu);
/* 844b8e: xor esi, esi */
  esi = 0;
/* 844b90: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844b93: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 844b96: je 0x844c56 */
  if (zf) goto L_844c56;
L_844b9c: /* 844b9c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844b9f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x844ba5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 844ba5: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 844bab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844bac: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844baf: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844bb5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 844bb9: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x844bbfu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 844bbf: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 844bc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844bc3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 844bc5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844bc8: mov ecx, esp */
  ecx = esp;
/* 844bca: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 844bcc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 844bcf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 844bd2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 844bd5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 844bd8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844bdb: lea ecx, [eax + 0x358] */
  ecx = (uint32_t)(eax + 0x358u);
/* 844be1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 844be3: lea edx, [eax + 0x418] */
  edx = (uint32_t)(eax + 0x418u);
/* 844be9: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 844bef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844bf0: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844bf6: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 844bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844bfd: call 0x6c3bc0 */
  esp -= 4; W32(esp, 0x844c02u); SPILL(); f_6c3bc0(); if (g_unwind) return; RELOAD();
/* 844c02: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
L_844c04: /* 844c04: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844c07: jge 0x844c47 */
  if ((sf == of)) goto L_844c47;
L_844c09: /* 844c09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c0c: test byte ptr [eax + 0x34c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844c12: je 0x844c1c */
  if (zf) goto L_844c1c;
L_844c14: /* 844c14: lea ecx, [eax + 0x358] */
  ecx = (uint32_t)(eax + 0x358u);
/* 844c1a: jmp 0x844c1e */
  goto L_844c1e;
L_844c1c: /* 844c1c: xor ecx, ecx */
  ecx = 0;
L_844c1e: /* 844c1e: mov edx, dword ptr [eax + 0x434] */
  edx = R32((uint32_t)(eax + 0x434u));
/* 844c24: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 844c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844c2b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 844c2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c2f: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 844c32: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844c38: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 844c3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c3f: call 0x6c59e8 */
  esp -= 4; W32(esp, 0x844c44u); SPILL(); f_6c59e8(); if (g_unwind) return; RELOAD();
/* 844c44: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 844c45: jmp 0x844c04 */
  goto L_844c04;
L_844c47: /* 844c47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844c4a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 844c4e: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x844c53u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 844c53: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_844c56: /* 844c56: test byte ptr [eax + 0x34c], 0x14 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844c5d: je 0x844951 */
  if (zf) goto L_844951;
L_844c63: /* 844c63: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c66: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 844c6c: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844c72: mov eax, dword ptr [ecx + 0xec] */
  eax = R32((uint32_t)(ecx + 0xecu));
/* 844c78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844c7a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 844c7e: je 0x844951 */
  if (zf) goto L_844951;
L_844c84: /* 844c84: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 844c8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c8b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844c8e: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x844c94u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 844c94: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c97: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 844c9d: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 844ca3: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 844ca9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 844cab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844cad: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 844cb2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844cb5: lea esi, [eax + 0x17c] */
  esi = (uint32_t)(eax + 0x17cu);
/* 844cbb: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 844cbd: mov edi, esp */
  edi = esp;
/* 844cbf: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 844cc1: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 844cc4: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 844cc7: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 844cca: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 844ccd: lea esi, [eax + 0x170] */
  esi = (uint32_t)(eax + 0x170u);
/* 844cd3: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 844cd5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844cd8: mov edi, esp */
  edi = esp;
/* 844cda: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 844cdc: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 844cdf: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 844ce2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844ce3: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 844ce8: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 844ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844cec: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 844cef: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x844cf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 844cf2: mov esi, eax */
  esi = eax;
/* 844cf4: mov edi, 0x400000 */
  edi = 0x400000u;
/* 844cf9: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 844cfb: jmp 0x844d00 */
  goto L_844d00;
L_844d00: /* 844d00: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d02: je 0x844db3 */
  if (zf) goto L_844db3;
L_844d08: /* 844d08: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d0b: test dword ptr [ecx + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d11: je 0x844dac */
  if (zf) goto L_844dac;
L_844d17: /* 844d17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844d19: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 844d1c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x844d22u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 844d22: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d25: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 844d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844d29: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844d2f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x844d35u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 844d35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d37: jne 0x844d55 */
  if (!zf) goto L_844d55;
L_844d39: /* 844d39: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d3c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d3f: add eax, 0x350 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 844d44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844d45: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844d4b: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x844d51u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 844d51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d53: je 0x844dac */
  if (zf) goto L_844dac;
L_844d55: /* 844d55: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d58: mov eax, dword ptr [edx + 0x34c] */
  eax = R32((uint32_t)(edx + 0x34cu));
/* 844d5e: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d60: je 0x844d98 */
  if (zf) goto L_844d98;
L_844d62: /* 844d62: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d65: cmp dword ptr [ecx + 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x54u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 844d69: je 0x844d98 */
  if (zf) goto L_844d98;
L_844d6b: /* 844d6b: test byte ptr [ecx + 0x80], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d71: je 0x844da6 */
  if (zf) goto L_844da6;
L_844d73: /* 844d73: mov edx, dword ptr [edx + 0x434] */
  edx = R32((uint32_t)(edx + 0x434u));
/* 844d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844d7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844d7b: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 844d81: call 0x6c844a */
  esp -= 4; W32(esp, 0x844d86u); SPILL(); f_6c844a(); if (g_unwind) return; RELOAD();
/* 844d86: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 844d8c: call 0x6c97d7 */
  esp -= 4; W32(esp, 0x844d91u); SPILL(); f_6c97d7(); if (g_unwind) return; RELOAD();
/* 844d91: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844d93: jmp 0x844d00 */
  goto L_844d00;
L_844d98: /* 844d98: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d9a: je 0x844dac */
  if (zf) goto L_844dac;
L_844d9c: /* 844d9c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d9f: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 844da2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844da4: jne 0x844dac */
  if (!zf) goto L_844dac;
L_844da6: /* 844da6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844da7: call 0x6ca42f */
  esp -= 4; W32(esp, 0x844dacu); SPILL(); f_6ca42f(); if (g_unwind) return; RELOAD();
L_844dac: /* 844dac: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844dae: jmp 0x844d00 */
  goto L_844d00;
L_844db3: /* 844db3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844db6: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x844dbcu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 844dbc: jmp 0x844951 */
  goto L_844951;
}

void f_84497d(void) {
  LOAD_REGS();
  goto L_84497d;
L_844951: /* 844951: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 844957: mov eax, dword ptr [0xce8368] */
  eax = R32((uint32_t)(0xce8368u));
/* 84495c: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 84495f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 844961: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 844964: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 844966: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 844968: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84496a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84496c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84496f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 844970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 844971: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 844978: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 844979: mov esp, ebp */
  esp = ebp;
/* 84497b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84497c: ret  */
  esp += 4; SPILL(); return;
L_84497d: /* 84497d: test byte ptr [eax + 0x34c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844984: je 0x844b88 */
  if (zf) goto L_844b88;
L_84498a: /* 84498a: xor ecx, ecx */
  ecx = 0;
/* 84498c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 844990: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_844993: /* 844993: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844996: mov edx, dword ptr [eax + 0xc0] */
  edx = R32((uint32_t)(eax + 0xc0u));
/* 84499c: cmp ecx, dword ptr [edx + 0x360] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8449a2: mov edi, dword ptr [0xcfa3dc] */
  edi = R32((uint32_t)(0xcfa3dcu));
/* 8449a8: jge 0x844b88 */
  if ((sf == of)) goto L_844b88;
L_8449ae: /* 8449ae: mov edx, dword ptr [edx + 0x35c] */
  edx = R32((uint32_t)(edx + 0x35cu));
/* 8449b4: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 8449b7: lea ecx, [esi + 0x12dc] */
  ecx = (uint32_t)(esi + 0x12dcu);
/* 8449bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8449be: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 8449c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8449c5: lea ecx, [eax + 0x418] */
  ecx = (uint32_t)(eax + 0x418u);
/* 8449cb: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8449ce: call dword ptr [0xcfa890] */
  esp -= 4; W32(esp, 0x8449d4u); SPILL(); f_4e3ea9(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8449d4: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 8449da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8449db: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8449ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8449dd: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 8449e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8449e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8449e4: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8449e7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8449e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8449e9: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8449ef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8449f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8449f3: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8449f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8449f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8449f8: mov ebx, eax */
  ebx = eax;
/* 8449fa: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 8449fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 844a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844a01: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 844a04: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x844a06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 844a06: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 844a0c: mov edi, eax */
  edi = eax;
/* 844a0e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 844a11: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a12: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a12);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a14: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 844a17: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 844a1a: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 844a1d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 844a20: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a21: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a21);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a23: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 844a26: mov eax, ebx */
  eax = ebx;
/* 844a28: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a29: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a29);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a2b: mov ebx, eax */
  ebx = eax;
/* 844a2d: mov eax, edi */
  eax = edi;
/* 844a2f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a30: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a30);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a32: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
L_844a35: /* 844a35: cmp ebx, dword ptr [ebp - 0x68] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a38: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 844a3b: jg 0x844b4a */
  if ((!zf && sf == of)) goto L_844b4a;
L_844a41: /* 844a41: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 844a43: jl 0x844b44 */
  if ((sf != of)) goto L_844b44;
L_844a49: /* 844a49: cmp ebx, dword ptr [esi + 0x1298] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1298u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a4f: jge 0x844b44 */
  if ((sf == of)) goto L_844b44;
L_844a55: /* 844a55: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 844a58: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 844a5b: jmp 0x844a60 */
  goto L_844a60;
L_844a60: /* 844a60: cmp eax, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a63: jg 0x844b44 */
  if ((!zf && sf == of)) goto L_844b44;
L_844a69: /* 844a69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 844a6b: jl 0x844b38 */
  if ((sf != of)) goto L_844b38;
L_844a71: /* 844a71: mov eax, dword ptr [esi + 0x1294] */
  eax = R32((uint32_t)(esi + 0x1294u));
/* 844a77: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 844a7a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a7c: jge 0x844b38 */
  if ((sf == of)) goto L_844b38;
L_844a82: /* 844a82: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844a85: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 844a88: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 844a8a: mov ecx, dword ptr [esi + 0x1274] */
  ecx = R32((uint32_t)(esi + 0x1274u));
/* 844a90: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 844a93: add edx, 0x418 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 844a99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844a9a: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 844a9d: call dword ptr [0xcfa88c] */
  esp -= 4; W32(esp, 0x844aa3u); SPILL(); f_4e21d5(); if (g_unwind) return; /* Core!?Intersect@FBox@@QBE_NABV1@@Z */ RELOAD();
/* 844aa3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844aa5: je 0x844b38 */
  if (zf) goto L_844b38;
L_844aab: /* 844aab: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 844ab1: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 844ab4: mov edx, esi */
  edx = esi;
/* 844ab6: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 844ab9: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 844abc: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 844abf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 844ac1: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 844ac4: jns 0x844acf */
  if (!sf) goto L_844acf;
L_844ac6: /* 844ac6: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 844acd: jmp 0x844ad9 */
  goto L_844ad9;
L_844acf: /* 844acf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844ad1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 844ad4: jl 0x844ad9 */
  if ((sf != of)) goto L_844ad9;
L_844ad6: /* 844ad6: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_844ad9: /* 844ad9: imul esi, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  esi = (uint32_t)r;
  }
/* 844add: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 844ae0: lea ebx, [ecx - 1] */
  ebx = (uint32_t)(ecx + 0xffffffffu);
/* 844ae3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 844ae6: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 844ae8: jns 0x844aee */
  if (!sf) goto L_844aee;
L_844aea: /* 844aea: xor ecx, ecx */
  ecx = 0;
/* 844aec: jmp 0x844af4 */
  goto L_844af4;
L_844aee: /* 844aee: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844af0: jl 0x844af4 */
  if ((sf != of)) goto L_844af4;
L_844af2: /* 844af2: mov ecx, ebx */
  ecx = ebx;
L_844af4: /* 844af4: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 844af7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 844af9: jns 0x844aff */
  if (!sf) goto L_844aff;
L_844afb: /* 844afb: xor eax, eax */
  eax = 0;
/* 844afd: jmp 0x844b08 */
  goto L_844b08;
L_844aff: /* 844aff: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 844b02: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844b04: jl 0x844b08 */
  if ((sf != of)) goto L_844b08;
L_844b06: /* 844b06: mov eax, edx */
  eax = edx;
L_844b08: /* 844b08: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 844b0b: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 844b0d: jns 0x844b13 */
  if (!sf) goto L_844b13;
L_844b0f: /* 844b0f: xor edx, edx */
  edx = 0;
/* 844b11: jmp 0x844b19 */
  goto L_844b19;
L_844b13: /* 844b13: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844b15: jl 0x844b19 */
  if ((sf != of)) goto L_844b19;
L_844b17: /* 844b17: mov edx, ebx */
  edx = ebx;
L_844b19: /* 844b19: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 844b1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 844b1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844b1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844b1f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844b22: mov ecx, dword ptr [eax + 0x434] */
  ecx = R32((uint32_t)(eax + 0x434u));
/* 844b28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844b29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844b2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844b2b: mov ecx, edi */
  ecx = edi;
/* 844b2d: call 0x6c57ae */
  esp -= 4; W32(esp, 0x844b32u); SPILL(); f_6c57ae(); if (g_unwind) return; RELOAD();
/* 844b32: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 844b35: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_844b38: /* 844b38: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 844b3b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 844b3c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 844b3f: jmp 0x844a60 */
  goto L_844a60;
L_844b44: /* 844b44: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 844b45: jmp 0x844a35 */
  goto L_844a35;
L_844b4a: /* 844b4a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 844b4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 844b4e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 844b51: mov ecx, eax */
  ecx = eax;
/* 844b53: jmp 0x844993 */
  goto L_844993;
L_844b88: /* 844b88: mov cl, byte ptr [eax + 0x34c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x34cu))) & 0xffu);
/* 844b8e: xor esi, esi */
  esi = 0;
/* 844b90: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844b93: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 844b96: je 0x844c56 */
  if (zf) goto L_844c56;
L_844b9c: /* 844b9c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844b9f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x844ba5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 844ba5: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 844bab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844bac: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844baf: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844bb5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 844bb9: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x844bbfu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 844bbf: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 844bc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844bc3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 844bc5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844bc8: mov ecx, esp */
  ecx = esp;
/* 844bca: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 844bcc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 844bcf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 844bd2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 844bd5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 844bd8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844bdb: lea ecx, [eax + 0x358] */
  ecx = (uint32_t)(eax + 0x358u);
/* 844be1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 844be3: lea edx, [eax + 0x418] */
  edx = (uint32_t)(eax + 0x418u);
/* 844be9: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 844bef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844bf0: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844bf6: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 844bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844bfd: call 0x6c3bc0 */
  esp -= 4; W32(esp, 0x844c02u); SPILL(); f_6c3bc0(); if (g_unwind) return; RELOAD();
/* 844c02: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
L_844c04: /* 844c04: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844c07: jge 0x844c47 */
  if ((sf == of)) goto L_844c47;
L_844c09: /* 844c09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c0c: test byte ptr [eax + 0x34c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844c12: je 0x844c1c */
  if (zf) goto L_844c1c;
L_844c14: /* 844c14: lea ecx, [eax + 0x358] */
  ecx = (uint32_t)(eax + 0x358u);
/* 844c1a: jmp 0x844c1e */
  goto L_844c1e;
L_844c1c: /* 844c1c: xor ecx, ecx */
  ecx = 0;
L_844c1e: /* 844c1e: mov edx, dword ptr [eax + 0x434] */
  edx = R32((uint32_t)(eax + 0x434u));
/* 844c24: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 844c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844c2b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 844c2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c2f: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 844c32: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844c38: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 844c3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c3f: call 0x6c59e8 */
  esp -= 4; W32(esp, 0x844c44u); SPILL(); f_6c59e8(); if (g_unwind) return; RELOAD();
/* 844c44: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 844c45: jmp 0x844c04 */
  goto L_844c04;
L_844c47: /* 844c47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844c4a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 844c4e: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x844c53u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 844c53: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_844c56: /* 844c56: test byte ptr [eax + 0x34c], 0x14 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844c5d: je 0x844951 */
  if (zf) goto L_844951;
L_844c63: /* 844c63: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c66: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 844c6c: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844c72: mov eax, dword ptr [ecx + 0xec] */
  eax = R32((uint32_t)(ecx + 0xecu));
/* 844c78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844c7a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 844c7e: je 0x844951 */
  if (zf) goto L_844951;
L_844c84: /* 844c84: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 844c8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c8b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844c8e: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x844c94u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 844c94: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c97: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 844c9d: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 844ca3: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 844ca9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 844cab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844cad: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 844cb2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844cb5: lea esi, [eax + 0x17c] */
  esi = (uint32_t)(eax + 0x17cu);
/* 844cbb: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 844cbd: mov edi, esp */
  edi = esp;
/* 844cbf: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 844cc1: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 844cc4: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 844cc7: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 844cca: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 844ccd: lea esi, [eax + 0x170] */
  esi = (uint32_t)(eax + 0x170u);
/* 844cd3: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 844cd5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844cd8: mov edi, esp */
  edi = esp;
/* 844cda: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 844cdc: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 844cdf: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 844ce2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844ce3: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 844ce8: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 844ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844cec: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 844cef: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x844cf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 844cf2: mov esi, eax */
  esi = eax;
/* 844cf4: mov edi, 0x400000 */
  edi = 0x400000u;
/* 844cf9: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 844cfb: jmp 0x844d00 */
  goto L_844d00;
L_844d00: /* 844d00: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d02: je 0x844db3 */
  if (zf) goto L_844db3;
L_844d08: /* 844d08: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d0b: test dword ptr [ecx + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d11: je 0x844dac */
  if (zf) goto L_844dac;
L_844d17: /* 844d17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844d19: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 844d1c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x844d22u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 844d22: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d25: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 844d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844d29: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844d2f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x844d35u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 844d35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d37: jne 0x844d55 */
  if (!zf) goto L_844d55;
L_844d39: /* 844d39: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d3c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d3f: add eax, 0x350 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 844d44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844d45: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844d4b: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x844d51u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 844d51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d53: je 0x844dac */
  if (zf) goto L_844dac;
L_844d55: /* 844d55: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d58: mov eax, dword ptr [edx + 0x34c] */
  eax = R32((uint32_t)(edx + 0x34cu));
/* 844d5e: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d60: je 0x844d98 */
  if (zf) goto L_844d98;
L_844d62: /* 844d62: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d65: cmp dword ptr [ecx + 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x54u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 844d69: je 0x844d98 */
  if (zf) goto L_844d98;
L_844d6b: /* 844d6b: test byte ptr [ecx + 0x80], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d71: je 0x844da6 */
  if (zf) goto L_844da6;
L_844d73: /* 844d73: mov edx, dword ptr [edx + 0x434] */
  edx = R32((uint32_t)(edx + 0x434u));
/* 844d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844d7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844d7b: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 844d81: call 0x6c844a */
  esp -= 4; W32(esp, 0x844d86u); SPILL(); f_6c844a(); if (g_unwind) return; RELOAD();
/* 844d86: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 844d8c: call 0x6c97d7 */
  esp -= 4; W32(esp, 0x844d91u); SPILL(); f_6c97d7(); if (g_unwind) return; RELOAD();
/* 844d91: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844d93: jmp 0x844d00 */
  goto L_844d00;
L_844d98: /* 844d98: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d9a: je 0x844dac */
  if (zf) goto L_844dac;
L_844d9c: /* 844d9c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d9f: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 844da2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844da4: jne 0x844dac */
  if (!zf) goto L_844dac;
L_844da6: /* 844da6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844da7: call 0x6ca42f */
  esp -= 4; W32(esp, 0x844dacu); SPILL(); f_6ca42f(); if (g_unwind) return; RELOAD();
L_844dac: /* 844dac: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844dae: jmp 0x844d00 */
  goto L_844d00;
L_844db3: /* 844db3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844db6: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x844dbcu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 844dbc: jmp 0x844951 */
  goto L_844951;
}

void f_844a5d(void) {
  LOAD_REGS();
  goto L_844a5d;
L_844951: /* 844951: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 844957: mov eax, dword ptr [0xce8368] */
  eax = R32((uint32_t)(0xce8368u));
/* 84495c: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 84495f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 844961: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 844964: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 844966: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 844968: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84496a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84496c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84496f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 844970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 844971: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 844978: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 844979: mov esp, ebp */
  esp = ebp;
/* 84497b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84497c: ret  */
  esp += 4; SPILL(); return;
L_844993: /* 844993: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844996: mov edx, dword ptr [eax + 0xc0] */
  edx = R32((uint32_t)(eax + 0xc0u));
/* 84499c: cmp ecx, dword ptr [edx + 0x360] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8449a2: mov edi, dword ptr [0xcfa3dc] */
  edi = R32((uint32_t)(0xcfa3dcu));
/* 8449a8: jge 0x844b88 */
  if ((sf == of)) goto L_844b88;
L_8449ae: /* 8449ae: mov edx, dword ptr [edx + 0x35c] */
  edx = R32((uint32_t)(edx + 0x35cu));
/* 8449b4: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 8449b7: lea ecx, [esi + 0x12dc] */
  ecx = (uint32_t)(esi + 0x12dcu);
/* 8449bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8449be: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 8449c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8449c5: lea ecx, [eax + 0x418] */
  ecx = (uint32_t)(eax + 0x418u);
/* 8449cb: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8449ce: call dword ptr [0xcfa890] */
  esp -= 4; W32(esp, 0x8449d4u); SPILL(); f_4e3ea9(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8449d4: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 8449da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8449db: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8449ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8449dd: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 8449e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8449e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8449e4: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8449e7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8449e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8449e9: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8449ef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8449f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8449f3: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8449f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8449f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8449f8: mov ebx, eax */
  ebx = eax;
/* 8449fa: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 8449fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 844a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844a01: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 844a04: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x844a06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 844a06: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 844a0c: mov edi, eax */
  edi = eax;
/* 844a0e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 844a11: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a12: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a12);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a14: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 844a17: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 844a1a: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 844a1d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 844a20: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a21: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a21);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a23: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 844a26: mov eax, ebx */
  eax = ebx;
/* 844a28: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a29: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a29);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a2b: mov ebx, eax */
  ebx = eax;
/* 844a2d: mov eax, edi */
  eax = edi;
/* 844a2f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 844a30: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x844a30);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 844a32: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
L_844a35: /* 844a35: cmp ebx, dword ptr [ebp - 0x68] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a38: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 844a3b: jg 0x844b4a */
  if ((!zf && sf == of)) goto L_844b4a;
L_844a41: /* 844a41: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 844a43: jl 0x844b44 */
  if ((sf != of)) goto L_844b44;
L_844a49: /* 844a49: cmp ebx, dword ptr [esi + 0x1298] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1298u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a4f: jge 0x844b44 */
  if ((sf == of)) goto L_844b44;
L_844a55: /* 844a55: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 844a58: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 844a5b: jmp 0x844a60 */
  goto L_844a60;
L_844a5d: /* 844a5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_844a60: /* 844a60: cmp eax, dword ptr [ebp - 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff9cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a63: jg 0x844b44 */
  if ((!zf && sf == of)) goto L_844b44;
L_844a69: /* 844a69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 844a6b: jl 0x844b38 */
  if ((sf != of)) goto L_844b38;
L_844a71: /* 844a71: mov eax, dword ptr [esi + 0x1294] */
  eax = R32((uint32_t)(esi + 0x1294u));
/* 844a77: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 844a7a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844a7c: jge 0x844b38 */
  if ((sf == of)) goto L_844b38;
L_844a82: /* 844a82: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844a85: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 844a88: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 844a8a: mov ecx, dword ptr [esi + 0x1274] */
  ecx = R32((uint32_t)(esi + 0x1274u));
/* 844a90: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 844a93: add edx, 0x418 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 844a99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844a9a: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 844a9d: call dword ptr [0xcfa88c] */
  esp -= 4; W32(esp, 0x844aa3u); SPILL(); f_4e21d5(); if (g_unwind) return; /* Core!?Intersect@FBox@@QBE_NABV1@@Z */ RELOAD();
/* 844aa3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844aa5: je 0x844b38 */
  if (zf) goto L_844b38;
L_844aab: /* 844aab: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 844ab1: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 844ab4: mov edx, esi */
  edx = esi;
/* 844ab6: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 844ab9: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 844abc: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 844abf: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 844ac1: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 844ac4: jns 0x844acf */
  if (!sf) goto L_844acf;
L_844ac6: /* 844ac6: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 844acd: jmp 0x844ad9 */
  goto L_844ad9;
L_844acf: /* 844acf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844ad1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 844ad4: jl 0x844ad9 */
  if ((sf != of)) goto L_844ad9;
L_844ad6: /* 844ad6: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_844ad9: /* 844ad9: imul esi, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  esi = (uint32_t)r;
  }
/* 844add: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 844ae0: lea ebx, [ecx - 1] */
  ebx = (uint32_t)(ecx + 0xffffffffu);
/* 844ae3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 844ae6: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 844ae8: jns 0x844aee */
  if (!sf) goto L_844aee;
L_844aea: /* 844aea: xor ecx, ecx */
  ecx = 0;
/* 844aec: jmp 0x844af4 */
  goto L_844af4;
L_844aee: /* 844aee: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844af0: jl 0x844af4 */
  if ((sf != of)) goto L_844af4;
L_844af2: /* 844af2: mov ecx, ebx */
  ecx = ebx;
L_844af4: /* 844af4: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 844af7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 844af9: jns 0x844aff */
  if (!sf) goto L_844aff;
L_844afb: /* 844afb: xor eax, eax */
  eax = 0;
/* 844afd: jmp 0x844b08 */
  goto L_844b08;
L_844aff: /* 844aff: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 844b02: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844b04: jl 0x844b08 */
  if ((sf != of)) goto L_844b08;
L_844b06: /* 844b06: mov eax, edx */
  eax = edx;
L_844b08: /* 844b08: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 844b0b: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 844b0d: jns 0x844b13 */
  if (!sf) goto L_844b13;
L_844b0f: /* 844b0f: xor edx, edx */
  edx = 0;
/* 844b11: jmp 0x844b19 */
  goto L_844b19;
L_844b13: /* 844b13: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844b15: jl 0x844b19 */
  if ((sf != of)) goto L_844b19;
L_844b17: /* 844b17: mov edx, ebx */
  edx = ebx;
L_844b19: /* 844b19: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 844b1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 844b1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844b1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844b1f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844b22: mov ecx, dword ptr [eax + 0x434] */
  ecx = R32((uint32_t)(eax + 0x434u));
/* 844b28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844b29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844b2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844b2b: mov ecx, edi */
  ecx = edi;
/* 844b2d: call 0x6c57ae */
  esp -= 4; W32(esp, 0x844b32u); SPILL(); f_6c57ae(); if (g_unwind) return; RELOAD();
/* 844b32: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 844b35: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_844b38: /* 844b38: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 844b3b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 844b3c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 844b3f: jmp 0x844a60 */
  goto L_844a60;
L_844b44: /* 844b44: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 844b45: jmp 0x844a35 */
  goto L_844a35;
L_844b4a: /* 844b4a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 844b4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 844b4e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 844b51: mov ecx, eax */
  ecx = eax;
/* 844b53: jmp 0x844993 */
  goto L_844993;
L_844b88: /* 844b88: mov cl, byte ptr [eax + 0x34c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x34cu))) & 0xffu);
/* 844b8e: xor esi, esi */
  esi = 0;
/* 844b90: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844b93: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 844b96: je 0x844c56 */
  if (zf) goto L_844c56;
L_844b9c: /* 844b9c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844b9f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x844ba5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 844ba5: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 844bab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844bac: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844baf: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844bb5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 844bb9: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x844bbfu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 844bbf: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 844bc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844bc3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 844bc5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844bc8: mov ecx, esp */
  ecx = esp;
/* 844bca: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 844bcc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 844bcf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 844bd2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 844bd5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 844bd8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844bdb: lea ecx, [eax + 0x358] */
  ecx = (uint32_t)(eax + 0x358u);
/* 844be1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 844be3: lea edx, [eax + 0x418] */
  edx = (uint32_t)(eax + 0x418u);
/* 844be9: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 844bef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844bf0: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844bf6: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 844bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844bfd: call 0x6c3bc0 */
  esp -= 4; W32(esp, 0x844c02u); SPILL(); f_6c3bc0(); if (g_unwind) return; RELOAD();
/* 844c02: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
L_844c04: /* 844c04: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844c07: jge 0x844c47 */
  if ((sf == of)) goto L_844c47;
L_844c09: /* 844c09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c0c: test byte ptr [eax + 0x34c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844c12: je 0x844c1c */
  if (zf) goto L_844c1c;
L_844c14: /* 844c14: lea ecx, [eax + 0x358] */
  ecx = (uint32_t)(eax + 0x358u);
/* 844c1a: jmp 0x844c1e */
  goto L_844c1e;
L_844c1c: /* 844c1c: xor ecx, ecx */
  ecx = 0;
L_844c1e: /* 844c1e: mov edx, dword ptr [eax + 0x434] */
  edx = R32((uint32_t)(eax + 0x434u));
/* 844c24: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 844c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844c2b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 844c2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c2f: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 844c32: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844c38: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 844c3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c3f: call 0x6c59e8 */
  esp -= 4; W32(esp, 0x844c44u); SPILL(); f_6c59e8(); if (g_unwind) return; RELOAD();
/* 844c44: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 844c45: jmp 0x844c04 */
  goto L_844c04;
L_844c47: /* 844c47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844c4a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 844c4e: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x844c53u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 844c53: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_844c56: /* 844c56: test byte ptr [eax + 0x34c], 0x14 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844c5d: je 0x844951 */
  if (zf) goto L_844951;
L_844c63: /* 844c63: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c66: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 844c6c: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844c72: mov eax, dword ptr [ecx + 0xec] */
  eax = R32((uint32_t)(ecx + 0xecu));
/* 844c78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844c7a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 844c7e: je 0x844951 */
  if (zf) goto L_844951;
L_844c84: /* 844c84: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 844c8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c8b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844c8e: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x844c94u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 844c94: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c97: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 844c9d: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 844ca3: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 844ca9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 844cab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844cad: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 844cb2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844cb5: lea esi, [eax + 0x17c] */
  esi = (uint32_t)(eax + 0x17cu);
/* 844cbb: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 844cbd: mov edi, esp */
  edi = esp;
/* 844cbf: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 844cc1: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 844cc4: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 844cc7: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 844cca: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 844ccd: lea esi, [eax + 0x170] */
  esi = (uint32_t)(eax + 0x170u);
/* 844cd3: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 844cd5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844cd8: mov edi, esp */
  edi = esp;
/* 844cda: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 844cdc: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 844cdf: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 844ce2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844ce3: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 844ce8: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 844ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844cec: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 844cef: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x844cf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 844cf2: mov esi, eax */
  esi = eax;
/* 844cf4: mov edi, 0x400000 */
  edi = 0x400000u;
/* 844cf9: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 844cfb: jmp 0x844d00 */
  goto L_844d00;
L_844d00: /* 844d00: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d02: je 0x844db3 */
  if (zf) goto L_844db3;
L_844d08: /* 844d08: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d0b: test dword ptr [ecx + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d11: je 0x844dac */
  if (zf) goto L_844dac;
L_844d17: /* 844d17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844d19: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 844d1c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x844d22u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 844d22: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d25: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 844d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844d29: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844d2f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x844d35u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 844d35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d37: jne 0x844d55 */
  if (!zf) goto L_844d55;
L_844d39: /* 844d39: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d3c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d3f: add eax, 0x350 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 844d44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844d45: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844d4b: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x844d51u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 844d51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d53: je 0x844dac */
  if (zf) goto L_844dac;
L_844d55: /* 844d55: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d58: mov eax, dword ptr [edx + 0x34c] */
  eax = R32((uint32_t)(edx + 0x34cu));
/* 844d5e: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d60: je 0x844d98 */
  if (zf) goto L_844d98;
L_844d62: /* 844d62: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d65: cmp dword ptr [ecx + 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x54u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 844d69: je 0x844d98 */
  if (zf) goto L_844d98;
L_844d6b: /* 844d6b: test byte ptr [ecx + 0x80], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d71: je 0x844da6 */
  if (zf) goto L_844da6;
L_844d73: /* 844d73: mov edx, dword ptr [edx + 0x434] */
  edx = R32((uint32_t)(edx + 0x434u));
/* 844d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844d7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844d7b: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 844d81: call 0x6c844a */
  esp -= 4; W32(esp, 0x844d86u); SPILL(); f_6c844a(); if (g_unwind) return; RELOAD();
/* 844d86: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 844d8c: call 0x6c97d7 */
  esp -= 4; W32(esp, 0x844d91u); SPILL(); f_6c97d7(); if (g_unwind) return; RELOAD();
/* 844d91: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844d93: jmp 0x844d00 */
  goto L_844d00;
L_844d98: /* 844d98: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d9a: je 0x844dac */
  if (zf) goto L_844dac;
L_844d9c: /* 844d9c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d9f: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 844da2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844da4: jne 0x844dac */
  if (!zf) goto L_844dac;
L_844da6: /* 844da6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844da7: call 0x6ca42f */
  esp -= 4; W32(esp, 0x844dacu); SPILL(); f_6ca42f(); if (g_unwind) return; RELOAD();
L_844dac: /* 844dac: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844dae: jmp 0x844d00 */
  goto L_844d00;
L_844db3: /* 844db3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844db6: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x844dbcu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 844dbc: jmp 0x844951 */
  goto L_844951;
}

void f_844b58(void) {
  LOAD_REGS();
L_844b58: /* 844b58: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 844b5b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 844b60: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 844b63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844b64: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 844b67: call 0x99caf8 */
  esp -= 4; W32(esp, 0x844b6cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_844b6c(); return;
}

void f_844b6c(void) {
  LOAD_REGS();
  goto L_844b6c;
L_844951: /* 844951: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 844957: mov eax, dword ptr [0xce8368] */
  eax = R32((uint32_t)(0xce8368u));
/* 84495c: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 84495f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 844961: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 844964: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 844966: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 844968: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84496a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84496c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84496f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 844970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 844971: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 844978: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 844979: mov esp, ebp */
  esp = ebp;
/* 84497b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84497c: ret  */
  esp += 4; SPILL(); return;
L_844b6c: /* 844b6c: push 0xa16530 */
  { uint32_t v = 0xa16530u; esp -= 4; W32(esp, v); }
/* 844b71: push 0xae3e84 */
  { uint32_t v = 0xae3e84u; esp -= 4; W32(esp, v); }
/* 844b76: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x844b7cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 844b7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 844b7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844b81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844b83: call 0x99caf8 */
  esp -= 4; W32(esp, 0x844b88u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 844b88: mov cl, byte ptr [eax + 0x34c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x34cu))) & 0xffu);
/* 844b8e: xor esi, esi */
  esi = 0;
/* 844b90: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844b93: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 844b96: je 0x844c56 */
  if (zf) goto L_844c56;
L_844b9c: /* 844b9c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844b9f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x844ba5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 844ba5: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 844bab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844bac: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844baf: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844bb5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 844bb9: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x844bbfu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 844bbf: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 844bc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844bc3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 844bc5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844bc8: mov ecx, esp */
  ecx = esp;
/* 844bca: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 844bcc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 844bcf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 844bd2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 844bd5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 844bd8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844bdb: lea ecx, [eax + 0x358] */
  ecx = (uint32_t)(eax + 0x358u);
/* 844be1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 844be3: lea edx, [eax + 0x418] */
  edx = (uint32_t)(eax + 0x418u);
/* 844be9: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 844bef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844bf0: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844bf6: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 844bfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844bfd: call 0x6c3bc0 */
  esp -= 4; W32(esp, 0x844c02u); SPILL(); f_6c3bc0(); if (g_unwind) return; RELOAD();
/* 844c02: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
L_844c04: /* 844c04: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 844c07: jge 0x844c47 */
  if ((sf == of)) goto L_844c47;
L_844c09: /* 844c09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c0c: test byte ptr [eax + 0x34c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844c12: je 0x844c1c */
  if (zf) goto L_844c1c;
L_844c14: /* 844c14: lea ecx, [eax + 0x358] */
  ecx = (uint32_t)(eax + 0x358u);
/* 844c1a: jmp 0x844c1e */
  goto L_844c1e;
L_844c1c: /* 844c1c: xor ecx, ecx */
  ecx = 0;
L_844c1e: /* 844c1e: mov edx, dword ptr [eax + 0x434] */
  edx = R32((uint32_t)(eax + 0x434u));
/* 844c24: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 844c2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844c2b: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 844c2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c2f: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 844c32: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844c38: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 844c3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c3f: call 0x6c59e8 */
  esp -= 4; W32(esp, 0x844c44u); SPILL(); f_6c59e8(); if (g_unwind) return; RELOAD();
/* 844c44: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 844c45: jmp 0x844c04 */
  goto L_844c04;
L_844c47: /* 844c47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844c4a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 844c4e: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x844c53u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 844c53: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_844c56: /* 844c56: test byte ptr [eax + 0x34c], 0x14 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x34cu))); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844c5d: je 0x844951 */
  if (zf) goto L_844951;
L_844c63: /* 844c63: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c66: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 844c6c: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 844c72: mov eax, dword ptr [ecx + 0xec] */
  eax = R32((uint32_t)(ecx + 0xecu));
/* 844c78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844c7a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 844c7e: je 0x844951 */
  if (zf) goto L_844951;
L_844c84: /* 844c84: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 844c8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844c8b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844c8e: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x844c94u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 844c94: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844c97: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 844c9d: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 844ca3: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 844ca9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 844cab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844cad: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 844cb2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844cb5: lea esi, [eax + 0x17c] */
  esi = (uint32_t)(eax + 0x17cu);
/* 844cbb: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 844cbd: mov edi, esp */
  edi = esp;
/* 844cbf: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 844cc1: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 844cc4: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 844cc7: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 844cca: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 844ccd: lea esi, [eax + 0x170] */
  esi = (uint32_t)(eax + 0x170u);
/* 844cd3: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 844cd5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 844cd8: mov edi, esp */
  edi = esp;
/* 844cda: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 844cdc: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 844cdf: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 844ce2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844ce3: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 844ce8: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 844ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844cec: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 844cef: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x844cf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 844cf2: mov esi, eax */
  esi = eax;
/* 844cf4: mov edi, 0x400000 */
  edi = 0x400000u;
/* 844cf9: mov bl, 0x40 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 844cfb: jmp 0x844d00 */
  goto L_844d00;
L_844d00: /* 844d00: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d02: je 0x844db3 */
  if (zf) goto L_844db3;
L_844d08: /* 844d08: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d0b: test dword ptr [ecx + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d11: je 0x844dac */
  if (zf) goto L_844dac;
L_844d17: /* 844d17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844d19: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 844d1c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x844d22u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 844d22: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d25: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 844d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844d29: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844d2f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x844d35u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 844d35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d37: jne 0x844d55 */
  if (!zf) goto L_844d55;
L_844d39: /* 844d39: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d3c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d3f: add eax, 0x350 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 844d44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844d45: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844d4b: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x844d51u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 844d51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d53: je 0x844dac */
  if (zf) goto L_844dac;
L_844d55: /* 844d55: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d58: mov eax, dword ptr [edx + 0x34c] */
  eax = R32((uint32_t)(edx + 0x34cu));
/* 844d5e: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d60: je 0x844d98 */
  if (zf) goto L_844d98;
L_844d62: /* 844d62: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d65: cmp dword ptr [ecx + 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x54u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 844d69: je 0x844d98 */
  if (zf) goto L_844d98;
L_844d6b: /* 844d6b: test byte ptr [ecx + 0x80], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d71: je 0x844da6 */
  if (zf) goto L_844da6;
L_844d73: /* 844d73: mov edx, dword ptr [edx + 0x434] */
  edx = R32((uint32_t)(edx + 0x434u));
/* 844d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844d7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844d7b: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 844d81: call 0x6c844a */
  esp -= 4; W32(esp, 0x844d86u); SPILL(); f_6c844a(); if (g_unwind) return; RELOAD();
/* 844d86: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 844d8c: call 0x6c97d7 */
  esp -= 4; W32(esp, 0x844d91u); SPILL(); f_6c97d7(); if (g_unwind) return; RELOAD();
/* 844d91: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844d93: jmp 0x844d00 */
  goto L_844d00;
L_844d98: /* 844d98: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d9a: je 0x844dac */
  if (zf) goto L_844dac;
L_844d9c: /* 844d9c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d9f: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 844da2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844da4: jne 0x844dac */
  if (!zf) goto L_844dac;
L_844da6: /* 844da6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844da7: call 0x6ca42f */
  esp -= 4; W32(esp, 0x844dacu); SPILL(); f_6ca42f(); if (g_unwind) return; RELOAD();
L_844dac: /* 844dac: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844dae: jmp 0x844d00 */
  goto L_844d00;
L_844db3: /* 844db3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844db6: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x844dbcu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 844dbc: jmp 0x844951 */
  goto L_844951;
}

void f_844cfd(void) {
  LOAD_REGS();
  goto L_844cfd;
L_844951: /* 844951: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 844957: mov eax, dword ptr [0xce8368] */
  eax = R32((uint32_t)(0xce8368u));
/* 84495c: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 84495f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 844961: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 844964: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 844966: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 844968: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 84496a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84496c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84496f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 844970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 844971: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 844978: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 844979: mov esp, ebp */
  esp = ebp;
/* 84497b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84497c: ret  */
  esp += 4; SPILL(); return;
L_844cfd: /* 844cfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_844d00: /* 844d00: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d02: je 0x844db3 */
  if (zf) goto L_844db3;
L_844d08: /* 844d08: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d0b: test dword ptr [ecx + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d11: je 0x844dac */
  if (zf) goto L_844dac;
L_844d17: /* 844d17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844d19: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 844d1c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x844d22u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 844d22: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d25: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 844d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844d29: add ecx, 0x350 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844d2f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x844d35u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 844d35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d37: jne 0x844d55 */
  if (!zf) goto L_844d55;
L_844d39: /* 844d39: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d3c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d3f: add eax, 0x350 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x350u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 844d44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 844d45: add ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 844d4b: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x844d51u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 844d51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844d53: je 0x844dac */
  if (zf) goto L_844dac;
L_844d55: /* 844d55: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 844d58: mov eax, dword ptr [edx + 0x34c] */
  eax = R32((uint32_t)(edx + 0x34cu));
/* 844d5e: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d60: je 0x844d98 */
  if (zf) goto L_844d98;
L_844d62: /* 844d62: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d65: cmp dword ptr [ecx + 0x54], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x54u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 844d69: je 0x844d98 */
  if (zf) goto L_844d98;
L_844d6b: /* 844d6b: test byte ptr [ecx + 0x80], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d71: je 0x844da6 */
  if (zf) goto L_844da6;
L_844d73: /* 844d73: mov edx, dword ptr [edx + 0x434] */
  edx = R32((uint32_t)(edx + 0x434u));
/* 844d79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844d7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844d7b: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 844d81: call 0x6c844a */
  esp -= 4; W32(esp, 0x844d86u); SPILL(); f_6c844a(); if (g_unwind) return; RELOAD();
/* 844d86: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 844d8c: call 0x6c97d7 */
  esp -= 4; W32(esp, 0x844d91u); SPILL(); f_6c97d7(); if (g_unwind) return; RELOAD();
/* 844d91: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844d93: jmp 0x844d00 */
  goto L_844d00;
L_844d98: /* 844d98: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 844d9a: je 0x844dac */
  if (zf) goto L_844dac;
L_844d9c: /* 844d9c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 844d9f: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 844da2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 844da4: jne 0x844dac */
  if (!zf) goto L_844dac;
L_844da6: /* 844da6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844da7: call 0x6ca42f */
  esp -= 4; W32(esp, 0x844dacu); SPILL(); f_6ca42f(); if (g_unwind) return; RELOAD();
L_844dac: /* 844dac: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 844dae: jmp 0x844d00 */
  goto L_844d00;
L_844db3: /* 844db3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 844db6: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x844dbcu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 844dbc: jmp 0x844951 */
  goto L_844951;
}

void f_844dc1(void) {
  LOAD_REGS();
L_844dc1: /* 844dc1: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 844dc4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 844dc9: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 844dcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 844dcd: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 844dd0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x844dd5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_844dd5(); return;
}

void f_844dd5(void) {
  LOAD_REGS();
L_844dd5: /* 844dd5: push 0xa16514 */
  { uint32_t v = 0xa16514u; esp -= 4; W32(esp, v); }
/* 844dda: push 0xae3e8c */
  { uint32_t v = 0xae3e8cu; esp -= 4; W32(esp, v); }
/* 844ddf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x844de5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 844de5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 844de8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844dea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844dec: call 0x99caf8 */
  esp -= 4; W32(esp, 0x844df1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_844df1(); return;
}

void f_844df1(void) {
  LOAD_REGS();
L_844df1: /* 844df1: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 844df4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 844df9: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 844dfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 844dfd: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 844e00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x844e05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_844e05(); return;
}

void f_844e05(void) {
  LOAD_REGS();
L_844e05: /* 844e05: push 0xa164e4 */
  { uint32_t v = 0xa164e4u; esp -= 4; W32(esp, v); }
/* 844e0a: push 0xae3e94 */
  { uint32_t v = 0xae3e94u; esp -= 4; W32(esp, v); }
/* 844e0f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x844e15u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 844e15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 844e18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844e1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 844e1c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x844e21u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_844e21: guest_badaddr(0x844e21); return;
}

void f_844fc0(void) {
  LOAD_REGS();
L_844fc0: /* 844fc0: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 844fc3: xor eax, eax */
  eax = 0;
/* 844fc5: and edx, 0xfffffffe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 844fc8: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 844fcb: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 844fce: mov dword ptr [ecx + 0x38], eax */
  W32((uint32_t)(ecx + 0x38u), eax);
/* 844fd1: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 844fd4: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 844fd7: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 844fda: mov byte ptr [ecx + 0x44], al */
  W8((uint32_t)(ecx + 0x44u), (eax & 0xffu));
/* 844fdd: mov dword ptr [ecx + 0x48], edx */
  W32((uint32_t)(ecx + 0x48u), edx);
/* 844fe0: mov dword ptr [ecx + 0x40], eax */
  W32((uint32_t)(ecx + 0x40u), eax);
/* 844fe3: ret  */
  esp += 4; SPILL(); return;
}

void f_845000(void) {
  LOAD_REGS();
L_845000: /* 845000: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 845003: test dh, 1 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 845006: je 0x845021 */
  if (zf) goto L_845021;
L_845008: /* 845008: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 84500c: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 845011: xor ecx, ecx */
  ecx = 0;
/* 845013: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 845015: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 845018: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 84501b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 84501e: ret 4 */
  esp += 8; SPILL(); return;
L_845021: /* 845021: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 845023: jns 0x84503d */
  if (!sf) goto L_84503d;
L_845025: /* 845025: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 845029: xor ecx, ecx */
  ecx = 0;
/* 84502b: mov dword ptr [eax], 0x3f800000 */
  W32((uint32_t)(eax), 0x3f800000u);
/* 845031: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 845034: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 845037: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 84503a: ret 4 */
  esp += 8; SPILL(); return;
L_84503d: /* 84503d: test dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 845040: je 0x84505b */
  if (zf) goto L_84505b;
L_845042: /* 845042: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 845046: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 84504b: xor ecx, ecx */
  ecx = 0;
/* 84504d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 84504f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 845052: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 845055: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 845058: ret 4 */
  esp += 8; SPILL(); return;
L_84505b: /* 84505b: test dl, 0x40 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84505e: je 0x84507f */
  if (zf) goto L_84507f;
L_845060: /* 845060: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 845064: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 845069: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 84506b: mov dword ptr [eax + 4], 0x3f000000 */
  W32((uint32_t)(eax + 0x4u), 0x3f000000u);
/* 845072: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 845075: mov dword ptr [eax + 0xc], 0 */
  W32((uint32_t)(eax + 0xcu), 0x0u);
/* 84507c: ret 4 */
  esp += 8; SPILL(); return;
L_84507f: /* 84507f: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 845082: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 845085: jl 0x8450ad */
  if ((sf != of)) goto L_8450ad;
L_845087: /* 845087: cmp dword ptr [ecx + 0x38], 0x50 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x38u))); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84508b: jl 0x8450ad */
  if ((sf != of)) goto L_8450ad;
L_84508d: /* 84508d: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 845090: jne 0x8450ad */
  if (!zf) goto L_8450ad;
L_845092: /* 845092: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 845096: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 84509b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 84509d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8450a0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8450a3: mov dword ptr [eax + 0xc], 0 */
  W32((uint32_t)(eax + 0xcu), 0x0u);
/* 8450aa: ret 4 */
  esp += 8; SPILL(); return;
L_8450ad: /* 8450ad: cmp eax, 0x48 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8450b0: jl 0x8450d5 */
  if ((sf != of)) goto L_8450d5;
L_8450b2: /* 8450b2: cmp dword ptr [ecx + 0x38], 0x50 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x38u))); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8450b6: jl 0x8450d5 */
  if ((sf != of)) goto L_8450d5;
L_8450b8: /* 8450b8: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8450bb: jne 0x8450d5 */
  if (!zf) goto L_8450d5;
L_8450bd: /* 8450bd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8450c1: xor ecx, ecx */
  ecx = 0;
/* 8450c3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8450c5: mov dword ptr [eax + 4], 0x3f800000 */
  W32((uint32_t)(eax + 0x4u), 0x3f800000u);
/* 8450cc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8450cf: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8450d2: ret 4 */
  esp += 8; SPILL(); return;
L_8450d5: /* 8450d5: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8450d9: xor ecx, ecx */
  ecx = 0;
/* 8450db: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8450dd: mov dword ptr [eax + 8], 0x3f800000 */
  W32((uint32_t)(eax + 0x8u), 0x3f800000u);
/* 8450e4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8450e7: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8450ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_845130(void) {
  LOAD_REGS();
L_845130: /* 845130: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 845133: xor eax, eax */
  eax = 0;
/* 845135: cmp edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 845138: setl al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 84513b: ret  */
  esp += 4; SPILL(); return;
}

void f_845150(void) {
  LOAD_REGS();
L_845150: /* 845150: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 845154: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 845157: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845158: cmp edx, dword ptr [eax + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84515b: jne 0x84519e */
  if (!zf) goto L_84519e;
L_84515d: /* 84515d: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 845160: cmp edx, dword ptr [eax + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 845163: jne 0x84519e */
  if (!zf) goto L_84519e;
L_845165: /* 845165: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 845168: cmp edx, dword ptr [eax + 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84516b: jne 0x84519e */
  if (!zf) goto L_84519e;
L_84516d: /* 84516d: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 845170: cmp edx, dword ptr [eax + 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 845173: jne 0x84519e */
  if (!zf) goto L_84519e;
L_845175: /* 845175: mov esi, dword ptr [eax + 0x40] */
  esi = R32((uint32_t)(eax + 0x40u));
/* 845178: xor edx, edx */
  edx = 0;
/* 84517a: cmp esi, 0x4b0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 845180: mov esi, dword ptr [ecx + 0x40] */
  esi = R32((uint32_t)(ecx + 0x40u));
/* 845183: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 845186: xor eax, eax */
  eax = 0;
/* 845188: cmp esi, 0x4b0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84518e: setle al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 845191: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 845193: jne 0x84519e */
  if (!zf) goto L_84519e;
L_845195: /* 845195: mov eax, 1 */
  eax = 0x1u;
/* 84519a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84519b: ret 4 */
  esp += 8; SPILL(); return;
L_84519e: /* 84519e: xor eax, eax */
  eax = 0;
/* 8451a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8451a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8451d0(void) {
  LOAD_REGS();
L_8451d0: /* 8451d0: mov eax, dword ptr [ecx + 0x390] */
  eax = R32((uint32_t)(ecx + 0x390u));
/* 8451d6: and eax, 0xffffbfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffbfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8451db: or eax, 0xbc00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbc00u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8451e0: mov byte ptr [ecx + 0x50], 1 */
  W8((uint32_t)(ecx + 0x50u), 0x1u);
/* 8451e4: mov dword ptr [ecx + 0x40c], 0x43d20000 */
  W32((uint32_t)(ecx + 0x40cu), 0x43d20000u);
/* 8451ee: mov dword ptr [ecx + 0x390], eax */
  W32((uint32_t)(ecx + 0x390u), eax);
/* 8451f4: mov dword ptr [ecx + 0x3f8], 0x44160000 */
  W32((uint32_t)(ecx + 0x3f8u), 0x44160000u);
/* 8451fe: mov dword ptr [ecx + 0x41c], 0x451c4000 */
  W32((uint32_t)(ecx + 0x41cu), 0x451c4000u);
/* 845208: ret  */
  esp += 4; SPILL(); return;
}

void f_845220(void) {
  LOAD_REGS();
L_845220: /* 845220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 845224: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 845227: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845228: cmp edx, dword ptr [eax + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84522b: jl 0x84525e */
  if ((sf != of)) goto L_84525e;
L_84522d: /* 84522d: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 845230: cmp edx, dword ptr [eax + 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 845233: jl 0x84525e */
  if ((sf != of)) goto L_84525e;
L_845235: /* 845235: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 845238: mov esi, dword ptr [ecx + 0x3c] */
  esi = R32((uint32_t)(ecx + 0x3cu));
/* 84523b: or esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 84523d: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84523f: jne 0x84525e */
  if (!zf) goto L_84525e;
L_845241: /* 845241: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 845244: cmp eax, 0x4b0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4b0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 845249: jg 0x845250 */
  if ((!zf && sf == of)) goto L_845250;
L_84524b: /* 84524b: mov eax, 0x4b0 */
  eax = 0x4b0u;
L_845250: /* 845250: cmp dword ptr [ecx + 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x40u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 845253: jg 0x84525e */
  if ((!zf && sf == of)) goto L_84525e;
L_845255: /* 845255: mov eax, 1 */
  eax = 0x1u;
/* 84525a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84525b: ret 4 */
  esp += 8; SPILL(); return;
L_84525e: /* 84525e: xor eax, eax */
  eax = 0;
/* 845260: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 845261: ret 4 */
  esp += 8; SPILL(); return;
}

void f_845290(void) {
  LOAD_REGS();
L_845290: /* 845290: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 845291: mov ebp, esp */
  ebp = esp;
/* 845293: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 845295: push 0x9d3750 */
  { uint32_t v = 0x9d3750u; esp -= 4; W32(esp, v); }
/* 84529a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8452a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8452a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8452a8: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8452ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8452ac: xor ebx, ebx */
  ebx = 0;
/* 8452ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8452af: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8452b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8452b3: mov edi, ecx */
  edi = ecx;
/* 8452b5: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8452b8: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 8452bb: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 8452be: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 8452c1: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 8452c4: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8452c7: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 8452ca: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 8452cd: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 8452d0: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 8452d3: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 8452da: mov dword ptr [ebp - 0x30], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd0u), 0xffffffffu);
/* 8452e1: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8452e4: cmp dword ptr [edx + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8452e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8452ea: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8452ed: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8452f0: je 0x84547a */
  if (zf) goto L_84547a;
L_8452f6: /* 8452f6: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8452fc: fsub dword ptr [edx + 0x2d4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x2d4u)));
/* 845302: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 845308: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 84530a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84530c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 84530f: jne 0x845319 */
  if (!zf) goto L_845319;
L_845311: /* 845311: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 845313: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_845319: /* 845319: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 84531f: mov eax, dword ptr [edx + 0x170] */
  eax = R32((uint32_t)(edx + 0x170u));
/* 845325: fsub dword ptr [edx + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x2d8u)));
/* 84532b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 845331: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845332: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845333: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 845335: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845336: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 845339: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 84533c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 84533f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 845342: mov eax, esp */
  eax = esp;
/* 845344: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 845346: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 845348: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 84534b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84534c: fadd dword ptr [edx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x178u)));
/* 845352: fld dword ptr [edx + 0x174] */
  { double v = F32((uint32_t)(edx + 0x174u)); FPUSH(v); }
/* 845358: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84535a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 84535d: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 845360: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 845363: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 845366: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 845369: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 84536c: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x845372u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845372: xor ebx, ebx */
  ebx = 0;
/* 845374: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 845376: je 0x84547a */
  if (zf) goto L_84547a;
L_84537c: /* 84537c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 84537f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845380: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 845386: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 84538c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84538d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84538f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845390: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 845393: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845394: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 845397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845398: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84539b: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 8453a1: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8453a3: mov edi, esp */
  edi = esp;
/* 8453a5: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8453a7: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8453aa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8453ad: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8453b0: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8453b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8453b6: mov eax, esp */
  eax = esp;
/* 8453b8: mov dword ptr [ebp - 0x28], 0x80000000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x80000000u);
/* 8453bf: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8453c2: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8453c4: mov dword ptr [ebp - 0x24], 0x80000000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x80000000u);
/* 8453cb: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8453ce: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8453d1: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8453d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8453d5: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8453d8: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8453deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8453de: /* 8453de: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8453e2: jne 0x845462 */
  if (!zf) goto L_845462;
L_8453e4: /* 8453e4: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 8453ea: test byte ptr [ecx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8453f1: jne 0x845462 */
  if (!zf) goto L_845462;
L_8453f3: /* 8453f3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8453f6: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 8453f9: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 8453ff: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 845405: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 84540b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84540d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84540f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 845411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 845413: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 845416: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 845418: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 84541b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84541c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84541f: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 845425: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 845427: mov edi, esp */
  edi = esp;
/* 845429: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 84542b: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 84542e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 845431: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 845434: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 845437: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84543a: mov eax, esp */
  eax = esp;
/* 84543c: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 845443: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 845446: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 845448: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 84544f: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 845452: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 845455: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 845458: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845459: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 84545c: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x845462u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_845462: /* 845462: mov eax, 1 */
  eax = 0x1u;
/* 845467: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84546a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 845471: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 845472: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 845473: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 845474: mov esp, ebp */
  esp = ebp;
/* 845476: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 845477: ret 4 */
  esp += 8; SPILL(); return;
L_84547a: /* 84547a: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 84547d: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 845483: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 845485: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845486: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845487: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845488: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84548d: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 84548f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 845492: mov edi, esp */
  edi = esp;
/* 845494: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 845496: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 845499: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84549c: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 84549f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8454a0: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8454a3: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8454a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8454a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8454ab: jne 0x8453de */
  if (!zf) goto L_8453de;
L_8454b1: /* 8454b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8454b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8454b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8454b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8454bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8454be: mov esp, ebp */
  esp = ebp;
/* 8454c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8454c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8454c4(void) {
  LOAD_REGS();
L_8454c4: /* 8454c4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8454c7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8454cc: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8454cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8454d0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8454d3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8454d8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8454d8(); return;
}

void f_8454d8(void) {
  LOAD_REGS();
L_8454d8: /* 8454d8: push 0xa1654c */
  { uint32_t v = 0xa1654cu; esp -= 4; W32(esp, v); }
/* 8454dd: push 0xae418c */
  { uint32_t v = 0xae418cu; esp -= 4; W32(esp, v); }
/* 8454e2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8454e8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8454e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8454eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8454ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8454ef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8454f4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8454f4: guest_badaddr(0x8454f4); return;
}

void f_8455a0(void) {
  LOAD_REGS();
L_8455a0: /* 8455a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8455a1: mov ebp, esp */
  ebp = esp;
/* 8455a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8455a5: push 0x9d3760 */
  { uint32_t v = 0x9d3760u; esp -= 4; W32(esp, v); }
/* 8455aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8455b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8455b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8455b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8455bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8455bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8455bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8455be: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8455c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8455c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8455c4: mov esi, ecx */
  esi = ecx;
/* 8455c6: mov ecx, esp */
  ecx = esp;
/* 8455c8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8455cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8455cd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8455d4: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8455dau); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8455da: mov ecx, esi */
  ecx = esi;
/* 8455dc: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8455e2u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8455e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8455e3: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 8455e8: call 0x6c3233 */
  esp -= 4; W32(esp, 0x8455edu); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 8455ed: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8455f0: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 8455f3: mov edi, dword ptr [esi + 0x34] */
  edi = R32((uint32_t)(esi + 0x34u));
/* 8455f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8455f9: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8455fb: jg 0x8455ff */
  if ((!zf && sf == of)) goto L_8455ff;
L_8455fd: /* 8455fd: mov edx, edi */
  edx = edi;
L_8455ff: /* 8455ff: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 845602: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 845605: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* 845608: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84560a: jg 0x84560e */
  if ((!zf && sf == of)) goto L_84560e;
L_84560c: /* 84560c: mov edx, edi */
  edx = edi;
L_84560e: /* 84560e: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
/* 845611: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 845614: or edx, dword ptr [esi + 0x3c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3cu)));
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 845617: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 84561a: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 84561d: add edx, dword ptr [esi + 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 845620: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 845623: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 845626: mov esi, dword ptr [esi + 0x40] */
  esi = R32((uint32_t)(esi + 0x40u));
/* 845629: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84562b: jl 0x84562f */
  if ((sf != of)) goto L_84562f;
L_84562d: /* 84562d: mov ecx, esi */
  ecx = esi;
L_84562f: /* 84562f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 845630: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 845633: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 845636: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 845637: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84563e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84563f: mov esp, ebp */
  esp = ebp;
/* 845641: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 845642: ret 4 */
  esp += 8; SPILL(); return;
}

void f_845645(void) {
  LOAD_REGS();
L_845645: /* 845645: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 845648: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84564d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 845650: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 845651: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 845654: call 0x99caf8 */
  esp -= 4; W32(esp, 0x845659u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_845659(); return;
}

void f_845659(void) {
  LOAD_REGS();
L_845659: /* 845659: push 0xa16584 */
  { uint32_t v = 0xa16584u; esp -= 4; W32(esp, v); }
/* 84565e: push 0xae4128 */
  { uint32_t v = 0xae4128u; esp -= 4; W32(esp, v); }
/* 845663: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x845669u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 845669: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84566c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84566e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 845670: call 0x99caf8 */
  esp -= 4; W32(esp, 0x845675u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_845675: guest_badaddr(0x845675); return;
}

void f_8456c0(void) {
  LOAD_REGS();
L_8456c0: /* 8456c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8456c1: mov ebp, esp */
  ebp = esp;
/* 8456c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8456c5: push 0x9d3770 */
  { uint32_t v = 0x9d3770u; esp -= 4; W32(esp, v); }
/* 8456ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8456d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8456d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8456d8: sub esp, 0xb4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8456de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8456df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8456e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8456e1: xor ebx, ebx */
  ebx = 0;
/* 8456e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8456e6: mov edi, ecx */
  edi = ecx;
/* 8456e8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8456eb: mov dword ptr [ebp - 0x20], 7 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x7u);
/* 8456f2: lea esi, [ebp - 0xbc] */
  esi = (uint32_t)(ebp + 0xffffff44u);
L_8456f8: /* 8456f8: dec dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8456fb: js 0x84570e */
  if (sf) goto L_84570e;
L_8456fd: /* 8456fd: mov ecx, esi */
  ecx = esi;
/* 8456ff: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x845705u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 845705: mov eax, 0xc */
  eax = 0xcu;
/* 84570a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 84570c: jmp 0x8456f8 */
  goto L_8456f8;
L_84570e: /* 84570e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 845711: mov dword ptr [ebp - 0x18], 0x422c0000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x422c0000u);
/* 845718: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84571b: mov dword ptr [ebp - 0xb8], ecx */
  W32((uint32_t)(ebp + 0xffffff48u), ecx);
/* 845721: mov dword ptr [ebp - 0x1c], 0x42100000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x42100000u);
/* 845728: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84572b: mov dword ptr [ebp - 0xbc], eax */
  W32((uint32_t)(ebp + 0xffffff44u), eax);
/* 845731: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 845738: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84573b: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 845741: mov dword ptr [ebp - 0x18], 0x429c0000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x429c0000u);
/* 845748: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84574b: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 845751: mov dword ptr [ebp - 0x1c], 0x42100000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x42100000u);
/* 845758: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84575b: mov dword ptr [ebp - 0xb0], eax */
  W32((uint32_t)(ebp + 0xffffff50u), eax);
/* 845761: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 845768: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84576b: mov dword ptr [ebp - 0xa8], edx */
  W32((uint32_t)(ebp + 0xffffff58u), edx);
/* 845771: mov dword ptr [ebp - 0x18], 0x42a00000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x42a00000u);
/* 845778: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84577b: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 845781: mov dword ptr [ebp - 0x1c], 0x42400000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x42400000u);
/* 845788: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84578b: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 845792: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 845795: mov dword ptr [ebp - 0xa4], eax */
  W32((uint32_t)(ebp + 0xffffff5cu), eax);
/* 84579b: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 8457a1: mov dword ptr [ebp - 0x18], 0x42a00000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x42a00000u);
/* 8457a8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8457ab: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 8457b1: mov dword ptr [ebp - 0x1c], 0x42900000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x42900000u);
/* 8457b8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8457bb: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8457c2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8457c5: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 8457cb: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 8457d1: mov dword ptr [ebp - 0x18], 0x42c80000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x42c80000u);
/* 8457d8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8457db: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 8457e1: mov dword ptr [ebp - 0x1c], 0x42900000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x42900000u);
/* 8457e8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8457eb: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8457f2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8457f5: mov dword ptr [ebp - 0x18], 0x42c80000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x42c80000u);
/* 8457fc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8457ff: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 845805: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 84580b: mov dword ptr [ebp - 0x1c], 0x42f00000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x42f00000u);
/* 845812: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 845815: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84581c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84581f: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 845822: mov dword ptr [ebp - 0x18], 0x42f00000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x42f00000u);
/* 845829: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84582c: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 84582f: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 845832: push 0x422c0000 */
  { uint32_t v = 0x422c0000u; esp -= 4; W32(esp, v); }
/* 845837: mov dword ptr [ebp - 0x1c], 0x42f00000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x42f00000u);
/* 84583e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 845841: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 845848: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84584b: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 84584e: push 0x42100000 */
  { uint32_t v = 0x42100000u; esp -= 4; W32(esp, v); }
/* 845853: mov ecx, esi */
  ecx = esi;
/* 845855: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 845858: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 84585b: mov dword ptr [ebp - 0x20], 0x42100000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x42100000u);
/* 845862: mov dword ptr [ebp - 0x30], 0x422c0000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x422c0000u);
/* 845869: call 0x6c389b */
  esp -= 4; W32(esp, 0x84586eu); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 84586e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84586f: mov ecx, edi */
  ecx = edi;
/* 845871: call 0x6c7883 */
  esp -= 4; W32(esp, 0x845876u); SPILL(); f_6c7883(); if (g_unwind) return; RELOAD();
/* 845876: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 845878: je 0x8459b1 */
  if (zf) goto L_8459b1;
L_84587e: /* 84587e: mov dword ptr [esi + 0x598], ebx */
  W32((uint32_t)(esi + 0x598u), ebx);
/* 845884: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 845887: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 84588d: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 845890: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 845893: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 845896: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 845899: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8458a0: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8458a7: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8458ae: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8458b5: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8458bc: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8458c3: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 8458ca: mov dword ptr [ebp - 0x40], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc0u), 0xffffffffu);
/* 8458d1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8458d3: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8458d6: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8458d9: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8458dc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8458df: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8458e2: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8458e5: fadd dword ptr [eax + 0x2d8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x2d8u)));
/* 8458eb: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8458f1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8458f4: mov eax, esp */
  eax = esp;
/* 8458f6: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8458fd: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 845900: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 845903: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 845905: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 845907: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 84590e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 845911: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 845914: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84591b: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84591e: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 845921: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 845926: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 845929: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84592a: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 84592d: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 845932: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845933: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845934: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 845937: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845938: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x84593eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84593e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 845941: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 845947: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 845949: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84594c: jnp 0x8459c6 */
  if (!pf) goto L_8459c6;
L_84594e: /* 84594e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 845954: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 845956: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 845959: mov eax, esp */
  eax = esp;
/* 84595b: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 845962: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 845965: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 845967: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 84596e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 845971: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 845974: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84597b: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84597e: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 845981: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 845986: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 84598c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84598d: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 845990: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 845995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845997: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 84599a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84599b: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8459a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8459a1: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8459a4: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8459aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8459ac: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8459af: jnp 0x8459c6 */
  if (!pf) goto L_8459c6;
L_8459b1: /* 8459b1: xor eax, eax */
  eax = 0;
/* 8459b3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8459b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8459bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8459be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8459bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8459c0: mov esp, ebp */
  esp = ebp;
/* 8459c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8459c3: ret 4 */
  esp += 8; SPILL(); return;
L_8459c6: /* 8459c6: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 8459c9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8459cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8459cd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8459cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8459d0: mov ecx, esi */
  ecx = esi;
/* 8459d2: call dword ptr [edx + 0x19c] */
  { uint32_t t = R32((uint32_t)(edx + 0x19cu)); esp -= 4; W32(esp, 0x8459d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8459d8: mov ebx, eax */
  ebx = eax;
/* 8459da: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8459dc: je 0x8459b1 */
  if (zf) goto L_8459b1;
L_8459de: /* 8459de: fld dword ptr [esi + 0x598] */
  { double v = F32((uint32_t)(esi + 0x598u)); FPUSH(v); }
/* 8459e4: call 0x99c958 */
  esp -= 4; W32(esp, 0x8459e9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8459e9: mov dword ptr [edi + 0x3c], ebx */
  W32((uint32_t)(edi + 0x3cu), ebx);
/* 8459ec: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* 8459ef: mov ebx, 1 */
  ebx = 0x1u;
L_8459f4: /* 8459f4: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8459f7: jge 0x845a5a */
  if ((sf == of)) goto L_845a5a;
L_8459f9: /* 8459f9: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 8459fc: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8459ff: mov edx, dword ptr [ebp + eax - 0xbc] */
  edx = R32((uint32_t)(ebp + eax + 0xffffff44u));
/* 845a06: lea ecx, [ebp + eax - 0xb8] */
  ecx = (uint32_t)(ebp + eax + 0xffffff48u);
/* 845a0d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 845a10: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 845a12: lea eax, [ebp + eax - 0xbc] */
  eax = (uint32_t)(ebp + eax + 0xffffff44u);
/* 845a19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 845a1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 845a1b: mov ecx, esi */
  ecx = esi;
/* 845a1d: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 845a20: call 0x6c389b */
  esp -= 4; W32(esp, 0x845a25u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 845a25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845a26: mov ecx, edi */
  ecx = edi;
/* 845a28: call 0x6c7883 */
  esp -= 4; W32(esp, 0x845a2du); SPILL(); f_6c7883(); if (g_unwind) return; RELOAD();
/* 845a2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 845a2f: je 0x845a5a */
  if (zf) goto L_845a5a;
L_845a31: /* 845a31: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 845a34: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 845a36: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 845a38: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 845a3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 845a3b: mov ecx, esi */
  ecx = esi;
/* 845a3d: call dword ptr [eax + 0x19c] */
  { uint32_t t = R32((uint32_t)(eax + 0x19cu)); esp -= 4; W32(esp, 0x845a43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845a43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 845a45: je 0x845a5a */
  if (zf) goto L_845a5a;
L_845a47: /* 845a47: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 845a4a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 845a4c: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 845a4f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 845a51: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 845a54: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 845a57: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 845a58: jmp 0x8459f4 */
  goto L_8459f4;
L_845a5a: /* 845a5a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 845a5d: call 0x99c958 */
  esp -= 4; W32(esp, 0x845a62u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 845a62: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 845a65: mov dword ptr [edi + 0x34], eax */
  W32((uint32_t)(edi + 0x34u), eax);
/* 845a68: call 0x99c958 */
  esp -= 4; W32(esp, 0x845a6du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 845a6d: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 845a70: mov dword ptr [edi + 0x38], eax */
  W32((uint32_t)(edi + 0x38u), eax);
/* 845a73: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 845a79: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 845a7c: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 845a82: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 845a88: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 845a8b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 845a90: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 845a93: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 845a95: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 845a98: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 845a9a: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 845a9d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 845aa0: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 845aa3: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x845aa9u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 845aa9: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 845aac: call 0x99c958 */
  esp -= 4; W32(esp, 0x845ab1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 845ab1: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 845ab4: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* 845ab7: test byte ptr [edi + 0x3c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 845abb: je 0x845aca */
  if (zf) goto L_845aca;
L_845abd: /* 845abd: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 845ac0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 845ac2: call 0x99c958 */
  esp -= 4; W32(esp, 0x845ac7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 845ac7: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
L_845aca: /* 845aca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 845acd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 845ace: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 845acf: mov eax, 1 */
  eax = 0x1u;
/* 845ad4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 845adb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 845adc: mov esp, ebp */
  esp = ebp;
/* 845ade: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 845adf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_845ae2(void) {
  LOAD_REGS();
L_845ae2: /* 845ae2: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 845ae8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 845aed: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 845af0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 845af1: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 845af4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x845af9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_845af9(); return;
}

void f_845af9(void) {
  LOAD_REGS();
L_845af9: /* 845af9: push 0xa165b8 */
  { uint32_t v = 0xa165b8u; esp -= 4; W32(esp, v); }
/* 845afe: push 0xae4184 */
  { uint32_t v = 0xae4184u; esp -= 4; W32(esp, v); }
/* 845b03: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x845b09u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 845b09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 845b0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 845b0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 845b10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x845b15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_845b15: guest_badaddr(0x845b15); return;
}

void f_845c40(void) {
  LOAD_REGS();
L_845c40: /* 845c40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 845c41: mov ebp, esp */
  ebp = esp;
/* 845c43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 845c45: push 0x9d3780 */
  { uint32_t v = 0x9d3780u; esp -= 4; W32(esp, v); }
/* 845c4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 845c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845c51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 845c58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 845c5b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 845c5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845c5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845c60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 845c61: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 845c64: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 845c66: mov esi, ecx */
  esi = ecx;
/* 845c68: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 845c6b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 845c6e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 845c75: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 845c78: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 845c7b: je 0x845c92 */
  if (zf) goto L_845c92;
L_845c7d: /* 845c7d: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 845c82: mov ecx, edi */
  ecx = edi;
/* 845c84: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x845c8au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 845c8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 845c8c: je 0x845c92 */
  if (zf) goto L_845c92;
L_845c8e: /* 845c8e: mov ebx, edi */
  ebx = edi;
/* 845c90: jmp 0x845c94 */
  goto L_845c94;
L_845c92: /* 845c92: xor ebx, ebx */
  ebx = 0;
L_845c94: /* 845c94: mov ecx, ebx */
  ecx = ebx;
/* 845c96: call 0x6c75fe */
  esp -= 4; W32(esp, 0x845c9bu); SPILL(); f_6c75fe(); if (g_unwind) return; RELOAD();
/* 845c9b: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 845c9e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 845ca0: call dword ptr [edx + 0x168] */
  { uint32_t t = R32((uint32_t)(edx + 0x168u)); esp -= 4; W32(esp, 0x845ca6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845ca6: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 845ca9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 845cab: call dword ptr [eax + 0x168] */
  { uint32_t t = R32((uint32_t)(eax + 0x168u)); esp -= 4; W32(esp, 0x845cb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845cb1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 845cb4: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x845cbau); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 845cba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 845cbd: mov edi, eax */
  edi = eax;
/* 845cbf: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x845cc5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 845cc5: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 845ccb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 845ccd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 845cce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845ccf: push 0xae4148 */
  { uint32_t v = 0xae4148u; esp -= 4; W32(esp, v); }
/* 845cd4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 845cd5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x845cdbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 845cdb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 845cde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845cdf: mov ecx, esi */
  ecx = esi;
/* 845ce1: call 0x6cb442 */
  esp -= 4; W32(esp, 0x845ce6u); SPILL(); f_6cb442(); if (g_unwind) return; RELOAD();
/* 845ce6: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 845ce9: mov edi, eax */
  edi = eax;
/* 845ceb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 845ced: call dword ptr [eax + 0x16c] */
  { uint32_t t = R32((uint32_t)(eax + 0x16cu)); esp -= 4; W32(esp, 0x845cf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845cf3: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 845cf6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 845cf8: call dword ptr [edx + 0x16c] */
  { uint32_t t = R32((uint32_t)(edx + 0x16cu)); esp -= 4; W32(esp, 0x845cfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845cfe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 845d01: mov eax, edi */
  eax = edi;
/* 845d03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 845d04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 845d05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 845d0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 845d0d: mov esp, ebp */
  esp = ebp;
/* 845d0f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 845d10: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_845d13(void) {
  LOAD_REGS();
L_845d13: /* 845d13: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 845d16: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 845d1b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 845d1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 845d1f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 845d22: call 0x99caf8 */
  esp -= 4; W32(esp, 0x845d27u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_845d27(); return;
}

void f_845d27(void) {
  LOAD_REGS();
L_845d27: /* 845d27: push 0xa16600 */
  { uint32_t v = 0xa16600u; esp -= 4; W32(esp, v); }
/* 845d2c: push 0xae417c */
  { uint32_t v = 0xae417cu; esp -= 4; W32(esp, v); }
/* 845d31: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x845d37u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 845d37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 845d3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 845d3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 845d3e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x845d43u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_845d43: guest_badaddr(0x845d43); return;
}

void f_845da0(void) {
  LOAD_REGS();
L_845da0: /* 845da0: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_845dc0(void) {
  LOAD_REGS();
L_845dc0: /* 845dc0: xor eax, eax */
  eax = 0;
/* 845dc2: mov dword ptr [ecx + 0xc], 2 */
  W32((uint32_t)(ecx + 0xcu), 0x2u);
/* 845dc9: mov dword ptr [ecx + 0x10], 0x4f */
  W32((uint32_t)(ecx + 0x10u), 0x4fu);
/* 845dd0: mov dword ptr [ecx + 0x14], 0xf */
  W32((uint32_t)(ecx + 0x14u), 0xfu);
/* 845dd7: mov dword ptr [ecx + 0x18], 0x46 */
  W32((uint32_t)(ecx + 0x18u), 0x46u);
/* 845dde: mov dword ptr [ecx + 0x1c], 3 */
  W32((uint32_t)(ecx + 0x1cu), 0x3u);
/* 845de5: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 845de8: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 845deb: mov dword ptr [ecx + 0x28], 1 */
  W32((uint32_t)(ecx + 0x28u), 0x1u);
/* 845df2: ret  */
  esp += 4; SPILL(); return;
}

void f_845e10(void) {
  LOAD_REGS();
L_845e10: /* 845e10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845e11: mov esi, ecx */
  esi = ecx;
/* 845e13: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x845e19u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 845e19: mov eax, esi */
  eax = esi;
/* 845e1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 845e1c: ret  */
  esp += 4; SPILL(); return;
}

void f_845e30(void) {
  LOAD_REGS();
L_845e30: /* 845e30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 845e32: push 0x9d3799 */
  { uint32_t v = 0x9d3799u; esp -= 4; W32(esp, v); }
/* 845e37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 845e3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845e3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 845e45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 845e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845e47: mov esi, ecx */
  esi = ecx;
/* 845e49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 845e4d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x845e53u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 845e53: xor eax, eax */
  eax = 0;
/* 845e55: push 0xae4230 */
  { uint32_t v = 0xae4230u; esp -= 4; W32(esp, v); }
/* 845e5a: mov ecx, esi */
  ecx = esi;
/* 845e5c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 845e60: mov dword ptr [esi + 0xc], 2 */
  W32((uint32_t)(esi + 0xcu), 0x2u);
/* 845e67: mov dword ptr [esi + 0x10], 0x4f */
  W32((uint32_t)(esi + 0x10u), 0x4fu);
/* 845e6e: mov dword ptr [esi + 0x14], 0xf */
  W32((uint32_t)(esi + 0x14u), 0xfu);
/* 845e75: mov dword ptr [esi + 0x18], 0x46 */
  W32((uint32_t)(esi + 0x18u), 0x46u);
/* 845e7c: mov dword ptr [esi + 0x1c], 3 */
  W32((uint32_t)(esi + 0x1cu), 0x3u);
/* 845e83: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 845e86: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 845e89: mov dword ptr [esi + 0x28], 1 */
  W32((uint32_t)(esi + 0x28u), 0x1u);
/* 845e90: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x845e96u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 845e96: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 845e9a: mov eax, esi */
  eax = esi;
/* 845e9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 845e9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 845ea4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 845ea7: ret  */
  esp += 4; SPILL(); return;
}

void f_845ed0(void) {
  LOAD_REGS();
L_845ed0: /* 845ed0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 845ed6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 845ed8: push 0x9d37c2 */
  { uint32_t v = 0x9d37c2u; esp -= 4; W32(esp, v); }
/* 845edd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845ede: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 845ee3: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 845eea: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 845eed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 845eee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845eef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 845ef0: mov edi, ecx */
  edi = ecx;
/* 845ef2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 845ef4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 845ef6: push 0xae42e4 */
  { uint32_t v = 0xae42e4u; esp -= 4; W32(esp, v); }
/* 845efb: push 0xae4300 */
  { uint32_t v = 0xae4300u; esp -= 4; W32(esp, v); }
/* 845f00: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x845f03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845f03: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 845f06: mov ecx, dword ptr [0xcfa824] */
  ecx = R32((uint32_t)(0xcfa824u));
/* 845f0c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 845f0e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 845f10: push 0xae4320 */
  { uint32_t v = 0xae4320u; esp -= 4; W32(esp, v); }
/* 845f15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845f16: push 0xae433c */
  { uint32_t v = 0xae433cu; esp -= 4; W32(esp, v); }
/* 845f1b: push 0xae4350 */
  { uint32_t v = 0xae4350u; esp -= 4; W32(esp, v); }
/* 845f20: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x845f23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845f23: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 845f26: xor ebx, ebx */
  ebx = 0;
/* 845f28: xor esi, esi */
  esi = 0;
/* 845f2a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 845f2c: jle 0x845ffc */
  if ((zf || sf != of)) goto L_845ffc;
L_845f32: /* 845f32: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 845f33: mov ebp, dword ptr [0xcfa540] */
  ebp = R32((uint32_t)(0xcfa540u));
/* 845f39: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 845f3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_845f40: /* 845f40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 845f41: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 845f45: push 0xae4370 */
  { uint32_t v = 0xae4370u; esp -= 4; W32(esp, v); }
/* 845f4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845f4b: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x845f4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845f4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 845f50: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 845f53: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 845f57: mov eax, dword ptr [ecx + edx + 0x1c] */
  eax = R32((uint32_t)(ecx + edx + 0x1cu));
/* 845f5b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 845f5d: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 845f60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845f61: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 845f64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 845f65: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 845f68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845f69: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 845f6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 845f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845f6e: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 845f72: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x845f78u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 845f78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845f79: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 845f7d: push 0xae4384 */
  { uint32_t v = 0xae4384u; esp -= 4; W32(esp, v); }
/* 845f82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 845f83: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x845f85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845f85: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 845f88: mov edx, dword ptr [0xcfa824] */
  edx = R32((uint32_t)(0xcfa824u));
/* 845f8e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 845f90: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 845f92: push 0xae43a8 */
  { uint32_t v = 0xae43a8u; esp -= 4; W32(esp, v); }
/* 845f97: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 845f9b: mov byte ptr [esp + 0x38], 1 */
  W8((uint32_t)(esp + 0x38u), 0x1u);
/* 845fa0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x845fa6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 845fa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845fa7: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 845fab: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x845fb1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 845fb1: mov ecx, dword ptr [0xcfa824] */
  ecx = R32((uint32_t)(0xcfa824u));
/* 845fb7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 845fb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 845fba: push 0xae43c4 */
  { uint32_t v = 0xae43c4u; esp -= 4; W32(esp, v); }
/* 845fbf: call dword ptr [ebx + 0x30] */
  { uint32_t t = R32((uint32_t)(ebx + 0x30u)); esp -= 4; W32(esp, 0x845fc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 845fc2: xor ebx, ebx */
  ebx = 0;
/* 845fc4: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 845fc8: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* 845fcc: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x845fd2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 845fd2: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 845fd6: mov dword ptr [esp + 0x34], 0xffffffff */
  W32((uint32_t)(esp + 0x34u), 0xffffffffu);
/* 845fde: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x845fe4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 845fe4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 845fe8: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 845feb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 845fec: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 845fef: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 845ff1: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 845ff5: jl 0x845f40 */
  if ((sf != of)) goto L_845f40;
L_845ffb: /* 845ffb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_845ffc: /* 845ffc: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 845ffe: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 846000: je 0x846018 */
  if (zf) goto L_846018;
L_846002: /* 846002: mov ecx, edi */
  ecx = edi;
/* 846004: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x84600au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 84600a: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 846010: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 846012: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 846014: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 846015: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x846018u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_846018: /* 846018: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 84601c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84601d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84601e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84601f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 846026: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846029: ret  */
  esp += 4; SPILL(); return;
}

void f_846090(void) {
  LOAD_REGS();
L_846090: /* 846090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 846091: mov ebp, esp */
  ebp = esp;
/* 846093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 846095: push 0x9d37f2 */
  { uint32_t v = 0x9d37f2u; esp -= 4; W32(esp, v); }
/* 84609a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8460a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8460a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8460a8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8460ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8460ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8460ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8460ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8460b1: mov ebx, ecx */
  ebx = ecx;
/* 8460b3: xor edi, edi */
  edi = 0;
/* 8460b5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8460b8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8460bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8460c0: /* 8460c0: cmp edi, dword ptr [ebx + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8460c3: jge 0x84612c */
  if ((sf == of)) goto L_84612c;
L_8460c5: /* 8460c5: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8460c8: mov esi, edi */
  esi = edi;
/* 8460ca: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 8460cd: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8460d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8460d1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8460d3: call 0x6cbda2 */
  esp -= 4; W32(esp, 0x8460d8u); SPILL(); f_6cbda2(); if (g_unwind) return; RELOAD();
/* 8460d8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8460db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8460dc: mov ecx, eax */
  ecx = eax;
/* 8460de: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8460e2: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x8460e8u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 8460e8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8460eb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8460ee: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8460f2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8460f8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8460f8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8460fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8460fd: je 0x846129 */
  if (zf) goto L_846129;
L_8460ff: /* 8460ff: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 846102: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 846105: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 846107: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 84610e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x846114u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 846114: mov eax, ebx */
  eax = ebx;
/* 846116: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 846119: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 846120: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 846121: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 846122: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 846123: mov esp, ebp */
  esp = ebp;
/* 846125: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 846126: ret 0xc */
  esp += 16; SPILL(); return;
L_846129: /* 846129: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 84612a: jmp 0x8460c0 */
  goto L_8460c0;
L_84612c: /* 84612c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 84612f: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 846136: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x84613cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 84613c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84613f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 846140: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 846141: xor eax, eax */
  eax = 0;
/* 846143: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84614a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84614b: mov esp, ebp */
  esp = ebp;
/* 84614d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84614e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_846151(void) {
  LOAD_REGS();
L_846151: /* 846151: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 846154: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 846159: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 84615c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84615d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 846160: call 0x99caf8 */
  esp -= 4; W32(esp, 0x846165u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_846165(); return;
}

void f_846165(void) {
  LOAD_REGS();
L_846165: /* 846165: push 0xa16634 */
  { uint32_t v = 0xa16634u; esp -= 4; W32(esp, v); }
/* 84616a: push 0xae4404 */
  { uint32_t v = 0xae4404u; esp -= 4; W32(esp, v); }
/* 84616f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x846175u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 846175: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846178: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84617a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 84617c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x846181u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_846181: guest_badaddr(0x846181); return;
}

void f_8461d0(void) {
  LOAD_REGS();
L_8461d0: /* 8461d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8461d1: mov ebp, esp */
  ebp = esp;
/* 8461d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8461d5: push 0x9d3822 */
  { uint32_t v = 0x9d3822u; esp -= 4; W32(esp, v); }
/* 8461da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8461e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8461e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8461e8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8461eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8461ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8461ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8461ee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8461f1: mov edi, ecx */
  edi = ecx;
/* 8461f3: xor esi, esi */
  esi = 0;
/* 8461f5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8461f8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8461fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_846200: /* 846200: cmp esi, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 846203: jge 0x846261 */
  if ((sf == of)) goto L_846261;
L_846205: /* 846205: mov ecx, esi */
  ecx = esi;
/* 846207: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 84620a: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 84620d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84620e: add ecx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 846211: call 0x6cbda2 */
  esp -= 4; W32(esp, 0x846216u); SPILL(); f_6cbda2(); if (g_unwind) return; RELOAD();
/* 846216: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 846219: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84621a: mov ecx, eax */
  ecx = eax;
/* 84621c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 846220: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x846226u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 846226: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 846229: mov ebx, eax */
  ebx = eax;
/* 84622b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 84622f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x846235u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 846235: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 846237: je 0x84625e */
  if (zf) goto L_84625e;
L_846239: /* 846239: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 84623c: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 846243: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x846249u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 846249: mov eax, esi */
  eax = esi;
/* 84624b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84624e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 846255: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 846256: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 846257: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 846258: mov esp, ebp */
  esp = ebp;
/* 84625a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84625b: ret 0xc */
  esp += 16; SPILL(); return;
L_84625e: /* 84625e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 84625f: jmp 0x846200 */
  goto L_846200;
L_846261: /* 846261: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 846264: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 84626b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x846271u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 846271: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 846274: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 846275: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 846276: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 846279: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 846280: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 846281: mov esp, ebp */
  esp = ebp;
/* 846283: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 846284: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_846287(void) {
  LOAD_REGS();
L_846287: /* 846287: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84628a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 84628f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 846292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846293: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 846296: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84629bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84629b(); return;
}

void f_84629b(void) {
  LOAD_REGS();
L_84629b: /* 84629b: push 0xa16674 */
  { uint32_t v = 0xa16674u; esp -= 4; W32(esp, v); }
/* 8462a0: push 0xae440c */
  { uint32_t v = 0xae440cu; esp -= 4; W32(esp, v); }
/* 8462a5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8462abu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8462ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8462ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8462b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8462b2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8462b7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8462b7: guest_badaddr(0x8462b7); return;
}

void f_846300(void) {
  LOAD_REGS();
L_846300: /* 846300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 846301: mov ebp, esp */
  ebp = esp;
/* 846303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 846305: push 0x9d3849 */
  { uint32_t v = 0x9d3849u; esp -= 4; W32(esp, v); }
/* 84630a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 846310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 846318: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84631b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84631c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84631d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84631e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 846321: mov ebx, ecx */
  ebx = ecx;
/* 846323: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 846326: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 846329: mov ecx, esp */
  ecx = esp;
/* 84632b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 84632e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 846335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846336: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 84633a: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x846340u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 846340: mov ecx, ebx */
  ecx = ebx;
/* 846342: call 0x6c4ea8 */
  esp -= 4; W32(esp, 0x846347u); SPILL(); f_6c4ea8(); if (g_unwind) return; RELOAD();
/* 846347: mov esi, eax */
  esi = eax;
/* 846349: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84634b: jne 0x846362 */
  if (!zf) goto L_846362;
L_84634d: /* 84634d: push 0x7a */
  { uint32_t v = 0x7au; esp -= 4; W32(esp, v); }
/* 84634f: push 0xae43e4 */
  { uint32_t v = 0xae43e4u; esp -= 4; W32(esp, v); }
/* 846354: push 0xae43f8 */
  { uint32_t v = 0xae43f8u; esp -= 4; W32(esp, v); }
/* 846359: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x84635fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 84635f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_846362: /* 846362: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 846365: mov edi, esp */
  edi = esp;
/* 846367: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 84636a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84636b: mov ecx, edi */
  ecx = edi;
/* 84636d: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x846373u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 846373: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 846376: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 846379: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 84637c: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 84637f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 846382: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 846385: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 846388: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* 84638b: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 84638e: mov dword ptr [edi + 0x1c], edx */
  W32((uint32_t)(edi + 0x1cu), edx);
/* 846391: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 846394: mov dword ptr [edi + 0x20], eax */
  W32((uint32_t)(edi + 0x20u), eax);
/* 846397: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 84639a: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* 84639d: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8463a0: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8463a3: mov dword ptr [edi + 0x28], edx */
  W32((uint32_t)(edi + 0x28u), edx);
/* 8463a6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8463a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8463a9: call 0x6c6a0a */
  esp -= 4; W32(esp, 0x8463aeu); SPILL(); f_6c6a0a(); if (g_unwind) return; RELOAD();
/* 8463ae: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8463b1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8463b7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8463b7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8463ba: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 8463c1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8463c7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8463c7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8463ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8463cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8463cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8463d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8463d4: mov esp, ebp */
  esp = ebp;
/* 8463d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8463d7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8463da(void) {
  LOAD_REGS();
L_8463da: /* 8463da: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8463dd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8463e2: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8463e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8463e6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8463e9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8463eeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8463ee(); return;
}

void f_8463ee(void) {
  LOAD_REGS();
L_8463ee: /* 8463ee: push 0xa166bc */
  { uint32_t v = 0xa166bcu; esp -= 4; W32(esp, v); }
/* 8463f3: push 0xae43fc */
  { uint32_t v = 0xae43fcu; esp -= 4; W32(esp, v); }
/* 8463f8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8463feu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8463fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846401: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 846403: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 846405: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84640au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84640a: guest_badaddr(0x84640a); return;
}

void f_846460(void) {
  LOAD_REGS();
L_846460: /* 846460: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 846461: mov ebp, esp */
  ebp = esp;
/* 846463: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 846465: push 0x9d3869 */
  { uint32_t v = 0x9d3869u; esp -= 4; W32(esp, v); }
/* 84646a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 846470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846471: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 846478: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84647b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84647c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84647d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84647e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 846481: mov edi, ecx */
  edi = ecx;
/* 846483: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 846486: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 846489: mov ecx, esp */
  ecx = esp;
/* 84648b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 84648e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 846495: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846496: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 84649a: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8464a0u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8464a0: mov ecx, edi */
  ecx = edi;
/* 8464a2: call 0x6c4ea8 */
  esp -= 4; W32(esp, 0x8464a7u); SPILL(); f_6c4ea8(); if (g_unwind) return; RELOAD();
/* 8464a7: mov ebx, eax */
  ebx = eax;
/* 8464a9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8464ab: jne 0x8464d6 */
  if (!zf) goto L_8464d6;
L_8464ad: /* 8464ad: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8464af: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 8464b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8464b4: mov ecx, esi */
  ecx = esi;
/* 8464b6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8464bcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8464bc: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8464bf: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8464c1: je 0x8464ca */
  if (zf) goto L_8464ca;
L_8464c3: /* 8464c3: mov ecx, eax */
  ecx = eax;
/* 8464c5: call 0x6c7e28 */
  esp -= 4; W32(esp, 0x8464cau); SPILL(); f_6c7e28(); if (g_unwind) return; RELOAD();
L_8464ca: /* 8464ca: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 8464cd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8464cf: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8464d2: lea ebx, [eax + ecx - 0x2c] */
  ebx = (uint32_t)(eax + ecx + 0xffffffd4u);
L_8464d6: /* 8464d6: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 8464d8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8464db: mov edi, esp */
  edi = esp;
/* 8464dd: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8464e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8464e1: mov ecx, edi */
  ecx = edi;
/* 8464e3: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8464e9u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8464e9: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8464ec: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 8464ef: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 8464f2: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 8464f5: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 8464f8: mov dword ptr [edi + 0x14], ecx */
  W32((uint32_t)(edi + 0x14u), ecx);
/* 8464fb: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 8464fe: mov dword ptr [edi + 0x18], edx */
  W32((uint32_t)(edi + 0x18u), edx);
/* 846501: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 846504: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 846507: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 84650a: mov dword ptr [edi + 0x20], ecx */
  W32((uint32_t)(edi + 0x20u), ecx);
/* 84650d: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 846510: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 846513: mov dword ptr [edi + 0x24], edx */
  W32((uint32_t)(edi + 0x24u), edx);
/* 846516: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 846519: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84651a: mov ecx, ebx */
  ecx = ebx;
/* 84651c: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* 84651f: call 0x6c6a0a */
  esp -= 4; W32(esp, 0x846524u); SPILL(); f_6c6a0a(); if (g_unwind) return; RELOAD();
/* 846524: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 846527: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x84652du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 84652d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 846530: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 846531: mov ecx, ebx */
  ecx = ebx;
/* 846533: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x846539u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 846539: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 84653c: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 846543: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x846549u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 846549: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84654c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84654d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84654e: mov eax, ebx */
  eax = ebx;
/* 846550: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 846557: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 846558: mov esp, ebp */
  esp = ebp;
/* 84655a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84655b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_84655e(void) {
  LOAD_REGS();
L_84655e: /* 84655e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 846561: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 846566: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 846569: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84656a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 84656d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x846572u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_846572(); return;
}

void f_846572(void) {
  LOAD_REGS();
L_846572: /* 846572: push 0xa166fc */
  { uint32_t v = 0xa166fcu; esp -= 4; W32(esp, v); }
/* 846577: push 0xae4414 */
  { uint32_t v = 0xae4414u; esp -= 4; W32(esp, v); }
/* 84657c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x846582u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 846582: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846585: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 846587: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 846589: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84658eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84658e: guest_badaddr(0x84658e); return;
}

void f_8465e0(void) {
  LOAD_REGS();
L_8465e0: /* 8465e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8465e1: mov ebp, esp */
  ebp = esp;
/* 8465e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8465e5: push 0x9d3889 */
  { uint32_t v = 0x9d3889u; esp -= 4; W32(esp, v); }
/* 8465ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8465f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8465f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8465f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8465fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8465fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8465fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8465fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 846601: mov esi, ecx */
  esi = ecx;
/* 846603: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 846606: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 846609: mov ecx, esp */
  ecx = esp;
/* 84660b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 84660e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 846615: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846616: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 84661a: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x846620u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 846620: mov ecx, esi */
  ecx = esi;
/* 846622: call 0x6c624e */
  esp -= 4; W32(esp, 0x846627u); SPILL(); f_6c624e(); if (g_unwind) return; RELOAD();
/* 846627: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 84662a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84662c: je 0x846639 */
  if (zf) goto L_846639;
L_84662e: /* 84662e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 846630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846631: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 846634: call 0x6cb109 */
  esp -= 4; W32(esp, 0x846639u); SPILL(); f_6cb109(); if (g_unwind) return; RELOAD();
L_846639: /* 846639: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 84663c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 84663f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x846645u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 846645: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 846648: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 846649: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84664a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 846651: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 846652: mov esp, ebp */
  esp = ebp;
/* 846654: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 846655: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_846658(void) {
  LOAD_REGS();
L_846658: /* 846658: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 84665b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 846660: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 846663: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 846664: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 846667: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84666cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_84666c(); return;
}

void f_84666c(void) {
  LOAD_REGS();
L_84666c: /* 84666c: push 0xa1672c */
  { uint32_t v = 0xa1672cu; esp -= 4; W32(esp, v); }
/* 846671: push 0xae441c */
  { uint32_t v = 0xae441cu; esp -= 4; W32(esp, v); }
/* 846676: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x84667cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 84667c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84667f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 846681: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 846683: call 0x99caf8 */
  esp -= 4; W32(esp, 0x846688u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_846688: guest_badaddr(0x846688); return;
}

void f_8466c0(void) {
  LOAD_REGS();
L_8466c0: /* 8466c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8466c1: mov esi, ecx */
  esi = ecx;
/* 8466c3: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8466c6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8466ccu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8466cc: mov eax, esi */
  eax = esi;
/* 8466ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8466cf: ret  */
  esp += 4; SPILL(); return;
}

void f_8466e0(void) {
  LOAD_REGS();
L_8466e0: /* 8466e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8466e2: push 0x9d38ab */
  { uint32_t v = 0x9d38abu; esp -= 4; W32(esp, v); }
/* 8466e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8466ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8466ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8466f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8466f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8466f7: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 8466fb: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 8466fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 846700: mov ecx, esi */
  ecx = esi;
/* 846702: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 84670a: call 0x6c8477 */
  esp -= 4; W32(esp, 0x84670fu); SPILL(); f_6c8477(); if (g_unwind) return; RELOAD();
/* 84670f: mov ecx, esi */
  ecx = esi;
/* 846711: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 846719: call 0x6c7c39 */
  esp -= 4; W32(esp, 0x84671eu); SPILL(); f_6c7c39(); if (g_unwind) return; RELOAD();
/* 84671e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 846722: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 846723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84672a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84672d: ret  */
  esp += 4; SPILL(); return;
}

void f_846750(void) {
  LOAD_REGS();
L_846750: /* 846750: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 846752: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 846758: push 0x9d38ee */
  { uint32_t v = 0x9d38eeu; esp -= 4; W32(esp, v); }
/* 84675d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84675e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 846765: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 846768: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 846769: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84676a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84676b: mov ebp, ecx */
  ebp = ecx;
/* 84676d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84676e: lea esi, [ebp + 4] */
  esi = (uint32_t)(ebp + 0x4u);
/* 846771: xor ebx, ebx */
  ebx = 0;
/* 846773: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 846774: mov ecx, esi */
  ecx = esi;
/* 846776: call 0x6c8477 */
  esp -= 4; W32(esp, 0x84677bu); SPILL(); f_6c8477(); if (g_unwind) return; RELOAD();
/* 84677b: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 84677d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84677f: mov ecx, esi */
  ecx = esi;
/* 846781: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x846787u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 846787: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 84678a: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 84678c: je 0x846795 */
  if (zf) goto L_846795;
L_84678e: /* 84678e: mov ecx, eax */
  ecx = eax;
/* 846790: call 0x6c7e28 */
  esp -= 4; W32(esp, 0x846795u); SPILL(); f_6c7e28(); if (g_unwind) return; RELOAD();
L_846795: /* 846795: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 84679a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84679c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84679e: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8467a3: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8467a5: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8467a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8467a7: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8467ab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8467ad: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 8467b1: je 0x8467bc */
  if (zf) goto L_8467bc;
L_8467b3: /* 8467b3: mov ecx, eax */
  ecx = eax;
/* 8467b5: call 0x6c7e28 */
  esp -= 4; W32(esp, 0x8467bau); SPILL(); f_6c7e28(); if (g_unwind) return; RELOAD();
/* 8467ba: jmp 0x8467be */
  goto L_8467be;
L_8467bc: /* 8467bc: xor eax, eax */
  eax = 0;
L_8467be: /* 8467be: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 8467c0: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8467c3: mov edi, esp */
  edi = esp;
/* 8467c5: mov dword ptr [esp + 0x40], esp */
  W32((uint32_t)(esp + 0x40u), esp);
/* 8467c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8467ca: mov ecx, edi */
  ecx = edi;
/* 8467cc: mov dword ptr [esp + 0xa0], 0xffffffff */
  W32((uint32_t)(esp + 0xa0u), 0xffffffffu);
/* 8467d7: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 8467da: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8467e0u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8467e0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8467e3: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 8467e6: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 8467e9: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 8467ec: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 8467ef: mov dword ptr [edi + 0x14], edx */
  W32((uint32_t)(edi + 0x14u), edx);
/* 8467f2: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 8467f5: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
/* 8467f8: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8467fb: mov dword ptr [edi + 0x1c], ecx */
  W32((uint32_t)(edi + 0x1cu), ecx);
/* 8467fe: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 846801: mov dword ptr [edi + 0x20], edx */
  W32((uint32_t)(edi + 0x20u), edx);
/* 846804: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 846807: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* 84680a: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 84680d: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* 846811: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 846814: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 846817: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 846818: call 0x6c6a0a */
  esp -= 4; W32(esp, 0x84681du); SPILL(); f_6c6a0a(); if (g_unwind) return; RELOAD();
/* 84681d: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 846821: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x846827u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 846827: mov eax, dword ptr [0xcfa824] */
  eax = R32((uint32_t)(0xcfa824u));
/* 84682c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84682e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 846830: push 0xae4240 */
  { uint32_t v = 0xae4240u; esp -= 4; W32(esp, v); }
/* 846835: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 846839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84683a: push 0xae425c */
  { uint32_t v = 0xae425cu; esp -= 4; W32(esp, v); }
/* 84683f: push 0xae4270 */
  { uint32_t v = 0xae4270u; esp -= 4; W32(esp, v); }
/* 846844: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x846847u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 846847: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 846849: jne 0x84684f */
  if (!zf) goto L_84684f;
L_84684b: /* 84684b: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_84684f: /* 84684f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 846853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 846855: jle 0x8469ce */
  if ((zf || sf != of)) goto L_8469ce;
L_84685b: /* 84685b: mov edi, dword ptr [0xcfa7b4] */
  edi = R32((uint32_t)(0xcfa7b4u));
L_846861: /* 846861: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 846862: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 846866: push 0xae4290 */
  { uint32_t v = 0xae4290u; esp -= 4; W32(esp, v); }
/* 84686b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84686c: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x846872u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 846872: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846875: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 846879: mov dword ptr [esp + 0x70], 1 */
  W32((uint32_t)(esp + 0x70u), 0x1u);
/* 846881: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x846887u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 846887: mov edx, dword ptr [0xcfa824] */
  edx = R32((uint32_t)(0xcfa824u));
/* 84688d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 84688f: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 846891: push 0xae42a4 */
  { uint32_t v = 0xae42a4u; esp -= 4; W32(esp, v); }
/* 846896: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 84689a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84689b: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 84689f: mov byte ptr [esp + 0x78], 2 */
  W8((uint32_t)(esp + 0x78u), 0x2u);
/* 8468a4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8468aau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8468aa: mov edx, dword ptr [0xcfa824] */
  edx = R32((uint32_t)(0xcfa824u));
/* 8468b0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8468b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8468b3: push 0xae42c0 */
  { uint32_t v = 0xae42c0u; esp -= 4; W32(esp, v); }
/* 8468b8: call dword ptr [esi + 0xc] */
  { uint32_t t = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, 0x8468bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8468bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8468bd: je 0x8469a0 */
  if (zf) goto L_8469a0;
L_8468c3: /* 8468c3: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 8468c7: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8468cdu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8468cd: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 8468d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8468d2: push 0xae42e0 */
  { uint32_t v = 0xae42e0u; esp -= 4; W32(esp, v); }
/* 8468d7: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 8468db: mov byte ptr [esp + 0x78], 3 */
  W8((uint32_t)(esp + 0x78u), 0x3u);
/* 8468e0: call dword ptr [0xcfab10] */
  esp -= 4; W32(esp, 0x8468e6u); SPILL(); f_4e3346(); if (g_unwind) return; /* Core!?ParseIntoArray@FString@@QAEHPBGPAV?$TArray@VFString@@@@@Z */ RELOAD();
/* 8468e6: cmp dword ptr [esp + 0x1c], 6 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8468eb: jne 0x84697c */
  if (!zf) goto L_84697c;
L_8468f1: /* 8468f1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8468f5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8468f8: mov ecx, esp */
  ecx = esp;
/* 8468fa: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* 8468fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8468ff: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x846905u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 846905: mov ecx, ebp */
  ecx = ebp;
/* 846907: call 0x6c14d8 */
  esp -= 4; W32(esp, 0x84690cu); SPILL(); f_6c14d8(); if (g_unwind) return; RELOAD();
/* 84690c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 846910: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 846913: mov esi, eax */
  esi = eax;
/* 846915: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x84691bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 84691b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84691c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x84691eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84691e: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 846921: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 846925: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846928: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84692b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x846931u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 846931: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846932: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x846934u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 846934: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 846937: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 84693b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84693e: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 846941: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x846947u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 846947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846948: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x84694au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84694a: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 84694d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 846951: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846954: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 846957: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x84695du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 84695d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84695e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x846960u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 846960: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 846963: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 846967: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 84696a: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84696d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x846973u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 846973: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846974: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x846976u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 846976: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846979: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
L_84697c: /* 84697c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 846980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846981: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 846983: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 846987: mov byte ptr [esp + 0x78], 4 */
  W8((uint32_t)(esp + 0x78u), 0x4u);
/* 84698c: call 0x6cd00d */
  esp -= 4; W32(esp, 0x846991u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 846991: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 846995: mov byte ptr [esp + 0x70], 2 */
  W8((uint32_t)(esp + 0x70u), 0x2u);
/* 84699a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8469a0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_8469a0: /* 8469a0: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 8469a4: mov byte ptr [esp + 0x70], 1 */
  W8((uint32_t)(esp + 0x70u), 0x1u);
/* 8469a9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8469afu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8469af: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8469b3: mov dword ptr [esp + 0x70], 0xffffffff */
  W32((uint32_t)(esp + 0x70u), 0xffffffffu);
/* 8469bb: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8469c1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8469c1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8469c5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8469c6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8469c8: jl 0x846861 */
  if ((sf != of)) goto L_846861;
L_8469ce: /* 8469ce: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* 8469d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8469d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8469d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8469d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8469dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8469dd: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8469e0: ret  */
  esp += 4; SPILL(); return;
}

void f_846aa0(void) {
  LOAD_REGS();
L_846aa0: /* 846aa0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 846aa4: mov eax, ecx */
  eax = ecx;
/* 846aa6: xor ecx, ecx */
  ecx = 0;
/* 846aa8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 846aab: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 846aaf: mov dword ptr [eax], 0x9f6f74 */
  W32((uint32_t)(eax), 0x9f6f74u);
/* 846ab5: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 846ab8: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 846abb: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 846abe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_846ae0(void) {
  LOAD_REGS();
L_846ae0: /* 846ae0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 846ae2: push 0x9d3964 */
  { uint32_t v = 0x9d3964u; esp -= 4; W32(esp, v); }
/* 846ae7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 846aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846aee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 846af5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 846af6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 846af7: mov ebx, ecx */
  ebx = ecx;
/* 846af9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 846afa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 846afb: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 846aff: mov dword ptr [ebx], 0x9f6f74 */
  W32((uint32_t)(ebx), 0x9f6f74u);
/* 846b05: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 846b09: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 846b0c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 846b0f: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 846b12: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 846b15: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 846b18: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 846b1b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 846b1c: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 846b1f: lea esi, [eax + 0x14] */
  esi = (uint32_t)(eax + 0x14u);
/* 846b22: lea edi, [ebx + 0x14] */
  edi = (uint32_t)(ebx + 0x14u);
/* 846b25: mov ecx, 0x10 */
  ecx = 0x10u;
/* 846b2a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 846b2c: lea esi, [eax + 0x94] */
  esi = (uint32_t)(eax + 0x94u);
/* 846b32: lea edi, [ebx + 0x94] */
  edi = (uint32_t)(ebx + 0x94u);
/* 846b38: mov ecx, 0x10 */
  ecx = 0x10u;
/* 846b3d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 846b3f: lea esi, [eax + 0xd4] */
  esi = (uint32_t)(eax + 0xd4u);
/* 846b45: lea edi, [ebx + 0xd4] */
  edi = (uint32_t)(ebx + 0xd4u);
/* 846b4b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 846b50: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 846b52: lea esi, [eax + 0x54] */
  esi = (uint32_t)(eax + 0x54u);
/* 846b55: lea edx, [ebx + 0x114] */
  edx = (uint32_t)(ebx + 0x114u);
/* 846b5b: lea edi, [ebx + 0x54] */
  edi = (uint32_t)(ebx + 0x54u);
/* 846b5e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 846b63: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 846b65: lea esi, [eax + 0x114] */
  esi = (uint32_t)(eax + 0x114u);
/* 846b6b: mov edi, edx */
  edi = edx;
/* 846b6d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 846b72: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 846b74: lea esi, [eax + 0x154] */
  esi = (uint32_t)(eax + 0x154u);
/* 846b7a: lea edi, [ebx + 0x154] */
  edi = (uint32_t)(ebx + 0x154u);
/* 846b80: mov ecx, 0x10 */
  ecx = 0x10u;
/* 846b85: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 846b87: lea ecx, [eax + 0x194] */
  ecx = (uint32_t)(eax + 0x194u);
/* 846b8d: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 846b8f: lea esi, [ebx + 0x194] */
  esi = (uint32_t)(ebx + 0x194u);
/* 846b95: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 846b97: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 846b9a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 846b9d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 846ba0: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 846ba3: lea ecx, [eax + 0x1a0] */
  ecx = (uint32_t)(eax + 0x1a0u);
/* 846ba9: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 846bab: lea esi, [ebx + 0x1a0] */
  esi = (uint32_t)(ebx + 0x1a0u);
/* 846bb1: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 846bb3: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 846bb6: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 846bb9: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 846bbc: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 846bbf: add eax, 0x1ac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1acu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 846bc4: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 846bc6: lea ecx, [ebx + 0x1ac] */
  ecx = (uint32_t)(ebx + 0x1acu);
/* 846bcc: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 846bce: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 846bd1: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 846bd4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 846bd7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 846bda: mov ecx, edx */
  ecx = edx;
/* 846bdc: mov dword ptr [esp + 0x18], 5 */
  W32((uint32_t)(esp + 0x18u), 0x5u);
/* 846be4: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x846beau); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 846bea: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 846bee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 846bef: fstp dword ptr [ebx + 0x1b8] */
  WF32((uint32_t)(ebx + 0x1b8u), ST0); FPOP();
/* 846bf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 846bf6: mov eax, ebx */
  eax = ebx;
/* 846bf8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 846bf9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 846c00: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846c03: ret 4 */
  esp += 8; SPILL(); return;
}

void f_846c60(void) {
  LOAD_REGS();
L_846c60: /* 846c60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 846c62: push 0x9d39d5 */
  { uint32_t v = 0x9d39d5u; esp -= 4; W32(esp, v); }
/* 846c67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 846c6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 846c6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 846c75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 846c76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 846c77: mov esi, ecx */
  esi = ecx;
/* 846c79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 846c7d: mov dword ptr [esi], 0x9f6f74 */
  W32((uint32_t)(esi), 0x9f6f74u);
/* 846c83: lea ecx, [esi + 0x154] */
  ecx = (uint32_t)(esi + 0x154u);
/* 846c89: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 846c91: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x846c97u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 846c97: lea ecx, [esi + 0x114] */
  ecx = (uint32_t)(esi + 0x114u);
/* 846c9d: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 846ca2: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x846ca8u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 846ca8: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* 846cae: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 846cb3: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x846cb9u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 846cb9: lea ecx, [esi + 0x94] */
  ecx = (uint32_t)(esi + 0x94u);
/* 846cbf: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 846cc4: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x846ccau); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 846cca: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 846ccd: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 846cd2: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x846cd8u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 846cd8: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 846cdb: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 846ce3: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x846ce9u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 846ce9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 846ced: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 846cee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 846cf5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846cf8: ret  */
  esp += 4; SPILL(); return;
}

void f_846d30(void) {
  LOAD_REGS();
L_846d30: /* 846d30: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 846d33: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 846d37: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 846d3b: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 846d3f: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 846d43: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 846d47: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 846d4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 846d4c: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 846d50: add ecx, 0x114 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 846d56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 846d57: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 846d5b: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 846d63: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 846d67: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 846d6b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 846d6f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 846d73: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
/* 846d77: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 846d79: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 846d7b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 846d7d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 846d80: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 846d82: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 846d85: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 846d87: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 846d8a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 846d8d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 846d90: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 846d93: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 846d96: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 846d99: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 846d9c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 846d9f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 846da2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 846da4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 846da6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846da8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846daa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 846dac: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 846daf: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 846db2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 846db5: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 846db8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 846dbb: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 846dbe: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 846dc1: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 846dc4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 846dc6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 846dc8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846dca: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846dcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 846dce: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 846dd1: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 846dd4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 846dd7: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 846dda: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 846ddd: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 846de0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 846de3: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 846de6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 846de8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 846dea: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846dec: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846dee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 846df0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 846df2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 846df4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 846df6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 846df9: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 846dfc: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 846dff: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 846e05: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 846e09: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 846e0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 846e0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 846e0f: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 846e13: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 846e15: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 846e17: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 846e1b: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 846e1f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 846e21: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 846e24: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 846e28: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 846e2c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 846e2e: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 846e31: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 846e35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 846e37: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 846e3b: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 846e3e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 846e42: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846e45: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_846ea0(void) {
  LOAD_REGS();
L_846ea0: /* 846ea0: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 846ea3: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 846ea7: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 846eab: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 846eaf: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 846eb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 846eb4: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 846eb8: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 846ebc: add ecx, 0x154 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 846ec2: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 846ec6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 846ec7: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 846ecb: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 846ecf: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 846ed3: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 846ed7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 846edb: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 846edf: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 846ee3: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 846ee7: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 846eeb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 846eef: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 846ef3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 846ef5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 846ef7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 846ef9: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 846efc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 846efe: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 846f01: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 846f03: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 846f06: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 846f09: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 846f0c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 846f0f: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 846f12: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 846f15: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 846f18: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 846f1b: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 846f1e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 846f20: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 846f22: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846f24: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846f26: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 846f28: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 846f2b: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 846f2e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 846f31: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 846f34: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 846f37: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 846f3a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 846f3d: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 846f40: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 846f42: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 846f44: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846f46: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846f48: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 846f4a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 846f4d: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 846f50: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 846f53: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 846f56: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 846f59: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 846f5c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 846f5f: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 846f62: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 846f64: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 846f66: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846f68: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 846f6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 846f6c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 846f6e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 846f70: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 846f72: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 846f75: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 846f78: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 846f7b: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 846f7f: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 846f83: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 846f85: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 846f89: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 846f8c: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 846f90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 846f91: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 846f94: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 846f98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 846f99: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 846f9c: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_846fe0(void) {
  LOAD_REGS();
L_846fe0: /* 846fe0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 846fe3: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 846fe7: xor eax, eax */
  eax = 0;
/* 846fe9: mov dword ptr [ecx + 0x70c], eax */
  W32((uint32_t)(ecx + 0x70cu), eax);
/* 846fef: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 846ff3: mov dword ptr [ecx + 0x704], eax */
  W32((uint32_t)(ecx + 0x704u), eax);
/* 846ff9: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 846ffd: mov dword ptr [edx + 0x708], eax */
  W32((uint32_t)(edx + 0x708u), eax);
/* 847003: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 847007: mov dword ptr [ecx + 0x710], eax */
  W32((uint32_t)(ecx + 0x710u), eax);
/* 84700d: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 847011: mov dword ptr [edx + 0x714], eax */
  W32((uint32_t)(edx + 0x714u), eax);
/* 847017: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 84701b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84701c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84701f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 847020: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 847024: mov ecx, 0x600 */
  ecx = 0x600u;
/* 847029: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 84702d: xor eax, eax */
  eax = 0;
/* 84702f: mov ebx, ecx */
  ebx = ecx;
/* 847031: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 847034: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 847037: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 847039: mov ecx, ebx */
  ecx = ebx;
/* 84703b: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 84703d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 847041: add ecx, 0x604 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x604u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 847047: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 84704b: mov ecx, 0x100 */
  ecx = 0x100u;
/* 847050: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 847054: xor eax, eax */
  eax = 0;
/* 847056: mov ebx, ecx */
  ebx = ecx;
/* 847058: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 84705b: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 84705e: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 847060: mov ecx, ebx */
  ecx = ebx;
/* 847062: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 847064: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 847065: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 847066: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 847069: ret  */
  esp += 4; SPILL(); return;
}

void f_8470a0(void) {
  LOAD_REGS();
L_8470a0: /* 8470a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8470a1: mov esi, dword ptr [ecx + 0x714] */
  esi = R32((uint32_t)(ecx + 0x714u));
/* 8470a7: xor eax, eax */
  eax = 0;
/* 8470a9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8470ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8470ac: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 8470b0: jle 0x8470d3 */
  if ((zf || sf != of)) goto L_8470d3;
L_8470b2: /* 8470b2: lea edx, [ecx + 0x604] */
  edx = (uint32_t)(ecx + 0x604u);
/* 8470b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8470b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8470c0: /* 8470c0: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8470c2: je 0x8470d2 */
  if (zf) goto L_8470d2;
L_8470c4: /* 8470c4: mov ebx, dword ptr [ecx + 0x714] */
  ebx = R32((uint32_t)(ecx + 0x714u));
/* 8470ca: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8470cb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8470ce: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8470d0: jl 0x8470c0 */
  if ((sf != of)) goto L_8470c0;
L_8470d2: /* 8470d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8470d3: /* 8470d3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8470d5: jne 0x8470e4 */
  if (!zf) goto L_8470e4;
L_8470d7: /* 8470d7: mov dword ptr [ecx + esi*4 + 0x604], edi */
  W32((uint32_t)(ecx + esi*4 + 0x604u), edi);
/* 8470de: inc dword ptr [ecx + 0x714] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x714u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x714u), r);
  }
L_8470e4: /* 8470e4: mov eax, dword ptr [ecx + 0x714] */
  eax = R32((uint32_t)(ecx + 0x714u));
/* 8470ea: and eax, 0x8000003f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000003fu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8470ef: jns 0x8470f6 */
  if (!sf) goto L_8470f6;
L_8470f1: /* 8470f1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8470f2: or eax, 0xffffffc0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffc0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8470f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_8470f6: /* 8470f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8470f7: mov dword ptr [ecx + 0x714], eax */
  W32((uint32_t)(ecx + 0x714u), eax);
/* 8470fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8470fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_847130(void) {
  LOAD_REGS();
L_847130: /* 847130: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 847132: push 0x9d3a08 */
  { uint32_t v = 0x9d3a08u; esp -= 4; W32(esp, v); }
/* 847137: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84713d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84713e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 847145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 847146: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 84714a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84714b: mov esi, ecx */
  esi = ecx;
/* 84714d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 847151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 847152: xor edi, edi */
  edi = 0;
/* 847154: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 847158: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 84715b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 84715e: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 847161: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 847164: mov dword ptr [esi], 0x9f6fa0 */
  W32((uint32_t)(esi), 0x9f6fa0u);
/* 84716a: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 84716d: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 847173: mov dword ptr [esi + 0x1bc], eax */
  W32((uint32_t)(esi + 0x1bcu), eax);
/* 847179: mov eax, dword ptr [eax + 0x8c] */
  eax = R32((uint32_t)(eax + 0x8cu));
/* 84717f: mov dword ptr [esi + 0x1c0], eax */
  W32((uint32_t)(esi + 0x1c0u), eax);
/* 847185: mov ecx, dword ptr [esi + 0x1c0] */
  ecx = R32((uint32_t)(esi + 0x1c0u));
/* 84718b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 84718e: mov dword ptr [esi + 0x1c8], eax */
  W32((uint32_t)(esi + 0x1c8u), eax);
/* 847194: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* 84719a: mov dword ptr [esi + 0x1c4], edi */
  W32((uint32_t)(esi + 0x1c4u), edi);
/* 8471a0: mov dword ptr [esi + 0x1d0], edi */
  W32((uint32_t)(esi + 0x1d0u), edi);
/* 8471a6: cmp dword ptr [ecx + 0xdc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xdcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8471ac: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 8471b0: jne 0x8471b7 */
  if (!zf) goto L_8471b7;
L_8471b2: /* 8471b2: call 0x6ca597 */
  esp -= 4; W32(esp, 0x8471b7u); SPILL(); f_6ca597(); if (g_unwind) return; RELOAD();
L_8471b7: /* 8471b7: mov ecx, dword ptr [esi + 0x1bc] */
  ecx = R32((uint32_t)(esi + 0x1bcu));
/* 8471bd: cmp dword ptr [ecx + 0x114c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x114cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8471c3: jne 0x8471cd */
  if (!zf) goto L_8471cd;
L_8471c5: /* 8471c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8471c7: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0x8471cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8471cd: /* 8471cd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8471d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8471d2: mov eax, esi */
  eax = esi;
/* 8471d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8471d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8471dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8471df: ret 8 */
  esp += 12; SPILL(); return;
}

void f_847220(void) {
  LOAD_REGS();
L_847220: /* 847220: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 847222: push 0x9d3a40 */
  { uint32_t v = 0x9d3a40u; esp -= 4; W32(esp, v); }
/* 847227: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84722d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84722e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 847235: sub esp, 0x12c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84723b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84723c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84723d: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 847241: mov eax, dword ptr [esp + 0x144] */
  eax = R32((uint32_t)(esp + 0x144u));
/* 847248: xor esi, esi */
  esi = 0;
/* 84724a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84724b: mov dword ptr [esp + 0x140], esi */
  W32((uint32_t)(esp + 0x140u), esi);
/* 847252: call 0x6c8521 */
  esp -= 4; W32(esp, 0x847257u); SPILL(); f_6c8521(); if (g_unwind) return; RELOAD();
/* 847257: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 84725b: mov dword ptr [ecx], 0x9f6fa0 */
  W32((uint32_t)(ecx), 0x9f6fa0u);
/* 847261: mov edx, dword ptr [esp + 0x144] */
  edx = R32((uint32_t)(esp + 0x144u));
/* 847268: mov eax, dword ptr [edx + 0x1bc] */
  eax = R32((uint32_t)(edx + 0x1bcu));
/* 84726e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 847272: mov dword ptr [ecx + 0x1bc], eax */
  W32((uint32_t)(ecx + 0x1bcu), eax);
/* 847278: mov edx, dword ptr [esp + 0x144] */
  edx = R32((uint32_t)(esp + 0x144u));
/* 84727f: mov eax, dword ptr [edx + 0x1c0] */
  eax = R32((uint32_t)(edx + 0x1c0u));
/* 847285: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 847289: mov dword ptr [ecx + 0x1c0], eax */
  W32((uint32_t)(ecx + 0x1c0u), eax);
/* 84728f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 847293: mov eax, dword ptr [esp + 0x148] */
  eax = R32((uint32_t)(esp + 0x148u));
/* 84729a: mov dword ptr [edx + 0x1c8], eax */
  W32((uint32_t)(edx + 0x1c8u), eax);
/* 8472a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8472a4: mov dword ptr [ecx + 0x1cc], 0xffffffff */
  W32((uint32_t)(ecx + 0x1ccu), 0xffffffffu);
/* 8472ae: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8472b2: mov dword ptr [edx + 0x1c4], esi */
  W32((uint32_t)(edx + 0x1c4u), esi);
/* 8472b8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8472bc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8472bf: movzx edx, byte ptr [ecx + 0x150] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x150u)));
/* 8472c6: mov dword ptr [eax + 0x1d0], edx */
  W32((uint32_t)(eax + 0x1d0u), edx);
/* 8472cc: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8472d0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8472d3: shl byte ptr [eax + 0x150], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x150u))); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  W8((uint32_t)(eax + 0x150u), r);
  }
/* 8472d9: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 8472dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8472de: lea ecx, [esp + 0x150] */
  ecx = (uint32_t)(esp + 0x150u);
/* 8472e5: mov byte ptr [esp + 0x140], 1 */
  W8((uint32_t)(esp + 0x140u), 0x1u);
/* 8472ed: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x8472f3u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 8472f3: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8472f7: mov esi, dword ptr [edx + 0xc] */
  esi = R32((uint32_t)(edx + 0xcu));
/* 8472fa: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8472fd: mov edi, esp */
  edi = esp;
/* 8472ff: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 847302: mov ecx, 0x10 */
  ecx = 0x10u;
/* 847307: lea eax, [esp + 0xb4] */
  eax = (uint32_t)(esp + 0xb4u);
/* 84730e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 847310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 847311: lea ecx, [esp + 0x190] */
  ecx = (uint32_t)(esp + 0x190u);
/* 847318: mov byte ptr [esp + 0x180], 2 */
  W8((uint32_t)(esp + 0x180u), 0x2u);
/* 847320: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x847326u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 847326: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 84732a: mov esi, eax */
  esi = eax;
/* 84732c: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84732f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 847334: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 847336: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 84733a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x847340u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 847340: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 847344: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 847347: mov edi, esp */
  edi = esp;
/* 847349: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84734e: lea esi, [esp + 0x74] */
  esi = (uint32_t)(esp + 0x74u);
/* 847352: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 847354: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 84735b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84735c: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 84735f: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 847362: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x847368u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 847368: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 84736c: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84736f: mov esi, eax */
  esi = eax;
/* 847371: mov ecx, 0x10 */
  ecx = 0x10u;
/* 847376: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 847378: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 84737c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x847382u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 847382: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 847386: lea esi, [eax + 0x94] */
  esi = (uint32_t)(eax + 0x94u);
/* 84738c: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84738f: mov edi, esp */
  edi = esp;
/* 847391: mov ecx, 0x10 */
  ecx = 0x10u;
/* 847396: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 847398: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 84739f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8473a0: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 8473a3: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8473a9u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8473a9: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 8473ad: mov esi, eax */
  esi = eax;
/* 8473af: add edi, 0x114 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8473b5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8473ba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8473bc: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8473c3: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8473c9u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8473c9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8473cd: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8473d0: mov edi, esp */
  edi = esp;
/* 8473d2: lea esi, [eax + 0x54] */
  esi = (uint32_t)(eax + 0x54u);
/* 8473d5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8473da: lea edx, [esp + 0x134] */
  edx = (uint32_t)(esp + 0x134u);
/* 8473e1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8473e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8473e4: lea ecx, [eax + 0xd4] */
  ecx = (uint32_t)(eax + 0xd4u);
/* 8473ea: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8473f0u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8473f0: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 8473f4: mov esi, eax */
  esi = eax;
/* 8473f6: add edi, 0x154 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8473fc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 847401: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 847403: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 84740a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x847410u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 847410: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 847414: add ecx, 0x114 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84741a: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x847420u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 847420: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 847424: fstp dword ptr [eax + 0x1b8] */
  WF32((uint32_t)(eax + 0x1b8u), ST0); FPOP();
/* 84742a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 84742e: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 847431: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 847437: mov edx, dword ptr [eax + 0x194] */
  edx = R32((uint32_t)(eax + 0x194u));
/* 84743d: fld dword ptr [eax + 0x198] */
  { double v = F32((uint32_t)(eax + 0x198u)); FPUSH(v); }
/* 847443: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 847448: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 84744c: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 847450: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 847454: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 847458: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 84745c: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 847464: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 847468: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 84746c: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 847470: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 847474: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 847478: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 84747a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 84747c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 84747e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 847481: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 847483: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 847486: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 847488: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 84748b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 84748e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 847491: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 847494: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 847497: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 84749a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 84749d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8474a0: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8474a3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8474a5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8474a7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8474a9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8474ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8474ad: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8474b0: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8474b3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8474b6: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8474b9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8474bc: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8474bf: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8474c2: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8474c5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8474c7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8474c9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8474cb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8474cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8474cf: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8474d2: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8474d5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8474d8: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8474db: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8474de: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8474e1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8474e4: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8474e7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8474e9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8474eb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8474ed: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8474ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8474f1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8474f3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8474f5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8474f7: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8474fa: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8474fd: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 847500: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 847504: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 847508: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 84750c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 847510: add esi, 0x194 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 847516: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 847518: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 84751b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 84751e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 847522: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 847525: fild dword ptr [edx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x88u)); FPUSH(v); }
/* 84752b: add eax, 0x154 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 847530: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 847534: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 847538: fdivr dword ptr [0xa0b130] */
  ST0 = (F32((uint32_t)(0xa0b130u))) / ST0;
/* 84753e: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 847546: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 84754e: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 847556: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 84755a: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 84755e: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 847562: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 847566: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 84756a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 84756c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 84756e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 847570: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 847573: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 847575: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 847578: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 84757a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 84757d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 847580: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 847583: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 847586: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 847589: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 84758c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 84758f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 847592: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 847595: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 847597: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 847599: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 84759b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 84759d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84759f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8475a2: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8475a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8475a8: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8475ab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8475ae: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8475b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8475b4: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8475b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8475b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8475bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8475bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8475bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8475c1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8475c4: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8475c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8475ca: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8475cd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8475d0: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8475d3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8475d6: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8475d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8475db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8475dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8475df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8475e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8475e3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8475e5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8475e7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8475e9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8475ec: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8475ef: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8475f2: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8475f6: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8475fa: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8475fe: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 847602: add esi, 0x1a0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 847608: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 84760a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 84760d: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 847610: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 847614: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 847617: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 84761d: add eax, 0x154 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 847622: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 847626: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 84762a: fdivr dword ptr [0xa0b130] */
  ST0 = (F32((uint32_t)(0xa0b130u))) / ST0;
/* 847630: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 847638: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 847640: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 847648: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 84764c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 847650: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 847654: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 847658: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 84765c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 84765e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 847660: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 847662: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 847665: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 847667: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 84766a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 84766c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 84766f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 847672: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 847675: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 847678: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 84767b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 84767e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 847681: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 847684: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 847687: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 847689: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 84768b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 84768d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 84768f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 847691: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 847694: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 847697: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 84769a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 84769d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8476a0: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8476a3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8476a6: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8476a9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8476ab: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8476ad: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8476af: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8476b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8476b3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8476b6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8476b9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8476bc: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8476bf: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8476c2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8476c5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8476c8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8476cb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8476cd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8476cf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8476d1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8476d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8476d5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8476d7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8476d9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8476db: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8476de: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8476e1: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8476e4: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8476e8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8476ec: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8476f0: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 8476f4: add esi, 0x1ac */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1acu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8476fa: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8476fc: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8476ff: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 847703: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 847706: mov byte ptr [esp + 0x13c], 1 */
  W8((uint32_t)(esp + 0x13cu), 0x1u);
/* 84770e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x847714u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 847714: lea ecx, [esp + 0x14c] */
  ecx = (uint32_t)(esp + 0x14cu);
/* 84771b: mov dword ptr [esp + 0x13c], 0xffffffff */
  W32((uint32_t)(esp + 0x13cu), 0xffffffffu);
/* 847726: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84772cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84772c: mov ecx, dword ptr [esp + 0x134] */
  ecx = R32((uint32_t)(esp + 0x134u));
/* 847733: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 847737: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 847738: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 84773f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 847740: add esp, 0x138 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x138u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 847746: ret 0x48 */
  esp += 76; SPILL(); return;
}

void f_8478a0(void) {
  LOAD_REGS();
L_8478a0: /* 8478a0: mov dword ptr [ecx], 0x9f6fa0 */
  W32((uint32_t)(ecx), 0x9f6fa0u);
/* 8478a6: jmp 0x6c103c */
  SPILL(); f_6c103c(); return;
}

void f_8478c0(void) {
  LOAD_REGS();
L_8478c0: /* 8478c0: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_8478e0(void) {
  LOAD_REGS();
L_8478e0: /* 8478e0: mov dword ptr [ecx], 0x9f6fa0 */
  W32((uint32_t)(ecx), 0x9f6fa0u);
/* 8478e6: jmp 0x6c103c */
  SPILL(); f_6c103c(); return;
}

void f_847900(void) {
  LOAD_REGS();
L_847900: /* 847900: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 847902: push 0x9d3a8c */
  { uint32_t v = 0x9d3a8cu; esp -= 4; W32(esp, v); }
/* 847907: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 84790d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84790e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 847915: sub esp, 0xf4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xf4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84791b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84791c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 84791d: mov ebp, dword ptr [esp + 0x110] */
  ebp = R32((uint32_t)(esp + 0x110u));
/* 847924: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 847925: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 847926: mov ebx, ecx */
  ebx = ecx;
/* 847928: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 84792f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 847930: lea ecx, [esp + 0xd8] */
  ecx = (uint32_t)(esp + 0xd8u);
/* 847937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 847938: lea ecx, [ebp + 0x3c0] */
  ecx = (uint32_t)(ebp + 0x3c0u);
/* 84793e: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 847942: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x847948u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 847948: mov edi, dword ptr [0xcfaacc] */
  edi = R32((uint32_t)(0xcfaaccu));
/* 84794e: mov ecx, eax */
  ecx = eax;
/* 847950: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x847952u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 847952: mov esi, eax */
  esi = eax;
/* 847954: mov ecx, dword ptr [ebp + 0x3f0] */
  ecx = R32((uint32_t)(ebp + 0x3f0u));
/* 84795a: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 84795e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84795f: add ecx, 0x3c0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 847965: mov dword ptr [esp + 0x110], 0 */
  W32((uint32_t)(esp + 0x110u), 0x0u);
/* 847970: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x847972u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 847972: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 847975: mov edi, esp */
  edi = esp;
/* 847977: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84797c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84797e: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 847982: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 847983: mov ecx, eax */
  ecx = eax;
/* 847985: mov byte ptr [esp + 0x150], 1 */
  W8((uint32_t)(esp + 0x150u), 0x1u);
/* 84798d: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x847993u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 847993: mov edx, dword ptr [ebp + 0x3f0] */
  edx = R32((uint32_t)(ebp + 0x3f0u));
/* 847999: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84799c: mov esi, eax */
  esi = eax;
/* 84799e: movzx eax, byte ptr [edx + 0xc8] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0xc8u)));
/* 8479a5: mov edi, esp */
  edi = esp;
/* 8479a7: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8479ac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8479ae: mov ecx, dword ptr [esp + 0x154] */
  ecx = R32((uint32_t)(esp + 0x154u));
/* 8479b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8479b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8479b7: mov ecx, ebx */
  ecx = ebx;
/* 8479b9: mov byte ptr [esp + 0x154], 2 */
  W8((uint32_t)(esp + 0x154u), 0x2u);
/* 8479c1: call 0x6cbab9 */
  esp -= 4; W32(esp, 0x8479c6u); SPILL(); f_6cbab9(); if (g_unwind) return; RELOAD();
/* 8479c6: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8479ca: mov byte ptr [esp + 0x10c], 6 */
  W8((uint32_t)(esp + 0x10cu), 0x6u);
/* 8479d2: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8479d8u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8479d8: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 8479dc: mov byte ptr [esp + 0x10c], 5 */
  W8((uint32_t)(esp + 0x10cu), 0x5u);
/* 8479e4: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8479eau); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8479ea: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 8479f1: mov byte ptr [esp + 0x10c], 4 */
  W8((uint32_t)(esp + 0x10cu), 0x4u);
/* 8479f9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8479ffu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8479ff: mov edx, dword ptr [ebx + 0x1c8] */
  edx = R32((uint32_t)(ebx + 0x1c8u));
/* 847a05: mov ecx, dword ptr [esp + 0x104] */
  ecx = R32((uint32_t)(esp + 0x104u));
/* 847a0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 847a0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 847a0e: mov dword ptr [ebx], 0x9f712c */
  W32((uint32_t)(ebx), 0x9f712cu);
/* 847a14: mov dword ptr [ebx + 0x1cc], edx */
  W32((uint32_t)(ebx + 0x1ccu), edx);
/* 847a1a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 847a1b: mov eax, ebx */
  eax = ebx;
/* 847a1d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 847a24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 847a25: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 847a2b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_847a80(void) {
  LOAD_REGS();
L_847a80: /* 847a80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 847a81: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 847a86: mov esi, ecx */
  esi = ecx;
/* 847a88: call dword ptr [0xcfa85c] */
  esp -= 4; W32(esp, 0x847a8eu); SPILL(); f_4e3ee0(); if (g_unwind) return; /* Core!?Init@FMemStack@@QAEXH@Z */ RELOAD();
/* 847a8e: mov eax, esi */
  eax = esi;
/* 847a90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 847a91: ret  */
  esp += 4; SPILL(); return;
}

void f_847ab0(void) {
  LOAD_REGS();
L_847ab0: /* 847ab0: jmp dword ptr [0xcfa874] */
  SPILL(); f_4e237e(); return; /* Core!?Exit@FMemStack@@QAEXXZ */
}

void f_847ad0(void) {
  LOAD_REGS();
L_847ad0: /* 847ad0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 847ad4: mov eax, ecx */
  eax = ecx;
/* 847ad6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 847ada: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 847adc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 847adf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_847b00(void) {
  LOAD_REGS();
L_847b00: /* 847b00: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 847b03: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 847b07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 847b08: fsub dword ptr [esp + 0x50] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x50u)));
/* 847b0c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 847b0f: mov esi, ecx */
  esi = ecx;
/* 847b11: fdivr dword ptr [esp + 0x5c] */
  ST0 = (F32((uint32_t)(esp + 0x5cu))) / ST0;
/* 847b15: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 847b19: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 847b1b: fchs  */
  ST0 = -ST0;
/* 847b1d: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 847b21: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 847b25: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 847b29: fstp qword ptr [esp + 0xc] */
  WF64((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 847b2d: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 847b31: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 847b34: call dword ptr [0xcfab08] */
  esp -= 4; W32(esp, 0x847b3au); SPILL(); f_4e2a3b(); if (g_unwind) return; /* Core!?appTan@@YANN@Z */ RELOAD();
/* 847b3a: fdivr qword ptr [esp + 0xc] */
  ST0 = (F64((uint32_t)(esp + 0xcu))) / ST0;
/* 847b3e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 847b42: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 847b46: fstp qword ptr [esp + 0xc] */
  WF64((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 847b4a: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 847b4e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 847b51: call dword ptr [0xcfab08] */
  esp -= 4; W32(esp, 0x847b57u); SPILL(); f_4e2a3b(); if (g_unwind) return; /* Core!?appTan@@YANN@Z */ RELOAD();
/* 847b57: fdivr qword ptr [esp + 0xc] */
  ST0 = (F64((uint32_t)(esp + 0xcu))) / ST0;
/* 847b5b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 847b5f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 847b63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 847b66: xor eax, eax */
  eax = 0;
/* 847b68: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 847b6b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 847b6f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 847b72: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 847b75: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 847b78: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 847b7b: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 847b7e: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 847b81: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 847b84: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 847b87: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 847b8a: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 847b8d: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 847b90: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 847b93: mov dword ptr [esi + 0x2c], 0x3f800000 */
  W32((uint32_t)(esi + 0x2cu), 0x3f800000u);
/* 847b9a: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 847b9d: mov eax, esi */
  eax = esi;
/* 847b9f: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 847ba1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 847ba2: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 847ba5: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_847be0(void) {
  LOAD_REGS();
L_847be0: /* 847be0: mov eax, ecx */
  eax = ecx;
/* 847be2: ret  */
  esp += 4; SPILL(); return;
}

void f_847c00(void) {
  LOAD_REGS();
L_847c00: /* 847c00: mov eax, ecx */
  eax = ecx;
/* 847c02: xor ecx, ecx */
  ecx = 0;
/* 847c04: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 847c06: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 847c09: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 847c0c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 847c0f: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 847c12: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 847c15: ret  */
  esp += 4; SPILL(); return;
}

void f_847c30(void) {
  LOAD_REGS();
L_847c30: /* 847c30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 847c31: mov esi, ecx */
  esi = ecx;
/* 847c33: mov dword ptr [esi], 0xa16760 */
  W32((uint32_t)(esi), 0xa16760u);
/* 847c39: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 847c3c: mov edx, 0x40 */
  edx = 0x40u;
/* 847c41: xor ecx, ecx */
  ecx = 0;
L_847c43: /* 847c43: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 847c45: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 847c48: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 847c4b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 847c4e: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 847c51: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 847c54: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 847c57: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 847c58: jne 0x847c43 */
  if (!zf) goto L_847c43;
L_847c5a: /* 847c5a: mov ecx, esi */
  ecx = esi;
/* 847c5c: call 0x6cce96 */
  esp -= 4; W32(esp, 0x847c61u); SPILL(); f_6cce96(); if (g_unwind) return; RELOAD();
/* 847c61: mov eax, esi */
  eax = esi;
/* 847c63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 847c64: ret  */
  esp += 4; SPILL(); return;
}

void f_847c80(void) {
  LOAD_REGS();
L_847c80: /* 847c80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 847c81: mov ebp, esp */
  ebp = esp;
/* 847c83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 847c85: push 0x9d3ab0 */
  { uint32_t v = 0x9d3ab0u; esp -= 4; W32(esp, v); }
/* 847c8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 847c90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 847c91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 847c98: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 847c9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 847c9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 847c9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 847c9e: xor ebx, ebx */
  ebx = 0;
/* 847ca0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 847ca3: mov edi, ecx */
  edi = ecx;
/* 847ca5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 847ca8: xor esi, esi */
  esi = 0;
/* 847caa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_847cb0: /* 847cb0: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 847cb3: jge 0x847cff */
  if ((sf == of)) goto L_847cff;
L_847cb5: /* 847cb5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 847cb8: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 847cbb: cmp dword ptr [edi + eax*8 + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax*8 + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 847cbf: je 0x847cc4 */
  if (zf) goto L_847cc4;
L_847cc1: /* 847cc1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 847cc2: jmp 0x847cb0 */
  goto L_847cb0;
L_847cc4: /* 847cc4: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x847ccau); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 847cca: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 847ccd: fld qword ptr [edi + 0x704] */
  { double v = F64((uint32_t)(edi + 0x704u)); FPUSH(v); }
/* 847cd3: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 847cd6: fsub qword ptr [edi + edx*8 + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(edi + edx*8 + 0x10u)));
/* 847cda: lea ecx, [edi + edx*8] */
  ecx = (uint32_t)(edi + edx*8);
/* 847cdd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 847ce0: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 847ce6: fmul dword ptr [0xa167b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa167b4u)));
/* 847cec: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 847cee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 847cf0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 847cf3: jne 0x847cfd */
  if (!zf) goto L_847cfd;
L_847cf5: /* 847cf5: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 847cf8: jmp 0x847d8b */
  goto L_847d8b;
L_847cfd: /* 847cfd: xor ebx, ebx */
  ebx = 0;
L_847cff: /* 847cff: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 847d02: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 847d05: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 847d08: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 847d0b: test byte ptr [edx + 0x4c4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c4u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 847d12: je 0x847d19 */
  if (zf) goto L_847d19;
L_847d14: /* 847d14: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 847d17: jmp 0x847d22 */
  goto L_847d22;
L_847d19: /* 847d19: mov eax, dword ptr [eax + 0x1c4] */
  eax = R32((uint32_t)(eax + 0x1c4u));
/* 847d1f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_847d22: /* 847d22: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 847d25: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 847d2b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 847d2d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 847d30: mov eax, esp */
  eax = esp;
/* 847d32: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 847d39: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 847d3c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 847d3e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 847d45: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 847d48: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 847d4b: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 847d52: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 847d55: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 847d58: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 847d5b: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 847d60: push 0x2287 */
  { uint32_t v = 0x2287u; esp -= 4; W32(esp, v); }
/* 847d65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 847d66: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 847d69: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 847d6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 847d6f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 847d72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 847d73: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 847d76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 847d77: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x847d7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 847d7d: xor ecx, ecx */
  ecx = 0;
/* 847d7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 847d81: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 847d84: mov ebx, 1 */
  ebx = 0x1u;
/* 847d89: mov eax, ecx */
  eax = ecx;
L_847d8b: /* 847d8b: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 847d8e: jge 0x847daf */
  if ((sf == of)) goto L_847daf;
L_847d90: /* 847d90: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 847d92: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 847d95: lea ecx, [edi + edx*8] */
  ecx = (uint32_t)(edi + edx*8);
/* 847d98: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
/* 847d9b: je 0x847daf */
  if (zf) goto L_847daf;
L_847d9d: /* 847d9d: mov edx, dword ptr [edi + 0x704] */
  edx = R32((uint32_t)(edi + 0x704u));
/* 847da3: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 847da6: mov edx, dword ptr [edi + 0x708] */
  edx = R32((uint32_t)(edi + 0x708u));
/* 847dac: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
L_847daf: /* 847daf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 847db2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 847db3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 847db4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 847dbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 847dbc: mov esp, ebp */
  esp = ebp;
/* 847dbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 847dbf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_847dc2(void) {
  LOAD_REGS();
L_847dc2: /* 847dc2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 847dc5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 847dca: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 847dcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 847dce: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 847dd1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x847dd6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_847dd6(); return;
}

void f_847dd6(void) {
  LOAD_REGS();
L_847dd6: /* 847dd6: push 0xa16774 */
  { uint32_t v = 0xa16774u; esp -= 4; W32(esp, v); }
/* 847ddb: push 0xae4488 */
  { uint32_t v = 0xae4488u; esp -= 4; W32(esp, v); }
/* 847de0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x847de6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 847de6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 847de9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 847deb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 847ded: call 0x99caf8 */
  esp -= 4; W32(esp, 0x847df2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_847df2: guest_badaddr(0x847df2); return;
}

void f_847e60(void) {
  LOAD_REGS();
L_847e60: /* 847e60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 847e62: push 0x9d3ad8 */
  { uint32_t v = 0x9d3ad8u; esp -= 4; W32(esp, v); }
/* 847e67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 847e6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 847e6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 847e75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 847e76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 847e77: mov esi, ecx */
  esi = ecx;
/* 847e79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 847e7a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 847e7e: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 847e84: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 847e8c: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x847e92u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 847e92: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 847e98: call dword ptr [0xcfaac8] */
  esp -= 4; W32(esp, 0x847e9eu); SPILL(); f_4e2b35(); if (g_unwind) return; /* Core!??0FSphere@@QAE@XZ */ RELOAD();
/* 847e9e: lea edi, [esi + 0xc4] */
  edi = (uint32_t)(esi + 0xc4u);
/* 847ea4: mov ecx, edi */
  ecx = edi;
/* 847ea6: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x847eacu); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 847eac: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 847eb0: mov ecx, edi */
  ecx = edi;
/* 847eb2: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 847eb4: mov dword ptr [esi + 0xc0], 0 */
  W32((uint32_t)(esi + 0xc0u), 0x0u);
/* 847ebe: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 847ec5: call dword ptr [0xcfa644] */
  esp -= 4; W32(esp, 0x847ecbu); SPILL(); f_4e303a(); if (g_unwind) return; /* Core!?Init@FBox@@QAEXXZ */ RELOAD();
/* 847ecb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 847ecf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 847ed0: mov eax, esi */
  eax = esi;
/* 847ed2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 847ed3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 847eda: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 847edd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_847f00(void) {
  LOAD_REGS();
L_847f00: /* 847f00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 847f01: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 847f05: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 847f07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 847f08: mov edi, ecx */
  edi = ecx;
/* 847f0a: je 0x847f93 */
  if (zf) goto L_847f93;
L_847f10: /* 847f10: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 847f13: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x847f18u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 847f18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 847f1a: jne 0x847f6f */
  if (!zf) goto L_847f6f;
L_847f1c: /* 847f1c: mov ecx, dword ptr [edi + 0x1c4] */
  ecx = R32((uint32_t)(edi + 0x1c4u));
/* 847f22: mov eax, esi */
  eax = esi;
L_847f24: /* 847f24: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 847f26: je 0x847f76 */
  if (zf) goto L_847f76;
L_847f28: /* 847f28: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 847f2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 847f2d: jne 0x847f24 */
  if (!zf) goto L_847f24;
L_847f2f: /* 847f2f: mov edx, dword ptr [esi + 0x80] */
  edx = R32((uint32_t)(esi + 0x80u));
/* 847f35: shr edx, 0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 847f38: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 847f3b: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 847f3f: jne 0x847f6f */
  if (!zf) goto L_847f6f;
L_847f41: /* 847f41: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 847f47: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 847f4a: je 0x847f5c */
  if (zf) goto L_847f5c;
L_847f4c: /* 847f4c: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 847f52: mov dl, byte ptr [ecx + 0x448] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x448u))) & 0xffu);
/* 847f58: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 847f5a: je 0x847f6f */
  if (zf) goto L_847f6f;
L_847f5c: /* 847f5c: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 847f5e: jns 0x847f93 */
  if (!sf) goto L_847f93;
L_847f60: /* 847f60: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 847f66: cmp byte ptr [edx + 0x448], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x448u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 847f6d: je 0x847f93 */
  if (zf) goto L_847f93;
L_847f6f: /* 847f6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 847f70: xor eax, eax */
  eax = 0;
/* 847f72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 847f73: ret 4 */
  esp += 8; SPILL(); return;
L_847f76: /* 847f76: test dword ptr [esi + 0x84], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x84u))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 847f80: je 0x847f41 */
  if (zf) goto L_847f41;
L_847f82: /* 847f82: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 847f85: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 847f88: test byte ptr [ecx + 0x4c4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x4c4u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 847f8f: je 0x847f6f */
  if (zf) goto L_847f6f;
L_847f91: /* 847f91: jmp 0x847f41 */
  goto L_847f41;
L_847f93: /* 847f93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 847f94: mov eax, 1 */
  eax = 0x1u;
/* 847f99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 847f9a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_847fd0(void) {
  LOAD_REGS();
L_847fd0: /* 847fd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 847fd2: push 0x9d3b34 */
  { uint32_t v = 0x9d3b34u; esp -= 4; W32(esp, v); }
/* 847fd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 847fdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 847fde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 847fe5: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 847feb: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 847fef: fld dword ptr [ecx + 0x19c] */
  { double v = F32((uint32_t)(ecx + 0x19cu)); FPUSH(v); }
/* 847ff5: fchs  */
  ST0 = -ST0;
/* 847ff7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 847ff8: fld dword ptr [ecx + 0x198] */
  { double v = F32((uint32_t)(ecx + 0x198u)); FPUSH(v); }
/* 847ffe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 847fff: fchs  */
  ST0 = -ST0;
/* 848001: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 848002: fld dword ptr [ecx + 0x194] */
  { double v = F32((uint32_t)(ecx + 0x194u)); FPUSH(v); }
/* 848008: lea edi, [ecx + 0x14] */
  edi = (uint32_t)(ecx + 0x14u);
/* 84800b: fchs  */
  ST0 = -ST0;
/* 84800d: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 848015: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 848019: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 848021: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 848029: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 84802d: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 848035: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 84803d: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 848041: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* 848049: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 848051: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 848059: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 848061: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 848069: mov dword ptr [esp + 0x3c], 0x3f800000 */
  W32((uint32_t)(esp + 0x3cu), 0x3f800000u);
/* 848071: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 848079: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 848081: mov ecx, 0x10 */
  ecx = 0x10u;
/* 848086: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* 84808a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84808c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 848090: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x848096u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 848096: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 84809a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84809d: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 8480a0: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 8480a3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8480a5: je 0x8480c8 */
  if (zf) goto L_8480c8;
L_8480a7: /* 8480a7: mov ecx, dword ptr [ecx + 0x540] */
  ecx = R32((uint32_t)(ecx + 0x540u));
/* 8480ad: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8480b0: je 0x848175 */
  if (zf) goto L_848175;
L_8480b6: /* 8480b6: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8480b9: je 0x848175 */
  if (zf) goto L_848175;
L_8480bf: /* 8480bf: cmp ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8480c2: je 0x848175 */
  if (zf) goto L_848175;
L_8480c8: /* 8480c8: add eax, 0x1d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1d4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8480cd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8480cf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8480d2: mov ecx, esp */
  ecx = esp;
/* 8480d4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8480d6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8480d9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8480dc: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8480df: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8480e2: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 8480e9: call 0x6c818e */
  esp -= 4; W32(esp, 0x8480eeu); SPILL(); f_6c818e(); if (g_unwind) return; RELOAD();
/* 8480ee: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8480f3: mov esi, eax */
  esi = eax;
/* 8480f5: lea edi, [esp + 0xcc] */
  edi = (uint32_t)(esp + 0xccu);
/* 8480fc: mov dword ptr [esp + 0x114], 0 */
  W32((uint32_t)(esp + 0x114u), 0x0u);
/* 848107: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848109: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84810c: mov edi, esp */
  edi = esp;
/* 84810e: mov esi, eax */
  esi = eax;
/* 848110: mov ecx, 0x10 */
  ecx = 0x10u;
/* 848115: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848117: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 84811b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84811c: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 848120: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 848123: mov byte ptr [esp + 0x158], 1 */
  W8((uint32_t)(esp + 0x158u), 0x1u);
/* 84812b: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x848131u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 848131: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 848135: mov esi, eax */
  esi = eax;
/* 848137: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84813a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84813f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848141: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 848145: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84814bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84814b: lea ecx, [esp + 0xcc] */
  ecx = (uint32_t)(esp + 0xccu);
/* 848152: mov byte ptr [esp + 0x114], 0 */
  W8((uint32_t)(esp + 0x114u), 0x0u);
/* 84815a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x848160u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 848160: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 848164: mov dword ptr [esp + 0x114], ebp */
  W32((uint32_t)(esp + 0x114u), ebp);
/* 84816b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x848171u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 848171: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
L_848175: /* 848175: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 848178: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 84817b: mov ecx, dword ptr [ecx + 0x540] */
  ecx = R32((uint32_t)(ecx + 0x540u));
/* 848181: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 848184: jne 0x848226 */
  if (!zf) goto L_848226;
L_84818a: /* 84818a: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 848190: mov ecx, edx */
  ecx = edx;
/* 848192: mov edx, dword ptr [ecx + 0x90] */
  edx = R32((uint32_t)(ecx + 0x90u));
/* 848198: fchs  */
  ST0 = -ST0;
/* 84819a: fld dword ptr [ecx + 0x94] */
  { double v = F32((uint32_t)(ecx + 0x94u)); FPUSH(v); }
/* 8481a0: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8481a4: fchs  */
  ST0 = -ST0;
/* 8481a6: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8481ae: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8481b2: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8481ba: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8481c2: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 8481c6: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8481ce: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 8481d6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 8481de: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 8481e6: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8481ee: mov dword ptr [esp + 0x3c], 0xbf800000 */
  W32((uint32_t)(esp + 0x3cu), 0xbf800000u);
/* 8481f6: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 8481fe: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 848206: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 84820e: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 848216: mov dword ptr [esp + 0x114], 2 */
  W32((uint32_t)(esp + 0x114u), 0x2u);
/* 848221: jmp 0x848413 */
  goto L_848413;
L_848226: /* 848226: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 848229: jne 0x8482ca */
  if (!zf) goto L_8482ca;
L_84822f: /* 84822f: fld dword ptr [eax + 0x198] */
  { double v = F32((uint32_t)(eax + 0x198u)); FPUSH(v); }
/* 848235: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 848238: mov edx, dword ptr [ecx + 0x90] */
  edx = R32((uint32_t)(ecx + 0x90u));
/* 84823e: fchs  */
  ST0 = -ST0;
/* 848240: fld dword ptr [ecx + 0x94] */
  { double v = F32((uint32_t)(ecx + 0x94u)); FPUSH(v); }
/* 848246: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 84824a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 84824e: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 848256: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 84825e: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 848262: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 84826a: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 848272: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 84827a: mov dword ptr [esp + 0x2c], 0xbf800000 */
  W32((uint32_t)(esp + 0x2cu), 0xbf800000u);
/* 848282: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 84828a: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 848292: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 84829a: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 8482a2: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 8482aa: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 8482b2: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 8482ba: mov dword ptr [esp + 0x114], 3 */
  W32((uint32_t)(esp + 0x114u), 0x3u);
/* 8482c5: jmp 0x848413 */
  goto L_848413;
L_8482ca: /* 8482ca: cmp ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8482cd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8482d0: jne 0x848384 */
  if (!zf) goto L_848384;
L_8482d6: /* 8482d6: fld dword ptr [eax + 0x194] */
  { double v = F32((uint32_t)(eax + 0x194u)); FPUSH(v); }
/* 8482dc: fld dword ptr [ecx + 0x94] */
  { double v = F32((uint32_t)(ecx + 0x94u)); FPUSH(v); }
/* 8482e2: fld dword ptr [ecx + 0x90] */
  { double v = F32((uint32_t)(ecx + 0x90u)); FPUSH(v); }
/* 8482e8: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8482f0: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8482f4: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8482fc: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 848304: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 848308: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 848310: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 848318: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 84831c: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 848324: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 84832c: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 848334: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 84833c: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 848344: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 84834c: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 848354: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 84835c: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84835f: mov edi, esp */
  edi = esp;
/* 848361: mov ecx, 0x10 */
  ecx = 0x10u;
/* 848366: lea esi, [esp + 0x54] */
  esi = (uint32_t)(esp + 0x54u);
/* 84836a: lea edx, [esp + 0xbc] */
  edx = (uint32_t)(esp + 0xbcu);
/* 848371: mov dword ptr [esp + 0x154], 4 */
  W32((uint32_t)(esp + 0x154u), 0x4u);
/* 84837c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84837e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84837f: jmp 0x84842b */
  goto L_84842b;
L_848384: /* 848384: fld dword ptr [ecx + 0x94] */
  { double v = F32((uint32_t)(ecx + 0x94u)); FPUSH(v); }
/* 84838a: fld dword ptr [ecx + 0x90] */
  { double v = F32((uint32_t)(ecx + 0x90u)); FPUSH(v); }
/* 848390: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 848398: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 84839c: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8483a4: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 8483ac: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8483b0: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8483b8: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8483c0: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 8483c8: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 8483d0: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 8483d8: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 8483e0: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 8483e8: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 8483f0: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 8483f8: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 848400: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 848408: mov dword ptr [esp + 0x114], 5 */
  W32((uint32_t)(esp + 0x114u), 0x5u);
L_848413: /* 848413: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 848416: mov edi, esp */
  edi = esp;
/* 848418: lea esi, [esp + 0x54] */
  esi = (uint32_t)(esp + 0x54u);
/* 84841c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 848421: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848423: lea ecx, [esp + 0xbc] */
  ecx = (uint32_t)(esp + 0xbcu);
/* 84842a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_84842b: /* 84842b: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 84842e: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x848434u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 848434: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 848438: mov esi, eax */
  esi = eax;
/* 84843a: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84843d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 848442: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848444: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 848448: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84844eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84844e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 848452: mov dword ptr [esp + 0x114], ebp */
  W32((uint32_t)(esp + 0x114u), ebp);
/* 848459: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84845fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84845f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 848463: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 848467: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 848468: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84846b: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x848471u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 848471: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 848475: mov esi, eax */
  esi = eax;
/* 848477: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84847a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84847f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848481: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 848485: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84848bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84848b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 84848f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 848492: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 848495: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 848497: je 0x8485b8 */
  if (zf) goto L_8485b8;
L_84849d: /* 84849d: mov edx, dword ptr [edx + 0x540] */
  edx = R32((uint32_t)(edx + 0x540u));
/* 8484a3: cmp edx, 0xd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8484a6: je 0x8484b6 */
  if (zf) goto L_8484b6;
L_8484a8: /* 8484a8: cmp edx, 0xe */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8484ab: je 0x8484b6 */
  if (zf) goto L_8484b6;
L_8484ad: /* 8484ad: cmp edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8484b0: jne 0x8485b8 */
  if (!zf) goto L_8485b8;
L_8484b6: /* 8484b6: fild dword ptr [eax + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 8484bc: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 8484bf: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8484c2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8484c4: fmul dword ptr [0x9f74fc] */
  ST0 = ST0 * (F32((uint32_t)(0x9f74fcu)));
/* 8484ca: fdivr dword ptr [edx + 0x544] */
  ST0 = (F32((uint32_t)(edx + 0x544u))) / ST0;
/* 8484d0: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8484d4: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x8484d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8484d7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8484db: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8484df: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8484e3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8484e6: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 8484ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8484ec: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8484f2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8484f8: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8484fa: fstp dword ptr [esp + 0xc0] */
  WF32((uint32_t)(esp + 0xc0u), ST0); FPOP();
/* 848501: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 848503: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x848506u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 848506: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 84850a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 84850e: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 848512: mov eax, dword ptr [esp + 0xc0] */
  eax = R32((uint32_t)(esp + 0xc0u));
/* 848519: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 84851d: add edi, 0x94 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 848523: mov ecx, 0x10 */
  ecx = 0x10u;
/* 848528: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* 84852c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 848532: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 84853a: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 848542: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 84854a: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 848550: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 848558: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 84855c: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 848564: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 84856c: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 848574: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 84857c: mov dword ptr [esp + 0x3c], 0x36000000 */
  W32((uint32_t)(esp + 0x3cu), 0x36000000u);
/* 848584: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 84858c: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 848594: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 84859c: mov dword ptr [esp + 0x4c], 0x3f000000 */
  W32((uint32_t)(esp + 0x4cu), 0x3f000000u);
/* 8485a4: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 8485ac: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8485b0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8485b2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8485b6: jmp 0x848634 */
  goto L_848634;
L_8485b8: /* 8485b8: fld dword ptr [ecx + 0x1e0] */
  { double v = F32((uint32_t)(ecx + 0x1e0u)); FPUSH(v); }
/* 8485be: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 8485c1: mov ecx, dword ptr [0xcfab14] */
  ecx = R32((uint32_t)(0xcfab14u));
/* 8485c7: fmul qword ptr [0xa167b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa167b8u)));
/* 8485cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8485cf: mov eax, dword ptr [0xcfa344] */
  eax = R32((uint32_t)(0xcfa344u));
/* 8485d4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8485d6: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8485da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8485db: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8485dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8485de: mov ecx, esi */
  ecx = esi;
/* 8485e0: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8485e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8485e3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8485e7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8485eb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8485ed: mov ecx, esi */
  ecx = esi;
/* 8485ef: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8485f3: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x8485f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8485f6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8485fa: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8485fe: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 848602: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 848603: fdivr dword ptr [esp + 0x64] */
  ST0 = (F32((uint32_t)(esp + 0x64u))) / ST0;
/* 848607: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 84860e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 848611: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 848616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 848617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 848618: call 0x6c8ac1 */
  esp -= 4; W32(esp, 0x84861du); SPILL(); f_6c8ac1(); if (g_unwind) return; RELOAD();
/* 84861d: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 848621: add edi, 0x94 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 848627: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84862c: mov esi, eax */
  esi = eax;
/* 84862e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848630: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
L_848634: /* 848634: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84863au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84863a: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 84863e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84863f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 848643: add ecx, 0x94 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 848649: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x84864fu); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 84864f: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 848653: mov esi, eax */
  esi = eax;
/* 848655: add edi, 0xd4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84865b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 848660: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848662: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 848666: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84866cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84866c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 848670: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 848673: mov edi, esp */
  edi = esp;
/* 848675: lea esi, [eax + 0x94] */
  esi = (uint32_t)(eax + 0x94u);
/* 84867b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 848680: lea edx, [esp + 0x10c] */
  edx = (uint32_t)(esp + 0x10cu);
/* 848687: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 848689: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84868a: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 84868d: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x848693u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 848693: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 848697: mov esi, eax */
  esi = eax;
/* 848699: add edi, 0x114 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 84869f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8486a4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8486a6: lea ecx, [esp + 0xcc] */
  ecx = (uint32_t)(esp + 0xccu);
/* 8486ad: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8486b3u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8486b3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8486b7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8486ba: mov edi, esp */
  edi = esp;
/* 8486bc: lea esi, [eax + 0x54] */
  esi = (uint32_t)(eax + 0x54u);
/* 8486bf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8486c4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8486c6: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 8486ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8486cb: lea ecx, [eax + 0xd4] */
  ecx = (uint32_t)(eax + 0xd4u);
/* 8486d1: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8486d7u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8486d7: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 8486db: mov esi, eax */
  esi = eax;
/* 8486dd: add edi, 0x154 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8486e3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8486e8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8486ea: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8486ee: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8486f4u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8486f4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8486f8: add ecx, 0x114 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8486fe: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x848704u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 848704: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 848708: fstp dword ptr [edx + 0x1b8] */
  WF32((uint32_t)(edx + 0x1b8u), ST0); FPOP();
/* 84870e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 848712: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 848715: fild dword ptr [ecx + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x88u)); FPUSH(v); }
/* 84871b: add eax, 0x154 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 848720: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 848724: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 848728: fdivr dword ptr [0xa0b130] */
  ST0 = (F32((uint32_t)(0xa0b130u))) / ST0;
/* 84872e: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 848736: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 84873e: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 848746: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 84874a: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 84874e: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 848752: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 848756: lea edi, [esp + 0x6c] */
  edi = (uint32_t)(esp + 0x6cu);
/* 84875a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 84875c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 84875e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 848760: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 848763: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 848765: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 848768: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 84876a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 84876d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 848770: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 848773: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 848776: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 848779: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 84877c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 84877f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 848782: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 848785: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 848787: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 848789: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 84878b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 84878d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84878f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 848792: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 848795: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 848798: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 84879b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 84879e: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8487a1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8487a4: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8487a7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8487a9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8487ab: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8487ad: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8487af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8487b1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8487b4: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8487b7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8487ba: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8487bd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8487c0: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8487c3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8487c6: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8487c9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8487cb: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8487cd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8487cf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8487d1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8487d3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8487d5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8487d7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8487d9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8487dc: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8487df: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8487e2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8487e6: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 8487ea: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 8487ee: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 8487f2: add esi, 0x1a0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8487f8: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8487fa: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8487fd: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 848800: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 848804: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 848807: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 84880d: add eax, 0x154 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 848812: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 848816: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 84881e: fdivr dword ptr [0xa0b130] */
  ST0 = (F32((uint32_t)(0xa0b130u))) / ST0;
/* 848824: lea edx, [esp + 0x5c] */
  edx = (uint32_t)(esp + 0x5cu);
/* 848828: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 84882c: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 848834: mov dword ptr [esp + 0x68], 0 */
  W32((uint32_t)(esp + 0x68u), 0x0u);
/* 84883c: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 848840: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 848844: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 848848: lea edi, [esp + 0x6c] */
  edi = (uint32_t)(esp + 0x6cu);
/* 84884c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 84884e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 848850: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 848852: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 848855: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 848857: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 84885a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 84885c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 84885f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 848862: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 848865: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 848868: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 84886b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 84886e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 848871: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 848874: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 848877: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 848879: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 84887b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 84887d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 84887f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 848881: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 848884: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 848887: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 84888a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 84888d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 848890: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 848893: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 848896: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 848899: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 84889b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 84889d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 84889f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8488a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8488a3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8488a6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8488a9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8488ac: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8488af: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8488b2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8488b5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8488b8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8488bb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8488bd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8488bf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8488c1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8488c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8488c5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8488c7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8488c9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8488cb: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8488ce: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8488d1: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8488d4: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8488d8: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 8488dc: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 8488e0: mov edx, dword ptr [esp + 0x74] */
  edx = R32((uint32_t)(esp + 0x74u));
/* 8488e4: add esi, 0x1ac */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1acu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8488ea: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8488ec: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8488ef: mov ecx, dword ptr [esp + 0x10c] */
  ecx = R32((uint32_t)(esp + 0x10cu));
/* 8488f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8488f7: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8488fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8488fb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 848902: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 848903: add esp, 0x10c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 848909: ret  */
  esp += 4; SPILL(); return;
}
